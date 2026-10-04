#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0107[4092] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 5, 6, 0, 7, 0, 0,
    0, 0, 8, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 14, 15, 0, 16, 0, 0, 0, 17, 0, 0,
    18, 0, 0, 0, 19, 20, 0, 21, 0, 22, 0, 23, 0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0,
    0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0,
    0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 52, 0, 53,
    0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61,
    0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0,
    68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    75, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 82, 83, 0, 0, 0, 0,
    0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 87, 0, 88, 89, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96, 0, 97, 98, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 0, 0, 103, 0, 104, 0, 105, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0,
    111, 112, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 119, 120, 0, 0,
    0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 125, 126, 127, 0, 128, 0, 129, 0, 130, 0, 0, 0, 131,
    0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0,
    142, 0, 143, 0, 0, 144, 0, 145, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 0,
    152, 0, 153, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 159, 0,
    160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166,
    0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0,
    173, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 0,
    0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 186, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193,
    0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 199, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206,
    0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0,
    214, 0, 215, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 0, 222, 0, 223, 0, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 225, 0, 226, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229,
    0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 236,
    0, 0, 0, 237, 0, 0, 0, 238, 239, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 246, 247, 0, 248,
    0, 249, 0, 250, 0, 251, 0, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0, 0, 255, 0, 256, 0, 0, 0, 257, 0, 258, 0, 0, 0, 259,
    0, 260, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0,
    0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285,
    0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 0, 290, 0, 291, 0, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0, 295, 0,
    0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 305,
    0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 311,
    0, 312, 0, 313, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 322, 0, 0,
    0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 344, 0, 0, 0, 345, 0, 346, 347, 0, 348, 0, 349,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 353, 354, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0,
    0, 359, 0, 0, 0, 360, 361, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 0, 367, 0, 0,
    0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0,
    0, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 383, 0, 0,
    384, 0, 0, 0, 385, 0, 0, 386, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0,
    416, 0, 417, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 426, 0, 427, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0,
    0, 434, 0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 441, 0, 0, 442, 0, 0,
    443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449,
    0, 450, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0,
    0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 0, 474, 0, 475, 0, 0, 476, 0, 0, 0, 477, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483,
    0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 0, 488, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0,
    499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0,
    507, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 516, 0, 517, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521,
    0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0,
    0, 0, 537, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544,
    0, 0, 0, 545, 0, 0, 0, 546, 0, 547, 548, 0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 557,
    0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 562, 0, 563, 0, 564, 0, 0, 565, 0, 566, 0, 567, 0, 568,
    0, 0, 0, 569, 0, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 582, 0, 0, 0,
    0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0,
    0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 592, 0, 0, 593, 0, 594, 0,
    0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 0, 0, 605, 0, 606, 0, 0,
    607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0, 0, 611, 0,
    0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 615, 0, 616, 0, 617, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0,
    622, 0, 0, 623, 0, 0, 624, 0, 625, 0, 0, 626, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 630, 0, 631, 0, 0, 632, 0, 0, 633, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 0, 637, 0, 0, 0, 638,
    0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 641, 0, 642, 643, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 648,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0,
    0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0,
    0, 661, 0, 662, 663, 0, 0, 664, 665, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0,
    670, 0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0,
    0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 689, 0, 690,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 692, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 0, 0, 696,
    0, 697, 0, 0, 698, 0, 0, 699, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0,
    713, 0, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0, 727, 0, 0, 728, 0, 0, 0,
    729, 0, 0, 730, 731, 0, 0, 732, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0,
    0, 736, 0, 0, 737, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 741, 0, 742, 0, 0, 743, 0, 0, 0, 744, 0, 745, 0, 746, 0,
    747, 0, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 754,
    0, 755, 0, 0, 756, 0, 0, 757, 0, 758, 0, 759, 0, 760, 0, 0, 0, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 766, 0, 0, 767,
    0, 0, 0, 0, 768, 0, 769, 0, 0, 770, 0, 771, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 776,
    0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0,
    783, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 788, 0, 789, 0, 790, 0, 0, 0,
    791, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0, 794, 0, 795, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0,
    0, 800, 0, 801, 0, 0, 0, 0, 802, 0, 803, 0, 804, 0, 805, 0, 0, 806, 0, 807, 0, 0, 0, 0, 808, 0, 809, 0, 0, 810, 0, 0,
    0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 813, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 817, 0, 818, 0, 0, 0, 819, 0, 0,
    820, 0, 821, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 825, 0, 826, 0, 827, 0, 828, 0, 0, 0, 0, 829, 0, 0,
    0, 0, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 834, 0, 835, 0, 0, 836, 0, 837, 0, 0, 0, 0,
    838, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 841, 0, 0, 842, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0,
    845, 0, 0, 0, 0, 0, 846, 0, 0, 0, 0, 847, 0, 848, 0, 849, 0, 0, 850, 0, 851, 0, 0, 852, 0, 0, 853, 0, 0, 0, 854, 0,
    855, 0, 856, 0, 0, 0, 857, 0, 0, 858, 0, 0, 0, 859, 0, 0, 860, 0, 861, 0, 0, 0, 0, 862, 0, 0, 863, 0, 0, 0, 0, 0,
    0, 864, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 867, 0, 868, 0, 0, 0, 0, 869, 0, 0,
    0, 870, 0, 0, 0, 871, 0, 0, 0, 872, 0, 873, 0, 874, 0, 0, 875, 0, 0, 0, 876, 0, 877, 0, 878, 0, 879, 0, 880, 0, 881, 0,
    882, 0, 0, 0, 0, 883, 0, 0, 884, 0, 0, 885, 0, 0, 886, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 0,
    889, 0, 0, 0, 0, 0, 890, 0, 891, 0, 892, 0, 893, 0, 0, 0, 894, 0, 895, 0, 0, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0, 0,
    0, 0, 0, 0, 898, 0, 0, 899, 0, 0, 900, 0, 901, 0, 0, 0, 902, 0, 0, 903, 0, 0, 904, 0, 0, 905, 0, 0, 906, 0, 907, 0,
    908, 0, 0, 909, 0, 0, 0, 910, 0, 0, 0, 911, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 913, 0, 914, 0, 915, 0, 0, 916, 0,
    917, 0, 0, 918, 0, 919, 0, 0, 920, 0, 0, 0, 0, 0, 0, 921, 0, 922, 0, 923, 0, 0, 0, 0, 0, 0, 924, 0, 925, 0, 0, 0,
    926, 0, 0, 927, 0, 0, 928, 0, 0, 0, 929, 0, 0, 0, 930, 0, 0, 0, 931, 0, 0, 0, 932, 0, 933, 0, 934, 0, 0, 935, 0, 0,
    0, 0, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 0, 938, 0, 0, 939, 0, 0, 940, 0, 0, 0, 941, 0, 0,
    0, 942, 0, 0, 0, 943, 0, 0, 0, 944, 0, 0, 0, 945, 0, 0, 946, 0, 0, 0, 947, 0, 948, 0, 949, 0, 0, 0, 0, 0, 0, 0,
    950, 0, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0, 952, 0, 0, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    954, 0, 0, 0, 0, 0, 955, 0, 0, 0, 956, 0, 0, 0, 0, 957, 0, 958, 0, 959, 0, 960, 0, 0, 961, 0, 962, 0, 0, 0, 0, 963,
    0, 0, 0, 964, 0, 0, 0, 0, 965, 966, 0, 0, 967, 0, 0, 0, 0, 968, 0, 0, 969, 0, 0, 0, 970, 0, 0, 971, 0, 0, 972, 0,
    973, 0, 0, 0, 974, 0, 0, 975, 0, 0, 976, 0, 0, 0, 0, 0, 0, 977, 0, 978, 0, 979, 0, 0, 0, 980, 0, 0, 981, 0, 982, 0,
    0, 0, 0, 983, 0, 984, 0, 0, 985, 0, 0, 0, 0, 0, 0, 986, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 987, 0, 0,
    0, 0, 988, 0, 0, 0, 989, 0, 990, 0, 0, 991, 0, 992, 0, 993, 0, 994, 0, 0, 995, 0, 996, 0, 997, 0, 998, 0, 0, 0, 999, 0,
    0, 0, 0, 0, 1000, 0, 0, 0, 0, 0, 1001, 0, 0, 1002, 0, 1003, 1004, 0, 0, 1005, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1006, 0, 0,
    1007, 0, 1008, 0, 0, 0, 1009, 1010, 0, 0, 0, 0, 0, 0, 1011, 0, 0, 0, 0, 0, 1012, 1013, 0, 1014, 0, 0, 0, 1015, 0, 1016, 0, 0,
    0, 1017, 0, 0, 1018, 0, 0, 1019, 0, 1020, 0, 0, 0, 1021, 0, 0, 0, 1022, 0, 0, 1023, 0, 0, 0, 1024, 0, 0, 0, 1025, 0, 0, 1026,
    0, 0, 0, 1027, 0, 0, 0, 1028, 0, 0, 0, 1029, 0, 0, 1030, 0, 0, 0, 1031, 0, 1032, 0, 1033, 0, 0, 0, 0, 1034,
};
void recomp_unit_0107_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B0000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0107[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B0000;
    case 2u: goto L_089B0044;
    case 3u: goto L_089B0058;
    case 4u: goto L_089B0060;
    case 5u: goto L_089B0068;
    case 6u: goto L_089B006C;
    case 7u: goto L_089B0074;
    case 8u: goto L_089B0088;
    case 9u: goto L_089B0090;
    case 10u: goto L_089B00A4;
    case 11u: goto L_089B00B4;
    case 12u: goto L_089B00C4;
    case 13u: goto L_089B00D4;
    case 14u: goto L_089B00D8;
    case 15u: goto L_089B00DC;
    case 16u: goto L_089B00E4;
    case 17u: goto L_089B00F4;
    case 18u: goto L_089B0100;
    case 19u: goto L_089B0110;
    case 20u: goto L_089B0114;
    case 21u: goto L_089B011C;
    case 22u: goto L_089B0124;
    case 23u: goto L_089B012C;
    case 24u: goto L_089B013C;
    case 25u: goto L_089B0144;
    case 26u: goto L_089B0154;
    case 27u: goto L_089B015C;
    case 28u: goto L_089B016C;
    case 29u: goto L_089B0174;
    case 30u: goto L_089B0184;
    case 31u: goto L_089B018C;
    case 32u: goto L_089B0194;
    case 33u: goto L_089B019C;
    case 34u: goto L_089B01A4;
    case 35u: goto L_089B01AC;
    case 36u: goto L_089B01B4;
    case 37u: goto L_089B01BC;
    case 38u: goto L_089B01C4;
    case 39u: goto L_089B01CC;
    case 40u: goto L_089B01DC;
    case 41u: goto L_089B01E8;
    case 42u: goto L_089B01F0;
    case 43u: goto L_089B0208;
    case 44u: goto L_089B0210;
    case 45u: goto L_089B0218;
    case 46u: goto L_089B0220;
    case 47u: goto L_089B0230;
    case 48u: goto L_089B0238;
    case 49u: goto L_089B0248;
    case 50u: goto L_089B0264;
    case 51u: goto L_089B026C;
    case 52u: goto L_089B0274;
    case 53u: goto L_089B027C;
    case 54u: goto L_089B0284;
    case 55u: goto L_089B0294;
    case 56u: goto L_089B02B0;
    case 57u: goto L_089B02C4;
    case 58u: goto L_089B02D0;
    case 59u: goto L_089B02EC;
    case 60u: goto L_089B02F4;
    case 61u: goto L_089B02FC;
    case 62u: goto L_089B0304;
    case 63u: goto L_089B0314;
    case 64u: goto L_089B0330;
    case 65u: goto L_089B0344;
    case 66u: goto L_089B0358;
    case 67u: goto L_089B0364;
    case 68u: goto L_089B0380;
    case 69u: goto L_089B0394;
    case 70u: goto L_089B03A8;
    case 71u: goto L_089B03B0;
    case 72u: goto L_089B03B8;
    case 73u: goto L_089B03D4;
    case 74u: goto L_089B03FC;
    case 75u: goto L_089B0400;
    case 76u: goto L_089B0408;
    case 77u: goto L_089B0418;
    case 78u: goto L_089B0428;
    case 79u: goto L_089B0444;
    case 80u: goto L_089B0458;
    case 81u: goto L_089B0460;
    case 82u: goto L_089B0468;
    case 83u: goto L_089B046C;
    case 84u: goto L_089B0484;
    case 85u: goto L_089B04A0;
    case 86u: goto L_089B04B4;
    case 87u: goto L_089B04BC;
    case 88u: goto L_089B04C4;
    case 89u: goto L_089B04C8;
    case 90u: goto L_089B04D0;
    case 91u: goto L_089B04E0;
    case 92u: goto L_089B04F0;
    case 93u: goto L_089B04F8;
    case 94u: goto L_089B0514;
    case 95u: goto L_089B0528;
    case 96u: goto L_089B0530;
    case 97u: goto L_089B0538;
    case 98u: goto L_089B053C;
    case 99u: goto L_089B0544;
    case 100u: goto L_089B0554;
    case 101u: goto L_089B0564;
    case 102u: goto L_089B0580;
    case 103u: goto L_089B0594;
    case 104u: goto L_089B059C;
    case 105u: goto L_089B05A4;
    case 106u: goto L_089B05A8;
    case 107u: goto L_089B05C0;
    case 108u: goto L_089B05DC;
    case 109u: goto L_089B05F0;
    case 110u: goto L_089B05F8;
    case 111u: goto L_089B0600;
    case 112u: goto L_089B0604;
    case 113u: goto L_089B0618;
    case 114u: goto L_089B0620;
    case 115u: goto L_089B0630;
    case 116u: goto L_089B064C;
    case 117u: goto L_089B0660;
    case 118u: goto L_089B0668;
    case 119u: goto L_089B0670;
    case 120u: goto L_089B0674;
    case 121u: goto L_089B068C;
    case 122u: goto L_089B06A8;
    case 123u: goto L_089B06BC;
    case 124u: goto L_089B06C4;
    case 125u: goto L_089B06CC;
    case 126u: goto L_089B06D0;
    case 127u: goto L_089B06D4;
    case 128u: goto L_089B06DC;
    case 129u: goto L_089B06E4;
    case 130u: goto L_089B06EC;
    case 131u: goto L_089B06FC;
    case 132u: goto L_089B0708;
    case 133u: goto L_089B0714;
    case 134u: goto L_089B072C;
    case 135u: goto L_089B0734;
    case 136u: goto L_089B073C;
    case 137u: goto L_089B0754;
    case 138u: goto L_089B075C;
    case 139u: goto L_089B0768;
    case 140u: goto L_089B0770;
    case 141u: goto L_089B0778;
    case 142u: goto L_089B0780;
    case 143u: goto L_089B0788;
    case 144u: goto L_089B0794;
    case 145u: goto L_089B079C;
    case 146u: goto L_089B07A4;
    case 147u: goto L_089B07B0;
    case 148u: goto L_089B07C0;
    case 149u: goto L_089B07CC;
    case 150u: goto L_089B07D8;
    case 151u: goto L_089B07F8;
    case 152u: goto L_089B0800;
    case 153u: goto L_089B0808;
    case 154u: goto L_089B0814;
    case 155u: goto L_089B082C;
    case 156u: goto L_089B0834;
    case 157u: goto L_089B0840;
    case 158u: goto L_089B086C;
    case 159u: goto L_089B0878;
    case 160u: goto L_089B0880;
    case 161u: goto L_089B088C;
    case 162u: goto L_089B08A8;
    case 163u: goto L_089B08B0;
    case 164u: goto L_089B08BC;
    case 165u: goto L_089B08E8;
    case 166u: goto L_089B08FC;
    case 167u: goto L_089B0904;
    case 168u: goto L_089B0910;
    case 169u: goto L_089B092C;
    case 170u: goto L_089B093C;
    case 171u: goto L_089B0948;
    case 172u: goto L_089B096C;
    case 173u: goto L_089B0980;
    case 174u: goto L_089B0988;
    case 175u: goto L_089B0998;
    case 176u: goto L_089B09A4;
    case 177u: goto L_089B09C8;
    case 178u: goto L_089B09DC;
    case 179u: goto L_089B09E4;
    case 180u: goto L_089B09F0;
    case 181u: goto L_089B0A04;
    case 182u: goto L_089B0A14;
    case 183u: goto L_089B0A24;
    case 184u: goto L_089B0A34;
    case 185u: goto L_089B0A44;
    case 186u: goto L_089B0A48;
    case 187u: goto L_089B0A4C;
    case 188u: goto L_089B0A54;
    case 189u: goto L_089B0A5C;
    case 190u: goto L_089B0A64;
    case 191u: goto L_089B0A6C;
    case 192u: goto L_089B0A74;
    case 193u: goto L_089B0A7C;
    case 194u: goto L_089B0A84;
    case 195u: goto L_089B0A94;
    case 196u: goto L_089B0AA4;
    case 197u: goto L_089B0AB4;
    case 198u: goto L_089B0AC4;
    case 199u: goto L_089B0AC8;
    case 200u: goto L_089B0ACC;
    case 201u: goto L_089B0AD4;
    case 202u: goto L_089B0ADC;
    case 203u: goto L_089B0AE4;
    case 204u: goto L_089B0AEC;
    case 205u: goto L_089B0AF4;
    case 206u: goto L_089B0AFC;
    case 207u: goto L_089B0B08;
    case 208u: goto L_089B0B1C;
    case 209u: goto L_089B0B38;
    case 210u: goto L_089B0B40;
    case 211u: goto L_089B0B5C;
    case 212u: goto L_089B0B68;
    case 213u: goto L_089B0B70;
    case 214u: goto L_089B0B80;
    case 215u: goto L_089B0B88;
    case 216u: goto L_089B0B90;
    case 217u: goto L_089B0BA4;
    case 218u: goto L_089B0BB4;
    case 219u: goto L_089B0BBC;
    case 220u: goto L_089B0BC4;
    case 221u: goto L_089B0BD8;
    case 222u: goto L_089B0BE4;
    case 223u: goto L_089B0BEC;
    case 224u: goto L_089B0C08;
    case 225u: goto L_089B0C18;
    case 226u: goto L_089B0C20;
    case 227u: goto L_089B0C24;
    case 228u: goto L_089B0C58;
    case 229u: goto L_089B0C7C;
    case 230u: goto L_089B0C84;
    case 231u: goto L_089B0CA0;
    case 232u: goto L_089B0CB8;
    case 233u: goto L_089B0CC4;
    case 234u: goto L_089B0CDC;
    case 235u: goto L_089B0CEC;
    case 236u: goto L_089B0CFC;
    case 237u: goto L_089B0D0C;
    case 238u: goto L_089B0D1C;
    case 239u: goto L_089B0D20;
    case 240u: goto L_089B0D24;
    case 241u: goto L_089B0D2C;
    case 242u: goto L_089B0D3C;
    case 243u: goto L_089B0D4C;
    case 244u: goto L_089B0D5C;
    case 245u: goto L_089B0D6C;
    case 246u: goto L_089B0D70;
    case 247u: goto L_089B0D74;
    case 248u: goto L_089B0D7C;
    case 249u: goto L_089B0D84;
    case 250u: goto L_089B0D8C;
    case 251u: goto L_089B0D94;
    case 252u: goto L_089B0DA4;
    case 253u: goto L_089B0DAC;
    case 254u: goto L_089B0DBC;
    case 255u: goto L_089B0DCC;
    case 256u: goto L_089B0DD4;
    case 257u: goto L_089B0DE4;
    case 258u: goto L_089B0DEC;
    case 259u: goto L_089B0DFC;
    case 260u: goto L_089B0E04;
    case 261u: goto L_089B0E14;
    case 262u: goto L_089B0E1C;
    case 263u: goto L_089B0E2C;
    case 264u: goto L_089B0E34;
    case 265u: goto L_089B0E3C;
    case 266u: goto L_089B0E4C;
    case 267u: goto L_089B0E54;
    case 268u: goto L_089B0E64;
    case 269u: goto L_089B0E74;
    case 270u: goto L_089B0E84;
    case 271u: goto L_089B0EA8;
    case 272u: goto L_089B0EB0;
    case 273u: goto L_089B0EB8;
    case 274u: goto L_089B0EC8;
    case 275u: goto L_089B0ED0;
    case 276u: goto L_089B0EDC;
    case 277u: goto L_089B0EF0;
    case 278u: goto L_089B0EF8;
    case 279u: goto L_089B0F08;
    case 280u: goto L_089B0F18;
    case 281u: goto L_089B0F24;
    case 282u: goto L_089B0F28;
    case 283u: goto L_089B0F40;
    case 284u: goto L_089B0F74;
    case 285u: goto L_089B0F7C;
    case 286u: goto L_089B0F98;
    case 287u: goto L_089B0FA0;
    case 288u: goto L_089B0FA8;
    case 289u: goto L_089B0FB0;
    case 290u: goto L_089B0FC0;
    case 291u: goto L_089B0FC8;
    case 292u: goto L_089B0FD8;
    case 293u: goto L_089B0FE0;
    case 294u: goto L_089B0FF0;
    case 295u: goto L_089B0FF8;
    case 296u: goto L_089B1008;
    case 297u: goto L_089B102C;
    case 298u: goto L_089B1034;
    case 299u: goto L_089B103C;
    case 300u: goto L_089B1044;
    case 301u: goto L_089B104C;
    case 302u: goto L_089B105C;
    case 303u: goto L_089B1064;
    case 304u: goto L_089B1074;
    case 305u: goto L_089B107C;
    case 306u: goto L_089B1088;
    case 307u: goto L_089B10B4;
    case 308u: goto L_089B10BC;
    case 309u: goto L_089B10D8;
    case 310u: goto L_089B10E0;
    case 311u: goto L_089B10FC;
    case 312u: goto L_089B1104;
    case 313u: goto L_089B110C;
    case 314u: goto L_089B1114;
    case 315u: goto L_089B1124;
    case 316u: goto L_089B112C;
    case 317u: goto L_089B113C;
    case 318u: goto L_089B1144;
    case 319u: goto L_089B1154;
    case 320u: goto L_089B115C;
    case 321u: goto L_089B116C;
    case 322u: goto L_089B1174;
    case 323u: goto L_089B1184;
    case 324u: goto L_089B118C;
    case 325u: goto L_089B119C;
    case 326u: goto L_089B11A4;
    case 327u: goto L_089B11B4;
    case 328u: goto L_089B11BC;
    case 329u: goto L_089B11C8;
    case 330u: goto L_089B11E8;
    case 331u: goto L_089B11FC;
    case 332u: goto L_089B1220;
    case 333u: goto L_089B1230;
    case 334u: goto L_089B1240;
    case 335u: goto L_089B1250;
    case 336u: goto L_089B1258;
    case 337u: goto L_089B1264;
    case 338u: goto L_089B1280;
    case 339u: goto L_089B128C;
    case 340u: goto L_089B1298;
    case 341u: goto L_089B12AC;
    case 342u: goto L_089B12BC;
    case 343u: goto L_089B12CC;
    case 344u: goto L_089B12D0;
    case 345u: goto L_089B12E0;
    case 346u: goto L_089B12E8;
    case 347u: goto L_089B12EC;
    case 348u: goto L_089B12F4;
    case 349u: goto L_089B12FC;
    case 350u: goto L_089B1324;
    case 351u: goto L_089B1330;
    case 352u: goto L_089B1344;
    case 353u: goto L_089B1350;
    case 354u: goto L_089B1354;
    case 355u: goto L_089B1368;
    case 356u: goto L_089B1374;
    case 357u: goto L_089B13D4;
    case 358u: goto L_089B13E8;
    case 359u: goto L_089B1404;
    case 360u: goto L_089B1414;
    case 361u: goto L_089B1418;
    case 362u: goto L_089B1434;
    case 363u: goto L_089B143C;
    case 364u: goto L_089B1458;
    case 365u: goto L_089B1460;
    case 366u: goto L_089B1468;
    case 367u: goto L_089B1474;
    case 368u: goto L_089B1484;
    case 369u: goto L_089B1494;
    case 370u: goto L_089B14B4;
    case 371u: goto L_089B1524;
    case 372u: goto L_089B1534;
    case 373u: goto L_089B1558;
    case 374u: goto L_089B1568;
    case 375u: goto L_089B1578;
    case 376u: goto L_089B158C;
    case 377u: goto L_089B1594;
    case 378u: goto L_089B15A4;
    case 379u: goto L_089B15B4;
    case 380u: goto L_089B15C4;
    case 381u: goto L_089B15D8;
    case 382u: goto L_089B15E0;
    case 383u: goto L_089B15F4;
    case 384u: goto L_089B1600;
    case 385u: goto L_089B1610;
    case 386u: goto L_089B161C;
    case 387u: goto L_089B1624;
    case 388u: goto L_089B1630;
    case 389u: goto L_089B1640;
    case 390u: goto L_089B164C;
    case 391u: goto L_089B1654;
    case 392u: goto L_089B165C;
    case 393u: goto L_089B1698;
    case 394u: goto L_089B16AC;
    case 395u: goto L_089B16E4;
    case 396u: goto L_089B1730;
    case 397u: goto L_089B1740;
    case 398u: goto L_089B1748;
    case 399u: goto L_089B1754;
    case 400u: goto L_089B1764;
    case 401u: goto L_089B1770;
    case 402u: goto L_089B1780;
    case 403u: goto L_089B179C;
    case 404u: goto L_089B17A4;
    case 405u: goto L_089B17B0;
    case 406u: goto L_089B17B8;
    case 407u: goto L_089B17C8;
    case 408u: goto L_089B17D4;
    case 409u: goto L_089B1804;
    case 410u: goto L_089B1814;
    case 411u: goto L_089B1830;
    case 412u: goto L_089B1840;
    case 413u: goto L_089B1850;
    case 414u: goto L_089B186C;
    case 415u: goto L_089B1874;
    case 416u: goto L_089B1880;
    case 417u: goto L_089B1888;
    case 418u: goto L_089B1898;
    case 419u: goto L_089B18A4;
    case 420u: goto L_089B18B0;
    case 421u: goto L_089B18B8;
    case 422u: goto L_089B18C4;
    case 423u: goto L_089B18D0;
    case 424u: goto L_089B18D8;
    case 425u: goto L_089B18E4;
    case 426u: goto L_089B190C;
    case 427u: goto L_089B1914;
    case 428u: goto L_089B1924;
    case 429u: goto L_089B192C;
    case 430u: goto L_089B1934;
    case 431u: goto L_089B1948;
    case 432u: goto L_089B195C;
    case 433u: goto L_089B1974;
    case 434u: goto L_089B1984;
    case 435u: goto L_089B1998;
    case 436u: goto L_089B19A0;
    case 437u: goto L_089B19A8;
    case 438u: goto L_089B19B8;
    case 439u: goto L_089B19CC;
    case 440u: goto L_089B19DC;
    case 441u: goto L_089B19E8;
    case 442u: goto L_089B19F4;
    case 443u: goto L_089B1A00;
    case 444u: goto L_089B1A08;
    case 445u: goto L_089B1A34;
    case 446u: goto L_089B1A3C;
    case 447u: goto L_089B1A44;
    case 448u: goto L_089B1A6C;
    case 449u: goto L_089B1A7C;
    case 450u: goto L_089B1A84;
    case 451u: goto L_089B1A90;
    case 452u: goto L_089B1A98;
    case 453u: goto L_089B1ABC;
    case 454u: goto L_089B1ACC;
    case 455u: goto L_089B1AD4;
    case 456u: goto L_089B1AE0;
    case 457u: goto L_089B1AE8;
    case 458u: goto L_089B1B10;
    case 459u: goto L_089B1B20;
    case 460u: goto L_089B1B28;
    case 461u: goto L_089B1B34;
    case 462u: goto L_089B1B3C;
    case 463u: goto L_089B1B64;
    case 464u: goto L_089B1BC0;
    case 465u: goto L_089B1BF4;
    case 466u: goto L_089B1C20;
    case 467u: goto L_089B1C74;
    case 468u: goto L_089B1C84;
    case 469u: goto L_089B1C94;
    case 470u: goto L_089B1CA4;
    case 471u: goto L_089B1CAC;
    case 472u: goto L_089B1CB8;
    case 473u: goto L_089B1CC0;
    case 474u: goto L_089B1CD4;
    case 475u: goto L_089B1CDC;
    case 476u: goto L_089B1CE8;
    case 477u: goto L_089B1CF8;
    case 478u: goto L_089B1D2C;
    case 479u: goto L_089B1D40;
    case 480u: goto L_089B1D48;
    case 481u: goto L_089B1D50;
    case 482u: goto L_089B1D6C;
    case 483u: goto L_089B1D7C;
    case 484u: goto L_089B1D8C;
    case 485u: goto L_089B1DAC;
    case 486u: goto L_089B1DB8;
    case 487u: goto L_089B1DC8;
    case 488u: goto L_089B1DD4;
    case 489u: goto L_089B1DDC;
    case 490u: goto L_089B1DE8;
    case 491u: goto L_089B1E14;
    case 492u: goto L_089B1E28;
    case 493u: goto L_089B1E30;
    case 494u: goto L_089B1E38;
    case 495u: goto L_089B1E48;
    case 496u: goto L_089B1E50;
    case 497u: goto L_089B1E58;
    case 498u: goto L_089B1E6C;
    case 499u: goto L_089B1E80;
    case 500u: goto L_089B1E98;
    case 501u: goto L_089B1EA8;
    case 502u: goto L_089B1EBC;
    case 503u: goto L_089B1EC4;
    case 504u: goto L_089B1ECC;
    case 505u: goto L_089B1EDC;
    case 506u: goto L_089B1EF0;
    case 507u: goto L_089B1F00;
    case 508u: goto L_089B1F0C;
    case 509u: goto L_089B1F18;
    case 510u: goto L_089B1F24;
    case 511u: goto L_089B1F2C;
    case 512u: goto L_089B1F5C;
    case 513u: goto L_089B1F64;
    case 514u: goto L_089B1F6C;
    case 515u: goto L_089B1F98;
    case 516u: goto L_089B1FA8;
    case 517u: goto L_089B1FB0;
    case 518u: goto L_089B1FBC;
    case 519u: goto L_089B1FC4;
    case 520u: goto L_089B1FEC;
    case 521u: goto L_089B1FFC;
    case 522u: goto L_089B2004;
    case 523u: goto L_089B2010;
    case 524u: goto L_089B2018;
    case 525u: goto L_089B2044;
    case 526u: goto L_089B2054;
    case 527u: goto L_089B205C;
    case 528u: goto L_089B2068;
    case 529u: goto L_089B2070;
    case 530u: goto L_089B209C;
    case 531u: goto L_089B20C0;
    case 532u: goto L_089B20EC;
    case 533u: goto L_089B2134;
    case 534u: goto L_089B2154;
    case 535u: goto L_089B215C;
    case 536u: goto L_089B2178;
    case 537u: goto L_089B2188;
    case 538u: goto L_089B2194;
    case 539u: goto L_089B21A4;
    case 540u: goto L_089B21C0;
    case 541u: goto L_089B21D0;
    case 542u: goto L_089B21E0;
    case 543u: goto L_089B21EC;
    case 544u: goto L_089B21FC;
    case 545u: goto L_089B220C;
    case 546u: goto L_089B221C;
    case 547u: goto L_089B2224;
    case 548u: goto L_089B2228;
    case 549u: goto L_089B2234;
    case 550u: goto L_089B2244;
    case 551u: goto L_089B2250;
    case 552u: goto L_089B2260;
    case 553u: goto L_089B2288;
    case 554u: goto L_089B22B8;
    case 555u: goto L_089B22C4;
    case 556u: goto L_089B22DC;
    case 557u: goto L_089B22FC;
    case 558u: goto L_089B230C;
    case 559u: goto L_089B2318;
    case 560u: goto L_089B2338;
    case 561u: goto L_089B2340;
    case 562u: goto L_089B2348;
    case 563u: goto L_089B2350;
    case 564u: goto L_089B2358;
    case 565u: goto L_089B2364;
    case 566u: goto L_089B236C;
    case 567u: goto L_089B2374;
    case 568u: goto L_089B237C;
    case 569u: goto L_089B238C;
    case 570u: goto L_089B2398;
    case 571u: goto L_089B23A0;
    case 572u: goto L_089B23A8;
    case 573u: goto L_089B23B0;
    case 574u: goto L_089B23B8;
    case 575u: goto L_089B23C0;
    case 576u: goto L_089B23C8;
    case 577u: goto L_089B23D8;
    case 578u: goto L_089B2438;
    case 579u: goto L_089B2440;
    case 580u: goto L_089B2454;
    case 581u: goto L_089B245C;
    case 582u: goto L_089B2470;
    case 583u: goto L_089B2494;
    case 584u: goto L_089B24AC;
    case 585u: goto L_089B24C0;
    case 586u: goto L_089B24EC;
    case 587u: goto L_089B24F4;
    case 588u: goto L_089B2504;
    case 589u: goto L_089B250C;
    case 590u: goto L_089B2550;
    case 591u: goto L_089B2558;
    case 592u: goto L_089B2564;
    case 593u: goto L_089B2570;
    case 594u: goto L_089B2578;
    case 595u: goto L_089B2584;
    case 596u: goto L_089B2594;
    case 597u: goto L_089B259C;
    case 598u: goto L_089B25A8;
    case 599u: goto L_089B25B4;
    case 600u: goto L_089B25BC;
    case 601u: goto L_089B25C4;
    case 602u: goto L_089B25CC;
    case 603u: goto L_089B25D4;
    case 604u: goto L_089B25DC;
    case 605u: goto L_089B25EC;
    case 606u: goto L_089B25F4;
    case 607u: goto L_089B2600;
    case 608u: goto L_089B260C;
    case 609u: goto L_089B2658;
    case 610u: goto L_089B2660;
    case 611u: goto L_089B2678;
    case 612u: goto L_089B2688;
    case 613u: goto L_089B2694;
    case 614u: goto L_089B26A0;
    case 615u: goto L_089B26A8;
    case 616u: goto L_089B26B0;
    case 617u: goto L_089B26B8;
    case 618u: goto L_089B26C0;
    case 619u: goto L_089B26D0;
    case 620u: goto L_089B26D8;
    case 621u: goto L_089B26F0;
    case 622u: goto L_089B2700;
    case 623u: goto L_089B270C;
    case 624u: goto L_089B2718;
    case 625u: goto L_089B2720;
    case 626u: goto L_089B272C;
    case 627u: goto L_089B2738;
    case 628u: goto L_089B2740;
    case 629u: goto L_089B2748;
    case 630u: goto L_089B2758;
    case 631u: goto L_089B2760;
    case 632u: goto L_089B276C;
    case 633u: goto L_089B2778;
    case 634u: goto L_089B27C4;
    case 635u: goto L_089B27D8;
    case 636u: goto L_089B27E0;
    case 637u: goto L_089B27EC;
    case 638u: goto L_089B27FC;
    case 639u: goto L_089B2820;
    case 640u: goto L_089B2830;
    case 641u: goto L_089B2838;
    case 642u: goto L_089B2840;
    case 643u: goto L_089B2844;
    case 644u: goto L_089B2850;
    case 645u: goto L_089B285C;
    case 646u: goto L_089B2868;
    case 647u: goto L_089B2874;
    case 648u: goto L_089B287C;
    case 649u: goto L_089B28B4;
    case 650u: goto L_089B28F0;
    case 651u: goto L_089B290C;
    case 652u: goto L_089B291C;
    case 653u: goto L_089B293C;
    case 654u: goto L_089B294C;
    case 655u: goto L_089B2958;
    case 656u: goto L_089B2988;
    case 657u: goto L_089B2998;
    case 658u: goto L_089B29B0;
    case 659u: goto L_089B29D0;
    case 660u: goto L_089B29F4;
    case 661u: goto L_089B2A04;
    case 662u: goto L_089B2A0C;
    case 663u: goto L_089B2A10;
    case 664u: goto L_089B2A1C;
    case 665u: goto L_089B2A20;
    case 666u: goto L_089B2A34;
    case 667u: goto L_089B2A3C;
    case 668u: goto L_089B2A64;
    case 669u: goto L_089B2A78;
    case 670u: goto L_089B2A80;
    case 671u: goto L_089B2A88;
    case 672u: goto L_089B2A90;
    case 673u: goto L_089B2A98;
    case 674u: goto L_089B2AA0;
    case 675u: goto L_089B2AA8;
    case 676u: goto L_089B2AB0;
    case 677u: goto L_089B2AB8;
    case 678u: goto L_089B2AC8;
    case 679u: goto L_089B2B28;
    case 680u: goto L_089B2B30;
    case 681u: goto L_089B2B44;
    case 682u: goto L_089B2B4C;
    case 683u: goto L_089B2B60;
    case 684u: goto L_089B2B84;
    case 685u: goto L_089B2B9C;
    case 686u: goto L_089B2BB0;
    case 687u: goto L_089B2BDC;
    case 688u: goto L_089B2BE4;
    case 689u: goto L_089B2BF4;
    case 690u: goto L_089B2BFC;
    case 691u: goto L_089B2C40;
    case 692u: goto L_089B2C48;
    case 693u: goto L_089B2C54;
    case 694u: goto L_089B2C60;
    case 695u: goto L_089B2C6C;
    case 696u: goto L_089B2C7C;
    case 697u: goto L_089B2C84;
    case 698u: goto L_089B2C90;
    case 699u: goto L_089B2C9C;
    case 700u: goto L_089B2CA4;
    case 701u: goto L_089B2CAC;
    case 702u: goto L_089B2CB4;
    case 703u: goto L_089B2CBC;
    case 704u: goto L_089B2CC4;
    case 705u: goto L_089B2CD4;
    case 706u: goto L_089B2CDC;
    case 707u: goto L_089B2D24;
    case 708u: goto L_089B2D38;
    case 709u: goto L_089B2D44;
    case 710u: goto L_089B2D4C;
    case 711u: goto L_089B2D64;
    case 712u: goto L_089B2D74;
    case 713u: goto L_089B2D80;
    case 714u: goto L_089B2D8C;
    case 715u: goto L_089B2D94;
    case 716u: goto L_089B2D9C;
    case 717u: goto L_089B2DA4;
    case 718u: goto L_089B2DAC;
    case 719u: goto L_089B2DBC;
    case 720u: goto L_089B2DC4;
    case 721u: goto L_089B2E0C;
    case 722u: goto L_089B2E20;
    case 723u: goto L_089B2E30;
    case 724u: goto L_089B2E44;
    case 725u: goto L_089B2E50;
    case 726u: goto L_089B2E5C;
    case 727u: goto L_089B2E64;
    case 728u: goto L_089B2E70;
    case 729u: goto L_089B2E80;
    case 730u: goto L_089B2E8C;
    case 731u: goto L_089B2E90;
    case 732u: goto L_089B2E9C;
    case 733u: goto L_089B2EA8;
    case 734u: goto L_089B2EB0;
    case 735u: goto L_089B2EE0;
    case 736u: goto L_089B2F04;
    case 737u: goto L_089B2F10;
    case 738u: goto L_089B2F18;
    case 739u: goto L_089B2F2C;
    case 740u: goto L_089B2F3C;
    case 741u: goto L_089B2F44;
    case 742u: goto L_089B2F4C;
    case 743u: goto L_089B2F58;
    case 744u: goto L_089B2F68;
    case 745u: goto L_089B2F70;
    case 746u: goto L_089B2F78;
    case 747u: goto L_089B2F80;
    case 748u: goto L_089B2F90;
    case 749u: goto L_089B2FA8;
    case 750u: goto L_089B2FC0;
    case 751u: goto L_089B2FCC;
    case 752u: goto L_089B2FDC;
    case 753u: goto L_089B2FE4;
    case 754u: goto L_089B2FFC;
    case 755u: goto L_089B3004;
    case 756u: goto L_089B3010;
    case 757u: goto L_089B301C;
    case 758u: goto L_089B3024;
    case 759u: goto L_089B302C;
    case 760u: goto L_089B3034;
    case 761u: goto L_089B3048;
    case 762u: goto L_089B3050;
    case 763u: goto L_089B3058;
    case 764u: goto L_089B3060;
    case 765u: goto L_089B3068;
    case 766u: goto L_089B3070;
    case 767u: goto L_089B307C;
    case 768u: goto L_089B3090;
    case 769u: goto L_089B3098;
    case 770u: goto L_089B30A4;
    case 771u: goto L_089B30AC;
    case 772u: goto L_089B30B4;
    case 773u: goto L_089B30CC;
    case 774u: goto L_089B30E8;
    case 775u: goto L_089B30F0;
    case 776u: goto L_089B30FC;
    case 777u: goto L_089B3108;
    case 778u: goto L_089B313C;
    case 779u: goto L_089B3144;
    case 780u: goto L_089B3154;
    case 781u: goto L_089B3164;
    case 782u: goto L_089B3178;
    case 783u: goto L_089B3180;
    case 784u: goto L_089B3194;
    case 785u: goto L_089B319C;
    case 786u: goto L_089B31C0;
    case 787u: goto L_089B31D0;
    case 788u: goto L_089B31E0;
    case 789u: goto L_089B31E8;
    case 790u: goto L_089B31F0;
    case 791u: goto L_089B3200;
    case 792u: goto L_089B320C;
    case 793u: goto L_089B321C;
    case 794u: goto L_089B322C;
    case 795u: goto L_089B3234;
    case 796u: goto L_089B323C;
    case 797u: goto L_089B3248;
    case 798u: goto L_089B3260;
    case 799u: goto L_089B3278;
    case 800u: goto L_089B3284;
    case 801u: goto L_089B328C;
    case 802u: goto L_089B32A0;
    case 803u: goto L_089B32A8;
    case 804u: goto L_089B32B0;
    case 805u: goto L_089B32B8;
    case 806u: goto L_089B32C4;
    case 807u: goto L_089B32CC;
    case 808u: goto L_089B32E0;
    case 809u: goto L_089B32E8;
    case 810u: goto L_089B32F4;
    case 811u: goto L_089B330C;
    case 812u: goto L_089B3324;
    case 813u: goto L_089B3330;
    case 814u: goto L_089B3338;
    case 815u: goto L_089B334C;
    case 816u: goto L_089B3354;
    case 817u: goto L_089B335C;
    case 818u: goto L_089B3364;
    case 819u: goto L_089B3374;
    case 820u: goto L_089B3380;
    case 821u: goto L_089B3388;
    case 822u: goto L_089B3398;
    case 823u: goto L_089B33B4;
    case 824u: goto L_089B33BC;
    case 825u: goto L_089B33C8;
    case 826u: goto L_089B33D0;
    case 827u: goto L_089B33D8;
    case 828u: goto L_089B33E0;
    case 829u: goto L_089B33F4;
    case 830u: goto L_089B3418;
    case 831u: goto L_089B3420;
    case 832u: goto L_089B343C;
    case 833u: goto L_089B3444;
    case 834u: goto L_089B3450;
    case 835u: goto L_089B3458;
    case 836u: goto L_089B3464;
    case 837u: goto L_089B346C;
    case 838u: goto L_089B3480;
    case 839u: goto L_089B348C;
    case 840u: goto L_089B34AC;
    case 841u: goto L_089B34B8;
    case 842u: goto L_089B34C4;
    case 843u: goto L_089B34CC;
    case 844u: goto L_089B34F0;
    case 845u: goto L_089B3500;
    case 846u: goto L_089B3518;
    case 847u: goto L_089B352C;
    case 848u: goto L_089B3534;
    case 849u: goto L_089B353C;
    case 850u: goto L_089B3548;
    case 851u: goto L_089B3550;
    case 852u: goto L_089B355C;
    case 853u: goto L_089B3568;
    case 854u: goto L_089B3578;
    case 855u: goto L_089B3580;
    case 856u: goto L_089B3588;
    case 857u: goto L_089B3598;
    case 858u: goto L_089B35A4;
    case 859u: goto L_089B35B4;
    case 860u: goto L_089B35C0;
    case 861u: goto L_089B35C8;
    case 862u: goto L_089B35DC;
    case 863u: goto L_089B35E8;
    case 864u: goto L_089B3604;
    case 865u: goto L_089B3620;
    case 866u: goto L_089B364C;
    case 867u: goto L_089B3658;
    case 868u: goto L_089B3660;
    case 869u: goto L_089B3674;
    case 870u: goto L_089B3684;
    case 871u: goto L_089B3694;
    case 872u: goto L_089B36A4;
    case 873u: goto L_089B36AC;
    case 874u: goto L_089B36B4;
    case 875u: goto L_089B36C0;
    case 876u: goto L_089B36D0;
    case 877u: goto L_089B36D8;
    case 878u: goto L_089B36E0;
    case 879u: goto L_089B36E8;
    case 880u: goto L_089B36F0;
    case 881u: goto L_089B36F8;
    case 882u: goto L_089B3700;
    case 883u: goto L_089B3714;
    case 884u: goto L_089B3720;
    case 885u: goto L_089B372C;
    case 886u: goto L_089B3738;
    case 887u: goto L_089B3744;
    case 888u: goto L_089B3764;
    case 889u: goto L_089B3780;
    case 890u: goto L_089B3798;
    case 891u: goto L_089B37A0;
    case 892u: goto L_089B37A8;
    case 893u: goto L_089B37B0;
    case 894u: goto L_089B37C0;
    case 895u: goto L_089B37C8;
    case 896u: goto L_089B37E8;
    case 897u: goto L_089B37F0;
    case 898u: goto L_089B3810;
    case 899u: goto L_089B381C;
    case 900u: goto L_089B3828;
    case 901u: goto L_089B3830;
    case 902u: goto L_089B3840;
    case 903u: goto L_089B384C;
    case 904u: goto L_089B3858;
    case 905u: goto L_089B3864;
    case 906u: goto L_089B3870;
    case 907u: goto L_089B3878;
    case 908u: goto L_089B3880;
    case 909u: goto L_089B388C;
    case 910u: goto L_089B389C;
    case 911u: goto L_089B38AC;
    case 912u: goto L_089B38C0;
    case 913u: goto L_089B38DC;
    case 914u: goto L_089B38E4;
    case 915u: goto L_089B38EC;
    case 916u: goto L_089B38F8;
    case 917u: goto L_089B3900;
    case 918u: goto L_089B390C;
    case 919u: goto L_089B3914;
    case 920u: goto L_089B3920;
    case 921u: goto L_089B393C;
    case 922u: goto L_089B3944;
    case 923u: goto L_089B394C;
    case 924u: goto L_089B3968;
    case 925u: goto L_089B3970;
    case 926u: goto L_089B3980;
    case 927u: goto L_089B398C;
    case 928u: goto L_089B3998;
    case 929u: goto L_089B39A8;
    case 930u: goto L_089B39B8;
    case 931u: goto L_089B39C8;
    case 932u: goto L_089B39D8;
    case 933u: goto L_089B39E0;
    case 934u: goto L_089B39E8;
    case 935u: goto L_089B39F4;
    case 936u: goto L_089B3A0C;
    case 937u: goto L_089B3A40;
    case 938u: goto L_089B3A4C;
    case 939u: goto L_089B3A58;
    case 940u: goto L_089B3A64;
    case 941u: goto L_089B3A74;
    case 942u: goto L_089B3A84;
    case 943u: goto L_089B3A94;
    case 944u: goto L_089B3AA4;
    case 945u: goto L_089B3AB4;
    case 946u: goto L_089B3AC0;
    case 947u: goto L_089B3AD0;
    case 948u: goto L_089B3AD8;
    case 949u: goto L_089B3AE0;
    case 950u: goto L_089B3B00;
    case 951u: goto L_089B3B1C;
    case 952u: goto L_089B3B30;
    case 953u: goto L_089B3B40;
    case 954u: goto L_089B3B80;
    case 955u: goto L_089B3B98;
    case 956u: goto L_089B3BA8;
    case 957u: goto L_089B3BBC;
    case 958u: goto L_089B3BC4;
    case 959u: goto L_089B3BCC;
    case 960u: goto L_089B3BD4;
    case 961u: goto L_089B3BE0;
    case 962u: goto L_089B3BE8;
    case 963u: goto L_089B3BFC;
    case 964u: goto L_089B3C0C;
    case 965u: goto L_089B3C20;
    case 966u: goto L_089B3C24;
    case 967u: goto L_089B3C30;
    case 968u: goto L_089B3C44;
    case 969u: goto L_089B3C50;
    case 970u: goto L_089B3C60;
    case 971u: goto L_089B3C6C;
    case 972u: goto L_089B3C78;
    case 973u: goto L_089B3C80;
    case 974u: goto L_089B3C90;
    case 975u: goto L_089B3C9C;
    case 976u: goto L_089B3CA8;
    case 977u: goto L_089B3CC4;
    case 978u: goto L_089B3CCC;
    case 979u: goto L_089B3CD4;
    case 980u: goto L_089B3CE4;
    case 981u: goto L_089B3CF0;
    case 982u: goto L_089B3CF8;
    case 983u: goto L_089B3D0C;
    case 984u: goto L_089B3D14;
    case 985u: goto L_089B3D20;
    case 986u: goto L_089B3D3C;
    case 987u: goto L_089B3D74;
    case 988u: goto L_089B3D88;
    case 989u: goto L_089B3D98;
    case 990u: goto L_089B3DA0;
    case 991u: goto L_089B3DAC;
    case 992u: goto L_089B3DB4;
    case 993u: goto L_089B3DBC;
    case 994u: goto L_089B3DC4;
    case 995u: goto L_089B3DD0;
    case 996u: goto L_089B3DD8;
    case 997u: goto L_089B3DE0;
    case 998u: goto L_089B3DE8;
    case 999u: goto L_089B3DF8;
    case 1000u: goto L_089B3E10;
    case 1001u: goto L_089B3E28;
    case 1002u: goto L_089B3E34;
    case 1003u: goto L_089B3E3C;
    case 1004u: goto L_089B3E40;
    case 1005u: goto L_089B3E4C;
    case 1006u: goto L_089B3E74;
    case 1007u: goto L_089B3E80;
    case 1008u: goto L_089B3E88;
    case 1009u: goto L_089B3E98;
    case 1010u: goto L_089B3E9C;
    case 1011u: goto L_089B3EB8;
    case 1012u: goto L_089B3ED0;
    case 1013u: goto L_089B3ED4;
    case 1014u: goto L_089B3EDC;
    case 1015u: goto L_089B3EEC;
    case 1016u: goto L_089B3EF4;
    case 1017u: goto L_089B3F04;
    case 1018u: goto L_089B3F10;
    case 1019u: goto L_089B3F1C;
    case 1020u: goto L_089B3F24;
    case 1021u: goto L_089B3F34;
    case 1022u: goto L_089B3F44;
    case 1023u: goto L_089B3F50;
    case 1024u: goto L_089B3F60;
    case 1025u: goto L_089B3F70;
    case 1026u: goto L_089B3F7C;
    case 1027u: goto L_089B3F8C;
    case 1028u: goto L_089B3F9C;
    case 1029u: goto L_089B3FAC;
    case 1030u: goto L_089B3FB8;
    case 1031u: goto L_089B3FC8;
    case 1032u: goto L_089B3FD0;
    case 1033u: goto L_089B3FD8;
    case 1034u: goto L_089B3FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B0000:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B0060;
      }
      goto L_089B0044;
    }
L_089B0044:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0060;
      }
      goto L_089B0058;
    }
L_089B0058:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B006C;
      }
      goto L_089B0060;
    }
L_089B0060:
    ctx.gpr[31] = (0x089B0068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089B0068u) goto L_089B0068;
    return;
L_089B0068:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B006C;
L_089B006C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B16AC;
      }
      goto L_089B0074;
    }
L_089B0074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089B01DC;
      }
      goto L_089B0088;
    }
L_089B0088:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B01DC;
      }
      goto L_089B0090;
    }
L_089B0090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089B00D4;
      }
      goto L_089B00A4;
    }
L_089B00A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (0u | 8u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[5] = (0u | 1u);
        goto L_089B00D8;
    }
    goto L_089B00B4;
L_089B00B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[7] = (0u | 9u);
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[5] = (0u | 1u);
        goto L_089B00D8;
    }
    goto L_089B00C4;
L_089B00C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089B00DC;
      }
      goto L_089B00D4;
    }
L_089B00D4:
    ctx.gpr[5] = (0u | 1u);
    goto L_089B00D8;
L_089B00D8:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_089B00DC;
L_089B00DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B012C;
      }
      goto L_089B00E4;
    }
L_089B00E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B00F4u);
    ctx.gpr[6] = (0u | 187u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089B00F4u) goto L_089B00F4;
    return;
L_089B00F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0114;
      }
      goto L_089B0100;
    }
L_089B0100:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0110u);
    ctx.gpr[6] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089B0110u) goto L_089B0110;
    return;
L_089B0110:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_089B0114;
L_089B0114:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B01CC;
      }
      goto L_089B011C;
    }
L_089B011C:
    ctx.gpr[31] = (0x089B0124u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 107u, 0x0892892Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0124u) goto L_089B0124;
    return;
L_089B0124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16AC;
      }
      goto L_089B012C;
    }
L_089B012C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B013Cu);
    ctx.gpr[6] = (0u | 97u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089B013Cu) goto L_089B013C;
    return;
L_089B013C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B01BC;
      }
      goto L_089B0144;
    }
L_089B0144:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0154u);
    ctx.gpr[6] = (0u | 98u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089B0154u) goto L_089B0154;
    return;
L_089B0154:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B01AC;
      }
      goto L_089B015C;
    }
L_089B015C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B016Cu);
    ctx.gpr[6] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089B016Cu) goto L_089B016C;
    return;
L_089B016C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B019C;
      }
      goto L_089B0174;
    }
L_089B0174:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0184u);
    ctx.gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089B0184u) goto L_089B0184;
    return;
L_089B0184:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B01CC;
      }
      goto L_089B018C;
    }
L_089B018C:
    ctx.gpr[31] = (0x089B0194u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 107u, 0x0892892Cu>(ctx, &aot_mem) && ctx.pc == 0x089B0194u) goto L_089B0194;
    return;
L_089B0194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16AC;
      }
      goto L_089B019C;
    }
L_089B019C:
    ctx.gpr[31] = (0x089B01A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 107u, 0x0892892Cu>(ctx, &aot_mem) && ctx.pc == 0x089B01A4u) goto L_089B01A4;
    return;
L_089B01A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16AC;
      }
      goto L_089B01AC;
    }
L_089B01AC:
    ctx.gpr[31] = (0x089B01B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 107u, 0x0892892Cu>(ctx, &aot_mem) && ctx.pc == 0x089B01B4u) goto L_089B01B4;
    return;
L_089B01B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16AC;
      }
      goto L_089B01BC;
    }
L_089B01BC:
    ctx.gpr[31] = (0x089B01C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 107u, 0x0892892Cu>(ctx, &aot_mem) && ctx.pc == 0x089B01C4u) goto L_089B01C4;
    return;
L_089B01C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16AC;
      }
      goto L_089B01CC;
    }
L_089B01CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_089B01DC;
L_089B01DC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B03B0;
      }
      goto L_089B01E8;
    }
L_089B01E8:
    ctx.gpr[31] = (0x089B01F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 107u, 0x0892892Cu>(ctx, &aot_mem) && ctx.pc == 0x089B01F0u) goto L_089B01F0;
    return;
L_089B01F0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089B0208u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 719u, 0x08B1FB98u>(ctx, &aot_mem) && ctx.pc == 0x089B0208u) goto L_089B0208;
    return;
L_089B0208:
    ctx.gpr[31] = (0x089B0210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0210u) goto L_089B0210;
    return;
L_089B0210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B026C;
      }
      goto L_089B0218;
    }
L_089B0218:
    ctx.gpr[31] = (0x089B0220u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0220u) goto L_089B0220;
    return;
L_089B0220:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 130u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0248;
      }
      goto L_089B0230;
    }
L_089B0230:
    ctx.gpr[31] = (0x089B0238u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0238u) goto L_089B0238;
    return;
L_089B0238:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 131u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B026C;
      }
      goto L_089B0248;
    }
L_089B0248:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B026C;
      }
      goto L_089B0264;
    }
L_089B0264:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B026C;
L_089B026C:
    ctx.gpr[31] = (0x089B0274u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0274u) goto L_089B0274;
    return;
L_089B0274:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B02EC;
      }
      goto L_089B027C;
    }
L_089B027C:
    ctx.gpr[31] = (0x089B0284u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0284u) goto L_089B0284;
    return;
L_089B0284:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B02EC;
      }
      goto L_089B0294;
    }
L_089B0294:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B03A8;
      }
      goto L_089B02B0;
    }
L_089B02B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B02C4u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B02C4u) goto L_089B02C4;
    return;
L_089B02C4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B02D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B02D0u) goto L_089B02D0;
    return;
L_089B02D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = ctx.fpr[24] / ctx.fpr[13];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B03A8;
      }
      goto L_089B02EC;
    }
L_089B02EC:
    ctx.gpr[31] = (0x089B02F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B02F4u) goto L_089B02F4;
    return;
L_089B02F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B03A8;
      }
      goto L_089B02FC;
    }
L_089B02FC:
    ctx.gpr[31] = (0x089B0304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0304u) goto L_089B0304;
    return;
L_089B0304:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 200u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B03A8;
      }
      goto L_089B0314;
    }
L_089B0314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (16051u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.gpr[5] = (0u | 229u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_089B0358;
      }
      goto L_089B0330;
    }
L_089B0330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 232u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0358;
      }
      goto L_089B0344;
    }
L_089B0344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 231u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0364;
      }
      goto L_089B0358;
    }
L_089B0358:
    ctx.gpr[4] = (16140u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B0364;
L_089B0364:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B03A8;
      }
      goto L_089B0380;
    }
L_089B0380:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0394u);
    ctx.fpr[24] = ctx.fpr[12] - ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0394u) goto L_089B0394;
    return;
L_089B0394:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[20];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089B03A8;
L_089B03A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16AC;
      }
      goto L_089B03B0;
    }
L_089B03B0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B03D4;
      }
      goto L_089B03B8;
    }
L_089B03B8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B03D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x089B03D4u) goto L_089B03D4;
    return;
L_089B03D4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0400;
      }
      goto L_089B03FC;
    }
L_089B03FC:
    ctx.gpr[21] = (0u | 1u);
    goto L_089B0400;
L_089B0400:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B04D0;
      }
      goto L_089B0408;
    }
L_089B0408:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0428;
      }
      goto L_089B0418;
    }
L_089B0418:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0484;
      }
      goto L_089B0428;
    }
L_089B0428:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B0460;
      }
      goto L_089B0444;
    }
L_089B0444:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0460;
      }
      goto L_089B0458;
    }
L_089B0458:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B046C;
      }
      goto L_089B0460;
    }
L_089B0460:
    ctx.gpr[31] = (0x089B0468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089B0468u) goto L_089B0468;
    return;
L_089B0468:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B046C;
L_089B046C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B06D4;
      }
      goto L_089B0484;
    }
L_089B0484:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B04BC;
      }
      goto L_089B04A0;
    }
L_089B04A0:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B04BC;
      }
      goto L_089B04B4;
    }
L_089B04B4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B04C8;
      }
      goto L_089B04BC;
    }
L_089B04BC:
    ctx.gpr[31] = (0x089B04C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089B04C4u) goto L_089B04C4;
    return;
L_089B04C4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B04C8;
L_089B04C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B06D4;
      }
      goto L_089B04D0;
    }
L_089B04D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0620;
      }
      goto L_089B04E0;
    }
L_089B04E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B04F0u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x089B04F0u) goto L_089B04F0;
    return;
L_089B04F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0544;
      }
      goto L_089B04F8;
    }
L_089B04F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B0530;
      }
      goto L_089B0514;
    }
L_089B0514:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0530;
      }
      goto L_089B0528;
    }
L_089B0528:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B053C;
      }
      goto L_089B0530;
    }
L_089B0530:
    ctx.gpr[31] = (0x089B0538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089B0538u) goto L_089B0538;
    return;
L_089B0538:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B053C;
L_089B053C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B0618;
      }
      goto L_089B0544;
    }
L_089B0544:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0564;
      }
      goto L_089B0554;
    }
L_089B0554:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B05C0;
      }
      goto L_089B0564;
    }
L_089B0564:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B059C;
      }
      goto L_089B0580;
    }
L_089B0580:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B059C;
      }
      goto L_089B0594;
    }
L_089B0594:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B05A8;
      }
      goto L_089B059C;
    }
L_089B059C:
    ctx.gpr[31] = (0x089B05A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089B05A4u) goto L_089B05A4;
    return;
L_089B05A4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B05A8;
L_089B05A8:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B0618;
      }
      goto L_089B05C0;
    }
L_089B05C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B05F8;
      }
      goto L_089B05DC;
    }
L_089B05DC:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B05F8;
      }
      goto L_089B05F0;
    }
L_089B05F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B0604;
      }
      goto L_089B05F8;
    }
L_089B05F8:
    ctx.gpr[31] = (0x089B0600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089B0600u) goto L_089B0600;
    return;
L_089B0600:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B0604;
L_089B0604:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B0618;
L_089B0618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B06D4;
      }
      goto L_089B0620;
    }
L_089B0620:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B068C;
      }
      goto L_089B0630;
    }
L_089B0630:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B0668;
      }
      goto L_089B064C;
    }
L_089B064C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0668;
      }
      goto L_089B0660;
    }
L_089B0660:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B0674;
      }
      goto L_089B0668;
    }
L_089B0668:
    ctx.gpr[31] = (0x089B0670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089B0670u) goto L_089B0670;
    return;
L_089B0670:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B0674;
L_089B0674:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B06D4;
      }
      goto L_089B068C;
    }
L_089B068C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B06C4;
      }
      goto L_089B06A8;
    }
L_089B06A8:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B06C4;
      }
      goto L_089B06BC;
    }
L_089B06BC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B06D0;
      }
      goto L_089B06C4;
    }
L_089B06C4:
    ctx.gpr[31] = (0x089B06CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089B06CCu) goto L_089B06CC;
    return;
L_089B06CC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B06D0;
L_089B06D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B06D4;
L_089B06D4:
    ctx.gpr[31] = (0x089B06DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B06DCu) goto L_089B06DC;
    return;
L_089B06DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A84;
      }
      goto L_089B06E4;
    }
L_089B06E4:
    ctx.gpr[31] = (0x089B06ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B06ECu) goto L_089B06EC;
    return;
L_089B06EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 187 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 200 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B0754;
      }
      goto L_089B06FC;
    }
L_089B06FC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 130 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 175 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B072C;
      }
      goto L_089B0708;
    }
L_089B0708:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-59));
      if (branch_taken) {
          goto L_089B0A04;
      }
      goto L_089B0714;
    }
L_089B0714:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4448)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B072C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 182 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B0A04;
      }
      goto L_089B0734;
    }
L_089B0734:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-175));
      if (branch_taken) {
          goto L_089B0788;
      }
      goto L_089B073C;
    }
L_089B073C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4160)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B0754:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 212 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B0770;
      }
      goto L_089B075C;
    }
L_089B075C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 198 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A04;
      }
      goto L_089B0768;
    }
L_089B0768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B09DC;
      }
      goto L_089B0770;
    }
L_089B0770:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 214 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B0A04;
      }
      goto L_089B0778;
    }
L_089B0778:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B09DC;
      }
      goto L_089B0780;
    }
L_089B0780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A04;
      }
      goto L_089B0788;
    }
L_089B0788:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B0794;
    }
L_089B0794:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B079C;
    }
L_089B079C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0800;
      }
      goto L_089B07A4;
    }
L_089B07A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0800;
      }
      goto L_089B07B0;
    }
L_089B07B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0800;
      }
      goto L_089B07C0;
    }
L_089B07C0:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[31] = (0x089B07CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B07CCu) goto L_089B07CC;
    return;
L_089B07CC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B07D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B07D8u) goto L_089B07D8;
    return;
L_089B07D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13360)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13360)));
        goto L_089B07F8;
    }
    goto L_089B07F8;
L_089B07F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13360)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    goto L_089B0800;
L_089B0800:
    ctx.gpr[31] = (0x089B0808u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0808u) goto L_089B0808;
    return;
L_089B0808:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B0814u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0814u) goto L_089B0814;
    return;
L_089B0814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B082C;
    }
L_089B082C:
    ctx.gpr[31] = (0x089B0834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0834u) goto L_089B0834;
    return;
L_089B0834:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B0840u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0840u) goto L_089B0840;
    return;
L_089B0840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[20] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089B086C;
    }
    goto L_089B086C;
L_089B086C:
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B0878;
    }
L_089B0878:
    ctx.gpr[31] = (0x089B0880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0880u) goto L_089B0880;
    return;
L_089B0880:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B088Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B088Cu) goto L_089B088C;
    return;
L_089B088C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B08A8;
    }
L_089B08A8:
    ctx.gpr[31] = (0x089B08B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B08B0u) goto L_089B08B0;
    return;
L_089B08B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B08BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B08BCu) goto L_089B08BC;
    return;
L_089B08BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[20] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089B08E8;
    }
    goto L_089B08E8;
L_089B08E8:
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B08FC;
    }
L_089B08FC:
    ctx.gpr[31] = (0x089B0904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0904u) goto L_089B0904;
    return;
L_089B0904:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B0910u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0910u) goto L_089B0910;
    return;
L_089B0910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B092C;
    }
L_089B092C:
    ctx.gpr[18] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089B093Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B093Cu) goto L_089B093C;
    return;
L_089B093C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B0948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0948u) goto L_089B0948;
    return;
L_089B0948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13356)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089B096C;
    }
    goto L_089B096C;
L_089B096C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13356)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[22] = ctx.fpr[12] / ctx.fpr[22];
    goto L_089B0980;
L_089B0980:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B09DC;
      }
      goto L_089B0988;
    }
L_089B0988:
    ctx.gpr[18] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x089B0998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0998u) goto L_089B0998;
    return;
L_089B0998:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B09A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B09A4u) goto L_089B09A4;
    return;
L_089B09A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13360)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_089B09C8;
    }
    goto L_089B09C8;
L_089B09C8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13360)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[22] = ctx.fpr[12] / ctx.fpr[22];
    goto L_089B09DC;
L_089B09DC:
    ctx.gpr[31] = (0x089B09E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B09E4u) goto L_089B09E4;
    return;
L_089B09E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B09F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B09F0u) goto L_089B09F0;
    return;
L_089B09F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B0A04;
    }
L_089B0A04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B0A44;
      }
      goto L_089B0A14;
    }
L_089B0A14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 8u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089B0A48;
    }
    goto L_089B0A24;
L_089B0A24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 9u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089B0A48;
    }
    goto L_089B0A34;
L_089B0A34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089B0A4C;
      }
      goto L_089B0A44;
    }
L_089B0A44:
    ctx.gpr[4] = (0u | 1u);
    goto L_089B0A48;
L_089B0A48:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089B0A4C;
L_089B0A4C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A5C;
      }
      goto L_089B0A54;
    }
L_089B0A54:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B0A7C;
      }
      goto L_089B0A5C;
    }
L_089B0A5C:
    ctx.gpr[31] = (0x089B0A64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089B0A64u) goto L_089B0A64;
    return;
L_089B0A64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0A74;
      }
      goto L_089B0A6C;
    }
L_089B0A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B0A7C;
      }
      goto L_089B0A74;
    }
L_089B0A74:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B0A7C;
L_089B0A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B0A84;
    }
L_089B0A84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B0AC4;
      }
      goto L_089B0A94;
    }
L_089B0A94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 8u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089B0AC8;
    }
    goto L_089B0AA4;
L_089B0AA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 9u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089B0AC8;
    }
    goto L_089B0AB4;
L_089B0AB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089B0ACC;
      }
      goto L_089B0AC4;
    }
L_089B0AC4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089B0AC8;
L_089B0AC8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089B0ACC;
L_089B0ACC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0ADC;
      }
      goto L_089B0AD4;
    }
L_089B0AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B0ADC;
    }
L_089B0ADC:
    ctx.gpr[31] = (0x089B0AE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089B0AE4u) goto L_089B0AE4;
    return;
L_089B0AE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0AF4;
      }
      goto L_089B0AEC;
    }
L_089B0AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B0AFC;
      }
      goto L_089B0AF4;
    }
L_089B0AF4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089B0AFC;
L_089B0AFC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B0B1C;
      }
      goto L_089B0B08;
    }
L_089B0B08:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
          goto L_089B0B40;
      }
      goto L_089B0B1C;
    }
L_089B0B1C:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089B0B38u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 395u, 0x089AA270u>(ctx, &aot_mem) && ctx.pc == 0x089B0B38u) goto L_089B0B38;
    return;
L_089B0B38:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    goto L_089B0B40;
L_089B0B40:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B0B70;
      }
      goto L_089B0B5C;
    }
L_089B0B5C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089B0B68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 719u, 0x08B1FB98u>(ctx, &aot_mem) && ctx.pc == 0x089B0B68u) goto L_089B0B68;
    return;
L_089B0B68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0BA4;
      }
      goto L_089B0B70;
    }
L_089B0B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0BA4;
      }
      goto L_089B0B80;
    }
L_089B0B80:
    ctx.gpr[31] = (0x089B0B88u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem) && ctx.pc == 0x089B0B88u) goto L_089B0B88;
    return;
L_089B0B88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0BA4;
      }
      goto L_089B0B90;
    }
L_089B0B90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B0BA4;
L_089B0BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0BD8;
      }
      goto L_089B0BB4;
    }
L_089B0BB4:
    ctx.gpr[31] = (0x089B0BBCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem) && ctx.pc == 0x089B0BBCu) goto L_089B0BBC;
    return;
L_089B0BBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0BD8;
      }
      goto L_089B0BC4;
    }
L_089B0BC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B0BD8;
L_089B0BD8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_089B0BEC;
      }
      goto L_089B0BE4;
    }
L_089B0BE4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B0CC4;
      }
      goto L_089B0BEC;
    }
L_089B0BEC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15363u << 16u);
      if (branch_taken) {
          goto L_089B0C24;
      }
      goto L_089B0C08;
    }
L_089B0C08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0CC4;
      }
      goto L_089B0C18;
    }
L_089B0C18:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0CC4;
      }
      goto L_089B0C20;
    }
L_089B0C20:
    ctx.gpr[4] = (15363u << 16u);
    goto L_089B0C24;
L_089B0C24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0C84;
      }
      goto L_089B0C58;
    }
L_089B0C58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x089B0C7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x089B0C7Cu) goto L_089B0C7C;
    return;
L_089B0C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0CC4;
      }
      goto L_089B0C84;
    }
L_089B0C84:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089B0CA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x089B0CA0u) goto L_089B0CA0;
    return;
L_089B0CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089B0CB8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0CB8u) goto L_089B0CB8;
    return;
L_089B0CB8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B0CC4;
L_089B0CC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B0D2C;
      }
      goto L_089B0CDC;
    }
L_089B0CDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B0D1C;
      }
      goto L_089B0CEC;
    }
L_089B0CEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 8u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089B0D20;
    }
    goto L_089B0CFC;
L_089B0CFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 9u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089B0D20;
    }
    goto L_089B0D0C;
L_089B0D0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089B0D24;
      }
      goto L_089B0D1C;
    }
L_089B0D1C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089B0D20;
L_089B0D20:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089B0D24;
L_089B0D24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B10B4;
      }
      goto L_089B0D2C;
    }
L_089B0D2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B0D6C;
      }
      goto L_089B0D3C;
    }
L_089B0D3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 8u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089B0D70;
    }
    goto L_089B0D4C;
L_089B0D4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 9u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089B0D70;
    }
    goto L_089B0D5C;
L_089B0D5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089B0D74;
      }
      goto L_089B0D6C;
    }
L_089B0D6C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089B0D70;
L_089B0D70:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089B0D74;
L_089B0D74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0F74;
      }
      goto L_089B0D7C;
    }
L_089B0D7C:
    ctx.gpr[31] = (0x089B0D84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0D84u) goto L_089B0D84;
    return;
L_089B0D84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0F74;
      }
      goto L_089B0D8C;
    }
L_089B0D8C:
    ctx.gpr[31] = (0x089B0D94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0D94u) goto L_089B0D94;
    return;
L_089B0D94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 198u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0DBC;
      }
      goto L_089B0DA4;
    }
L_089B0DA4:
    ctx.gpr[31] = (0x089B0DACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0DACu) goto L_089B0DAC;
    return;
L_089B0DAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 199u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0DCC;
      }
      goto L_089B0DBC;
    }
L_089B0DBC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[20];
      if (branch_taken) {
          goto L_089B0F28;
      }
      goto L_089B0DCC;
    }
L_089B0DCC:
    ctx.gpr[31] = (0x089B0DD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0DD4u) goto L_089B0DD4;
    return;
L_089B0DD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 208u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0E2C;
      }
      goto L_089B0DE4;
    }
L_089B0DE4:
    ctx.gpr[31] = (0x089B0DECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0DECu) goto L_089B0DEC;
    return;
L_089B0DEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 209u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0E2C;
      }
      goto L_089B0DFC;
    }
L_089B0DFC:
    ctx.gpr[31] = (0x089B0E04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0E04u) goto L_089B0E04;
    return;
L_089B0E04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 212u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0E2C;
      }
      goto L_089B0E14;
    }
L_089B0E14:
    ctx.gpr[31] = (0x089B0E1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0E1Cu) goto L_089B0E1C;
    return;
L_089B0E1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 213u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0E34;
      }
      goto L_089B0E2C;
    }
L_089B0E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B0F28;
      }
      goto L_089B0E34;
    }
L_089B0E34:
    ctx.gpr[31] = (0x089B0E3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0E3Cu) goto L_089B0E3C;
    return;
L_089B0E3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 194u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0E64;
      }
      goto L_089B0E4C;
    }
L_089B0E4C:
    ctx.gpr[31] = (0x089B0E54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0E54u) goto L_089B0E54;
    return;
L_089B0E54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 195u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0EB0;
      }
      goto L_089B0E64;
    }
L_089B0E64:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0E74u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0E74u) goto L_089B0E74;
    return;
L_089B0E74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B0E84u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0E84u) goto L_089B0E84;
    return;
L_089B0E84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089B0EA8;
    }
    goto L_089B0EA8;
L_089B0EA8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B0F28;
      }
      goto L_089B0EB0;
    }
L_089B0EB0:
    ctx.gpr[31] = (0x089B0EB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0EB8u) goto L_089B0EB8;
    return;
L_089B0EB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0EF0;
      }
      goto L_089B0EC8;
    }
L_089B0EC8:
    ctx.gpr[31] = (0x089B0ED0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0ED0u) goto L_089B0ED0;
    return;
L_089B0ED0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B0EDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0EDCu) goto L_089B0EDC;
    return;
L_089B0EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0F28;
      }
      goto L_089B0EF0;
    }
L_089B0EF0:
    ctx.gpr[31] = (0x089B0EF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0EF8u) goto L_089B0EF8;
    return;
L_089B0EF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 187u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0F24;
      }
      goto L_089B0F08;
    }
L_089B0F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B0F24;
      }
      goto L_089B0F18;
    }
L_089B0F18:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B0F28;
      }
      goto L_089B0F24;
    }
L_089B0F24:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    goto L_089B0F28;
L_089B0F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B0F40u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B0F40u) goto L_089B0F40;
    return;
L_089B0F40:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16261u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B0F74;
    }
L_089B0F74:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B0F98;
      }
      goto L_089B0F7C;
    }
L_089B0F7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B0F98;
    }
L_089B0F98:
    ctx.gpr[31] = (0x089B0FA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0FA0u) goto L_089B0FA0;
    return;
L_089B0FA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1034;
      }
      goto L_089B0FA8;
    }
L_089B0FA8:
    ctx.gpr[31] = (0x089B0FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0FB0u) goto L_089B0FB0;
    return;
L_089B0FB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 175u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1034;
      }
      goto L_089B0FC0;
    }
L_089B0FC0:
    ctx.gpr[31] = (0x089B0FC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0FC8u) goto L_089B0FC8;
    return;
L_089B0FC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 176u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1034;
      }
      goto L_089B0FD8;
    }
L_089B0FD8:
    ctx.gpr[31] = (0x089B0FE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0FE0u) goto L_089B0FE0;
    return;
L_089B0FE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 180u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1034;
      }
      goto L_089B0FF0;
    }
L_089B0FF0:
    ctx.gpr[31] = (0x089B0FF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B0FF8u) goto L_089B0FF8;
    return;
L_089B0FF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 179u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1034;
      }
      goto L_089B1008;
    }
L_089B1008:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[31] = (0x089B102Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x089B102Cu) goto L_089B102C;
    return;
L_089B102C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B1034;
    }
L_089B1034:
    ctx.gpr[31] = (0x089B103Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B103Cu) goto L_089B103C;
    return;
L_089B103C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B1044;
    }
L_089B1044:
    ctx.gpr[31] = (0x089B104Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B104Cu) goto L_089B104C;
    return;
L_089B104C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 176u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B105C;
    }
L_089B105C:
    ctx.gpr[31] = (0x089B1064u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B1064u) goto L_089B1064;
    return;
L_089B1064:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 180u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B1074;
    }
L_089B1074:
    ctx.gpr[31] = (0x089B107Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B107Cu) goto L_089B107C;
    return;
L_089B107C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B1088u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B1088u) goto L_089B1088;
    return;
L_089B1088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B10B4;
    }
L_089B10B4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B10BC;
    }
L_089B10BC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B10D8;
    }
L_089B10D8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B10FC;
      }
      goto L_089B10E0;
    }
L_089B10E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B10FC;
    }
L_089B10FC:
    ctx.gpr[31] = (0x089B1104u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B1104u) goto L_089B1104;
    return;
L_089B1104:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1220;
      }
      goto L_089B110C;
    }
L_089B110C:
    ctx.gpr[31] = (0x089B1114u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B1114u) goto L_089B1114;
    return;
L_089B1114:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 91u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B11B4;
      }
      goto L_089B1124;
    }
L_089B1124:
    ctx.gpr[31] = (0x089B112Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B112Cu) goto L_089B112C;
    return;
L_089B112C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 71u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B11B4;
      }
      goto L_089B113C;
    }
L_089B113C:
    ctx.gpr[31] = (0x089B1144u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B1144u) goto L_089B1144;
    return;
L_089B1144:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 92u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B11B4;
      }
      goto L_089B1154;
    }
L_089B1154:
    ctx.gpr[31] = (0x089B115Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B115Cu) goto L_089B115C;
    return;
L_089B115C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 72u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B11B4;
      }
      goto L_089B116C;
    }
L_089B116C:
    ctx.gpr[31] = (0x089B1174u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B1174u) goto L_089B1174;
    return;
L_089B1174:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B11B4;
      }
      goto L_089B1184;
    }
L_089B1184:
    ctx.gpr[31] = (0x089B118Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B118Cu) goto L_089B118C;
    return;
L_089B118C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 175u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B11B4;
      }
      goto L_089B119C;
    }
L_089B119C:
    ctx.gpr[31] = (0x089B11A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B11A4u) goto L_089B11A4;
    return;
L_089B11A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 179u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1220;
      }
      goto L_089B11B4;
    }
L_089B11B4:
    ctx.gpr[31] = (0x089B11BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B11BCu) goto L_089B11BC;
    return;
L_089B11BC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089B11C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B11C8u) goto L_089B11C8;
    return;
L_089B11C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[24] = ctx.fpr[12] - ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B11E8u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B11E8u) goto L_089B11E8;
    return;
L_089B11E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089B11FC;
    }
    goto L_089B11FC;
L_089B11FC:
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B1220;
    }
L_089B1220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1264;
      }
      goto L_089B1230;
    }
L_089B1230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1264;
      }
      goto L_089B1240;
    }
L_089B1240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B1250;
    }
L_089B1250:
    ctx.gpr[31] = (0x089B1258u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x089B1258u) goto L_089B1258;
    return;
L_089B1258:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B1264;
    }
L_089B1264:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B128C;
      }
      goto L_089B1280;
    }
L_089B1280:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B1298;
      }
      goto L_089B128C;
    }
L_089B128C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B1298;
L_089B1298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B12EC;
      }
      goto L_089B12AC;
    }
L_089B12AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
        goto L_089B12D0;
    }
    goto L_089B12BC;
L_089B12BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B12E8;
      }
      goto L_089B12CC;
    }
L_089B12CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    goto L_089B12D0;
L_089B12D0:
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B12E8;
      }
      goto L_089B12E0;
    }
L_089B12E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089B12EC;
      }
      goto L_089B12E8;
    }
L_089B12E8:
    ctx.gpr[20] = (0u | 1u);
    goto L_089B12EC;
L_089B12EC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1434;
      }
      goto L_089B12F4;
    }
L_089B12F4:
    ctx.gpr[31] = (0x089B12FCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem) && ctx.pc == 0x089B12FCu) goto L_089B12FC;
    return;
L_089B12FC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[6] = (17430u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089B1330;
      }
      goto L_089B1324;
    }
L_089B1324:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    goto L_089B1330;
L_089B1330:
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1350;
      }
      goto L_089B1344;
    }
L_089B1344:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1354;
      }
      goto L_089B1350;
    }
L_089B1350:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_089B1354;
L_089B1354:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B1374;
      }
      goto L_089B1368;
    }
L_089B1368:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(804), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089B1374;
L_089B1374:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(808), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(800));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16457u << 16u);
      if (branch_taken) {
          goto L_089B13E8;
      }
      goto L_089B13D4;
    }
L_089B13D4:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
      if (branch_taken) {
          goto L_089B1414;
      }
      goto L_089B13E8;
    }
L_089B13E8:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089B1418;
      }
      goto L_089B1404;
    }
L_089B1404:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    goto L_089B1414;
L_089B1414:
    ctx.gpr[4] = (16256u << 16u);
    goto L_089B1418;
L_089B1418:
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B143C;
      }
      goto L_089B1434;
    }
L_089B1434:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B143C;
L_089B143C:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B165C;
      }
      goto L_089B1458;
    }
L_089B1458:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B165C;
      }
      goto L_089B1460;
    }
L_089B1460:
    ctx.gpr[31] = (0x089B1468u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x089B1468u) goto L_089B1468;
    return;
L_089B1468:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B165C;
      }
      goto L_089B1474;
    }
L_089B1474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B165C;
      }
      goto L_089B1484;
    }
L_089B1484:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B1494u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x089B1494u) goto L_089B1494;
    return;
L_089B1494:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B14B4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089B1C20;
L_089B14B4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1534;
      }
      goto L_089B1524;
    }
L_089B1524:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1624;
      }
      goto L_089B1534;
    }
L_089B1534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1594;
      }
      goto L_089B1558;
    }
L_089B1558:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1578;
      }
      goto L_089B1568;
    }
L_089B1568:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1594;
      }
      goto L_089B1578;
    }
L_089B1578:
    ctx.gpr[5] = (49097u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x089B158Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x089B158Cu) goto L_089B158C;
    return;
L_089B158C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B15F4;
      }
      goto L_089B1594;
    }
L_089B1594:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B15E0;
      }
      goto L_089B15A4;
    }
L_089B15A4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B15C4;
      }
      goto L_089B15B4;
    }
L_089B15B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B15E0;
      }
      goto L_089B15C4;
    }
L_089B15C4:
    ctx.gpr[5] = (16329u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x089B15D8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x089B15D8u) goto L_089B15D8;
    return;
L_089B15D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B15F4;
      }
      goto L_089B15E0;
    }
L_089B15E0:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x089B15F4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x089B15F4u) goto L_089B15F4;
    return;
L_089B15F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x089B1600u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088603A0u>(ctx, &aot_mem) && ctx.pc == 0x089B1600u) goto L_089B1600;
    return;
L_089B1600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1624;
      }
      goto L_089B1610;
    }
L_089B1610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1624;
      }
      goto L_089B161C;
    }
L_089B161C:
    ctx.gpr[31] = (0x089B1624u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089B1624u) goto L_089B1624;
    return;
L_089B1624:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[31] = (0x089B1630u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x089B1630u) goto L_089B1630;
    return;
L_089B1630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16AC;
      }
      goto L_089B1640;
    }
L_089B1640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16AC;
      }
      goto L_089B164C;
    }
L_089B164C:
    ctx.gpr[31] = (0x089B1654u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089B1654u) goto L_089B1654;
    return;
L_089B1654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B16AC;
      }
      goto L_089B165C;
    }
L_089B165C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B1698u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x089B1698u) goto L_089B1698;
    return;
L_089B1698:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[31] = (0x089B16ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x089B16ACu) goto L_089B16AC;
    return;
L_089B16AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B16E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089B1740;
      }
      goto L_089B1730;
    }
L_089B1730:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089B1740;
L_089B1740:
    ctx.gpr[31] = (0x089B1748u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x089B1748u) goto L_089B1748;
    return;
L_089B1748:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B1764;
      }
      goto L_089B1754;
    }
L_089B1754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B1914;
      }
      goto L_089B1764;
    }
L_089B1764:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B1814;
      }
      goto L_089B1770;
    }
L_089B1770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x089B1780u);
    ctx.gpr[6] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1780u) goto L_089B1780;
    return;
L_089B1780:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
        goto L_089B17A4;
    }
    goto L_089B179C;
L_089B179C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B17B8;
      }
      goto L_089B17A4;
    }
L_089B17A4:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
        goto L_089B17B8;
    }
    goto L_089B17B0;
L_089B17B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B17B8;
      }
      goto L_089B17B8;
    }
L_089B17B8:
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
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B17D4;
      }
      goto L_089B17C8;
    }
L_089B17C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B17D4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 682u, 0x08907020u>(ctx, &aot_mem) && ctx.pc == 0x089B17D4u) goto L_089B17D4;
    return;
L_089B17D4:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B1804u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 76u, 0x089A8A60u>(ctx, &aot_mem) && ctx.pc == 0x089B1804u) goto L_089B1804;
    return;
L_089B1804:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1BF4;
      }
      goto L_089B1814;
    }
L_089B1814:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(376));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089B1830u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1830u) goto L_089B1830;
    return;
L_089B1830:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B1840u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x089B1840u) goto L_089B1840;
    return;
L_089B1840:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089B1850u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1850u) goto L_089B1850;
    return;
L_089B1850:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
        goto L_089B1874;
    }
    goto L_089B186C;
L_089B186C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1888;
      }
      goto L_089B1874;
    }
L_089B1874:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_089B1888;
      }
      goto L_089B1880;
    }
L_089B1880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1888;
      }
      goto L_089B1888;
    }
L_089B1888:
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
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B18A4;
      }
      goto L_089B1898;
    }
L_089B1898:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B18A4u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 682u, 0x08907020u>(ctx, &aot_mem) && ctx.pc == 0x089B18A4u) goto L_089B18A4;
    return;
L_089B18A4:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_089B18B8;
      }
      goto L_089B18B0;
    }
L_089B18B0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B18C4;
      }
      goto L_089B18B8;
    }
L_089B18B8:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(176));
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
    goto L_089B18C4;
L_089B18C4:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_089B18D8;
      }
      goto L_089B18D0;
    }
L_089B18D0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B18E4;
      }
      goto L_089B18D8;
    }
L_089B18D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B18E4;
L_089B18E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B190Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 419u, 0x08B01804u>(ctx, &aot_mem) && ctx.pc == 0x089B190Cu) goto L_089B190C;
    return;
L_089B190C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1BF4;
      }
      goto L_089B1914;
    }
L_089B1914:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_089B195C;
      }
      goto L_089B1924;
    }
L_089B1924:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_089B1934;
      }
      goto L_089B192C;
    }
L_089B192C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B195C;
      }
      goto L_089B1934;
    }
L_089B1934:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089B1948u);
    ctx.gpr[6] = (0u | 175u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1948u) goto L_089B1948;
    return;
L_089B1948:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B19E8;
      }
      goto L_089B195C;
    }
L_089B195C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1998;
      }
      goto L_089B1974;
    }
L_089B1974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B1984u);
    ctx.gpr[6] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1984u) goto L_089B1984;
    return;
L_089B1984:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B19E8;
      }
      goto L_089B1998;
    }
L_089B1998:
    ctx.gpr[31] = (0x089B19A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 542u, 0x08B02090u>(ctx, &aot_mem) && ctx.pc == 0x089B19A0u) goto L_089B19A0;
    return;
L_089B19A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B19CC;
      }
      goto L_089B19A8;
    }
L_089B19A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B19B8u);
    ctx.gpr[6] = (0u | 78u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B19B8u) goto L_089B19B8;
    return;
L_089B19B8:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B19E8;
      }
      goto L_089B19CC;
    }
L_089B19CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B19DCu);
    ctx.gpr[6] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B19DCu) goto L_089B19DC;
    return;
L_089B19DC:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B19E8;
L_089B19E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B1A34;
      }
      goto L_089B19F4;
    }
L_089B19F4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B1B10;
      }
      goto L_089B1A00;
    }
L_089B1A00:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1ABC;
      }
      goto L_089B1A08;
    }
L_089B1A08:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(176));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1B64;
      }
      goto L_089B1A34;
    }
L_089B1A34:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B1A6C;
      }
      goto L_089B1A3C;
    }
L_089B1A3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1B10;
      }
      goto L_089B1A44;
    }
L_089B1A44:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(176));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1B64;
      }
      goto L_089B1A6C;
    }
L_089B1A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
        goto L_089B1A84;
    }
    goto L_089B1A7C;
L_089B1A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1A98;
      }
      goto L_089B1A84;
    }
L_089B1A84:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
        goto L_089B1A98;
    }
    goto L_089B1A90;
L_089B1A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1A98;
      }
      goto L_089B1A98;
    }
L_089B1A98:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1B64;
      }
      goto L_089B1ABC;
    }
L_089B1ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
        goto L_089B1AD4;
    }
    goto L_089B1ACC;
L_089B1ACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1AE8;
      }
      goto L_089B1AD4;
    }
L_089B1AD4:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
        goto L_089B1AE8;
    }
    goto L_089B1AE0;
L_089B1AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1AE8;
      }
      goto L_089B1AE8;
    }
L_089B1AE8:
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1B64;
      }
      goto L_089B1B10;
    }
L_089B1B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
        goto L_089B1B28;
    }
    goto L_089B1B20;
L_089B1B20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1B3C;
      }
      goto L_089B1B28;
    }
L_089B1B28:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
        goto L_089B1B3C;
    }
    goto L_089B1B34;
L_089B1B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1B3C;
      }
      goto L_089B1B3C;
    }
L_089B1B3C:
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B1B64;
L_089B1B64:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B1BC0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x089B1BC0u) goto L_089B1BC0;
    return;
L_089B1BC0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089B1BF4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x089B1BF4u) goto L_089B1BF4;
    return;
L_089B1BF4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B1C20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089B1C84;
      }
      goto L_089B1C74;
    }
L_089B1C74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089B1C84;
L_089B1C84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B1E38;
      }
      goto L_089B1C94;
    }
L_089B1C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
        goto L_089B1CAC;
    }
    goto L_089B1CA4;
L_089B1CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1CC0;
      }
      goto L_089B1CAC;
    }
L_089B1CAC:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_089B1CC0;
      }
      goto L_089B1CB8;
    }
L_089B1CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1CC0;
      }
      goto L_089B1CC0;
    }
L_089B1CC0:
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
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1CDC;
      }
      goto L_089B1CD4;
    }
L_089B1CD4:
    ctx.gpr[31] = (0x089B1CDCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 682u, 0x08907020u>(ctx, &aot_mem) && ctx.pc == 0x089B1CDCu) goto L_089B1CDC;
    return;
L_089B1CDC:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B1D50;
      }
      goto L_089B1CE8;
    }
L_089B1CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x089B1CF8u);
    ctx.gpr[6] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1CF8u) goto L_089B1CF8;
    return;
L_089B1CF8:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1D48;
      }
      goto L_089B1D2C;
    }
L_089B1D2C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B1D40u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 76u, 0x089A8A60u>(ctx, &aot_mem) && ctx.pc == 0x089B1D40u) goto L_089B1D40;
    return;
L_089B1D40:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    goto L_089B1D48;
L_089B1D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B20C0;
      }
      goto L_089B1D50;
    }
L_089B1D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(376));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B1D6Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B1D6Cu) goto L_089B1D6C;
    return;
L_089B1D6C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B1D7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 294u, 0x08A59500u>(ctx, &aot_mem) && ctx.pc == 0x089B1D7Cu) goto L_089B1D7C;
    return;
L_089B1D7C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089B1D8Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1D8Cu) goto L_089B1D8C;
    return;
L_089B1D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (0u | 11u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089B1DB8;
      }
      goto L_089B1DAC;
    }
L_089B1DAC:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B1DC8;
      }
      goto L_089B1DB8;
    }
L_089B1DB8:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B1DC8;
L_089B1DC8:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_089B1DDC;
      }
      goto L_089B1DD4;
    }
L_089B1DD4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B1DE8;
      }
      goto L_089B1DDC;
    }
L_089B1DDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B1DE8;
L_089B1DE8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1E30;
      }
      goto L_089B1E14;
    }
L_089B1E14:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B1E28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 76u, 0x089A8A60u>(ctx, &aot_mem) && ctx.pc == 0x089B1E28u) goto L_089B1E28;
    return;
L_089B1E28:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    goto L_089B1E30;
L_089B1E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B20C0;
      }
      goto L_089B1E38;
    }
L_089B1E38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_089B1E80;
      }
      goto L_089B1E48;
    }
L_089B1E48:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_089B1E58;
      }
      goto L_089B1E50;
    }
L_089B1E50:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B1E80;
      }
      goto L_089B1E58;
    }
L_089B1E58:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089B1E6Cu);
    ctx.gpr[6] = (0u | 175u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1E6Cu) goto L_089B1E6C;
    return;
L_089B1E6C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1F0C;
      }
      goto L_089B1E80;
    }
L_089B1E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_089B1EBC;
      }
      goto L_089B1E98;
    }
L_089B1E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B1EA8u);
    ctx.gpr[6] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1EA8u) goto L_089B1EA8;
    return;
L_089B1EA8:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1F0C;
      }
      goto L_089B1EBC;
    }
L_089B1EBC:
    ctx.gpr[31] = (0x089B1EC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 542u, 0x08B02090u>(ctx, &aot_mem) && ctx.pc == 0x089B1EC4u) goto L_089B1EC4;
    return;
L_089B1EC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1EF0;
      }
      goto L_089B1ECC;
    }
L_089B1ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B1EDCu);
    ctx.gpr[6] = (0u | 78u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1EDCu) goto L_089B1EDC;
    return;
L_089B1EDC:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B1F0C;
      }
      goto L_089B1EF0;
    }
L_089B1EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B1F00u);
    ctx.gpr[6] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B1F00u) goto L_089B1F00;
    return;
L_089B1F00:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B1F0C;
L_089B1F0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B1F5C;
      }
      goto L_089B1F18;
    }
L_089B1F18:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B2044;
      }
      goto L_089B1F24;
    }
L_089B1F24:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B1FEC;
      }
      goto L_089B1F2C;
    }
L_089B1F2C:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B209C;
      }
      goto L_089B1F5C;
    }
L_089B1F5C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B1F98;
      }
      goto L_089B1F64;
    }
L_089B1F64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2044;
      }
      goto L_089B1F6C;
    }
L_089B1F6C:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B209C;
      }
      goto L_089B1F98;
    }
L_089B1F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
        goto L_089B1FB0;
    }
    goto L_089B1FA8;
L_089B1FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1FC4;
      }
      goto L_089B1FB0;
    }
L_089B1FB0:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
        goto L_089B1FC4;
    }
    goto L_089B1FBC;
L_089B1FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B1FC4;
      }
      goto L_089B1FC4;
    }
L_089B1FC4:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B209C;
      }
      goto L_089B1FEC;
    }
L_089B1FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
        goto L_089B2004;
    }
    goto L_089B1FFC;
L_089B1FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B2018;
      }
      goto L_089B2004;
    }
L_089B2004:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
        goto L_089B2018;
    }
    goto L_089B2010;
L_089B2010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B2018;
      }
      goto L_089B2018;
    }
L_089B2018:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B209C;
      }
      goto L_089B2044;
    }
L_089B2044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
        goto L_089B205C;
    }
    goto L_089B2054;
L_089B2054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B2070;
      }
      goto L_089B205C;
    }
L_089B205C:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(160));
        goto L_089B2070;
    }
    goto L_089B2068;
L_089B2068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089B2070;
      }
      goto L_089B2070;
    }
L_089B2070:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B209C;
L_089B209C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089B20C0;
L_089B20C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B20EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    ctx.gpr[31] = (0x089B2134u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x089B2134u) goto L_089B2134;
    return;
L_089B2134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[31] = (0x089B2154u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 697u, 0x0890EF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2154u) goto L_089B2154;
    return;
L_089B2154:
    ctx.gpr[31] = (0x089B215Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem) && ctx.pc == 0x089B215Cu) goto L_089B215C;
    return;
L_089B215C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1156)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (0u | 8u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[22] = (64u << 16u);
      if (branch_taken) {
          goto L_089B21E0;
      }
      goto L_089B2178;
    }
L_089B2178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B21A4;
      }
      goto L_089B2188;
    }
L_089B2188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B21A4;
      }
      goto L_089B2194;
    }
L_089B2194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B21E0;
      }
      goto L_089B21A4;
    }
L_089B21A4:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(376));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089B21C0u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B21C0u) goto L_089B21C0;
    return;
L_089B21C0:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B21D0u);
    ctx.gpr[6] = (0u | 197u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B21D0u) goto L_089B21D0;
    return;
L_089B21D0:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2228;
      }
      goto L_089B21E0;
    }
L_089B21E0:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B220C;
      }
      goto L_089B21EC;
    }
L_089B21EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B21FCu);
    ctx.gpr[6] = (0u | 62u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B21FCu) goto L_089B21FC;
    return;
L_089B21FC:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2224;
      }
      goto L_089B220C;
    }
L_089B220C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B221Cu);
    ctx.gpr[6] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B221Cu) goto L_089B221C;
    return;
L_089B221C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    goto L_089B2224;
L_089B2224:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089B2228;
L_089B2228:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B2244;
      }
      goto L_089B2234;
    }
L_089B2234:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2250;
      }
      goto L_089B2244;
    }
L_089B2244:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B2250;
L_089B2250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_089B2288;
      }
      goto L_089B2260;
    }
L_089B2260:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089B2288;
L_089B2288:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
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
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B22B8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x089B22B8u) goto L_089B22B8;
    return;
L_089B22B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B22C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 719u, 0x08B1FB98u>(ctx, &aot_mem) && ctx.pc == 0x089B22C4u) goto L_089B22C4;
    return;
L_089B22C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B22DCu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x089B22DCu) goto L_089B22DC;
    return;
L_089B22DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2348;
      }
      goto L_089B22FC;
    }
L_089B22FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2348;
      }
      goto L_089B230C;
    }
L_089B230C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089B2348;
      }
      goto L_089B2318;
    }
L_089B2318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B2338u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2338u) goto L_089B2338;
    return;
L_089B2338:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2348;
      }
      goto L_089B2340;
    }
L_089B2340:
    ctx.gpr[31] = (0x089B2348u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem) && ctx.pc == 0x089B2348u) goto L_089B2348;
    return;
L_089B2348:
    ctx.gpr[31] = (0x089B2350u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 655u, 0x08906F34u>(ctx, &aot_mem) && ctx.pc == 0x089B2350u) goto L_089B2350;
    return;
L_089B2350:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B27E0;
      }
      goto L_089B2358;
    }
L_089B2358:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2364u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089B2364u) goto L_089B2364;
    return;
L_089B2364:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B23A8;
      }
      goto L_089B236C;
    }
L_089B236C:
    ctx.gpr[31] = (0x089B2374u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2374u) goto L_089B2374;
    return;
L_089B2374:
    ctx.gpr[31] = (0x089B237Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B237Cu) goto L_089B237C;
    return;
L_089B237C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B287C;
      }
      goto L_089B238C;
    }
L_089B238C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B287C;
      }
      goto L_089B2398;
    }
L_089B2398:
    ctx.gpr[31] = (0x089B23A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089B23A0u) goto L_089B23A0;
    return;
L_089B23A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B287C;
      }
      goto L_089B23A8;
    }
L_089B23A8:
    ctx.gpr[31] = (0x089B23B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B23B0u) goto L_089B23B0;
    return;
L_089B23B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B23C8;
      }
      goto L_089B23B8;
    }
L_089B23B8:
    ctx.gpr[31] = (0x089B23C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x089B23C0u) goto L_089B23C0;
    return;
L_089B23C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B27D8;
      }
      goto L_089B23C8;
    }
L_089B23C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2440;
      }
      goto L_089B23D8;
    }
L_089B23D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2438u);
    ctx.gpr[6] = (0u | 4000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x089B2438u) goto L_089B2438;
    return;
L_089B2438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B27D8;
      }
      goto L_089B2440;
    }
L_089B2440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B24AC;
      }
      goto L_089B2454;
    }
L_089B2454:
    ctx.gpr[31] = (0x089B245Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089B245Cu) goto L_089B245C;
    return;
L_089B245C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13320)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B2470u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2470u) goto L_089B2470;
    return;
L_089B2470:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089B2494u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x089B2494u) goto L_089B2494;
    return;
L_089B2494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B27D8;
      }
      goto L_089B24AC;
    }
L_089B24AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[17] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2660;
      }
      goto L_089B24C0;
    }
L_089B24C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B24ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x089B24ECu) goto L_089B24EC;
    return;
L_089B24EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2564;
      }
      goto L_089B24F4;
    }
L_089B24F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2564;
      }
      goto L_089B2504;
    }
L_089B2504:
    ctx.gpr[31] = (0x089B250Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089B250Cu) goto L_089B250C;
    return;
L_089B250C:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2564;
      }
      goto L_089B2550;
    }
L_089B2550:
    ctx.gpr[31] = (0x089B2558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089B2558u) goto L_089B2558;
    return;
L_089B2558:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2564u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x089B2564u) goto L_089B2564;
    return;
L_089B2564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B259C;
      }
      goto L_089B2570;
    }
L_089B2570:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2658;
      }
      goto L_089B2578;
    }
L_089B2578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2658;
      }
      goto L_089B2584;
    }
L_089B2584:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2594u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B2594u) goto L_089B2594;
    return;
L_089B2594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2658;
      }
      goto L_089B259C;
    }
L_089B259C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B25F4;
      }
      goto L_089B25A8;
    }
L_089B25A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089B25F4;
      }
      goto L_089B25B4;
    }
L_089B25B4:
    ctx.gpr[31] = (0x089B25BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B25BCu) goto L_089B25BC;
    return;
L_089B25BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B25D4;
      }
      goto L_089B25C4;
    }
L_089B25C4:
    ctx.gpr[31] = (0x089B25CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem) && ctx.pc == 0x089B25CCu) goto L_089B25CC;
    return;
L_089B25CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B25F4;
      }
      goto L_089B25D4;
    }
L_089B25D4:
    ctx.gpr[31] = (0x089B25DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x089B25DCu) goto L_089B25DC;
    return;
L_089B25DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089B25ECu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B25ECu) goto L_089B25EC;
    return;
L_089B25EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2658;
      }
      goto L_089B25F4;
    }
L_089B25F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2600u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089B2600u) goto L_089B2600;
    return;
L_089B2600:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B260Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x089B260Cu) goto L_089B260C;
    return;
L_089B260C:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2658u);
    ctx.gpr[6] = (0u | 4000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x089B2658u) goto L_089B2658;
    return;
L_089B2658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B27D8;
      }
      goto L_089B2660;
    }
L_089B2660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B26D8;
      }
      goto L_089B2678;
    }
L_089B2678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B26D8;
      }
      goto L_089B2688;
    }
L_089B2688:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B26D8;
      }
      goto L_089B2694;
    }
L_089B2694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B26D8;
      }
      goto L_089B26A0;
    }
L_089B26A0:
    ctx.gpr[31] = (0x089B26A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B26A8u) goto L_089B26A8;
    return;
L_089B26A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B26D8;
      }
      goto L_089B26B0;
    }
L_089B26B0:
    ctx.gpr[31] = (0x089B26B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem) && ctx.pc == 0x089B26B8u) goto L_089B26B8;
    return;
L_089B26B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B26D8;
      }
      goto L_089B26C0;
    }
L_089B26C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089B26D0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B26D0u) goto L_089B26D0;
    return;
L_089B26D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B27D8;
      }
      goto L_089B26D8;
    }
L_089B26D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2760;
      }
      goto L_089B26F0;
    }
L_089B26F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2760;
      }
      goto L_089B2700;
    }
L_089B2700:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B2760;
      }
      goto L_089B270C;
    }
L_089B270C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2760;
      }
      goto L_089B2718;
    }
L_089B2718:
    ctx.gpr[31] = (0x089B2720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089B2720u) goto L_089B2720;
    return;
L_089B2720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1156)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B2760;
      }
      goto L_089B272C;
    }
L_089B272C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2760;
      }
      goto L_089B2738;
    }
L_089B2738:
    ctx.gpr[31] = (0x089B2740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem) && ctx.pc == 0x089B2740u) goto L_089B2740;
    return;
L_089B2740:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2760;
      }
      goto L_089B2748;
    }
L_089B2748:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089B2758u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B2758u) goto L_089B2758;
    return;
L_089B2758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B27D8;
      }
      goto L_089B2760;
    }
L_089B2760:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B276Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089B276Cu) goto L_089B276C;
    return;
L_089B276C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2778u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x089B2778u) goto L_089B2778;
    return;
L_089B2778:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B27C4u);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x089B27C4u) goto L_089B27C4;
    return;
L_089B27C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[17]);
    ctx.gpr[31] = (0x089B27D8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089B27D8u) goto L_089B27D8;
    return;
L_089B27D8:
    ctx.gpr[31] = (0x089B27E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 70u, 0x0891C44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B27E0u) goto L_089B27E0;
    return;
L_089B27E0:
    ctx.gpr[4] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B27FC;
      }
      goto L_089B27EC;
    }
L_089B27EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_089B285C;
    }
    goto L_089B27FC;
L_089B27FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B2838;
      }
      goto L_089B2820;
    }
L_089B2820:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2838;
      }
      goto L_089B2830;
    }
L_089B2830:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_089B2844;
      }
      goto L_089B2838;
    }
L_089B2838:
    ctx.gpr[31] = (0x089B2840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089B2840u) goto L_089B2840;
    return;
L_089B2840:
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[22];
    goto L_089B2844;
L_089B2844:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B2850u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem) && ctx.pc == 0x089B2850u) goto L_089B2850;
    return;
L_089B2850:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_089B285C;
L_089B285C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B287C;
      }
      goto L_089B2868;
    }
L_089B2868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B287C;
      }
      goto L_089B2874;
    }
L_089B2874:
    ctx.gpr[31] = (0x089B287Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089B287Cu) goto L_089B287C;
    return;
L_089B287C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B28B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089B28F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem) && ctx.pc == 0x089B28F0u) goto L_089B28F0;
    return;
L_089B28F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B290Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem) && ctx.pc == 0x089B290Cu) goto L_089B290C;
    return;
L_089B290C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B291Cu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B291Cu) goto L_089B291C;
    return;
L_089B291C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[19] = (0u | 8u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089B294C;
      }
      goto L_089B293C;
    }
L_089B293C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089B2958;
      }
      goto L_089B294C;
    }
L_089B294C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B2958;
L_089B2958:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
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
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B2988u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x089B2988u) goto L_089B2988;
    return;
L_089B2988:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1156)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089B2998u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 719u, 0x08B1FB98u>(ctx, &aot_mem) && ctx.pc == 0x089B2998u) goto L_089B2998;
    return;
L_089B2998:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B29B0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x089B29B0u) goto L_089B29B0;
    return;
L_089B29B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2A34;
      }
      goto L_089B29D0;
    }
L_089B29D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[22])) && ctx.fpr[13] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B2A0C;
      }
      goto L_089B29F4;
    }
L_089B29F4:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089B2A10;
    }
    goto L_089B2A04;
L_089B2A04:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[20];
      if (branch_taken) {
          goto L_089B2A20;
      }
      goto L_089B2A0C;
    }
L_089B2A0C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B2A10;
L_089B2A10:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089B2A1Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x089B2A1Cu) goto L_089B2A1C;
    return;
L_089B2A1C:
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[20];
    goto L_089B2A20;
L_089B2A20:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2260)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2A34u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 839u, 0x08907AECu>(ctx, &aot_mem) && ctx.pc == 0x089B2A34u) goto L_089B2A34;
    return;
L_089B2A34:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2A88;
      }
      goto L_089B2A3C;
    }
L_089B2A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13368)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(352));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[22] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089B2A64u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 110u, 0x089A8C9Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2A64u) goto L_089B2A64;
    return;
L_089B2A64:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B2A78u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B2A78u) goto L_089B2A78;
    return;
L_089B2A78:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2A88;
      }
      goto L_089B2A80;
    }
L_089B2A80:
    ctx.gpr[31] = (0x089B2A88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem) && ctx.pc == 0x089B2A88u) goto L_089B2A88;
    return;
L_089B2A88:
    ctx.gpr[31] = (0x089B2A90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 655u, 0x08906F34u>(ctx, &aot_mem) && ctx.pc == 0x089B2A90u) goto L_089B2A90;
    return;
L_089B2A90:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_089B2E90;
    }
    goto L_089B2A98;
L_089B2A98:
    ctx.gpr[31] = (0x089B2AA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2AA0u) goto L_089B2AA0;
    return;
L_089B2AA0:
    ctx.gpr[31] = (0x089B2AA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2AA8u) goto L_089B2AA8;
    return;
L_089B2AA8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_089B2E90;
    }
    goto L_089B2AB0;
L_089B2AB0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2E70;
      }
      goto L_089B2AB8;
    }
L_089B2AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2B30;
      }
      goto L_089B2AC8;
    }
L_089B2AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2B28u);
    ctx.gpr[6] = (0u | 14000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x089B2B28u) goto L_089B2B28;
    return;
L_089B2B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2E70;
      }
      goto L_089B2B30;
    }
L_089B2B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2B9C;
      }
      goto L_089B2B44;
    }
L_089B2B44:
    ctx.gpr[31] = (0x089B2B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089B2B4Cu) goto L_089B2B4C;
    return;
L_089B2B4C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13320)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B2B60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2B60u) goto L_089B2B60;
    return;
L_089B2B60:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089B2B84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x089B2B84u) goto L_089B2B84;
    return;
L_089B2B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B2E70;
      }
      goto L_089B2B9C;
    }
L_089B2B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[20] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2D4C;
      }
      goto L_089B2BB0;
    }
L_089B2BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B2BDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2BDCu) goto L_089B2BDC;
    return;
L_089B2BDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C54;
      }
      goto L_089B2BE4;
    }
L_089B2BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2C54;
      }
      goto L_089B2BF4;
    }
L_089B2BF4:
    ctx.gpr[31] = (0x089B2BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089B2BFCu) goto L_089B2BFC;
    return;
L_089B2BFC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B2C54;
      }
      goto L_089B2C40;
    }
L_089B2C40:
    ctx.gpr[31] = (0x089B2C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089B2C48u) goto L_089B2C48;
    return;
L_089B2C48:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2C54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x089B2C54u) goto L_089B2C54;
    return;
L_089B2C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2C84;
      }
      goto L_089B2C60;
    }
L_089B2C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B2D44;
      }
      goto L_089B2C6C;
    }
L_089B2C6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2C7Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B2C7Cu) goto L_089B2C7C;
    return;
L_089B2C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2D44;
      }
      goto L_089B2C84;
    }
L_089B2C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B2CDC;
      }
      goto L_089B2C90;
    }
L_089B2C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B2CDC;
      }
      goto L_089B2C9C;
    }
L_089B2C9C:
    ctx.gpr[31] = (0x089B2CA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2CA4u) goto L_089B2CA4;
    return;
L_089B2CA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2CBC;
      }
      goto L_089B2CAC;
    }
L_089B2CAC:
    ctx.gpr[31] = (0x089B2CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem) && ctx.pc == 0x089B2CB4u) goto L_089B2CB4;
    return;
L_089B2CB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B2CDC;
      }
      goto L_089B2CBC;
    }
L_089B2CBC:
    ctx.gpr[31] = (0x089B2CC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x089B2CC4u) goto L_089B2CC4;
    return;
L_089B2CC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089B2CD4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B2CD4u) goto L_089B2CD4;
    return;
L_089B2CD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2D24;
      }
      goto L_089B2CDC;
    }
L_089B2CDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2D24u);
    ctx.gpr[6] = (0u | 14000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x089B2D24u) goto L_089B2D24;
    return;
L_089B2D24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[20]);
    ctx.gpr[31] = (0x089B2D38u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089B2D38u) goto L_089B2D38;
    return;
L_089B2D38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2D44u);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089B2D44u) goto L_089B2D44;
    return;
L_089B2D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2E70;
      }
      goto L_089B2D4C;
    }
L_089B2D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B2DC4;
      }
      goto L_089B2D64;
    }
L_089B2D64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[5] == ctx.gpr[4]) {
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
        goto L_089B2DC4;
    }
    goto L_089B2D74;
L_089B2D74:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B2DC4;
      }
      goto L_089B2D80;
    }
L_089B2D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B2DC4;
      }
      goto L_089B2D8C;
    }
L_089B2D8C:
    ctx.gpr[31] = (0x089B2D94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B2D94u) goto L_089B2D94;
    return;
L_089B2D94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B2DC4;
      }
      goto L_089B2D9C;
    }
L_089B2D9C:
    ctx.gpr[31] = (0x089B2DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem) && ctx.pc == 0x089B2DA4u) goto L_089B2DA4;
    return;
L_089B2DA4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089B2DC4;
      }
      goto L_089B2DAC;
    }
L_089B2DAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x089B2DBCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B2DBCu) goto L_089B2DBC;
    return;
L_089B2DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2E70;
      }
      goto L_089B2DC4;
    }
L_089B2DC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2E0Cu);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x089B2E0Cu) goto L_089B2E0C;
    return;
L_089B2E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1032), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[20]);
    ctx.gpr[31] = (0x089B2E20u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089B2E20u) goto L_089B2E20;
    return;
L_089B2E20:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2E44;
      }
      goto L_089B2E30;
    }
L_089B2E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 71 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2E64;
      }
      goto L_089B2E44;
    }
L_089B2E44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2E50u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x089B2E50u) goto L_089B2E50;
    return;
L_089B2E50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2E5Cu);
    ctx.gpr[5] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089B2E5Cu) goto L_089B2E5C;
    return;
L_089B2E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2E70;
      }
      goto L_089B2E64;
    }
L_089B2E64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2E70u);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089B2E70u) goto L_089B2E70;
    return;
L_089B2E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2232)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_089B2E90;
    }
    goto L_089B2E80;
L_089B2E80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2E8Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x089B2E8Cu) goto L_089B2E8C;
    return;
L_089B2E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_089B2E90;
L_089B2E90:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2EB0;
      }
      goto L_089B2E9C;
    }
L_089B2E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2EB0;
      }
      goto L_089B2EA8;
    }
L_089B2EA8:
    ctx.gpr[31] = (0x089B2EB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089B2EB0u) goto L_089B2EB0;
    return;
L_089B2EB0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B2EE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_089B2F10;
      }
      goto L_089B2F04;
    }
L_089B2F04:
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B2F10;
L_089B2F10:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2F44;
      }
      goto L_089B2F18;
    }
L_089B2F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2F44;
      }
      goto L_089B2F2C;
    }
L_089B2F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 61u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
        goto L_089B2F4C;
    }
    goto L_089B2F3C;
L_089B2F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2F80;
      }
      goto L_089B2F44;
    }
L_089B2F44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3604;
      }
      goto L_089B2F4C;
    }
L_089B2F4C:
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2F80;
      }
      goto L_089B2F58;
    }
L_089B2F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2F70;
      }
      goto L_089B2F68;
    }
L_089B2F68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3604;
      }
      goto L_089B2F70;
    }
L_089B2F70:
    ctx.gpr[31] = (0x089B2F78u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B2F78u) goto L_089B2F78;
    return;
L_089B2F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3604;
      }
      goto L_089B2F80;
    }
L_089B2F80:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089B2F90u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x089B2F90u) goto L_089B2F90;
    return;
L_089B2F90:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B2FA8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 177u, 0x08AF5564u>(ctx, &aot_mem) && ctx.pc == 0x089B2FA8u) goto L_089B2FA8;
    return;
L_089B2FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 3u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B2FE4;
      }
      goto L_089B2FC0;
    }
L_089B2FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B2FE4;
      }
      goto L_089B2FCC;
    }
L_089B2FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B2FE4;
      }
      goto L_089B2FDC;
    }
L_089B2FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_089B2FE4;
L_089B2FE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3050;
      }
      goto L_089B2FFC;
    }
L_089B2FFC:
    ctx.gpr[31] = (0x089B3004u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x089B3004u) goto L_089B3004;
    return;
L_089B3004:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B302C;
      }
      goto L_089B3010;
    }
L_089B3010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B302C;
      }
      goto L_089B301C;
    }
L_089B301C:
    ctx.gpr[31] = (0x089B3024u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3024u) goto L_089B3024;
    return;
L_089B3024:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3050;
      }
      goto L_089B302C;
    }
L_089B302C:
    ctx.gpr[31] = (0x089B3034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem) && ctx.pc == 0x089B3034u) goto L_089B3034;
    return;
L_089B3034:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_089B3060;
      }
      goto L_089B3048;
    }
L_089B3048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B30CC;
      }
      goto L_089B3050;
    }
L_089B3050:
    ctx.gpr[31] = (0x089B3058u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B3058u) goto L_089B3058;
    return;
L_089B3058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3604;
      }
      goto L_089B3060;
    }
L_089B3060:
    ctx.gpr[31] = (0x089B3068u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3068u) goto L_089B3068;
    return;
L_089B3068:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B30A4;
      }
      goto L_089B3070;
    }
L_089B3070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B30A4;
      }
      goto L_089B307C;
    }
L_089B307C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B30A4;
      }
      goto L_089B3090;
    }
L_089B3090:
    ctx.gpr[31] = (0x089B3098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089B3098u) goto L_089B3098;
    return;
L_089B3098:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B30A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem) && ctx.pc == 0x089B30A4u) goto L_089B30A4;
    return;
L_089B30A4:
    ctx.gpr[31] = (0x089B30ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B30ACu) goto L_089B30AC;
    return;
L_089B30AC:
    ctx.gpr[31] = (0x089B30B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x089B30B4u) goto L_089B30B4;
    return;
L_089B30B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B3604;
      }
      goto L_089B30CC;
    }
L_089B30CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B30E8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B30E8u) goto L_089B30E8;
    return;
L_089B30E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3108;
      }
      goto L_089B30F0;
    }
L_089B30F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3108;
      }
      goto L_089B30FC;
    }
L_089B30FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B3108u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 752u, 0x0883365Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3108u) goto L_089B3108;
    return;
L_089B3108:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_089B319C;
    }
    goto L_089B313C;
L_089B313C:
    ctx.gpr[31] = (0x089B3144u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B3144u) goto L_089B3144;
    return;
L_089B3144:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3164;
      }
      goto L_089B3154;
    }
L_089B3154:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3180;
      }
      goto L_089B3164;
    }
L_089B3164:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 31u);
    ctx.gpr[31] = (0x089B3178u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3178u) goto L_089B3178;
    return;
L_089B3178:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3194;
      }
      goto L_089B3180;
    }
L_089B3180:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (0u | 29u);
    ctx.gpr[31] = (0x089B3194u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x089B3194u) goto L_089B3194;
    return;
L_089B3194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3604;
      }
      goto L_089B319C;
    }
L_089B319C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B31C0u);
    ctx.gpr[6] = (0u | 67u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B31C0u) goto L_089B31C0;
    return;
L_089B31C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3550;
      }
      goto L_089B31D0;
    }
L_089B31D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3550;
      }
      goto L_089B31E0;
    }
L_089B31E0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B320C;
      }
      goto L_089B31E8;
    }
L_089B31E8:
    ctx.gpr[31] = (0x089B31F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B31F0u) goto L_089B31F0;
    return;
L_089B31F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B320C;
      }
      goto L_089B3200;
    }
L_089B3200:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x089B320Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x089B320Cu) goto L_089B320C;
    return;
L_089B320C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089B322C;
      }
      goto L_089B321C;
    }
L_089B321C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089B3234;
      }
      goto L_089B322C;
    }
L_089B322C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089B3234;
L_089B3234:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B32E8;
      }
      goto L_089B323C;
    }
L_089B323C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B32B8;
      }
      goto L_089B3248;
    }
L_089B3248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B32A8;
      }
      goto L_089B3260;
    }
L_089B3260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B32A8;
      }
      goto L_089B3278;
    }
L_089B3278:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B3284u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 181u, 0x08AF55ACu>(ctx, &aot_mem) && ctx.pc == 0x089B3284u) goto L_089B3284;
    return;
L_089B3284:
    ctx.gpr[31] = (0x089B328Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B328Cu) goto L_089B328C;
    return;
L_089B328C:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B32A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21176));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089B32A0u) goto L_089B32A0;
    return;
L_089B32A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3480;
      }
      goto L_089B32A8;
    }
L_089B32A8:
    ctx.gpr[31] = (0x089B32B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B32B0u) goto L_089B32B0;
    return;
L_089B32B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089B3480;
      }
      goto L_089B32B8;
    }
L_089B32B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B32C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 181u, 0x08AF55ACu>(ctx, &aot_mem) && ctx.pc == 0x089B32C4u) goto L_089B32C4;
    return;
L_089B32C4:
    ctx.gpr[31] = (0x089B32CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B32CCu) goto L_089B32CC;
    return;
L_089B32CC:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B32E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13856));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089B32E0u) goto L_089B32E0;
    return;
L_089B32E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3480;
      }
      goto L_089B32E8;
    }
L_089B32E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3364;
      }
      goto L_089B32F4;
    }
L_089B32F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3364;
      }
      goto L_089B330C;
    }
L_089B330C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3354;
      }
      goto L_089B3324;
    }
L_089B3324:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B3330u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 181u, 0x08AF55ACu>(ctx, &aot_mem) && ctx.pc == 0x089B3330u) goto L_089B3330;
    return;
L_089B3330:
    ctx.gpr[31] = (0x089B3338u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B3338u) goto L_089B3338;
    return;
L_089B3338:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B334Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21176));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089B334Cu) goto L_089B334C;
    return;
L_089B334C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3480;
      }
      goto L_089B3354;
    }
L_089B3354:
    ctx.gpr[31] = (0x089B335Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B335Cu) goto L_089B335C;
    return;
L_089B335C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089B3480;
      }
      goto L_089B3364;
    }
L_089B3364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3458;
      }
      goto L_089B3374;
    }
L_089B3374:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x089B3380u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B3380u) goto L_089B3380;
    return;
L_089B3380:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3420;
      }
      goto L_089B3388;
    }
L_089B3388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3420;
      }
      goto L_089B3398;
    }
L_089B3398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 208u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B33B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B33B4u) goto L_089B33B4;
    return;
L_089B33B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B33D0;
      }
      goto L_089B33BC;
    }
L_089B33BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B33C8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x089B33C8u) goto L_089B33C8;
    return;
L_089B33C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3450;
      }
      goto L_089B33D0;
    }
L_089B33D0:
    ctx.gpr[31] = (0x089B33D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x089B33D8u) goto L_089B33D8;
    return;
L_089B33D8:
    ctx.gpr[31] = (0x089B33E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089B33E0u) goto L_089B33E0;
    return;
L_089B33E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13320)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B33F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B33F4u) goto L_089B33F4;
    return;
L_089B33F4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089B3418u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x089B3418u) goto L_089B3418;
    return;
L_089B3418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3450;
      }
      goto L_089B3420;
    }
L_089B3420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B343Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B343Cu) goto L_089B343C;
    return;
L_089B343C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3450;
      }
      goto L_089B3444;
    }
L_089B3444:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B3450u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 752u, 0x0883365Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3450u) goto L_089B3450;
    return;
L_089B3450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3480;
      }
      goto L_089B3458;
    }
L_089B3458:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B3464u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 181u, 0x08AF55ACu>(ctx, &aot_mem) && ctx.pc == 0x089B3464u) goto L_089B3464;
    return;
L_089B3464:
    ctx.gpr[31] = (0x089B346Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B346Cu) goto L_089B346C;
    return;
L_089B346C:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3480u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13856));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089B3480u) goto L_089B3480;
    return;
L_089B3480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3604;
      }
      goto L_089B348C;
    }
L_089B348C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B34ACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 972u, 0x08B03DB0u>(ctx, &aot_mem) && ctx.pc == 0x089B34ACu) goto L_089B34AC;
    return;
L_089B34AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B34F0;
      }
      goto L_089B34B8;
    }
L_089B34B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B34F0;
      }
      goto L_089B34C4;
    }
L_089B34C4:
    ctx.gpr[31] = (0x089B34CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B34CCu) goto L_089B34CC;
    return;
L_089B34CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 208u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089B34F0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x089B34F0u) goto L_089B34F0;
    return;
L_089B34F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3548;
      }
      goto L_089B3500;
    }
L_089B3500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B352C;
      }
      goto L_089B3518;
    }
L_089B3518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089B352Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 567u, 0x089AE4F4u>(ctx, &aot_mem) && ctx.pc == 0x089B352Cu) goto L_089B352C;
    return;
L_089B352C:
    ctx.gpr[31] = (0x089B3534u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3534u) goto L_089B3534;
    return;
L_089B3534:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3548;
      }
      goto L_089B353C;
    }
L_089B353C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089B3548u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 119u, 0x089B4624u>(ctx, &aot_mem) && ctx.pc == 0x089B3548u) goto L_089B3548;
    return;
L_089B3548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3604;
      }
      goto L_089B3550;
    }
L_089B3550:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B35E8;
      }
      goto L_089B355C;
    }
L_089B355C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(620))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089B35E8;
      }
      goto L_089B3568;
    }
L_089B3568:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B35E8;
      }
      goto L_089B3578;
    }
L_089B3578:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B35A4;
      }
      goto L_089B3580;
    }
L_089B3580:
    ctx.gpr[31] = (0x089B3588u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B3588u) goto L_089B3588;
    return;
L_089B3588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B35A4;
      }
      goto L_089B3598;
    }
L_089B3598:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x089B35A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x089B35A4u) goto L_089B35A4;
    return;
L_089B35A4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B35DC;
      }
      goto L_089B35B4;
    }
L_089B35B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B35C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 181u, 0x08AF55ACu>(ctx, &aot_mem) && ctx.pc == 0x089B35C0u) goto L_089B35C0;
    return;
L_089B35C0:
    ctx.gpr[31] = (0x089B35C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B35C8u) goto L_089B35C8;
    return;
L_089B35C8:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B35DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21176));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089B35DCu) goto L_089B35DC;
    return;
L_089B35DC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089B3604;
      }
      goto L_089B35E8;
    }
L_089B35E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B3604u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3604u) goto L_089B3604;
    return;
L_089B3604:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089B3658;
      }
      goto L_089B364C;
    }
L_089B364C:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089B3658;
L_089B3658:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B36AC;
      }
      goto L_089B3660;
    }
L_089B3660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B36AC;
      }
      goto L_089B3674;
    }
L_089B3674:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B36AC;
      }
      goto L_089B3684;
    }
L_089B3684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B36AC;
      }
      goto L_089B3694;
    }
L_089B3694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 61u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
        goto L_089B36B4;
    }
    goto L_089B36A4;
L_089B36A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B36E8;
      }
      goto L_089B36AC;
    }
L_089B36AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D20;
      }
      goto L_089B36B4;
    }
L_089B36B4:
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B36E8;
      }
      goto L_089B36C0;
    }
L_089B36C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B36D8;
      }
      goto L_089B36D0;
    }
L_089B36D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D20;
      }
      goto L_089B36D8;
    }
L_089B36D8:
    ctx.gpr[31] = (0x089B36E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B36E0u) goto L_089B36E0;
    return;
L_089B36E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D20;
      }
      goto L_089B36E8;
    }
L_089B36E8:
    ctx.gpr[31] = (0x089B36F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 84u, 0x0890850Cu>(ctx, &aot_mem) && ctx.pc == 0x089B36F0u) goto L_089B36F0;
    return;
L_089B36F0:
    ctx.gpr[31] = (0x089B36F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B36F8u) goto L_089B36F8;
    return;
L_089B36F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B37A0;
      }
      goto L_089B3700;
    }
L_089B3700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B37A0;
      }
      goto L_089B3714;
    }
L_089B3714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B37A0;
      }
      goto L_089B3720;
    }
L_089B3720:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B372Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 770u, 0x0892738Cu>(ctx, &aot_mem) && ctx.pc == 0x089B372Cu) goto L_089B372C;
    return;
L_089B372C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[31] = (0x089B3738u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x089B3738u) goto L_089B3738;
    return;
L_089B3738:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B3744u);
    ctx.gpr[5] = (0u | 65u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089B3744u) goto L_089B3744;
    return;
L_089B3744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3798;
      }
      goto L_089B3764;
    }
L_089B3764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(562), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(563), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x089B3780u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x089B3780u) goto L_089B3780;
    return;
L_089B3780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 208u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    goto L_089B3798;
L_089B3798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D20;
      }
      goto L_089B37A0;
    }
L_089B37A0:
    ctx.gpr[31] = (0x089B37A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B37A8u) goto L_089B37A8;
    return;
L_089B37A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3878;
      }
      goto L_089B37B0;
    }
L_089B37B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_089B3878;
      }
      goto L_089B37C0;
    }
L_089B37C0:
    ctx.gpr[31] = (0x089B37C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem) && ctx.pc == 0x089B37C8u) goto L_089B37C8;
    return;
L_089B37C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_089B3810;
      }
      goto L_089B37E8;
    }
L_089B37E8:
    ctx.gpr[31] = (0x089B37F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem) && ctx.pc == 0x089B37F0u) goto L_089B37F0;
    return;
L_089B37F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B3878;
      }
      goto L_089B3810;
    }
L_089B3810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3878;
      }
      goto L_089B381C;
    }
L_089B381C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3878;
      }
      goto L_089B3828;
    }
L_089B3828:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3840;
      }
      goto L_089B3830;
    }
L_089B3830:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 77u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3864;
      }
      goto L_089B3840;
    }
L_089B3840:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x089B384Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 382u, 0x08B0D940u>(ctx, &aot_mem) && ctx.pc == 0x089B384Cu) goto L_089B384C;
    return;
L_089B384C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B3864;
      }
      goto L_089B3858;
    }
L_089B3858:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3864u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 752u, 0x0883365Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3864u) goto L_089B3864;
    return;
L_089B3864:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B3870u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 770u, 0x0892738Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3870u) goto L_089B3870;
    return;
L_089B3870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D20;
      }
      goto L_089B3878;
    }
L_089B3878:
    ctx.gpr[31] = (0x089B3880u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x089B3880u) goto L_089B3880;
    return;
L_089B3880:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089B3900;
      }
      goto L_089B388C;
    }
L_089B388C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B38EC;
      }
      goto L_089B389C;
    }
L_089B389C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089B38ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x089B38ACu) goto L_089B38AC;
    return;
L_089B38AC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B38C0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 177u, 0x08AF5564u>(ctx, &aot_mem) && ctx.pc == 0x089B38C0u) goto L_089B38C0;
    return;
L_089B38C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(312));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B38DCu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B38DCu) goto L_089B38DC;
    return;
L_089B38DC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
        goto L_089B3914;
    }
    goto L_089B38E4;
L_089B38E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
      if (branch_taken) {
          goto L_089B394C;
      }
      goto L_089B38EC;
    }
L_089B38EC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B38F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 770u, 0x0892738Cu>(ctx, &aot_mem) && ctx.pc == 0x089B38F8u) goto L_089B38F8;
    return;
L_089B38F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D20;
      }
      goto L_089B3900;
    }
L_089B3900:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B390Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 770u, 0x0892738Cu>(ctx, &aot_mem) && ctx.pc == 0x089B390Cu) goto L_089B390C;
    return;
L_089B390C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D20;
      }
      goto L_089B3914;
    }
L_089B3914:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
        goto L_089B394C;
    }
    goto L_089B3920;
L_089B3920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B393Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B393Cu) goto L_089B393C;
    return;
L_089B393C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
        goto L_089B394C;
    }
    goto L_089B3944;
L_089B3944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089B398C;
      }
      goto L_089B394C;
    }
L_089B394C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(304));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089B3968u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3968u) goto L_089B3968;
    return;
L_089B3968:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B398C;
      }
      goto L_089B3970;
    }
L_089B3970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B398C;
      }
      goto L_089B3980;
    }
L_089B3980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x089B398Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 752u, 0x0883365Cu>(ctx, &aot_mem) && ctx.pc == 0x089B398Cu) goto L_089B398C;
    return;
L_089B398C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3CA8;
      }
      goto L_089B3998;
    }
L_089B3998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B39B8;
      }
      goto L_089B39A8;
    }
L_089B39A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3CA8;
      }
      goto L_089B39B8;
    }
L_089B39B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3AB4;
      }
      goto L_089B39C8;
    }
L_089B39C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089B39D8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B39D8u) goto L_089B39D8;
    return;
L_089B39D8:
    ctx.gpr[31] = (0x089B39E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B39E0u) goto L_089B39E0;
    return;
L_089B39E0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
        goto L_089B3A0C;
    }
    goto L_089B39E8;
L_089B39E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B39F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem) && ctx.pc == 0x089B39F4u) goto L_089B39F4;
    return;
L_089B39F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 208u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    goto L_089B3A0C;
L_089B3A0C:
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B3A40u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089B3A40u) goto L_089B3A40;
    return;
L_089B3A40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089B3A4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 30u, 0x08B04218u>(ctx, &aot_mem) && ctx.pc == 0x089B3A4Cu) goto L_089B3A4C;
    return;
L_089B3A4C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089B3A58u);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089B3A58u) goto L_089B3A58;
    return;
L_089B3A58:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B3A64u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 770u, 0x0892738Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3A64u) goto L_089B3A64;
    return;
L_089B3A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3A94;
      }
      goto L_089B3A74;
    }
L_089B3A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3A94;
      }
      goto L_089B3A84;
    }
L_089B3A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3AA4;
      }
      goto L_089B3A94;
    }
L_089B3A94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089B3AA4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B3AA4u) goto L_089B3AA4;
    return;
L_089B3AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1728), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B3D20;
      }
      goto L_089B3AB4;
    }
L_089B3AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089B3CA8;
      }
      goto L_089B3AC0;
    }
L_089B3AC0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3CA8;
      }
      goto L_089B3AD0;
    }
L_089B3AD0:
    ctx.gpr[31] = (0x089B3AD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3AD8u) goto L_089B3AD8;
    return;
L_089B3AD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3BFC;
      }
      goto L_089B3AE0;
    }
L_089B3AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(456));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x089B3B00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x089B3B00u) goto L_089B3B00;
    return;
L_089B3B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3BE8;
      }
      goto L_089B3B1C;
    }
L_089B3B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3BE8;
      }
      goto L_089B3B30;
    }
L_089B3B30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3BE8;
      }
      goto L_089B3B40;
    }
L_089B3B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3B98;
      }
      goto L_089B3B80;
    }
L_089B3B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089B3BA8;
      }
      goto L_089B3B98;
    }
L_089B3B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089B3BA8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B3BA8u) goto L_089B3BA8;
    return;
L_089B3BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3BFC;
      }
      goto L_089B3BBC;
    }
L_089B3BBC:
    ctx.gpr[31] = (0x089B3BC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3BC4u) goto L_089B3BC4;
    return;
L_089B3BC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3BFC;
      }
      goto L_089B3BCC;
    }
L_089B3BCC:
    ctx.gpr[31] = (0x089B3BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089B3BD4u) goto L_089B3BD4;
    return;
L_089B3BD4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089B3BE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem) && ctx.pc == 0x089B3BE0u) goto L_089B3BE0;
    return;
L_089B3BE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3BFC;
      }
      goto L_089B3BE8;
    }
L_089B3BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089B3BFC;
L_089B3BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 16u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1360)));
        goto L_089B3C24;
    }
    goto L_089B3C0C;
L_089B3C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3C44;
      }
      goto L_089B3C20;
    }
L_089B3C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1360)));
    goto L_089B3C24;
L_089B3C24:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3C50;
      }
      goto L_089B3C30;
    }
L_089B3C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3C50;
      }
      goto L_089B3C44;
    }
L_089B3C44:
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2196), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089B3CA8;
      }
      goto L_089B3C50;
    }
L_089B3C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089B3C60u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B3C60u) goto L_089B3C60;
    return;
L_089B3C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3C78;
      }
      goto L_089B3C6C;
    }
L_089B3C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[31] = (0x089B3C78u);
    ctx.gpr[5] = (0u | 122u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089B3C78u) goto L_089B3C78;
    return;
L_089B3C78:
    ctx.gpr[31] = (0x089B3C80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 264u, 0x08910F00u>(ctx, &aot_mem) && ctx.pc == 0x089B3C80u) goto L_089B3C80;
    return;
L_089B3C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(680)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3CA8;
      }
      goto L_089B3C90;
    }
L_089B3C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3CA8;
      }
      goto L_089B3C9C;
    }
L_089B3C9C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B3CA8u);
    ctx.gpr[5] = (0u | 120u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089B3CA8u) goto L_089B3CA8;
    return;
L_089B3CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B3CC4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3CC4u) goto L_089B3CC4;
    return;
L_089B3CC4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D14;
      }
      goto L_089B3CCC;
    }
L_089B3CCC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D14;
      }
      goto L_089B3CD4;
    }
L_089B3CD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D14;
      }
      goto L_089B3CE4;
    }
L_089B3CE4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089B3CF0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 181u, 0x08AF55ACu>(ctx, &aot_mem) && ctx.pc == 0x089B3CF0u) goto L_089B3CF0;
    return;
L_089B3CF0:
    ctx.gpr[31] = (0x089B3CF8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x089B3CF8u) goto L_089B3CF8;
    return;
L_089B3CF8:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B3D0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15676));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x089B3D0Cu) goto L_089B3D0C;
    return;
L_089B3D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3D20;
      }
      goto L_089B3D14;
    }
L_089B3D14:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B3D20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089B3D3C;
L_089B3D20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B3D3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089B3DB4;
      }
      goto L_089B3D74;
    }
L_089B3D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3DB4;
      }
      goto L_089B3D88;
    }
L_089B3D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_089B3DB4;
      }
      goto L_089B3D98;
    }
L_089B3D98:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3DB4;
      }
      goto L_089B3DA0;
    }
L_089B3DA0:
    ctx.gpr[5] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_089B3DBC;
      }
      goto L_089B3DAC;
    }
L_089B3DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3DE8;
      }
      goto L_089B3DB4;
    }
L_089B3DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 11u, 0x089B407Cu>(ctx, &aot_mem); return;
      }
      goto L_089B3DBC;
    }
L_089B3DBC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3DE8;
      }
      goto L_089B3DC4;
    }
L_089B3DC4:
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3DD8;
      }
      goto L_089B3DD0;
    }
L_089B3DD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 11u, 0x089B407Cu>(ctx, &aot_mem); return;
      }
      goto L_089B3DD8;
    }
L_089B3DD8:
    ctx.gpr[31] = (0x089B3DE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089B3DE0u) goto L_089B3DE0;
    return;
L_089B3DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 11u, 0x089B407Cu>(ctx, &aot_mem); return;
      }
      goto L_089B3DE8;
    }
L_089B3DE8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x089B3DF8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x089B3DF8u) goto L_089B3DF8;
    return;
L_089B3DF8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089B3E10u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 177u, 0x08AF5564u>(ctx, &aot_mem) && ctx.pc == 0x089B3E10u) goto L_089B3E10;
    return;
L_089B3E10:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(944));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (0u | 2u);
      if (branch_taken) {
          goto L_089B3E40;
      }
      goto L_089B3E28;
    }
L_089B3E28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x089B3E34u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 542u, 0x08B02090u>(ctx, &aot_mem) && ctx.pc == 0x089B3E34u) goto L_089B3E34;
    return;
L_089B3E34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_089B3E40;
      }
      goto L_089B3E3C;
    }
L_089B3E3C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089B3E40;
L_089B3E40:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3E74;
      }
      goto L_089B3E4C;
    }
L_089B3E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(272));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x089B3E74u);
    ctx.gpr[6] = (0u | 73u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B3E74u) goto L_089B3E74;
    return;
L_089B3E74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089B3E80u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 382u, 0x08B0D940u>(ctx, &aot_mem) && ctx.pc == 0x089B3E80u) goto L_089B3E80;
    return;
L_089B3E80:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B3E9C;
      }
      goto L_089B3E88;
    }
L_089B3E88:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089B3E98u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 377u, 0x08B0D904u>(ctx, &aot_mem) && ctx.pc == 0x089B3E98u) goto L_089B3E98;
    return;
L_089B3E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_089B3E9C;
L_089B3E9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(352)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (ctx.gpr[7] & 16384u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089B3ED0;
      }
      goto L_089B3EB8;
    }
L_089B3EB8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (ctx.gpr[7] & 512u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B3ED4;
      }
      goto L_089B3ED0;
    }
L_089B3ED0:
    ctx.gpr[5] = (0u | 1u);
    goto L_089B3ED4;
L_089B3ED4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089B3F10;
      }
      goto L_089B3EDC;
    }
L_089B3EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089B3F10;
      }
      goto L_089B3EEC;
    }
L_089B3EEC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3F10;
      }
      goto L_089B3EF4;
    }
L_089B3EF4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3F10;
      }
      goto L_089B3F04;
    }
L_089B3F04:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(565)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3F24;
      }
      goto L_089B3F10;
    }
L_089B3F10:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B3F1Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 770u, 0x0892738Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3F1Cu) goto L_089B3F1C;
    return;
L_089B3F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 11u, 0x089B407Cu>(ctx, &aot_mem); return;
      }
      goto L_089B3F24;
    }
L_089B3F24:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[8] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 3u, 0x089B4010u>(ctx, &aot_mem); return;
      }
      goto L_089B3F34;
    }
L_089B3F34:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(563)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B3F70;
      }
      goto L_089B3F44;
    }
L_089B3F44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 3u, 0x089B4010u>(ctx, &aot_mem); return;
      }
      goto L_089B3F50;
    }
L_089B3F50:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[9] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 3u, 0x089B4010u>(ctx, &aot_mem); return;
      }
      goto L_089B3F60;
    }
L_089B3F60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[8] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 3u, 0x089B4010u>(ctx, &aot_mem); return;
      }
      goto L_089B3F70;
    }
L_089B3F70:
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3F8C;
      }
      goto L_089B3F7C;
    }
L_089B3F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089B3F9C;
      }
      goto L_089B3F8C;
    }
L_089B3F8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089B3F9C;
L_089B3F9C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2196), ctx.gpr[7]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089B3FACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 770u, 0x0892738Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3FACu) goto L_089B3FAC;
    return;
L_089B3FAC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 11u, 0x089B407Cu>(ctx, &aot_mem); return;
      }
      goto L_089B3FB8;
    }
L_089B3FB8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089B3FC8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x089B3FC8u) goto L_089B3FC8;
    return;
L_089B3FC8:
    ctx.gpr[31] = (0x089B3FD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089B3FD0u) goto L_089B3FD0;
    return;
L_089B3FD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_089B3FEC;
      }
      goto L_089B3FD8;
    }
L_089B3FD8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(460));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    goto L_089B3FEC;
L_089B3FEC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(456));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.pc = 0x089B4000u; return;
}

void recomp_unit_0107(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0107_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_107(Runtime &runtime) {
    runtime.register_generated_unit(107u, 0x089B0000u, 16384u, &recomp_unit_0107, &recomp_unit_0107_entry);
    runtime.register_function(0x089B0000u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0044u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0058u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0060u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0068u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B006Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0074u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0088u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0090u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B00F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0100u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0110u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0114u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B011Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0124u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B012Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B013Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0144u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0154u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B015Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B016Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0174u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0184u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B018Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0194u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B019Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B01F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0208u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0210u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0218u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0220u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0230u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0238u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0248u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0264u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B026Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0274u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B027Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0284u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0294u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B02FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0304u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0314u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0330u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0344u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0358u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0364u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0380u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0394u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B03FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0400u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0408u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0418u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0428u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0444u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0458u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0460u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0468u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B046Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0484u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B04F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0514u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0528u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0530u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0538u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B053Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0544u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0554u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0564u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0580u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0594u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B059Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B05F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0600u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0604u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0618u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0620u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0630u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B064Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0660u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0668u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0670u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0674u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B068Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B06FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0708u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0714u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B072Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0734u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B073Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0754u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B075Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0768u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0770u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0778u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0780u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0788u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0794u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B079Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B07F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0800u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0808u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0814u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B082Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0834u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0840u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B086Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0878u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0880u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B088Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B08FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0904u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0910u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B092Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B093Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0948u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B096Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0980u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0988u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0998u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B09F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0A94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ACCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ADCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0AFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0B90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0BECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0C84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0CFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0D94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0DFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0E84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0ED0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0EF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0F98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B0FF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1008u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B102Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1034u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B103Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1044u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B104Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B105Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1064u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1074u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B107Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1088u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B10FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1104u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B110Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1114u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1124u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B112Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B113Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1144u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1154u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B115Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B116Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1174u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1184u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B118Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B119Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B11FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1220u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1230u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1240u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1250u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1258u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1264u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1280u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B128Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1298u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B12FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1324u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1330u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1344u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1350u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1354u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1368u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1374u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B13E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1404u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1414u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1418u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1434u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B143Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1458u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1460u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1468u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1474u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1484u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1494u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B14B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1524u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1534u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1558u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1568u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1578u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B158Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1594u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B15F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1600u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1610u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B161Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1624u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1630u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1640u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B164Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1654u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B165Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1698u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B16E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1730u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1740u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1748u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1754u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1764u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1770u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1780u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B179Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B17D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1804u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1814u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1830u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1840u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1850u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B186Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1874u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1880u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1888u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1898u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B18E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B190Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1914u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1924u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B192Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1934u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1948u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B195Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1974u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1984u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1998u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B19F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A08u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1A98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1ABCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1ACCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1AE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1B64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1BF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1C94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1CF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1D8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1DE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1E98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1ECCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1EF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1F98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B1FFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2004u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2010u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2018u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2044u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2054u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B205Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2068u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2070u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B209Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B20ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2134u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2154u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B215Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2178u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2188u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2194u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B21FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B220Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B221Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2224u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2228u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2234u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2244u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2250u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2260u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2288u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B22FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B230Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2318u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2338u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2340u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2348u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2350u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2358u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2364u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B236Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2374u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B237Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B238Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2398u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B23D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2438u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2440u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2454u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B245Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2470u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2494u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B24F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2504u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B250Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2550u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2558u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2564u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2570u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2578u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2584u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2594u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B259Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25D4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B25F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2600u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B260Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2658u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2660u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2678u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2688u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2694u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B26F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2700u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B270Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2718u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2720u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B272Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2738u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2740u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2748u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2758u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2760u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B276Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2778u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B27FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2820u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2830u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2838u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2840u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2844u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2850u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B285Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2868u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2874u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B287Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B28F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B290Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B291Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B293Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B294Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2958u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2988u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2998u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B29F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2A98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2AC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2B9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2BFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C48u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C54u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2C9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2CDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D38u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2D9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2DA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2DACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2DBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2DC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E5Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2E9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2EA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2EB0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2EE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F18u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F2Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F68u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2F90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B2FFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3004u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3010u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B301Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3024u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B302Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3034u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3048u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3050u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3058u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3060u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3068u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3070u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B307Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3090u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3098u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B30FCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3108u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B313Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3144u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3154u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3164u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3178u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3180u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3194u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B319Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B31C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B31D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B31E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B31E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B31F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3200u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B320Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B321Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B322Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3234u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B323Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3248u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3260u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3278u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3284u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B328Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B32F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B330Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3324u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3330u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3338u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B334Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3354u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B335Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3364u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3374u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3380u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3388u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3398u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33BCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B33F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3418u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3420u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B343Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3444u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3450u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3458u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3464u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B346Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3480u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B348Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34C4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34CCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B34F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3500u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3518u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B352Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3534u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B353Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3548u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3550u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B355Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3568u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3578u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3580u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3588u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3598u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B35E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3604u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3620u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B364Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3658u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3660u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3674u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3684u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3694u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36A4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36B4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36D0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B36F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3700u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3714u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3720u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B372Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3738u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3744u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3764u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3780u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3798u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37A0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37B0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B37F0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3810u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B381Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3828u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3830u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3840u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B384Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3858u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3864u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3870u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3878u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3880u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B388Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B389Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38ACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38C0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38DCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38E4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38ECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B38F8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3900u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B390Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3914u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3920u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B393Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3944u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B394Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3968u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3970u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3980u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B398Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3998u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39A8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39B8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39C8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39D8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39E0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39E8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B39F4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A58u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A64u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A84u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3A94u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AA4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AC0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3AE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B00u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3B98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3BFCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C30u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C6Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C78u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C90u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3C9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CA8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CCCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CD4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CE4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CF0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3CF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D0Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D14u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D20u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3D98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DA0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DB4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DBCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DC4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DE0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DE8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3DF8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E28u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E3Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E40u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E4Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E74u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E80u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E88u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E98u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3E9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3ED0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3ED4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EDCu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EECu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3EF4u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F04u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F10u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F1Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F24u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F34u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F44u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F50u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F60u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F70u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F7Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F8Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3F9Cu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FACu, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FB8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FC8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FD0u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FD8u, &recomp_unit_0107, "recomp_unit_0107");
    runtime.register_function(0x089B3FECu, &recomp_unit_0107, "recomp_unit_0107");
}
} // namespace psprecomp
