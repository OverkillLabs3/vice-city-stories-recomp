#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0182[4092] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0,
    13, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 23,
    0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 0, 29, 30, 0, 0, 0, 31, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 38, 39, 0, 40, 0, 41, 0, 0, 42, 0, 0,
    43, 0, 0, 44, 0, 45, 0, 46, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0,
    0, 55, 0, 0, 0, 56, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 64, 0, 65, 66,
    0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0,
    74, 0, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 84, 0, 0, 85, 0, 86,
    0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 94, 0, 0, 95, 96, 0, 97, 0, 98, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 105, 106, 0, 107, 0, 108, 0, 109, 110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0,
    121, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 0, 139, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146,
    0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 161, 0, 162, 0, 163, 0, 0, 164, 0, 165, 166, 0, 0,
    0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 170, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0,
    0, 0, 0, 0, 175, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0,
    182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 194, 195, 0, 196, 0, 197, 0, 0, 198, 0, 199, 200, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0,
    204, 0, 0, 0, 205, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 210, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 214, 0, 0, 0,
    0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 218, 0, 219, 0, 220, 0, 0, 221, 0, 222, 223, 0, 224, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0,
    0, 0, 231, 0, 232, 233, 0, 0, 234, 235, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 239, 240, 0, 241, 0, 242, 0, 0, 243, 0, 244, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 255,
    0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 262, 263, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 0, 0, 0, 276, 0, 277,
    0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 285, 0, 286, 0, 287, 288, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297,
    0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 303, 304, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 316,
    0, 0, 317, 318, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 325, 0, 326,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 332, 0, 0, 0, 333, 0, 334, 335, 0, 336, 0, 0, 0, 337, 0, 338, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 341, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 349,
    0, 350, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0,
    358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0,
    0, 0, 0, 363, 364, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 370,
    0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0,
    0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0,
    0, 389, 0, 390, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 396, 0, 0,
    397, 0, 0, 398, 399, 0, 400, 0, 401, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 404, 405, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 0,
    0, 0, 408, 0, 409, 410, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 0, 415, 416, 417, 0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0,
    430, 0, 431, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 434, 0, 435, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 438, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 442, 443, 0, 0, 0,
    0, 0, 444, 445, 0, 0, 446, 0, 447, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 451, 452, 0, 453, 0, 0, 454,
    0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 0, 460, 0, 461, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 466, 467, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 470, 0, 471, 0,
    0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 478, 479, 0, 0, 0,
    480, 0, 0, 481, 0, 482, 483, 0, 0, 484, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490,
    491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0,
    0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 503, 0, 504,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0,
    0, 509, 0, 510, 0, 0, 511, 0, 512, 0, 513, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0,
    0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 0,
    528, 0, 529, 0, 530, 0, 0, 531, 0, 0, 0, 532, 0, 533, 534, 0, 535, 0, 0, 536, 0, 0, 0, 537, 0, 538, 539, 0, 540, 0, 0, 541,
    0, 0, 0, 542, 0, 543, 544, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 548, 549, 0, 550, 0, 0, 551, 0, 0, 552, 0, 553, 0, 554, 0,
    0, 555, 0, 556, 557, 0, 0, 0, 558, 0, 0, 0, 559, 0, 560, 0, 561, 0, 0, 562, 0, 563, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 568, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0,
    0, 571, 0, 572, 573, 0, 574, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 579, 580, 0, 581, 0, 582,
    0, 583, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 588, 589, 0, 590, 0, 0, 591, 0, 0,
    0, 592, 0, 0, 0, 0, 593, 0, 0, 594, 0, 595, 596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 599, 600, 0, 0, 0, 0, 0, 601, 0, 0,
    602, 0, 603, 604, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0,
    0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 613, 0, 0, 614, 0, 615, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    617, 0, 0, 618, 0, 619, 620, 0, 621, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0,
    0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0,
    639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0,
    0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649,
    0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659, 660, 0, 661, 0, 0, 0, 0, 0, 0, 0,
    662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 667,
    0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 671, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0,
    0, 680, 0, 0, 0, 681, 0, 0, 0, 682, 683, 0, 684, 685, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 690, 0,
    691, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 0, 695, 696, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701,
    702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 707, 708, 0, 0, 0, 0, 0, 0, 0, 0,
    709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 712, 713, 0, 714, 0, 715, 0, 0, 716, 0, 717, 0,
    718, 0, 0, 719, 0, 0, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 724, 0, 725, 0, 726, 0, 0, 0, 0, 0,
    727, 728, 729, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 731, 0, 732, 733, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 0, 0,
    736, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 743, 0,
    0, 0, 744, 745, 0, 746, 747, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    750, 0, 0, 0, 751, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 755, 0, 756, 0, 757, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 759, 0, 0, 760, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0,
    764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0,
    768, 0, 769, 0, 770, 771, 0, 772, 0, 773, 0, 774, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0,
    0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0, 780, 0, 0, 0, 781, 0, 782, 0, 783, 0,
    0, 0, 0, 0, 784, 0, 785, 0, 786, 0, 787, 0, 788, 0, 0, 0, 789, 0, 0, 0, 790, 791, 0, 792, 0, 793, 0, 0, 0, 0, 0, 794,
    795, 796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 0, 801, 0, 802, 803, 0, 804, 0, 0, 0, 0, 0,
    805, 0, 806, 0, 0, 0, 807, 0, 0, 0, 808, 809, 0, 810, 811, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 820,
    0, 0, 0, 821, 0, 0, 822, 0, 823, 0, 0, 824, 0, 0, 825, 0, 826, 0, 827, 0, 0, 0, 828, 0, 829, 830, 0, 0, 0, 831, 0, 0,
    0, 0, 0, 832, 0, 833, 0, 0, 0, 834, 0, 0, 0, 835, 836, 0, 837, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0,
    839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 0, 0, 0, 842, 0, 843, 0, 0, 0, 844, 0, 0, 0,
    845, 846, 0, 847, 848, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851,
    0, 0, 0, 852, 0, 0, 853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 855, 0, 0, 856, 0, 857, 858, 0, 859,
    0, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 862, 0, 0, 0, 863, 864, 0, 865, 866, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0,
    0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 870, 871, 0, 0, 0, 0, 0, 0, 0, 0, 0, 872, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 874, 0, 0, 0, 875, 0, 0, 0, 876,
    877, 0, 878, 0, 879, 0, 0, 0, 0, 0, 880, 881, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 884, 0, 0, 885, 0, 0,
    0, 0, 0, 0, 0, 0, 886, 0, 0, 887, 0, 0, 0, 888, 0, 889, 0, 890, 0, 891, 0, 892, 0, 893, 0, 894, 0, 0, 895, 0, 0, 896,
    0, 0, 897, 0, 0, 898, 0, 0, 0, 899, 0, 900, 0, 901, 0, 902, 0, 903, 0, 904, 0, 0, 905, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 906, 0, 907, 0, 908, 0, 909, 0, 0, 910, 0, 911, 0, 912, 913, 0, 914, 0, 0, 0, 915, 0, 916, 917, 0, 918, 0, 0, 0, 919,
    0, 920, 921, 0, 922, 0, 0, 0, 923, 0, 924, 0, 925, 926, 0, 927, 0, 928, 0, 0, 929, 0, 930, 931, 0, 932, 0, 0, 0, 933, 0, 934,
    0, 935, 0, 936, 0, 937, 0, 938, 0, 939, 0, 940, 0, 0, 0, 941, 0, 0, 0, 0, 0, 942, 0, 0, 943, 0, 944, 0, 945, 0, 946, 0,
    947, 0, 948, 0, 949, 0, 950, 0, 0, 951, 0, 952, 0, 953, 0, 0, 954, 0, 955, 0, 956, 0, 0, 0, 957, 0, 958, 0, 0, 0, 959, 0,
    960, 0, 961, 0, 962, 0, 963, 0, 964, 0, 0, 0, 965, 0, 966, 0, 0, 0, 967, 0, 0, 0, 968, 0, 0, 0, 969, 0, 970, 0, 0, 0,
    0, 971, 0, 972, 0, 0, 0, 0, 973, 0, 974, 0, 0, 0, 975, 0, 976, 0, 0, 0, 0, 0, 977, 978, 0, 0, 979, 0, 0, 0, 980, 0,
    0, 0, 981, 0, 982, 0, 983, 0, 0, 0, 0, 0, 0, 984, 0, 0, 0, 0, 0, 0, 0, 0, 0, 985, 0, 986, 0, 987, 0, 988, 0, 989,
    0, 990, 0, 991, 0, 992, 0, 993, 0, 0, 0, 0, 994, 0, 995, 0, 996, 0, 997, 0, 998, 0, 999, 0, 0, 1000, 0, 1001, 0, 0, 1002, 0,
    1003, 0, 1004, 0, 0, 1005, 0, 1006, 0, 1007, 0, 0, 1008, 0, 1009, 0, 1010, 0, 0, 1011, 0, 0, 0, 1012, 0, 0, 1013, 0, 0, 1014, 0, 1015,
    0, 1016, 0, 1017, 0, 1018, 0, 0, 1019, 0, 0, 1020, 0, 1021, 0, 1022, 0, 0, 0, 1023, 0, 1024, 0, 1025, 0, 1026, 0, 0, 1027, 0, 1028, 0,
    1029, 0, 1030, 0, 1031, 0, 0, 1032, 0, 1033, 0, 0, 0, 0, 0, 0, 0, 0, 1034, 0, 0, 0, 0, 0, 1035, 0, 0, 1036,
};
void recomp_unit_0182_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08ADC000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0182[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08ADC000;
    case 2u: goto L_08ADC00C;
    case 3u: goto L_08ADC02C;
    case 4u: goto L_08ADC06C;
    case 5u: goto L_08ADC08C;
    case 6u: goto L_08ADC094;
    case 7u: goto L_08ADC0A4;
    case 8u: goto L_08ADC0B8;
    case 9u: goto L_08ADC0C8;
    case 10u: goto L_08ADC0D4;
    case 11u: goto L_08ADC0E4;
    case 12u: goto L_08ADC0F0;
    case 13u: goto L_08ADC100;
    case 14u: goto L_08ADC10C;
    case 15u: goto L_08ADC114;
    case 16u: goto L_08ADC120;
    case 17u: goto L_08ADC130;
    case 18u: goto L_08ADC13C;
    case 19u: goto L_08ADC144;
    case 20u: goto L_08ADC150;
    case 21u: goto L_08ADC168;
    case 22u: goto L_08ADC170;
    case 23u: goto L_08ADC17C;
    case 24u: goto L_08ADC18C;
    case 25u: goto L_08ADC1AC;
    case 26u: goto L_08ADC1B4;
    case 27u: goto L_08ADC1C8;
    case 28u: goto L_08ADC1D4;
    case 29u: goto L_08ADC1DC;
    case 30u: goto L_08ADC1E0;
    case 31u: goto L_08ADC1F0;
    case 32u: goto L_08ADC204;
    case 33u: goto L_08ADC220;
    case 34u: goto L_08ADC228;
    case 35u: goto L_08ADC234;
    case 36u: goto L_08ADC240;
    case 37u: goto L_08ADC24C;
    case 38u: goto L_08ADC254;
    case 39u: goto L_08ADC258;
    case 40u: goto L_08ADC260;
    case 41u: goto L_08ADC268;
    case 42u: goto L_08ADC274;
    case 43u: goto L_08ADC280;
    case 44u: goto L_08ADC28C;
    case 45u: goto L_08ADC294;
    case 46u: goto L_08ADC29C;
    case 47u: goto L_08ADC2A0;
    case 48u: goto L_08ADC2A8;
    case 49u: goto L_08ADC2B0;
    case 50u: goto L_08ADC2B8;
    case 51u: goto L_08ADC2C0;
    case 52u: goto L_08ADC2CC;
    case 53u: goto L_08ADC2DC;
    case 54u: goto L_08ADC2F0;
    case 55u: goto L_08ADC304;
    case 56u: goto L_08ADC314;
    case 57u: goto L_08ADC31C;
    case 58u: goto L_08ADC32C;
    case 59u: goto L_08ADC33C;
    case 60u: goto L_08ADC344;
    case 61u: goto L_08ADC350;
    case 62u: goto L_08ADC35C;
    case 63u: goto L_08ADC368;
    case 64u: goto L_08ADC370;
    case 65u: goto L_08ADC378;
    case 66u: goto L_08ADC37C;
    case 67u: goto L_08ADC384;
    case 68u: goto L_08ADC38C;
    case 69u: goto L_08ADC39C;
    case 70u: goto L_08ADC3AC;
    case 71u: goto L_08ADC3B0;
    case 72u: goto L_08ADC3C4;
    case 73u: goto L_08ADC3F8;
    case 74u: goto L_08ADC400;
    case 75u: goto L_08ADC40C;
    case 76u: goto L_08ADC418;
    case 77u: goto L_08ADC420;
    case 78u: goto L_08ADC428;
    case 79u: goto L_08ADC430;
    case 80u: goto L_08ADC444;
    case 81u: goto L_08ADC44C;
    case 82u: goto L_08ADC454;
    case 83u: goto L_08ADC45C;
    case 84u: goto L_08ADC468;
    case 85u: goto L_08ADC474;
    case 86u: goto L_08ADC47C;
    case 87u: goto L_08ADC484;
    case 88u: goto L_08ADC48C;
    case 89u: goto L_08ADC4A0;
    case 90u: goto L_08ADC4A8;
    case 91u: goto L_08ADC4C4;
    case 92u: goto L_08ADC4EC;
    case 93u: goto L_08ADC4FC;
    case 94u: goto L_08ADC514;
    case 95u: goto L_08ADC520;
    case 96u: goto L_08ADC524;
    case 97u: goto L_08ADC52C;
    case 98u: goto L_08ADC534;
    case 99u: goto L_08ADC538;
    case 100u: goto L_08ADC544;
    case 101u: goto L_08ADC560;
    case 102u: goto L_08ADC578;
    case 103u: goto L_08ADC588;
    case 104u: goto L_08ADC5A0;
    case 105u: goto L_08ADC5AC;
    case 106u: goto L_08ADC5B0;
    case 107u: goto L_08ADC5B8;
    case 108u: goto L_08ADC5C0;
    case 109u: goto L_08ADC5C8;
    case 110u: goto L_08ADC5CC;
    case 111u: goto L_08ADC5E0;
    case 112u: goto L_08ADC60C;
    case 113u: goto L_08ADC614;
    case 114u: goto L_08ADC628;
    case 115u: goto L_08ADC630;
    case 116u: goto L_08ADC638;
    case 117u: goto L_08ADC640;
    case 118u: goto L_08ADC668;
    case 119u: goto L_08ADC670;
    case 120u: goto L_08ADC678;
    case 121u: goto L_08ADC680;
    case 122u: goto L_08ADC688;
    case 123u: goto L_08ADC698;
    case 124u: goto L_08ADC6A0;
    case 125u: goto L_08ADC6B0;
    case 126u: goto L_08ADC6BC;
    case 127u: goto L_08ADC6C4;
    case 128u: goto L_08ADC6D4;
    case 129u: goto L_08ADC6DC;
    case 130u: goto L_08ADC6E4;
    case 131u: goto L_08ADC6EC;
    case 132u: goto L_08ADC6F4;
    case 133u: goto L_08ADC6FC;
    case 134u: goto L_08ADC700;
    case 135u: goto L_08ADC724;
    case 136u: goto L_08ADC72C;
    case 137u: goto L_08ADC734;
    case 138u: goto L_08ADC73C;
    case 139u: goto L_08ADC748;
    case 140u: goto L_08ADC74C;
    case 141u: goto L_08ADC754;
    case 142u: goto L_08ADC75C;
    case 143u: goto L_08ADC764;
    case 144u: goto L_08ADC76C;
    case 145u: goto L_08ADC774;
    case 146u: goto L_08ADC77C;
    case 147u: goto L_08ADC784;
    case 148u: goto L_08ADC78C;
    case 149u: goto L_08ADC794;
    case 150u: goto L_08ADC79C;
    case 151u: goto L_08ADC7A4;
    case 152u: goto L_08ADC7AC;
    case 153u: goto L_08ADC7B4;
    case 154u: goto L_08ADC7BC;
    case 155u: goto L_08ADC7D8;
    case 156u: goto L_08ADC7F0;
    case 157u: goto L_08ADC814;
    case 158u: goto L_08ADC824;
    case 159u: goto L_08ADC83C;
    case 160u: goto L_08ADC848;
    case 161u: goto L_08ADC84C;
    case 162u: goto L_08ADC854;
    case 163u: goto L_08ADC85C;
    case 164u: goto L_08ADC868;
    case 165u: goto L_08ADC870;
    case 166u: goto L_08ADC874;
    case 167u: goto L_08ADC88C;
    case 168u: goto L_08ADC8A4;
    case 169u: goto L_08ADC8B0;
    case 170u: goto L_08ADC8B8;
    case 171u: goto L_08ADC8C0;
    case 172u: goto L_08ADC8CC;
    case 173u: goto L_08ADC8D4;
    case 174u: goto L_08ADC8F4;
    case 175u: goto L_08ADC910;
    case 176u: goto L_08ADC914;
    case 177u: goto L_08ADC92C;
    case 178u: goto L_08ADC93C;
    case 179u: goto L_08ADC94C;
    case 180u: goto L_08ADC95C;
    case 181u: goto L_08ADC970;
    case 182u: goto L_08ADC980;
    case 183u: goto L_08ADC994;
    case 184u: goto L_08ADC9D8;
    case 185u: goto L_08ADC9E8;
    case 186u: goto L_08ADC9FC;
    case 187u: goto L_08ADCA18;
    case 188u: goto L_08ADCA28;
    case 189u: goto L_08ADCA34;
    case 190u: goto L_08ADCA50;
    case 191u: goto L_08ADCA60;
    case 192u: goto L_08ADCA6C;
    case 193u: goto L_08ADCA8C;
    case 194u: goto L_08ADCA94;
    case 195u: goto L_08ADCA98;
    case 196u: goto L_08ADCAA0;
    case 197u: goto L_08ADCAA8;
    case 198u: goto L_08ADCAB4;
    case 199u: goto L_08ADCABC;
    case 200u: goto L_08ADCAC0;
    case 201u: goto L_08ADCAC8;
    case 202u: goto L_08ADCAE4;
    case 203u: goto L_08ADCAF0;
    case 204u: goto L_08ADCB00;
    case 205u: goto L_08ADCB10;
    case 206u: goto L_08ADCB14;
    case 207u: goto L_08ADCB1C;
    case 208u: goto L_08ADCB24;
    case 209u: goto L_08ADCB3C;
    case 210u: goto L_08ADCB40;
    case 211u: goto L_08ADCB44;
    case 212u: goto L_08ADCB64;
    case 213u: goto L_08ADCB6C;
    case 214u: goto L_08ADCB70;
    case 215u: goto L_08ADCB84;
    case 216u: goto L_08ADCBB0;
    case 217u: goto L_08ADCBB8;
    case 218u: goto L_08ADCBBC;
    case 219u: goto L_08ADCBC4;
    case 220u: goto L_08ADCBCC;
    case 221u: goto L_08ADCBD8;
    case 222u: goto L_08ADCBE0;
    case 223u: goto L_08ADCBE4;
    case 224u: goto L_08ADCBEC;
    case 225u: goto L_08ADCC30;
    case 226u: goto L_08ADCC38;
    case 227u: goto L_08ADCC44;
    case 228u: goto L_08ADCC50;
    case 229u: goto L_08ADCC5C;
    case 230u: goto L_08ADCC64;
    case 231u: goto L_08ADCC88;
    case 232u: goto L_08ADCC90;
    case 233u: goto L_08ADCC94;
    case 234u: goto L_08ADCCA0;
    case 235u: goto L_08ADCCA4;
    case 236u: goto L_08ADCCA8;
    case 237u: goto L_08ADCCC4;
    case 238u: goto L_08ADCD00;
    case 239u: goto L_08ADCD08;
    case 240u: goto L_08ADCD0C;
    case 241u: goto L_08ADCD14;
    case 242u: goto L_08ADCD1C;
    case 243u: goto L_08ADCD28;
    case 244u: goto L_08ADCD30;
    case 245u: goto L_08ADCD34;
    case 246u: goto L_08ADCD3C;
    case 247u: goto L_08ADCD80;
    case 248u: goto L_08ADCD90;
    case 249u: goto L_08ADCD9C;
    case 250u: goto L_08ADCDB8;
    case 251u: goto L_08ADCDC0;
    case 252u: goto L_08ADCDDC;
    case 253u: goto L_08ADCDE4;
    case 254u: goto L_08ADCDF0;
    case 255u: goto L_08ADCDFC;
    case 256u: goto L_08ADCE0C;
    case 257u: goto L_08ADCE20;
    case 258u: goto L_08ADCE2C;
    case 259u: goto L_08ADCE3C;
    case 260u: goto L_08ADCE44;
    case 261u: goto L_08ADCE68;
    case 262u: goto L_08ADCE70;
    case 263u: goto L_08ADCE74;
    case 264u: goto L_08ADCEA0;
    case 265u: goto L_08ADCEB4;
    case 266u: goto L_08ADCEC0;
    case 267u: goto L_08ADCF0C;
    case 268u: goto L_08ADCF14;
    case 269u: goto L_08ADCF28;
    case 270u: goto L_08ADCF38;
    case 271u: goto L_08ADCF40;
    case 272u: goto L_08ADCF48;
    case 273u: goto L_08ADCF50;
    case 274u: goto L_08ADCF58;
    case 275u: goto L_08ADCF60;
    case 276u: goto L_08ADCF74;
    case 277u: goto L_08ADCF7C;
    case 278u: goto L_08ADCF84;
    case 279u: goto L_08ADCFA0;
    case 280u: goto L_08ADCFA8;
    case 281u: goto L_08ADCFDC;
    case 282u: goto L_08ADCFF8;
    case 283u: goto L_08ADD030;
    case 284u: goto L_08ADD044;
    case 285u: goto L_08ADD054;
    case 286u: goto L_08ADD05C;
    case 287u: goto L_08ADD064;
    case 288u: goto L_08ADD068;
    case 289u: goto L_08ADD070;
    case 290u: goto L_08ADD090;
    case 291u: goto L_08ADD098;
    case 292u: goto L_08ADD0A0;
    case 293u: goto L_08ADD0C0;
    case 294u: goto L_08ADD0C8;
    case 295u: goto L_08ADD0D0;
    case 296u: goto L_08ADD0E4;
    case 297u: goto L_08ADD0FC;
    case 298u: goto L_08ADD104;
    case 299u: goto L_08ADD120;
    case 300u: goto L_08ADD128;
    case 301u: goto L_08ADD140;
    case 302u: goto L_08ADD148;
    case 303u: goto L_08ADD184;
    case 304u: goto L_08ADD188;
    case 305u: goto L_08ADD1AC;
    case 306u: goto L_08ADD1D0;
    case 307u: goto L_08ADD1D8;
    case 308u: goto L_08ADD1E4;
    case 309u: goto L_08ADD228;
    case 310u: goto L_08ADD230;
    case 311u: goto L_08ADD23C;
    case 312u: goto L_08ADD244;
    case 313u: goto L_08ADD24C;
    case 314u: goto L_08ADD270;
    case 315u: goto L_08ADD278;
    case 316u: goto L_08ADD27C;
    case 317u: goto L_08ADD288;
    case 318u: goto L_08ADD28C;
    case 319u: goto L_08ADD290;
    case 320u: goto L_08ADD2A8;
    case 321u: goto L_08ADD2C8;
    case 322u: goto L_08ADD2D0;
    case 323u: goto L_08ADD2E0;
    case 324u: goto L_08ADD2F0;
    case 325u: goto L_08ADD2F4;
    case 326u: goto L_08ADD2FC;
    case 327u: goto L_08ADD318;
    case 328u: goto L_08ADD338;
    case 329u: goto L_08ADD350;
    case 330u: goto L_08ADD35C;
    case 331u: goto L_08ADD378;
    case 332u: goto L_08ADD38C;
    case 333u: goto L_08ADD39C;
    case 334u: goto L_08ADD3A4;
    case 335u: goto L_08ADD3A8;
    case 336u: goto L_08ADD3B0;
    case 337u: goto L_08ADD3C0;
    case 338u: goto L_08ADD3C8;
    case 339u: goto L_08ADD3CC;
    case 340u: goto L_08ADD3DC;
    case 341u: goto L_08ADD404;
    case 342u: goto L_08ADD414;
    case 343u: goto L_08ADD420;
    case 344u: goto L_08ADD438;
    case 345u: goto L_08ADD448;
    case 346u: goto L_08ADD450;
    case 347u: goto L_08ADD460;
    case 348u: goto L_08ADD468;
    case 349u: goto L_08ADD47C;
    case 350u: goto L_08ADD484;
    case 351u: goto L_08ADD488;
    case 352u: goto L_08ADD4B4;
    case 353u: goto L_08ADD4BC;
    case 354u: goto L_08ADD4D4;
    case 355u: goto L_08ADD4DC;
    case 356u: goto L_08ADD4EC;
    case 357u: goto L_08ADD4F8;
    case 358u: goto L_08ADD500;
    case 359u: goto L_08ADD52C;
    case 360u: goto L_08ADD53C;
    case 361u: goto L_08ADD558;
    case 362u: goto L_08ADD570;
    case 363u: goto L_08ADD58C;
    case 364u: goto L_08ADD590;
    case 365u: goto L_08ADD5A0;
    case 366u: goto L_08ADD5B4;
    case 367u: goto L_08ADD5C8;
    case 368u: goto L_08ADD5D8;
    case 369u: goto L_08ADD5F4;
    case 370u: goto L_08ADD5FC;
    case 371u: goto L_08ADD618;
    case 372u: goto L_08ADD620;
    case 373u: goto L_08ADD628;
    case 374u: goto L_08ADD66C;
    case 375u: goto L_08ADD674;
    case 376u: goto L_08ADD684;
    case 377u: goto L_08ADD68C;
    case 378u: goto L_08ADD694;
    case 379u: goto L_08ADD69C;
    case 380u: goto L_08ADD6A4;
    case 381u: goto L_08ADD6AC;
    case 382u: goto L_08ADD6B4;
    case 383u: goto L_08ADD6CC;
    case 384u: goto L_08ADD6D4;
    case 385u: goto L_08ADD6DC;
    case 386u: goto L_08ADD6E4;
    case 387u: goto L_08ADD6EC;
    case 388u: goto L_08ADD6F4;
    case 389u: goto L_08ADD704;
    case 390u: goto L_08ADD70C;
    case 391u: goto L_08ADD710;
    case 392u: goto L_08ADD720;
    case 393u: goto L_08ADD73C;
    case 394u: goto L_08ADD75C;
    case 395u: goto L_08ADD768;
    case 396u: goto L_08ADD774;
    case 397u: goto L_08ADD780;
    case 398u: goto L_08ADD78C;
    case 399u: goto L_08ADD790;
    case 400u: goto L_08ADD798;
    case 401u: goto L_08ADD7A0;
    case 402u: goto L_08ADD7A8;
    case 403u: goto L_08ADD7C4;
    case 404u: goto L_08ADD7CC;
    case 405u: goto L_08ADD7D0;
    case 406u: goto L_08ADD7D8;
    case 407u: goto L_08ADD7EC;
    case 408u: goto L_08ADD808;
    case 409u: goto L_08ADD810;
    case 410u: goto L_08ADD814;
    case 411u: goto L_08ADD81C;
    case 412u: goto L_08ADD834;
    case 413u: goto L_08ADD854;
    case 414u: goto L_08ADD884;
    case 415u: goto L_08ADD89C;
    case 416u: goto L_08ADD8A0;
    case 417u: goto L_08ADD8A4;
    case 418u: goto L_08ADD8AC;
    case 419u: goto L_08ADD8BC;
    case 420u: goto L_08ADD8C4;
    case 421u: goto L_08ADD8CC;
    case 422u: goto L_08ADD8D4;
    case 423u: goto L_08ADD8DC;
    case 424u: goto L_08ADD90C;
    case 425u: goto L_08ADD91C;
    case 426u: goto L_08ADD928;
    case 427u: goto L_08ADD948;
    case 428u: goto L_08ADD960;
    case 429u: goto L_08ADD968;
    case 430u: goto L_08ADD980;
    case 431u: goto L_08ADD988;
    case 432u: goto L_08ADD9A0;
    case 433u: goto L_08ADD9A8;
    case 434u: goto L_08ADD9B8;
    case 435u: goto L_08ADD9C0;
    case 436u: goto L_08ADD9CC;
    case 437u: goto L_08ADD9F0;
    case 438u: goto L_08ADD9F4;
    case 439u: goto L_08ADDA1C;
    case 440u: goto L_08ADDA54;
    case 441u: goto L_08ADDA64;
    case 442u: goto L_08ADDA6C;
    case 443u: goto L_08ADDA70;
    case 444u: goto L_08ADDA88;
    case 445u: goto L_08ADDA8C;
    case 446u: goto L_08ADDA98;
    case 447u: goto L_08ADDAA0;
    case 448u: goto L_08ADDAA4;
    case 449u: goto L_08ADDAD0;
    case 450u: goto L_08ADDADC;
    case 451u: goto L_08ADDAE4;
    case 452u: goto L_08ADDAE8;
    case 453u: goto L_08ADDAF0;
    case 454u: goto L_08ADDAFC;
    case 455u: goto L_08ADDB04;
    case 456u: goto L_08ADDB10;
    case 457u: goto L_08ADDB18;
    case 458u: goto L_08ADDB20;
    case 459u: goto L_08ADDB34;
    case 460u: goto L_08ADDB40;
    case 461u: goto L_08ADDB48;
    case 462u: goto L_08ADDB4C;
    case 463u: goto L_08ADDB94;
    case 464u: goto L_08ADDBA8;
    case 465u: goto L_08ADDBBC;
    case 466u: goto L_08ADDBC0;
    case 467u: goto L_08ADDBC4;
    case 468u: goto L_08ADDBD4;
    case 469u: goto L_08ADDBDC;
    case 470u: goto L_08ADDBF0;
    case 471u: goto L_08ADDBF8;
    case 472u: goto L_08ADDC08;
    case 473u: goto L_08ADDC10;
    case 474u: goto L_08ADDC38;
    case 475u: goto L_08ADDC48;
    case 476u: goto L_08ADDC58;
    case 477u: goto L_08ADDC64;
    case 478u: goto L_08ADDC6C;
    case 479u: goto L_08ADDC70;
    case 480u: goto L_08ADDC80;
    case 481u: goto L_08ADDC8C;
    case 482u: goto L_08ADDC94;
    case 483u: goto L_08ADDC98;
    case 484u: goto L_08ADDCA4;
    case 485u: goto L_08ADDCB4;
    case 486u: goto L_08ADDCC0;
    case 487u: goto L_08ADDCD0;
    case 488u: goto L_08ADDCDC;
    case 489u: goto L_08ADDCF0;
    case 490u: goto L_08ADDCFC;
    case 491u: goto L_08ADDD00;
    case 492u: goto L_08ADDD28;
    case 493u: goto L_08ADDD50;
    case 494u: goto L_08ADDD5C;
    case 495u: goto L_08ADDD68;
    case 496u: goto L_08ADDD70;
    case 497u: goto L_08ADDD78;
    case 498u: goto L_08ADDD88;
    case 499u: goto L_08ADDD90;
    case 500u: goto L_08ADDD98;
    case 501u: goto L_08ADDDD8;
    case 502u: goto L_08ADDDEC;
    case 503u: goto L_08ADDDF4;
    case 504u: goto L_08ADDDFC;
    case 505u: goto L_08ADDEC0;
    case 506u: goto L_08ADDEC8;
    case 507u: goto L_08ADDECC;
    case 508u: goto L_08ADDEE8;
    case 509u: goto L_08ADDF04;
    case 510u: goto L_08ADDF0C;
    case 511u: goto L_08ADDF18;
    case 512u: goto L_08ADDF20;
    case 513u: goto L_08ADDF28;
    case 514u: goto L_08ADDF40;
    case 515u: goto L_08ADDF48;
    case 516u: goto L_08ADDF58;
    case 517u: goto L_08ADDF74;
    case 518u: goto L_08ADDF90;
    case 519u: goto L_08ADDFA0;
    case 520u: goto L_08ADDFA8;
    case 521u: goto L_08ADDFB4;
    case 522u: goto L_08ADDFC4;
    case 523u: goto L_08ADDFD0;
    case 524u: goto L_08ADDFD8;
    case 525u: goto L_08ADDFE0;
    case 526u: goto L_08ADDFE8;
    case 527u: goto L_08ADDFF4;
    case 528u: goto L_08ADE000;
    case 529u: goto L_08ADE008;
    case 530u: goto L_08ADE010;
    case 531u: goto L_08ADE01C;
    case 532u: goto L_08ADE02C;
    case 533u: goto L_08ADE034;
    case 534u: goto L_08ADE038;
    case 535u: goto L_08ADE040;
    case 536u: goto L_08ADE04C;
    case 537u: goto L_08ADE05C;
    case 538u: goto L_08ADE064;
    case 539u: goto L_08ADE068;
    case 540u: goto L_08ADE070;
    case 541u: goto L_08ADE07C;
    case 542u: goto L_08ADE08C;
    case 543u: goto L_08ADE094;
    case 544u: goto L_08ADE098;
    case 545u: goto L_08ADE0A0;
    case 546u: goto L_08ADE0AC;
    case 547u: goto L_08ADE0BC;
    case 548u: goto L_08ADE0C4;
    case 549u: goto L_08ADE0C8;
    case 550u: goto L_08ADE0D0;
    case 551u: goto L_08ADE0DC;
    case 552u: goto L_08ADE0E8;
    case 553u: goto L_08ADE0F0;
    case 554u: goto L_08ADE0F8;
    case 555u: goto L_08ADE104;
    case 556u: goto L_08ADE10C;
    case 557u: goto L_08ADE110;
    case 558u: goto L_08ADE120;
    case 559u: goto L_08ADE130;
    case 560u: goto L_08ADE138;
    case 561u: goto L_08ADE140;
    case 562u: goto L_08ADE14C;
    case 563u: goto L_08ADE154;
    case 564u: goto L_08ADE15C;
    case 565u: goto L_08ADE16C;
    case 566u: goto L_08ADE1AC;
    case 567u: goto L_08ADE1BC;
    case 568u: goto L_08ADE1C4;
    case 569u: goto L_08ADE1C8;
    case 570u: goto L_08ADE1F8;
    case 571u: goto L_08ADE204;
    case 572u: goto L_08ADE20C;
    case 573u: goto L_08ADE210;
    case 574u: goto L_08ADE218;
    case 575u: goto L_08ADE230;
    case 576u: goto L_08ADE238;
    case 577u: goto L_08ADE254;
    case 578u: goto L_08ADE260;
    case 579u: goto L_08ADE268;
    case 580u: goto L_08ADE26C;
    case 581u: goto L_08ADE274;
    case 582u: goto L_08ADE27C;
    case 583u: goto L_08ADE284;
    case 584u: goto L_08ADE28C;
    case 585u: goto L_08ADE29C;
    case 586u: goto L_08ADE2C8;
    case 587u: goto L_08ADE2D4;
    case 588u: goto L_08ADE2DC;
    case 589u: goto L_08ADE2E0;
    case 590u: goto L_08ADE2E8;
    case 591u: goto L_08ADE2F4;
    case 592u: goto L_08ADE304;
    case 593u: goto L_08ADE318;
    case 594u: goto L_08ADE324;
    case 595u: goto L_08ADE32C;
    case 596u: goto L_08ADE330;
    case 597u: goto L_08ADE340;
    case 598u: goto L_08ADE350;
    case 599u: goto L_08ADE358;
    case 600u: goto L_08ADE35C;
    case 601u: goto L_08ADE374;
    case 602u: goto L_08ADE380;
    case 603u: goto L_08ADE388;
    case 604u: goto L_08ADE38C;
    case 605u: goto L_08ADE398;
    case 606u: goto L_08ADE3A4;
    case 607u: goto L_08ADE3C8;
    case 608u: goto L_08ADE3D0;
    case 609u: goto L_08ADE3E0;
    case 610u: goto L_08ADE404;
    case 611u: goto L_08ADE430;
    case 612u: goto L_08ADE438;
    case 613u: goto L_08ADE43C;
    case 614u: goto L_08ADE448;
    case 615u: goto L_08ADE450;
    case 616u: goto L_08ADE454;
    case 617u: goto L_08ADE480;
    case 618u: goto L_08ADE48C;
    case 619u: goto L_08ADE494;
    case 620u: goto L_08ADE498;
    case 621u: goto L_08ADE4A0;
    case 622u: goto L_08ADE4B4;
    case 623u: goto L_08ADE4BC;
    case 624u: goto L_08ADE4D4;
    case 625u: goto L_08ADE4E8;
    case 626u: goto L_08ADE534;
    case 627u: goto L_08ADE58C;
    case 628u: goto L_08ADE5A4;
    case 629u: goto L_08ADE5E0;
    case 630u: goto L_08ADE5EC;
    case 631u: goto L_08ADE630;
    case 632u: goto L_08ADE63C;
    case 633u: goto L_08ADE668;
    case 634u: goto L_08ADE670;
    case 635u: goto L_08ADE684;
    case 636u: goto L_08ADE6B8;
    case 637u: goto L_08ADE6E4;
    case 638u: goto L_08ADE6F4;
    case 639u: goto L_08ADE700;
    case 640u: goto L_08ADE740;
    case 641u: goto L_08ADE768;
    case 642u: goto L_08ADE798;
    case 643u: goto L_08ADE7B4;
    case 644u: goto L_08ADE7D0;
    case 645u: goto L_08ADE7D8;
    case 646u: goto L_08ADE7F4;
    case 647u: goto L_08ADE814;
    case 648u: goto L_08ADE8F4;
    case 649u: goto L_08ADE8FC;
    case 650u: goto L_08ADE91C;
    case 651u: goto L_08ADE93C;
    case 652u: goto L_08ADE944;
    case 653u: goto L_08ADE954;
    case 654u: goto L_08ADE980;
    case 655u: goto L_08ADE98C;
    case 656u: goto L_08ADE9AC;
    case 657u: goto L_08ADE9B4;
    case 658u: goto L_08ADE9C4;
    case 659u: goto L_08ADE9D4;
    case 660u: goto L_08ADE9D8;
    case 661u: goto L_08ADE9E0;
    case 662u: goto L_08ADEA00;
    case 663u: goto L_08ADEA20;
    case 664u: goto L_08ADEA4C;
    case 665u: goto L_08ADEA5C;
    case 666u: goto L_08ADEA68;
    case 667u: goto L_08ADEA7C;
    case 668u: goto L_08ADEA84;
    case 669u: goto L_08ADEA94;
    case 670u: goto L_08ADEAA4;
    case 671u: goto L_08ADEAA8;
    case 672u: goto L_08ADEAB0;
    case 673u: goto L_08ADEAD0;
    case 674u: goto L_08ADEAF0;
    case 675u: goto L_08ADEB1C;
    case 676u: goto L_08ADEB2C;
    case 677u: goto L_08ADEB30;
    case 678u: goto L_08ADEB44;
    case 679u: goto L_08ADEB78;
    case 680u: goto L_08ADEB84;
    case 681u: goto L_08ADEB94;
    case 682u: goto L_08ADEBA4;
    case 683u: goto L_08ADEBA8;
    case 684u: goto L_08ADEBB0;
    case 685u: goto L_08ADEBB4;
    case 686u: goto L_08ADEBC8;
    case 687u: goto L_08ADEBD4;
    case 688u: goto L_08ADEBE4;
    case 689u: goto L_08ADEBF4;
    case 690u: goto L_08ADEBF8;
    case 691u: goto L_08ADEC00;
    case 692u: goto L_08ADEC04;
    case 693u: goto L_08ADEC30;
    case 694u: goto L_08ADEC38;
    case 695u: goto L_08ADEC58;
    case 696u: goto L_08ADEC5C;
    case 697u: goto L_08ADEC90;
    case 698u: goto L_08ADECB0;
    case 699u: goto L_08ADECBC;
    case 700u: goto L_08ADECD0;
    case 701u: goto L_08ADECFC;
    case 702u: goto L_08ADED00;
    case 703u: goto L_08ADED18;
    case 704u: goto L_08ADED28;
    case 705u: goto L_08ADED44;
    case 706u: goto L_08ADED50;
    case 707u: goto L_08ADED58;
    case 708u: goto L_08ADED5C;
    case 709u: goto L_08ADED80;
    case 710u: goto L_08ADEDA4;
    case 711u: goto L_08ADEDC8;
    case 712u: goto L_08ADEDD0;
    case 713u: goto L_08ADEDD4;
    case 714u: goto L_08ADEDDC;
    case 715u: goto L_08ADEDE4;
    case 716u: goto L_08ADEDF0;
    case 717u: goto L_08ADEDF8;
    case 718u: goto L_08ADEE00;
    case 719u: goto L_08ADEE0C;
    case 720u: goto L_08ADEE28;
    case 721u: goto L_08ADEE34;
    case 722u: goto L_08ADEE44;
    case 723u: goto L_08ADEE54;
    case 724u: goto L_08ADEE58;
    case 725u: goto L_08ADEE60;
    case 726u: goto L_08ADEE68;
    case 727u: goto L_08ADEE80;
    case 728u: goto L_08ADEE84;
    case 729u: goto L_08ADEE88;
    case 730u: goto L_08ADEEAC;
    case 731u: goto L_08ADEEB8;
    case 732u: goto L_08ADEEC0;
    case 733u: goto L_08ADEEC4;
    case 734u: goto L_08ADEED8;
    case 735u: goto L_08ADEEE8;
    case 736u: goto L_08ADEF00;
    case 737u: goto L_08ADEF24;
    case 738u: goto L_08ADEF30;
    case 739u: goto L_08ADEF40;
    case 740u: goto L_08ADEF48;
    case 741u: goto L_08ADEF60;
    case 742u: goto L_08ADEF68;
    case 743u: goto L_08ADEF78;
    case 744u: goto L_08ADEF88;
    case 745u: goto L_08ADEF8C;
    case 746u: goto L_08ADEF94;
    case 747u: goto L_08ADEF98;
    case 748u: goto L_08ADEFB0;
    case 749u: goto L_08ADEFD0;
    case 750u: goto L_08ADF000;
    case 751u: goto L_08ADF010;
    case 752u: goto L_08ADF014;
    case 753u: goto L_08ADF02C;
    case 754u: goto L_08ADF058;
    case 755u: goto L_08ADF060;
    case 756u: goto L_08ADF068;
    case 757u: goto L_08ADF070;
    case 758u: goto L_08ADF0A0;
    case 759u: goto L_08ADF0AC;
    case 760u: goto L_08ADF0B8;
    case 761u: goto L_08ADF0CC;
    case 762u: goto L_08ADF0D4;
    case 763u: goto L_08ADF0F8;
    case 764u: goto L_08ADF100;
    case 765u: goto L_08ADF130;
    case 766u: goto L_08ADF15C;
    case 767u: goto L_08ADF170;
    case 768u: goto L_08ADF180;
    case 769u: goto L_08ADF188;
    case 770u: goto L_08ADF190;
    case 771u: goto L_08ADF194;
    case 772u: goto L_08ADF19C;
    case 773u: goto L_08ADF1A4;
    case 774u: goto L_08ADF1AC;
    case 775u: goto L_08ADF1B4;
    case 776u: goto L_08ADF1F0;
    case 777u: goto L_08ADF210;
    case 778u: goto L_08ADF244;
    case 779u: goto L_08ADF24C;
    case 780u: goto L_08ADF258;
    case 781u: goto L_08ADF268;
    case 782u: goto L_08ADF270;
    case 783u: goto L_08ADF278;
    case 784u: goto L_08ADF290;
    case 785u: goto L_08ADF298;
    case 786u: goto L_08ADF2A0;
    case 787u: goto L_08ADF2A8;
    case 788u: goto L_08ADF2B0;
    case 789u: goto L_08ADF2C0;
    case 790u: goto L_08ADF2D0;
    case 791u: goto L_08ADF2D4;
    case 792u: goto L_08ADF2DC;
    case 793u: goto L_08ADF2E4;
    case 794u: goto L_08ADF2FC;
    case 795u: goto L_08ADF300;
    case 796u: goto L_08ADF304;
    case 797u: goto L_08ADF31C;
    case 798u: goto L_08ADF354;
    case 799u: goto L_08ADF370;
    case 800u: goto L_08ADF3C8;
    case 801u: goto L_08ADF3D4;
    case 802u: goto L_08ADF3DC;
    case 803u: goto L_08ADF3E0;
    case 804u: goto L_08ADF3E8;
    case 805u: goto L_08ADF400;
    case 806u: goto L_08ADF408;
    case 807u: goto L_08ADF418;
    case 808u: goto L_08ADF428;
    case 809u: goto L_08ADF42C;
    case 810u: goto L_08ADF434;
    case 811u: goto L_08ADF438;
    case 812u: goto L_08ADF454;
    case 813u: goto L_08ADF474;
    case 814u: goto L_08ADF4A0;
    case 815u: goto L_08ADF4B0;
    case 816u: goto L_08ADF4BC;
    case 817u: goto L_08ADF4D0;
    case 818u: goto L_08ADF4EC;
    case 819u: goto L_08ADF4F4;
    case 820u: goto L_08ADF4FC;
    case 821u: goto L_08ADF50C;
    case 822u: goto L_08ADF518;
    case 823u: goto L_08ADF520;
    case 824u: goto L_08ADF52C;
    case 825u: goto L_08ADF538;
    case 826u: goto L_08ADF540;
    case 827u: goto L_08ADF548;
    case 828u: goto L_08ADF558;
    case 829u: goto L_08ADF560;
    case 830u: goto L_08ADF564;
    case 831u: goto L_08ADF574;
    case 832u: goto L_08ADF58C;
    case 833u: goto L_08ADF594;
    case 834u: goto L_08ADF5A4;
    case 835u: goto L_08ADF5B4;
    case 836u: goto L_08ADF5B8;
    case 837u: goto L_08ADF5C0;
    case 838u: goto L_08ADF5E0;
    case 839u: goto L_08ADF600;
    case 840u: goto L_08ADF630;
    case 841u: goto L_08ADF640;
    case 842u: goto L_08ADF658;
    case 843u: goto L_08ADF660;
    case 844u: goto L_08ADF670;
    case 845u: goto L_08ADF680;
    case 846u: goto L_08ADF684;
    case 847u: goto L_08ADF68C;
    case 848u: goto L_08ADF690;
    case 849u: goto L_08ADF6AC;
    case 850u: goto L_08ADF6CC;
    case 851u: goto L_08ADF6FC;
    case 852u: goto L_08ADF70C;
    case 853u: goto L_08ADF718;
    case 854u: goto L_08ADF748;
    case 855u: goto L_08ADF75C;
    case 856u: goto L_08ADF768;
    case 857u: goto L_08ADF770;
    case 858u: goto L_08ADF774;
    case 859u: goto L_08ADF77C;
    case 860u: goto L_08ADF794;
    case 861u: goto L_08ADF79C;
    case 862u: goto L_08ADF7AC;
    case 863u: goto L_08ADF7BC;
    case 864u: goto L_08ADF7C0;
    case 865u: goto L_08ADF7C8;
    case 866u: goto L_08ADF7CC;
    case 867u: goto L_08ADF7E8;
    case 868u: goto L_08ADF808;
    case 869u: goto L_08ADF834;
    case 870u: goto L_08ADF844;
    case 871u: goto L_08ADF848;
    case 872u: goto L_08ADF870;
    case 873u: goto L_08ADF8D4;
    case 874u: goto L_08ADF8DC;
    case 875u: goto L_08ADF8EC;
    case 876u: goto L_08ADF8FC;
    case 877u: goto L_08ADF900;
    case 878u: goto L_08ADF908;
    case 879u: goto L_08ADF910;
    case 880u: goto L_08ADF928;
    case 881u: goto L_08ADF92C;
    case 882u: goto L_08ADF930;
    case 883u: goto L_08ADF960;
    case 884u: goto L_08ADF968;
    case 885u: goto L_08ADF974;
    case 886u: goto L_08ADF998;
    case 887u: goto L_08ADF9A4;
    case 888u: goto L_08ADF9B4;
    case 889u: goto L_08ADF9BC;
    case 890u: goto L_08ADF9C4;
    case 891u: goto L_08ADF9CC;
    case 892u: goto L_08ADF9D4;
    case 893u: goto L_08ADF9DC;
    case 894u: goto L_08ADF9E4;
    case 895u: goto L_08ADF9F0;
    case 896u: goto L_08ADF9FC;
    case 897u: goto L_08ADFA08;
    case 898u: goto L_08ADFA14;
    case 899u: goto L_08ADFA24;
    case 900u: goto L_08ADFA2C;
    case 901u: goto L_08ADFA34;
    case 902u: goto L_08ADFA3C;
    case 903u: goto L_08ADFA44;
    case 904u: goto L_08ADFA4C;
    case 905u: goto L_08ADFA58;
    case 906u: goto L_08ADFA88;
    case 907u: goto L_08ADFA90;
    case 908u: goto L_08ADFA98;
    case 909u: goto L_08ADFAA0;
    case 910u: goto L_08ADFAAC;
    case 911u: goto L_08ADFAB4;
    case 912u: goto L_08ADFABC;
    case 913u: goto L_08ADFAC0;
    case 914u: goto L_08ADFAC8;
    case 915u: goto L_08ADFAD8;
    case 916u: goto L_08ADFAE0;
    case 917u: goto L_08ADFAE4;
    case 918u: goto L_08ADFAEC;
    case 919u: goto L_08ADFAFC;
    case 920u: goto L_08ADFB04;
    case 921u: goto L_08ADFB08;
    case 922u: goto L_08ADFB10;
    case 923u: goto L_08ADFB20;
    case 924u: goto L_08ADFB28;
    case 925u: goto L_08ADFB30;
    case 926u: goto L_08ADFB34;
    case 927u: goto L_08ADFB3C;
    case 928u: goto L_08ADFB44;
    case 929u: goto L_08ADFB50;
    case 930u: goto L_08ADFB58;
    case 931u: goto L_08ADFB5C;
    case 932u: goto L_08ADFB64;
    case 933u: goto L_08ADFB74;
    case 934u: goto L_08ADFB7C;
    case 935u: goto L_08ADFB84;
    case 936u: goto L_08ADFB8C;
    case 937u: goto L_08ADFB94;
    case 938u: goto L_08ADFB9C;
    case 939u: goto L_08ADFBA4;
    case 940u: goto L_08ADFBAC;
    case 941u: goto L_08ADFBBC;
    case 942u: goto L_08ADFBD4;
    case 943u: goto L_08ADFBE0;
    case 944u: goto L_08ADFBE8;
    case 945u: goto L_08ADFBF0;
    case 946u: goto L_08ADFBF8;
    case 947u: goto L_08ADFC00;
    case 948u: goto L_08ADFC08;
    case 949u: goto L_08ADFC10;
    case 950u: goto L_08ADFC18;
    case 951u: goto L_08ADFC24;
    case 952u: goto L_08ADFC2C;
    case 953u: goto L_08ADFC34;
    case 954u: goto L_08ADFC40;
    case 955u: goto L_08ADFC48;
    case 956u: goto L_08ADFC50;
    case 957u: goto L_08ADFC60;
    case 958u: goto L_08ADFC68;
    case 959u: goto L_08ADFC78;
    case 960u: goto L_08ADFC80;
    case 961u: goto L_08ADFC88;
    case 962u: goto L_08ADFC90;
    case 963u: goto L_08ADFC98;
    case 964u: goto L_08ADFCA0;
    case 965u: goto L_08ADFCB0;
    case 966u: goto L_08ADFCB8;
    case 967u: goto L_08ADFCC8;
    case 968u: goto L_08ADFCD8;
    case 969u: goto L_08ADFCE8;
    case 970u: goto L_08ADFCF0;
    case 971u: goto L_08ADFD04;
    case 972u: goto L_08ADFD0C;
    case 973u: goto L_08ADFD20;
    case 974u: goto L_08ADFD28;
    case 975u: goto L_08ADFD38;
    case 976u: goto L_08ADFD40;
    case 977u: goto L_08ADFD58;
    case 978u: goto L_08ADFD5C;
    case 979u: goto L_08ADFD68;
    case 980u: goto L_08ADFD78;
    case 981u: goto L_08ADFD88;
    case 982u: goto L_08ADFD90;
    case 983u: goto L_08ADFD98;
    case 984u: goto L_08ADFDB4;
    case 985u: goto L_08ADFDDC;
    case 986u: goto L_08ADFDE4;
    case 987u: goto L_08ADFDEC;
    case 988u: goto L_08ADFDF4;
    case 989u: goto L_08ADFDFC;
    case 990u: goto L_08ADFE04;
    case 991u: goto L_08ADFE0C;
    case 992u: goto L_08ADFE14;
    case 993u: goto L_08ADFE1C;
    case 994u: goto L_08ADFE30;
    case 995u: goto L_08ADFE38;
    case 996u: goto L_08ADFE40;
    case 997u: goto L_08ADFE48;
    case 998u: goto L_08ADFE50;
    case 999u: goto L_08ADFE58;
    case 1000u: goto L_08ADFE64;
    case 1001u: goto L_08ADFE6C;
    case 1002u: goto L_08ADFE78;
    case 1003u: goto L_08ADFE80;
    case 1004u: goto L_08ADFE88;
    case 1005u: goto L_08ADFE94;
    case 1006u: goto L_08ADFE9C;
    case 1007u: goto L_08ADFEA4;
    case 1008u: goto L_08ADFEB0;
    case 1009u: goto L_08ADFEB8;
    case 1010u: goto L_08ADFEC0;
    case 1011u: goto L_08ADFECC;
    case 1012u: goto L_08ADFEDC;
    case 1013u: goto L_08ADFEE8;
    case 1014u: goto L_08ADFEF4;
    case 1015u: goto L_08ADFEFC;
    case 1016u: goto L_08ADFF04;
    case 1017u: goto L_08ADFF0C;
    case 1018u: goto L_08ADFF14;
    case 1019u: goto L_08ADFF20;
    case 1020u: goto L_08ADFF2C;
    case 1021u: goto L_08ADFF34;
    case 1022u: goto L_08ADFF3C;
    case 1023u: goto L_08ADFF4C;
    case 1024u: goto L_08ADFF54;
    case 1025u: goto L_08ADFF5C;
    case 1026u: goto L_08ADFF64;
    case 1027u: goto L_08ADFF70;
    case 1028u: goto L_08ADFF78;
    case 1029u: goto L_08ADFF80;
    case 1030u: goto L_08ADFF88;
    case 1031u: goto L_08ADFF90;
    case 1032u: goto L_08ADFF9C;
    case 1033u: goto L_08ADFFA4;
    case 1034u: goto L_08ADFFC8;
    case 1035u: goto L_08ADFFE0;
    case 1036u: goto L_08ADFFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08ADC000:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(6))))));
      if (branch_taken) {
          goto L_08ADC02C;
      }
      goto L_08ADC00C;
    }
L_08ADC00C:
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45696u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(6))))));
    goto L_08ADC02C;
L_08ADC02C:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC06C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ADC094;
      }
      goto L_08ADC08C;
    }
L_08ADC08C:
    ctx.gpr[31] = (0x08ADC094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC094u) goto L_08ADC094;
    return;
L_08ADC094:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADC0A4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 578u, 0x08A5315Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC0A4u) goto L_08ADC0A4;
    return;
L_08ADC0A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC0B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADC0C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 355u, 0x08A8997Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC0C8u) goto L_08ADC0C8;
    return;
L_08ADC0C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC0D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADC0E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 357u, 0x08A89998u>(ctx, &aot_mem) && ctx.pc == 0x08ADC0E4u) goto L_08ADC0E4;
    return;
L_08ADC0E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC0F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC10C;
      }
      goto L_08ADC100;
    }
L_08ADC100:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08ADC10C;
      }
      goto L_08ADC10C;
    }
L_08ADC10C:
    ctx.gpr[31] = (0x08ADC114u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08ADCA6C;
L_08ADC114:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC13C;
      }
      goto L_08ADC130;
    }
L_08ADC130:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08ADC13C;
      }
      goto L_08ADC13C;
    }
L_08ADC13C:
    ctx.gpr[31] = (0x08ADC144u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08ADCA6C;
L_08ADC144:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC150:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ADC170;
      }
      goto L_08ADC168;
    }
L_08ADC168:
    ctx.gpr[31] = (0x08ADC170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC170u) goto L_08ADC170;
    return;
L_08ADC170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[31] = (0x08ADC17Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem) && ctx.pc == 0x08ADC17Cu) goto L_08ADC17C;
    return;
L_08ADC17C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC18C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ADC1B4;
      }
      goto L_08ADC1AC;
    }
L_08ADC1AC:
    ctx.gpr[31] = (0x08ADC1B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC1B4u) goto L_08ADC1B4;
    return;
L_08ADC1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08ADC1C8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC1C8u) goto L_08ADC1C8;
    return;
L_08ADC1C8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADC1E0;
      }
      goto L_08ADC1D4;
    }
L_08ADC1D4:
    ctx.gpr[31] = (0x08ADC1DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08ADC1DCu) goto L_08ADC1DC;
    return;
L_08ADC1DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08ADC1E0;
L_08ADC1E0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08ADC1F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 319u, 0x08B655B8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC1F0u) goto L_08ADC1F0;
    return;
L_08ADC1F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC204:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ADC228;
      }
      goto L_08ADC220;
    }
L_08ADC220:
    ctx.gpr[31] = (0x08ADC228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC228u) goto L_08ADC228;
    return;
L_08ADC228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[31] = (0x08ADC234u);
    ctx.gpr[5] = (ctx.gpr[16] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC234u) goto L_08ADC234;
    return;
L_08ADC234:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC268;
      }
      goto L_08ADC240;
    }
L_08ADC240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADC258;
    }
    goto L_08ADC24C;
L_08ADC24C:
    ctx.gpr[31] = (0x08ADC254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC254u) goto L_08ADC254;
    return;
L_08ADC254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADC258;
L_08ADC258:
    ctx.gpr[31] = (0x08ADC260u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem) && ctx.pc == 0x08ADC260u) goto L_08ADC260;
    return;
L_08ADC260:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC2B8;
      }
      goto L_08ADC268;
    }
L_08ADC268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08ADC2A0;
    }
    goto L_08ADC274;
L_08ADC274:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADC280u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08ADC280u) goto L_08ADC280;
    return;
L_08ADC280:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_08ADC29C;
    }
    goto L_08ADC28C;
L_08ADC28C:
    ctx.gpr[31] = (0x08ADC294u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC294u) goto L_08ADC294;
    return;
L_08ADC294:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08ADC29C;
L_08ADC29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08ADC2A0;
L_08ADC2A0:
    ctx.gpr[31] = (0x08ADC2A8u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-220));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08ADC2A8u) goto L_08ADC2A8;
    return;
L_08ADC2A8:
    ctx.gpr[31] = (0x08ADC2B0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC2B0u) goto L_08ADC2B0;
    return;
L_08ADC2B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC3B0;
      }
      goto L_08ADC2B8;
    }
L_08ADC2B8:
    ctx.gpr[31] = (0x08ADC2C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 467u, 0x08A52A78u>(ctx, &aot_mem) && ctx.pc == 0x08ADC2C0u) goto L_08ADC2C0;
    return;
L_08ADC2C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08ADC2CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08ADC2CCu) goto L_08ADC2CC;
    return;
L_08ADC2CC:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADC2DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC2DCu) goto L_08ADC2DC;
    return;
L_08ADC2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC344;
      }
      goto L_08ADC2F0;
    }
L_08ADC2F0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-212));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08ADC304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC304u) goto L_08ADC304;
    return;
L_08ADC304:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADC314u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem) && ctx.pc == 0x08ADC314u) goto L_08ADC314;
    return;
L_08ADC314:
    ctx.gpr[31] = (0x08ADC31Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC31Cu) goto L_08ADC31C;
    return;
L_08ADC31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ADC33C;
      }
      goto L_08ADC32C;
    }
L_08ADC32C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    ctx.gpr[31] = (0x08ADC33Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC33Cu) goto L_08ADC33C;
    return;
L_08ADC33C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ADC3B0;
      }
      goto L_08ADC344;
    }
L_08ADC344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08ADC37C;
    }
    goto L_08ADC350;
L_08ADC350:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADC35Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08ADC35Cu) goto L_08ADC35C;
    return;
L_08ADC35C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[16] == 0u) {
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
        goto L_08ADC378;
    }
    goto L_08ADC368;
L_08ADC368:
    ctx.gpr[31] = (0x08ADC370u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC370u) goto L_08ADC370;
    return;
L_08ADC370:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08ADC378;
L_08ADC378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08ADC37C;
L_08ADC37C:
    ctx.gpr[31] = (0x08ADC384u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-220));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08ADC384u) goto L_08ADC384;
    return;
L_08ADC384:
    ctx.gpr[31] = (0x08ADC38Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC38Cu) goto L_08ADC38C;
    return;
L_08ADC38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ADC3AC;
      }
      goto L_08ADC39C;
    }
L_08ADC39C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    ctx.gpr[31] = (0x08ADC3ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08ADC3ACu) goto L_08ADC3AC;
    return;
L_08ADC3AC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08ADC3B0;
L_08ADC3B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC3C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[16] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-19192));
      if (branch_taken) {
          goto L_08ADC454;
      }
      goto L_08ADC3F8;
    }
L_08ADC3F8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC428;
      }
      goto L_08ADC400;
    }
L_08ADC400:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08ADC40Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08ADC40Cu) goto L_08ADC40C;
    return;
L_08ADC40C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
        goto L_08ADC428;
    }
    goto L_08ADC418;
L_08ADC418:
    ctx.gpr[31] = (0x08ADC420u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC420u) goto L_08ADC420;
    return;
L_08ADC420:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08ADC428;
L_08ADC428:
    ctx.gpr[31] = (0x08ADC430u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ADC7A4;
L_08ADC430:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ADC444u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08ADC444u) goto L_08ADC444;
    return;
L_08ADC444:
    ctx.gpr[31] = (0x08ADC44Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC44Cu) goto L_08ADC44C;
    return;
L_08ADC44C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC4A8;
      }
      goto L_08ADC454;
    }
L_08ADC454:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC484;
      }
      goto L_08ADC45C;
    }
L_08ADC45C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08ADC468u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08ADC468u) goto L_08ADC468;
    return;
L_08ADC468:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
        goto L_08ADC484;
    }
    goto L_08ADC474;
L_08ADC474:
    ctx.gpr[31] = (0x08ADC47Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADC47Cu) goto L_08ADC47C;
    return;
L_08ADC47C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08ADC484;
L_08ADC484:
    ctx.gpr[31] = (0x08ADC48Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08ADC7B4;
L_08ADC48C:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ADC4A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08ADC4A0u) goto L_08ADC4A0;
    return;
L_08ADC4A0:
    ctx.gpr[31] = (0x08ADC4A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem) && ctx.pc == 0x08ADC4A8u) goto L_08ADC4A8;
    return;
L_08ADC4A8:
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
L_08ADC4C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08ADC4ECu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08ADCA6C;
L_08ADC4EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC524;
      }
      goto L_08ADC4FC;
    }
L_08ADC4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ADC514u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADC514u) goto L_08ADC514;
    return;
L_08ADC514:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADC524;
      }
      goto L_08ADC520;
    }
L_08ADC520:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ADC524;
L_08ADC524:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC538;
      }
      goto L_08ADC52C;
    }
L_08ADC52C:
    ctx.gpr[31] = (0x08ADC534u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 597u, 0x089D3458u>(ctx, &aot_mem) && ctx.pc == 0x08ADC534u) goto L_08ADC534;
    return;
L_08ADC534:
    ctx.gpr[19] = (ctx.gpr[2] & 255u);
    goto L_08ADC538;
L_08ADC538:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADC544u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08ADC3C4;
L_08ADC544:
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
L_08ADC560:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADC578u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08ADCA6C;
L_08ADC578:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC5B0;
      }
      goto L_08ADC588;
    }
L_08ADC588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ADC5A0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADC5A0u) goto L_08ADC5A0;
    return;
L_08ADC5A0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADC5B0;
      }
      goto L_08ADC5AC;
    }
L_08ADC5AC:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08ADC5B0;
L_08ADC5B0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC5C8;
      }
      goto L_08ADC5B8;
    }
L_08ADC5B8:
    ctx.gpr[31] = (0x08ADC5C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 597u, 0x089D3458u>(ctx, &aot_mem) && ctx.pc == 0x08ADC5C0u) goto L_08ADC5C0;
    return;
L_08ADC5C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC5CC;
      }
      goto L_08ADC5C8;
    }
L_08ADC5C8:
    ctx.gpr[2] = (0u | 65535u);
    goto L_08ADC5CC;
L_08ADC5CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC5E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADC614;
      }
      goto L_08ADC60C;
    }
L_08ADC60C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADC700;
      }
      goto L_08ADC614;
    }
L_08ADC614:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADC628;
L_08ADC628:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
        goto L_08ADC640;
    }
    goto L_08ADC630;
L_08ADC630:
    ctx.gpr[31] = (0x08ADC638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC638u) goto L_08ADC638;
    return;
L_08ADC638:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_08ADC640;
L_08ADC640:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC6E4;
      }
      goto L_08ADC668;
    }
L_08ADC668:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08ADC680;
      }
      goto L_08ADC670;
    }
L_08ADC670:
    ctx.gpr[31] = (0x08ADC678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADC678u) goto L_08ADC678;
    return;
L_08ADC678:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    goto L_08ADC680;
L_08ADC680:
    ctx.gpr[31] = (0x08ADC688u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem) && ctx.pc == 0x08ADC688u) goto L_08ADC688;
    return;
L_08ADC688:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ADC698u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADC560;
L_08ADC698:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC6B0;
      }
      goto L_08ADC6A0;
    }
L_08ADC6A0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADC6DC;
      }
      goto L_08ADC6B0;
    }
L_08ADC6B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ADC6BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADC560;
L_08ADC6BC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADC6D4;
      }
      goto L_08ADC6C4;
    }
L_08ADC6C4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADC6DC;
      }
      goto L_08ADC6D4;
    }
L_08ADC6D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADC700;
      }
      goto L_08ADC6DC;
    }
L_08ADC6DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC628;
      }
      goto L_08ADC6E4;
    }
L_08ADC6E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC6FC;
      }
      goto L_08ADC6EC;
    }
L_08ADC6EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADC6FC;
      }
      goto L_08ADC6F4;
    }
L_08ADC6F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADC700;
      }
      goto L_08ADC6FC;
    }
L_08ADC6FC:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ADC700;
L_08ADC700:
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
L_08ADC724:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC72C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC734:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC73C:
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC74C;
      }
      goto L_08ADC748;
    }
L_08ADC748:
    ctx.gpr[5] = (0u | 11u);
    goto L_08ADC74C;
L_08ADC74C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC754:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC75C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC764:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC76C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC774:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC77C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC784:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC78C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC794:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC79C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC7A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(57)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC7AC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC7B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC7BC:
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[2] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13104));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC7D8:
    ctx.gpr[4] = (ctx.gpr[5] & 65535u);
    ctx.gpr[2] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13104));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC7F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08ADC814u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08ADCA6C;
L_08ADC814:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC84C;
      }
      goto L_08ADC824;
    }
L_08ADC824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ADC83Cu);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADC83Cu) goto L_08ADC83C;
    return;
L_08ADC83C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADC84C;
      }
      goto L_08ADC848;
    }
L_08ADC848:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08ADC84C;
L_08ADC84C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC870;
      }
      goto L_08ADC854;
    }
L_08ADC854:
    ctx.gpr[31] = (0x08ADC85Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 597u, 0x089D3458u>(ctx, &aot_mem) && ctx.pc == 0x08ADC85Cu) goto L_08ADC85C;
    return;
L_08ADC85C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADC868u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ADC7BC;
L_08ADC868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC874;
      }
      goto L_08ADC870;
    }
L_08ADC870:
    ctx.gpr[2] = (ctx.gpr[28] + static_cast<std::uint32_t>(10204));
    goto L_08ADC874;
L_08ADC874:
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
L_08ADC88C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[2] = (2234u << 16u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(13104));
      if (branch_taken) {
          goto L_08ADC8C0;
      }
      goto L_08ADC8A4;
    }
L_08ADC8A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ADC8B8;
      }
      goto L_08ADC8B0;
    }
L_08ADC8B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC8CC;
      }
      goto L_08ADC8B8;
    }
L_08ADC8B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ADC8CC;
      }
      goto L_08ADC8C0;
    }
L_08ADC8C0:
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08ADC8CC;
L_08ADC8CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC8D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ADC914;
      }
      goto L_08ADC8F4;
    }
L_08ADC8F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 14u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 14u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC914;
      }
      goto L_08ADC910;
    }
L_08ADC910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    goto L_08ADC914;
L_08ADC914:
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10336)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC94C;
      }
      goto L_08ADC92C;
    }
L_08ADC92C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADC94C;
      }
      goto L_08ADC93C;
    }
L_08ADC93C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_08ADC95C;
      }
      goto L_08ADC94C;
    }
L_08ADC94C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    goto L_08ADC95C;
L_08ADC95C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADC970u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 3u, 0x08AE0010u>(ctx, &aot_mem) && ctx.pc == 0x08ADC970u) goto L_08ADC970;
    return;
L_08ADC970:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADC980u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08ADCA34;
L_08ADC980:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC994:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10336)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADC9D8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 3u, 0x08AE0010u>(ctx, &aot_mem) && ctx.pc == 0x08ADC9D8u) goto L_08ADC9D8;
    return;
L_08ADC9D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ADC9E8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08ADCA34;
L_08ADC9E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADC9FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(233)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ADCA28;
      }
      goto L_08ADCA18;
    }
L_08ADCA18:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08ADCA28u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 130u, 0x08A88B10u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA28u) goto L_08ADCA28;
    return;
L_08ADCA28:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADCA34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(233)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ADCA60;
      }
      goto L_08ADCA50;
    }
L_08ADCA50:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08ADCA60u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 139u, 0x08A88BC8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA60u) goto L_08ADCA60;
    return;
L_08ADCA60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADCA6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ADCA98;
      }
      goto L_08ADCA8C;
    }
L_08ADCA8C:
    ctx.gpr[31] = (0x08ADCA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCA94u) goto L_08ADCA94;
    return;
L_08ADCA94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADCA98;
L_08ADCA98:
    ctx.gpr[31] = (0x08ADCAA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem) && ctx.pc == 0x08ADCAA0u) goto L_08ADCAA0;
    return;
L_08ADCAA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB6C;
      }
      goto L_08ADCAA8;
    }
L_08ADCAA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCAC0;
      }
      goto L_08ADCAB4;
    }
L_08ADCAB4:
    ctx.gpr[31] = (0x08ADCABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCABCu) goto L_08ADCABC;
    return;
L_08ADCABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADCAC0;
L_08ADCAC0:
    ctx.gpr[31] = (0x08ADCAC8u);
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCAC8u) goto L_08ADCAC8;
    return;
L_08ADCAC8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_08ADCB1C;
      }
      goto L_08ADCAE4;
    }
L_08ADCAE4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_08ADCAF0;
L_08ADCAF0:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
        goto L_08ADCB10;
    }
    goto L_08ADCB00;
L_08ADCB00:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADCB14;
      }
      goto L_08ADCB10;
    }
L_08ADCB10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08ADCB14;
L_08ADCB14:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_08ADCAF0;
    }
    goto L_08ADCB1C;
L_08ADCB1C:
    if (ctx.gpr[17] == ctx.gpr[6]) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08ADCB40;
    }
    goto L_08ADCB24;
L_08ADCB24:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
        goto L_08ADCB44;
    }
    goto L_08ADCB3C;
L_08ADCB3C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADCB40;
L_08ADCB40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08ADCB44;
L_08ADCB44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCB6C;
      }
      goto L_08ADCB64;
    }
L_08ADCB64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08ADCB70;
      }
      goto L_08ADCB6C;
    }
L_08ADCB6C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ADCB70;
L_08ADCB70:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADCB84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ADCBBC;
      }
      goto L_08ADCBB0;
    }
L_08ADCBB0:
    ctx.gpr[31] = (0x08ADCBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCBB8u) goto L_08ADCBB8;
    return;
L_08ADCBB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADCBBC;
L_08ADCBBC:
    ctx.gpr[31] = (0x08ADCBC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem) && ctx.pc == 0x08ADCBC4u) goto L_08ADCBC4;
    return;
L_08ADCBC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCCA4;
      }
      goto L_08ADCBCC;
    }
L_08ADCBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCBE4;
      }
      goto L_08ADCBD8;
    }
L_08ADCBD8:
    ctx.gpr[31] = (0x08ADCBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCBE0u) goto L_08ADCBE0;
    return;
L_08ADCBE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADCBE4;
L_08ADCBE4:
    ctx.gpr[31] = (0x08ADCBECu);
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCBECu) goto L_08ADCBEC;
    return;
L_08ADCBEC:
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCCA4;
      }
      goto L_08ADCC30;
    }
L_08ADCC30:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08ADCC38;
L_08ADCC38:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCC5C;
      }
      goto L_08ADCC44;
    }
L_08ADCC44:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADCC5C;
      }
      goto L_08ADCC50;
    }
L_08ADCC50:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(6)));
    if (ctx.gpr[6] == ctx.gpr[16]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
        goto L_08ADCC94;
    }
    goto L_08ADCC5C;
L_08ADCC5C:
    ctx.gpr[31] = (0x08ADCC64u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADCC64u) goto L_08ADCC64;
    return;
L_08ADCC64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ADCC38;
      }
      goto L_08ADCC88;
    }
L_08ADCC88:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08ADCCA0;
      }
      goto L_08ADCC90;
    }
L_08ADCC90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    goto L_08ADCC94;
L_08ADCC94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCCA8;
      }
      goto L_08ADCCA0;
    }
L_08ADCCA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_08ADCCA4;
L_08ADCCA4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ADCCA8;
L_08ADCCA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADCCC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[6] << 24u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 24u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ADCD0C;
      }
      goto L_08ADCD00;
    }
L_08ADCD00:
    ctx.gpr[31] = (0x08ADCD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD08u) goto L_08ADCD08;
    return;
L_08ADCD08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADCD0C;
L_08ADCD0C:
    ctx.gpr[31] = (0x08ADCD14u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD14u) goto L_08ADCD14;
    return;
L_08ADCD14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE70;
      }
      goto L_08ADCD1C;
    }
L_08ADCD1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCD34;
      }
      goto L_08ADCD28;
    }
L_08ADCD28:
    ctx.gpr[31] = (0x08ADCD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD30u) goto L_08ADCD30;
    return;
L_08ADCD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADCD34;
L_08ADCD34:
    ctx.gpr[31] = (0x08ADCD3Cu);
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADCD3Cu) goto L_08ADCD3C;
    return;
L_08ADCD3C:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08ADCE70;
      }
      goto L_08ADCD80;
    }
L_08ADCD80:
    ctx.gpr[19] = (0u | 3u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08ADCD90;
L_08ADCD90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE3C;
      }
      goto L_08ADCD9C;
    }
L_08ADCD9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ADCDB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADCDB8u) goto L_08ADCDB8;
    return;
L_08ADCDB8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08ADCDE4;
      }
      goto L_08ADCDC0;
    }
L_08ADCDC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ADCDDCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADCDDCu) goto L_08ADCDDC;
    return;
L_08ADCDDC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08ADCE3C;
      }
      goto L_08ADCDE4;
    }
L_08ADCDE4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCE3C;
      }
      goto L_08ADCDF0;
    }
L_08ADCDF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08ADCE20;
    }
    goto L_08ADCDFC;
L_08ADCDFC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ADCE0Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADCE0Cu) goto L_08ADCE0C;
    return;
L_08ADCE0C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08ADCE20;
L_08ADCE20:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ADCE3C;
      }
      goto L_08ADCE2C;
    }
L_08ADCE2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08ADCE74;
      }
      goto L_08ADCE3C;
    }
L_08ADCE3C:
    ctx.gpr[31] = (0x08ADCE44u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADCE44u) goto L_08ADCE44;
    return;
L_08ADCE44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08ADCD90;
      }
      goto L_08ADCE68;
    }
L_08ADCE68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    goto L_08ADCE70;
L_08ADCE70:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ADCE74;
L_08ADCE74:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADCEA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08ADCEB4u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    goto L_08ADCFF8;
L_08ADCEB4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADCEC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCFA8;
      }
      goto L_08ADCF0C;
    }
L_08ADCF0C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADCF48;
      }
      goto L_08ADCF14;
    }
L_08ADCF14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08ADCF28u);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADCF28u) goto L_08ADCF28;
    return;
L_08ADCF28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ADCF38u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADCF38u) goto L_08ADCF38;
    return;
L_08ADCF38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADCF48;
      }
      goto L_08ADCF40;
    }
L_08ADCF40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ADCF48;
      }
      goto L_08ADCF48;
    }
L_08ADCF48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCF60;
      }
      goto L_08ADCF50;
    }
L_08ADCF50:
    ctx.gpr[31] = (0x08ADCF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 542u, 0x0888F890u>(ctx, &aot_mem) && ctx.pc == 0x08ADCF58u) goto L_08ADCF58;
    return;
L_08ADCF58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCF7C;
      }
      goto L_08ADCF60;
    }
L_08ADCF60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCF84;
      }
      goto L_08ADCF74;
    }
L_08ADCF74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCFA0;
      }
      goto L_08ADCF7C;
    }
L_08ADCF7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCFDC;
      }
      goto L_08ADCF84;
    }
L_08ADCF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ADCFA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADCFA0u) goto L_08ADCFA0;
    return;
L_08ADCFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADCFDC;
      }
      goto L_08ADCFA8;
    }
L_08ADCFA8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (0u | 7u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10338)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ADCFDCu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08ADCA34;
L_08ADCFDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADCFF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[19] = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ADD064;
      }
      goto L_08ADD030;
    }
L_08ADD030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08ADD044u);
    ctx.gpr[21] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD044u) goto L_08ADD044;
    return;
L_08ADD044:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ADD054u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADD054u) goto L_08ADD054;
    return;
L_08ADD054:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADD068;
      }
      goto L_08ADD05C;
    }
L_08ADD05C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ADD068;
      }
      goto L_08ADD064;
    }
L_08ADD064:
    ctx.gpr[4] = (0u | 0u);
    goto L_08ADD068;
L_08ADD068:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD0A0;
      }
      goto L_08ADD070;
    }
L_08ADD070:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD0A0;
      }
      goto L_08ADD090;
    }
L_08ADD090:
    ctx.gpr[31] = (0x08ADD098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 542u, 0x0888F890u>(ctx, &aot_mem) && ctx.pc == 0x08ADD098u) goto L_08ADD098;
    return;
L_08ADD098:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD0C8;
      }
      goto L_08ADD0A0;
    }
L_08ADD0A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD0D0;
      }
      goto L_08ADD0C0;
    }
L_08ADD0C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD128;
      }
      goto L_08ADD0C8;
    }
L_08ADD0C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADD188;
      }
      goto L_08ADD0D0;
    }
L_08ADD0D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD184;
      }
      goto L_08ADD0E4;
    }
L_08ADD0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ADD0FCu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADD0FCu) goto L_08ADD0FC;
    return;
L_08ADD0FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD184;
      }
      goto L_08ADD104;
    }
L_08ADD104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ADD120u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADD120u) goto L_08ADD120;
    return;
L_08ADD120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD184;
      }
      goto L_08ADD128;
    }
L_08ADD128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ADD140u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADD140u) goto L_08ADD140;
    return;
L_08ADD140:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD184;
      }
      goto L_08ADD148;
    }
L_08ADD148:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 7u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10338)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ADD184u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08ADCA34;
L_08ADD184:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ADD188;
L_08ADD188:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD1AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ADD1D8;
      }
      goto L_08ADD1D0;
    }
L_08ADD1D0:
    ctx.gpr[31] = (0x08ADD1D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD1D8u) goto L_08ADD1D8;
    return;
L_08ADD1D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[31] = (0x08ADD1E4u);
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD1E4u) goto L_08ADD1E4;
    return;
L_08ADD1E4:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD28C;
      }
      goto L_08ADD228;
    }
L_08ADD228:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08ADD230;
L_08ADD230:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD244;
      }
      goto L_08ADD23C;
    }
L_08ADD23C:
    if (ctx.gpr[6] == ctx.gpr[16]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
        goto L_08ADD27C;
    }
    goto L_08ADD244;
L_08ADD244:
    ctx.gpr[31] = (0x08ADD24Cu);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD24Cu) goto L_08ADD24C;
    return;
L_08ADD24C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08ADD230;
      }
      goto L_08ADD270;
    }
L_08ADD270:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ADD288;
      }
      goto L_08ADD278;
    }
L_08ADD278:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    goto L_08ADD27C;
L_08ADD27C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD290;
      }
      goto L_08ADD288;
    }
L_08ADD288:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_08ADD28C;
L_08ADD28C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ADD290;
L_08ADD290:
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
L_08ADD2A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADD2FC;
      }
      goto L_08ADD2C8;
    }
L_08ADD2C8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    goto L_08ADD2D0;
L_08ADD2D0:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
        goto L_08ADD2F0;
    }
    goto L_08ADD2E0;
L_08ADD2E0:
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADD2F4;
      }
      goto L_08ADD2F0;
    }
L_08ADD2F0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08ADD2F4;
L_08ADD2F4:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
        goto L_08ADD2D0;
    }
    goto L_08ADD2FC;
L_08ADD2FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ADD338;
      }
      goto L_08ADD318;
    }
L_08ADD318:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD3CC;
      }
      goto L_08ADD338;
    }
L_08ADD338:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_08ADD35C;
      }
      goto L_08ADD350;
    }
L_08ADD350:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08ADD35C;
L_08ADD35C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08ADD378u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 372u, 0x08B71E68u>(ctx, &aot_mem) && ctx.pc == 0x08ADD378u) goto L_08ADD378;
    return;
L_08ADD378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08ADD3A8;
    }
    goto L_08ADD38C;
L_08ADD38C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD3A4;
      }
      goto L_08ADD39C;
    }
L_08ADD39C:
    ctx.gpr[31] = (0x08ADD3A4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD3A4u) goto L_08ADD3A4;
    return;
L_08ADD3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ADD3A8;
L_08ADD3A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD3C8;
      }
      goto L_08ADD3B0;
    }
L_08ADD3B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADD3C8;
      }
      goto L_08ADD3C0;
    }
L_08ADD3C0:
    ctx.gpr[31] = (0x08ADD3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD3C8u) goto L_08ADD3C8;
    return;
L_08ADD3C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08ADD3CC;
L_08ADD3CC:
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD3DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(164));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADD404u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08ADD2A8;
L_08ADD404:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08ADD420;
      }
      goto L_08ADD414;
    }
L_08ADD414:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08ADD420;
L_08ADD420:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD450;
      }
      goto L_08ADD438;
    }
L_08ADD438:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADD450;
      }
      goto L_08ADD448;
    }
L_08ADD448:
    ctx.gpr[31] = (0x08ADD450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADD450u) goto L_08ADD450;
    return;
L_08ADD450:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD460:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD468:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADD488;
    }
    goto L_08ADD47C;
L_08ADD47C:
    ctx.gpr[31] = (0x08ADD484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD484u) goto L_08ADD484;
    return;
L_08ADD484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADD488;
L_08ADD488:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD4B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5472)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD4BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADD4DC;
      }
      goto L_08ADD4D4;
    }
L_08ADD4D4:
    ctx.gpr[31] = (0x08ADD4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD4DCu) goto L_08ADD4DC;
    return;
L_08ADD4DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD4F8;
      }
      goto L_08ADD4EC;
    }
L_08ADD4EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD500;
      }
      goto L_08ADD4F8;
    }
L_08ADD4F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD674;
      }
      goto L_08ADD500;
    }
L_08ADD500:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08ADD52C;
L_08ADD52C:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD590;
      }
      goto L_08ADD53C;
    }
L_08ADD53C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(256)));
      if (branch_taken) {
          goto L_08ADD570;
      }
      goto L_08ADD558;
    }
L_08ADD558:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_08ADD58C;
      }
      goto L_08ADD570;
    }
L_08ADD570:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[10]);
    goto L_08ADD58C;
L_08ADD58C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(256), ctx.gpr[6]);
    goto L_08ADD590;
L_08ADD590:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ADD52C;
      }
      goto L_08ADD5A0;
    }
L_08ADD5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(102) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD5C8;
      }
      goto L_08ADD5B4;
    }
L_08ADD5B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(101));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    goto L_08ADD5C8;
L_08ADD5C8:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD674;
      }
      goto L_08ADD5D8;
    }
L_08ADD5D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(260)));
      if (branch_taken) {
          goto L_08ADD618;
      }
      goto L_08ADD5F4;
    }
L_08ADD5F4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD618;
      }
      goto L_08ADD5FC;
    }
L_08ADD5FC:
    ctx.gpr[5] = (0u | 59u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08ADD628;
      }
      goto L_08ADD618;
    }
L_08ADD618:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08ADD628;
      }
      goto L_08ADD620;
    }
L_08ADD620:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_08ADD628;
L_08ADD628:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[9] = (0u | 17u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9949)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(5), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(9), ctx.gpr[7]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(13), ctx.gpr[8]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ADD66Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08ADCA34;
L_08ADD66C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08ADD674;
L_08ADD674:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD684:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD68C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD694:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD69C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD6A4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD6AC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD6B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08ADD6CCu);
    // nop
    goto L_08ADC774;
L_08ADD6CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ADD70C;
      }
      goto L_08ADD6D4;
    }
L_08ADD6D4:
    ctx.gpr[31] = (0x08ADD6DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADD684;
L_08ADD6DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD70C;
      }
      goto L_08ADD6E4;
    }
L_08ADD6E4:
    ctx.gpr[31] = (0x08ADD6ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADD68C;
L_08ADD6EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD70C;
      }
      goto L_08ADD6F4;
    }
L_08ADD6F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADD70C;
      }
      goto L_08ADD704;
    }
L_08ADD704:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADD710;
      }
      goto L_08ADD70C;
    }
L_08ADD70C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ADD710;
L_08ADD710:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD720:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD75C;
      }
      goto L_08ADD73C;
    }
L_08ADD73C:
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9950)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ADD75Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08ADCA34;
L_08ADD75C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD768:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD774:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD78C;
      }
      goto L_08ADD780;
    }
L_08ADD780:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADD790;
      }
      goto L_08ADD78C;
    }
L_08ADD78C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ADD790;
L_08ADD790:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD798:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD7A0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD7A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADD7D0;
    }
    goto L_08ADD7C4;
L_08ADD7C4:
    ctx.gpr[31] = (0x08ADD7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD7CCu) goto L_08ADD7CC;
    return;
L_08ADD7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADD7D0;
L_08ADD7D0:
    ctx.gpr[31] = (0x08ADD7D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD7D8u) goto L_08ADD7D8;
    return;
L_08ADD7D8:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD7EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADD814;
    }
    goto L_08ADD808;
L_08ADD808:
    ctx.gpr[31] = (0x08ADD810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD810u) goto L_08ADD810;
    return;
L_08ADD810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADD814;
L_08ADD814:
    ctx.gpr[31] = (0x08ADD81Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD81Cu) goto L_08ADD81C;
    return;
L_08ADD81C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD834:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(277)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(277), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADD854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADD8A0;
      }
      goto L_08ADD884;
    }
L_08ADD884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADD8A4;
      }
      goto L_08ADD89C;
    }
L_08ADD89C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADD8A0;
L_08ADD8A0:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADD8A4;
L_08ADD8A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD8C4;
      }
      goto L_08ADD8AC;
    }
L_08ADD8AC:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD8CC;
      }
      goto L_08ADD8BC;
    }
L_08ADD8BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD8D4;
      }
      goto L_08ADD8C4;
    }
L_08ADD8C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADD9F4;
      }
      goto L_08ADD8CC;
    }
L_08ADD8CC:
    ctx.gpr[31] = (0x08ADD8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADD8D4u) goto L_08ADD8D4;
    return;
L_08ADD8D4:
    ctx.gpr[31] = (0x08ADD8DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 559u, 0x08A5306Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADD8DCu) goto L_08ADD8DC;
    return;
L_08ADD8DC:
    ctx.gpr[21] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2237u << 16u);
      if (branch_taken) {
          goto L_08ADD9F0;
      }
      goto L_08ADD90C;
    }
L_08ADD90C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[16] = (0u | 4u);
    goto L_08ADD91C;
L_08ADD91C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD9C0;
      }
      goto L_08ADD928;
    }
L_08ADD928:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD9C0;
      }
      goto L_08ADD948;
    }
L_08ADD948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ADD960u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADD960u) goto L_08ADD960;
    return;
L_08ADD960:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08ADD9A8;
      }
      goto L_08ADD968;
    }
L_08ADD968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ADD980u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADD980u) goto L_08ADD980;
    return;
L_08ADD980:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADD9A8;
      }
      goto L_08ADD988;
    }
L_08ADD988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08ADD9A0u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADD9A0u) goto L_08ADD9A0;
    return;
L_08ADD9A0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ADD9C0;
      }
      goto L_08ADD9A8;
    }
L_08ADD9A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08ADD9C0;
      }
      goto L_08ADD9B8;
    }
L_08ADD9B8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    goto L_08ADD9C0;
L_08ADD9C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ADD9CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADD9CCu) goto L_08ADD9CC;
    return;
L_08ADD9CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADD91C;
      }
      goto L_08ADD9F0;
    }
L_08ADD9F0:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    goto L_08ADD9F4;
L_08ADD9F4:
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
L_08ADDA1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ADDA88;
      }
      goto L_08ADDA54;
    }
L_08ADDA54:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADDA70;
    }
    goto L_08ADDA64;
L_08ADDA64:
    ctx.gpr[31] = (0x08ADDA6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDA6Cu) goto L_08ADDA6C;
    return;
L_08ADDA6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADDA70;
L_08ADDA70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDD00;
      }
      goto L_08ADDA88;
    }
L_08ADDA88:
    ctx.gpr[18] = (0u | 0u);
    goto L_08ADDA8C;
L_08ADDA8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADDAA4;
    }
    goto L_08ADDA98;
L_08ADDA98:
    ctx.gpr[31] = (0x08ADDAA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDAA0u) goto L_08ADDAA0;
    return;
L_08ADDAA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADDAA4;
L_08ADDAA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDB04;
      }
      goto L_08ADDAD0;
    }
L_08ADDAD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADDAE8;
    }
    goto L_08ADDADC;
L_08ADDADC:
    ctx.gpr[31] = (0x08ADDAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDAE4u) goto L_08ADDAE4;
    return;
L_08ADDAE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADDAE8;
L_08ADDAE8:
    ctx.gpr[31] = (0x08ADDAF0u);
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem) && ctx.pc == 0x08ADDAF0u) goto L_08ADDAF0;
    return;
L_08ADDAF0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ADDAFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADC204;
L_08ADDAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADDA8C;
      }
      goto L_08ADDB04;
    }
L_08ADDB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDB18;
      }
      goto L_08ADDB10;
    }
L_08ADDB10:
    ctx.gpr[31] = (0x08ADDB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDB18u) goto L_08ADDB18;
    return;
L_08ADDB18:
    ctx.gpr[31] = (0x08ADDB20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 594u, 0x08A532B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDB20u) goto L_08ADDB20;
    return;
L_08ADDB20:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDC80;
      }
      goto L_08ADDB34;
    }
L_08ADDB34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
        goto L_08ADDB4C;
    }
    goto L_08ADDB40;
L_08ADDB40:
    ctx.gpr[31] = (0x08ADDB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x08ADDB48u) goto L_08ADDB48;
    return;
L_08ADDB48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    goto L_08ADDB4C;
L_08ADDB4C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(260));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (ctx.gpr[19] << 3u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(266), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(267), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(268), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(269), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADDBC0;
      }
      goto L_08ADDB94;
    }
L_08ADDB94:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_08ADDBC4;
    }
    goto L_08ADDBA8;
L_08ADDBA8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08ADDBC4;
      }
      goto L_08ADDBBC;
    }
L_08ADDBBC:
    ctx.gpr[5] = (0u | 1u);
    goto L_08ADDBC0;
L_08ADDBC0:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08ADDBC4;
L_08ADDBC4:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDC70;
      }
      goto L_08ADDBD4;
    }
L_08ADDBD4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADDC6C;
      }
      goto L_08ADDBDC;
    }
L_08ADDBDC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16416));
      if (branch_taken) {
          goto L_08ADDBF8;
      }
      goto L_08ADDBF0;
    }
L_08ADDBF0:
    ctx.gpr[31] = (0x08ADDBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDBF8u) goto L_08ADDBF8;
    return;
L_08ADDBF8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08ADDC10;
      }
      goto L_08ADDC08;
    }
L_08ADDC08:
    ctx.gpr[31] = (0x08ADDC10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x08ADDC10u) goto L_08ADDC10;
    return;
L_08ADDC10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(260));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[19] << 3u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADDC38u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 158u, 0x08A54A00u>(ctx, &aot_mem) && ctx.pc == 0x08ADDC38u) goto L_08ADDC38;
    return;
L_08ADDC38:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ADDC48u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem) && ctx.pc == 0x08ADDC48u) goto L_08ADDC48;
    return;
L_08ADDC48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08ADDC64;
      }
      goto L_08ADDC58;
    }
L_08ADDC58:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    ctx.gpr[31] = (0x08ADDC64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08ADDC64u) goto L_08ADDC64;
    return;
L_08ADDC64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDC80;
      }
      goto L_08ADDC6C;
    }
L_08ADDC6C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08ADDC70;
L_08ADDC70:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDB34;
      }
      goto L_08ADDC80;
    }
L_08ADDC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
        goto L_08ADDC98;
    }
    goto L_08ADDC8C;
L_08ADDC8C:
    ctx.gpr[31] = (0x08ADDC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08ADDC94u) goto L_08ADDC94;
    return;
L_08ADDC94:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_08ADDC98;
L_08ADDC98:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08ADDCA4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08ADDCA4u) goto L_08ADDCA4;
    return;
L_08ADDCA4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ADDCB4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDCB4u) goto L_08ADDCB4;
    return;
L_08ADDCB4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADDCC0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 260u, 0x088851D0u>(ctx, &aot_mem) && ctx.pc == 0x08ADDCC0u) goto L_08ADDCC0;
    return;
L_08ADDCC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08ADDCDC;
      }
      goto L_08ADDCD0;
    }
L_08ADDCD0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    ctx.gpr[31] = (0x08ADDCDCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08ADDCDCu) goto L_08ADDCDC;
    return;
L_08ADDCDC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08ADDCF0u);
    ctx.gpr[5] = (ctx.gpr[17] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 4u, 0x08934048u>(ctx, &aot_mem) && ctx.pc == 0x08ADDCF0u) goto L_08ADDCF0;
    return;
L_08ADDCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08ADDCFCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 434u, 0x08A8A094u>(ctx, &aot_mem) && ctx.pc == 0x08ADDCFCu) goto L_08ADDCFC;
    return;
L_08ADDCFC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    goto L_08ADDD00;
L_08ADDD00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADDD28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ADDD70;
      }
      goto L_08ADDD50;
    }
L_08ADDD50:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08ADDD5Cu);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem) && ctx.pc == 0x08ADDD5Cu) goto L_08ADDD5C;
    return;
L_08ADDD5C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
        goto L_08ADDD78;
    }
    goto L_08ADDD68;
L_08ADDD68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08ADDD90;
      }
      goto L_08ADDD70;
    }
L_08ADDD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADDECC;
      }
      goto L_08ADDD78;
    }
L_08ADDD78:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADDD88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem) && ctx.pc == 0x08ADDD88u) goto L_08ADDD88;
    return;
L_08ADDD88:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    goto L_08ADDD90;
L_08ADDD90:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDEC8;
      }
      goto L_08ADDD98;
    }
L_08ADDD98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08ADDDD8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08ADDDD8u) goto L_08ADDDD8;
    return;
L_08ADDDD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ADDDECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08ADDDECu) goto L_08ADDDEC;
    return;
L_08ADDDEC:
    ctx.gpr[31] = (0x08ADDDF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08ADDDF4u) goto L_08ADDDF4;
    return;
L_08ADDDF4:
    ctx.gpr[31] = (0x08ADDDFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDDFCu) goto L_08ADDDFC;
    return;
L_08ADDDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[6] & 1u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] << 11u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[7] = (65528u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 19u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 9u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[31] = (0x08ADDEC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDEC0u) goto L_08ADDEC0;
    return;
L_08ADDEC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADDECC;
      }
      goto L_08ADDEC8;
    }
L_08ADDEC8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ADDECC;
L_08ADDECC:
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
L_08ADDEE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDF20;
      }
      goto L_08ADDF04;
    }
L_08ADDF04:
    ctx.gpr[31] = (0x08ADDF0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDF0Cu) goto L_08ADDF0C;
    return;
L_08ADDF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
        goto L_08ADDF28;
    }
    goto L_08ADDF18;
L_08ADDF18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADDF40;
      }
      goto L_08ADDF20;
    }
L_08ADDF20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADDF48;
      }
      goto L_08ADDF28;
    }
L_08ADDF28:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ADDF40u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADDF40u) goto L_08ADDF40;
    return;
L_08ADDF40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), 0u);
    ctx.gpr[2] = (0u | 1u);
    goto L_08ADDF48;
L_08ADDF48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADDF58:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADDF74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08ADDFA8;
      }
      goto L_08ADDF90;
    }
L_08ADDF90:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADDFA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFA0u) goto L_08ADDFA0;
    return;
L_08ADDFA0:
    ctx.gpr[31] = (0x08ADDFA8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-248));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFA8u) goto L_08ADDFA8;
    return;
L_08ADDFA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADDFB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 608u, 0x0882E99Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADDFB4u) goto L_08ADDFB4;
    return;
L_08ADDFB4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADDFD8;
      }
      goto L_08ADDFC4;
    }
L_08ADDFC4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADDFD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFD0u) goto L_08ADDFD0;
    return;
L_08ADDFD0:
    ctx.gpr[31] = (0x08ADDFD8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-248));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFD8u) goto L_08ADDFD8;
    return;
L_08ADDFD8:
    ctx.gpr[31] = (0x08ADDFE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x08ADDFE0u) goto L_08ADDFE0;
    return;
L_08ADDFE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE0F8;
      }
      goto L_08ADDFE8;
    }
L_08ADDFE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADE008;
      }
      goto L_08ADDFF4;
    }
L_08ADDFF4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADE000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08ADE000u) goto L_08ADE000;
    return;
L_08ADE000:
    ctx.gpr[31] = (0x08ADE008u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-248));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08ADE008u) goto L_08ADE008;
    return;
L_08ADE008:
    ctx.gpr[31] = (0x08ADE010u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 378u, 0x0882DD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE010u) goto L_08ADE010;
    return;
L_08ADE010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ADE038;
      }
      goto L_08ADE01C;
    }
L_08ADE01C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADE02Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08ADE02Cu) goto L_08ADE02C;
    return;
L_08ADE02C:
    ctx.gpr[31] = (0x08ADE034u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-248));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08ADE034u) goto L_08ADE034;
    return;
L_08ADE034:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADE038;
L_08ADE038:
    ctx.gpr[31] = (0x08ADE040u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08ADE040u) goto L_08ADE040;
    return;
L_08ADE040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ADE068;
      }
      goto L_08ADE04C;
    }
L_08ADE04C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADE05Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08ADE05Cu) goto L_08ADE05C;
    return;
L_08ADE05C:
    ctx.gpr[31] = (0x08ADE064u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-248));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08ADE064u) goto L_08ADE064;
    return;
L_08ADE064:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADE068;
L_08ADE068:
    ctx.gpr[31] = (0x08ADE070u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 756u, 0x0882F210u>(ctx, &aot_mem) && ctx.pc == 0x08ADE070u) goto L_08ADE070;
    return;
L_08ADE070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ADE098;
      }
      goto L_08ADE07C;
    }
L_08ADE07C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADE08Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08ADE08Cu) goto L_08ADE08C;
    return;
L_08ADE08C:
    ctx.gpr[31] = (0x08ADE094u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-248));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08ADE094u) goto L_08ADE094;
    return;
L_08ADE094:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADE098;
L_08ADE098:
    ctx.gpr[31] = (0x08ADE0A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08ADE0A0u) goto L_08ADE0A0;
    return;
L_08ADE0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-208));
      if (branch_taken) {
          goto L_08ADE0C8;
      }
      goto L_08ADE0AC;
    }
L_08ADE0AC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADE0BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0BCu) goto L_08ADE0BC;
    return;
L_08ADE0BC:
    ctx.gpr[31] = (0x08ADE0C4u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-248));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0C4u) goto L_08ADE0C4;
    return;
L_08ADE0C4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-208));
    goto L_08ADE0C8;
L_08ADE0C8:
    ctx.gpr[31] = (0x08ADE0D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 832u, 0x0882F6E8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0D0u) goto L_08ADE0D0;
    return;
L_08ADE0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08ADE0F0;
      }
      goto L_08ADE0DC;
    }
L_08ADE0DC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADE0E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0E8u) goto L_08ADE0E8;
    return;
L_08ADE0E8:
    ctx.gpr[31] = (0x08ADE0F0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-248));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08ADE0F0u) goto L_08ADE0F0;
    return;
L_08ADE0F0:
    ctx.gpr[31] = (0x08ADE0F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 606u, 0x0882E98Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE0F8u) goto L_08ADE0F8;
    return;
L_08ADE0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADE110;
    }
    goto L_08ADE104;
L_08ADE104:
    ctx.gpr[31] = (0x08ADE10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE10Cu) goto L_08ADE10C;
    return;
L_08ADE10C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADE110;
L_08ADE110:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADE130;
      }
      goto L_08ADE120;
    }
L_08ADE120:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08ADE138;
      }
      goto L_08ADE130;
    }
L_08ADE130:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ADE138;
L_08ADE138:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE15C;
      }
      goto L_08ADE140;
    }
L_08ADE140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE154;
      }
      goto L_08ADE14C;
    }
L_08ADE14C:
    ctx.gpr[31] = (0x08ADE154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x08ADE154u) goto L_08ADE154;
    return;
L_08ADE154:
    ctx.gpr[31] = (0x08ADE15Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 838u, 0x088739E4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE15Cu) goto L_08ADE15C;
    return;
L_08ADE15C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADE16C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08ADE1ACu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE1ACu) goto L_08ADE1AC;
    return;
L_08ADE1AC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADE1C8;
    }
    goto L_08ADE1BC;
L_08ADE1BC:
    ctx.gpr[31] = (0x08ADE1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE1C4u) goto L_08ADE1C4;
    return;
L_08ADE1C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADE1C8;
L_08ADE1C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE3E0;
      }
      goto L_08ADE1F8;
    }
L_08ADE1F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADE210;
    }
    goto L_08ADE204;
L_08ADE204:
    ctx.gpr[31] = (0x08ADE20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE20Cu) goto L_08ADE20C;
    return;
L_08ADE20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADE210;
L_08ADE210:
    ctx.gpr[31] = (0x08ADE218u);
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem) && ctx.pc == 0x08ADE218u) goto L_08ADE218;
    return;
L_08ADE218:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE238;
      }
      goto L_08ADE230;
    }
L_08ADE230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE3D0;
      }
      goto L_08ADE238;
    }
L_08ADE238:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(25000) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE3D0;
      }
      goto L_08ADE254;
    }
L_08ADE254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADE26C;
    }
    goto L_08ADE260;
L_08ADE260:
    ctx.gpr[31] = (0x08ADE268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE268u) goto L_08ADE268;
    return;
L_08ADE268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADE26C;
L_08ADE26C:
    ctx.gpr[31] = (0x08ADE274u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem) && ctx.pc == 0x08ADE274u) goto L_08ADE274;
    return;
L_08ADE274:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08ADE2C8;
      }
      goto L_08ADE27C;
    }
L_08ADE27C:
    ctx.gpr[31] = (0x08ADE284u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 613u, 0x088BAEF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE284u) goto L_08ADE284;
    return;
L_08ADE284:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE2C8;
      }
      goto L_08ADE28C;
    }
L_08ADE28C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE29Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 476u, 0x08A52B08u>(ctx, &aot_mem) && ctx.pc == 0x08ADE29Cu) goto L_08ADE29C;
    return;
L_08ADE29C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 301 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE3D0;
      }
      goto L_08ADE2C8;
    }
L_08ADE2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADE2E0;
    }
    goto L_08ADE2D4;
L_08ADE2D4:
    ctx.gpr[31] = (0x08ADE2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE2DCu) goto L_08ADE2DC;
    return;
L_08ADE2DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADE2E0;
L_08ADE2E0:
    ctx.gpr[31] = (0x08ADE2E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem) && ctx.pc == 0x08ADE2E8u) goto L_08ADE2E8;
    return;
L_08ADE2E8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08ADE2F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 613u, 0x088BAEF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE2F4u) goto L_08ADE2F4;
    return;
L_08ADE2F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE304u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 476u, 0x08A52B08u>(ctx, &aot_mem) && ctx.pc == 0x08ADE304u) goto L_08ADE304;
    return;
L_08ADE304:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE374;
      }
      goto L_08ADE318;
    }
L_08ADE318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADE330;
    }
    goto L_08ADE324;
L_08ADE324:
    ctx.gpr[31] = (0x08ADE32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE32Cu) goto L_08ADE32C;
    return;
L_08ADE32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADE330;
L_08ADE330:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08ADE340u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE340u) goto L_08ADE340;
    return;
L_08ADE340:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADE35C;
    }
    goto L_08ADE350;
L_08ADE350:
    ctx.gpr[31] = (0x08ADE358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE358u) goto L_08ADE358;
    return;
L_08ADE358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADE35C;
L_08ADE35C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE3E0;
      }
      goto L_08ADE374;
    }
L_08ADE374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08ADE38C;
    }
    goto L_08ADE380;
L_08ADE380:
    ctx.gpr[31] = (0x08ADE388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADE388u) goto L_08ADE388;
    return;
L_08ADE388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08ADE38C;
L_08ADE38C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE3D0;
      }
      goto L_08ADE398;
    }
L_08ADE398:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE3A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ADDA1C;
L_08ADE3A4:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9951)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ADE3C8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08ADCA34;
L_08ADE3C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE3E0;
      }
      goto L_08ADE3D0;
    }
L_08ADE3D0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE1F8;
      }
      goto L_08ADE3E0;
    }
L_08ADE3E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADE404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8404), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADE438;
      }
      goto L_08ADE430;
    }
L_08ADE430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE8FC;
      }
      goto L_08ADE438;
    }
L_08ADE438:
    ctx.gpr[20] = (0u | 0u);
    goto L_08ADE43C;
L_08ADE43C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADE454;
    }
    goto L_08ADE448;
L_08ADE448:
    ctx.gpr[31] = (0x08ADE450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE450u) goto L_08ADE450;
    return;
L_08ADE450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADE454;
L_08ADE454:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE8FC;
      }
      goto L_08ADE480;
    }
L_08ADE480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08ADE498;
    }
    goto L_08ADE48C;
L_08ADE48C:
    ctx.gpr[31] = (0x08ADE494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE494u) goto L_08ADE494;
    return;
L_08ADE494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADE498;
L_08ADE498:
    ctx.gpr[31] = (0x08ADE4A0u);
    ctx.gpr[5] = (ctx.gpr[20] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem) && ctx.pc == 0x08ADE4A0u) goto L_08ADE4A0;
    return;
L_08ADE4A0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x08ADE4B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 459u, 0x08A52A20u>(ctx, &aot_mem) && ctx.pc == 0x08ADE4B4u) goto L_08ADE4B4;
    return;
L_08ADE4B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE8F4;
      }
      goto L_08ADE4BC;
    }
L_08ADE4BC:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADE4E8;
      }
      goto L_08ADE4D4;
    }
L_08ADE4D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08ADE684;
      }
      goto L_08ADE4E8;
    }
L_08ADE4E8:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(106));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08ADE534u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 155u, 0x08A88CE4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE534u) goto L_08ADE534;
    return;
L_08ADE534:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(228))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5A4;
      }
      goto L_08ADE58C;
    }
L_08ADE58C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(98))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08ADE5A4;
L_08ADE5A4:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(102))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(106))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE5EC;
      }
      goto L_08ADE5E0;
    }
L_08ADE5E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08ADE5EC;
L_08ADE5EC:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE63C;
      }
      goto L_08ADE630;
    }
L_08ADE630:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08ADE63C;
L_08ADE63C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(114), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(114))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE670;
      }
      goto L_08ADE668;
    }
L_08ADE668:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08ADE670;
L_08ADE670:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(116))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08ADE684;
L_08ADE684:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[31] = (0x08ADE6B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 153u, 0x08B70CDCu>(ctx, &aot_mem) && ctx.pc == 0x08ADE6B8u) goto L_08ADE6B8;
    return;
L_08ADE6B8:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(108));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08ADE814;
      }
      goto L_08ADE6E4;
    }
L_08ADE6E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08ADE6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADE6F4u) goto L_08ADE6F4;
    return;
L_08ADE6F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7F4;
      }
      goto L_08ADE700;
    }
L_08ADE700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(76))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(122))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7F4;
      }
      goto L_08ADE740;
    }
L_08ADE740:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7D8;
      }
      goto L_08ADE768;
    }
L_08ADE768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(78), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08ADE798u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 155u, 0x08A88CE4u>(ctx, &aot_mem) && ctx.pc == 0x08ADE798u) goto L_08ADE798;
    return;
L_08ADE798:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(232))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(78))))));
    ctx.gpr[31] = (0x08ADE7B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 366u, 0x08A9AF60u>(ctx, &aot_mem) && ctx.pc == 0x08ADE7B4u) goto L_08ADE7B4;
    return;
L_08ADE7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08ADE7D0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADE7D0u) goto L_08ADE7D0;
    return;
L_08ADE7D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE7F4;
      }
      goto L_08ADE7D8;
    }
L_08ADE7D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08ADE7F4u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADE7F4u) goto L_08ADE7F4;
    return;
L_08ADE7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADE6E4;
      }
      goto L_08ADE814;
    }
L_08ADE814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08ADE8F4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 144u, 0x08B70C64u>(ctx, &aot_mem) && ctx.pc == 0x08ADE8F4u) goto L_08ADE8F4;
    return;
L_08ADE8F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADE43C;
      }
      goto L_08ADE8FC;
    }
L_08ADE8FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADE91C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ADE944;
      }
      goto L_08ADE93C;
    }
L_08ADE93C:
    ctx.gpr[31] = (0x08ADE944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE944u) goto L_08ADE944;
    return;
L_08ADE944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08ADE954u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADE954u) goto L_08ADE954;
    return;
L_08ADE954:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
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
          goto L_08ADEA68;
      }
      goto L_08ADE980;
    }
L_08ADE980:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADE98Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADF02C;
L_08ADE98C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_08ADE9E0;
      }
      goto L_08ADE9AC;
    }
L_08ADE9AC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_08ADE9B4;
L_08ADE9B4:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_08ADE9D4;
    }
    goto L_08ADE9C4;
L_08ADE9C4:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADE9D8;
      }
      goto L_08ADE9D4;
    }
L_08ADE9D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08ADE9D8;
L_08ADE9D8:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08ADE9B4;
    }
    goto L_08ADE9E0;
L_08ADE9E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ADEA20;
      }
      goto L_08ADEA00;
    }
L_08ADEA00:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
        goto L_08ADEA5C;
    }
    goto L_08ADEA20;
L_08ADEA20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08ADEA4Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 425u, 0x08B722A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEA4Cu) goto L_08ADEA4C;
    return;
L_08ADEA4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    goto L_08ADEA5C;
L_08ADEA5C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEB30;
      }
      goto L_08ADEA68;
    }
L_08ADEA68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08ADEAB0;
      }
      goto L_08ADEA7C;
    }
L_08ADEA7C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_08ADEA84;
L_08ADEA84:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_08ADEAA4;
    }
    goto L_08ADEA94;
L_08ADEA94:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADEAA8;
      }
      goto L_08ADEAA4;
    }
L_08ADEAA4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08ADEAA8;
L_08ADEAA8:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08ADEA84;
    }
    goto L_08ADEAB0;
L_08ADEAB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] ^ ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ADEAF0;
      }
      goto L_08ADEAD0;
    }
L_08ADEAD0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
        goto L_08ADEB2C;
    }
    goto L_08ADEAF0;
L_08ADEAF0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08ADEB1Cu);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 425u, 0x08B722A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEB1Cu) goto L_08ADEB1C;
    return;
L_08ADEB1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(20));
    goto L_08ADEB2C;
L_08ADEB2C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08ADEB30;
L_08ADEB30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADEB44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
        goto L_08ADEBB4;
    }
    goto L_08ADEB78;
L_08ADEB78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08ADEB84;
L_08ADEB84:
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08ADEBA4;
    }
    goto L_08ADEB94;
L_08ADEB94:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADEBA8;
      }
      goto L_08ADEBA4;
    }
L_08ADEBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADEBA8;
L_08ADEBA8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08ADEB84;
    }
    goto L_08ADEBB0;
L_08ADEBB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    goto L_08ADEBB4;
L_08ADEBB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
        goto L_08ADEC04;
    }
    goto L_08ADEBC8;
L_08ADEBC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08ADEBD4;
L_08ADEBD4:
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08ADEBF4;
    }
    goto L_08ADEBE4;
L_08ADEBE4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADEBF8;
      }
      goto L_08ADEBF4;
    }
L_08ADEBF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08ADEBF8;
L_08ADEBF8:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08ADEBD4;
    }
    goto L_08ADEC00;
L_08ADEC00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08ADEC04;
L_08ADEC04:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ADEC5C;
      }
      goto L_08ADEC30;
    }
L_08ADEC30:
    ctx.gpr[31] = (0x08ADEC38u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADEC38u) goto L_08ADEC38;
    return;
L_08ADEC38:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ADEC30;
      }
      goto L_08ADEC58;
    }
L_08ADEC58:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08ADEC5C;
L_08ADEC5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ADECFC;
      }
      goto L_08ADEC90;
    }
L_08ADEC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08ADED00;
    }
    goto L_08ADECB0;
L_08ADECB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED80;
      }
      goto L_08ADECBC;
    }
L_08ADECBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08ADECD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 201u, 0x08B710D8u>(ctx, &aot_mem) && ctx.pc == 0x08ADECD0u) goto L_08ADECD0;
    return;
L_08ADECD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08ADED80;
      }
      goto L_08ADECFC;
    }
L_08ADECFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08ADED00;
L_08ADED00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08ADED80;
      }
      goto L_08ADED18;
    }
L_08ADED18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x08ADED28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADED28u) goto L_08ADED28;
    return;
L_08ADED28:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08ADED44u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 484u, 0x08B6AC34u>(ctx, &aot_mem) && ctx.pc == 0x08ADED44u) goto L_08ADED44;
    return;
L_08ADED44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08ADED5C;
    }
    goto L_08ADED50;
L_08ADED50:
    ctx.gpr[31] = (0x08ADED58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08ADED58u) goto L_08ADED58;
    return;
L_08ADED58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08ADED5C;
L_08ADED5C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADED18;
      }
      goto L_08ADED80;
    }
L_08ADED80:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADEDA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ADEDD4;
      }
      goto L_08ADEDC8;
    }
L_08ADEDC8:
    ctx.gpr[31] = (0x08ADEDD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEDD0u) goto L_08ADEDD0;
    return;
L_08ADEDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADEDD4;
L_08ADEDD4:
    ctx.gpr[31] = (0x08ADEDDCu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem) && ctx.pc == 0x08ADEDDCu) goto L_08ADEDDC;
    return;
L_08ADEDDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEEE8;
      }
      goto L_08ADEDE4;
    }
L_08ADEDE4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
        goto L_08ADEE00;
    }
    goto L_08ADEDF0;
L_08ADEDF0:
    ctx.gpr[31] = (0x08ADEDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEDF8u) goto L_08ADEDF8;
    return;
L_08ADEDF8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    goto L_08ADEE00;
L_08ADEE00:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08ADEE0Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADEE0Cu) goto L_08ADEE0C;
    return;
L_08ADEE0C:
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08ADEE60;
      }
      goto L_08ADEE28;
    }
L_08ADEE28:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_08ADEE34;
L_08ADEE34:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_08ADEE54;
    }
    goto L_08ADEE44;
L_08ADEE44:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADEE58;
      }
      goto L_08ADEE54;
    }
L_08ADEE54:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08ADEE58;
L_08ADEE58:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_08ADEE34;
    }
    goto L_08ADEE60;
L_08ADEE60:
    if (ctx.gpr[6] == ctx.gpr[5]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08ADEE84;
    }
    goto L_08ADEE68;
L_08ADEE68:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
        goto L_08ADEE88;
    }
    goto L_08ADEE80;
L_08ADEE80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08ADEE84;
L_08ADEE84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08ADEE88;
L_08ADEE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08ADEEACu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 484u, 0x08B6AC34u>(ctx, &aot_mem) && ctx.pc == 0x08ADEEACu) goto L_08ADEEAC;
    return;
L_08ADEEAC:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08ADEEC4;
    }
    goto L_08ADEEB8;
L_08ADEEB8:
    ctx.gpr[31] = (0x08ADEEC0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08ADEEC0u) goto L_08ADEEC0;
    return;
L_08ADEEC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    goto L_08ADEEC4;
L_08ADEEC4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEEE8;
      }
      goto L_08ADEED8;
    }
L_08ADEED8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x08ADEEE8u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    goto L_08ADEB44;
L_08ADEEE8:
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
L_08ADEF00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ADEF40;
      }
      goto L_08ADEF24;
    }
L_08ADEF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADEF40;
      }
      goto L_08ADEF30;
    }
L_08ADEF30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(104));
    ctx.gpr[31] = (0x08ADEF40u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08ADEB44;
L_08ADEF40:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF014;
      }
      goto L_08ADEF48;
    }
L_08ADEF48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08ADEF98;
    }
    goto L_08ADEF60;
L_08ADEF60:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08ADEF68;
L_08ADEF68:
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08ADEF88;
    }
    goto L_08ADEF78;
L_08ADEF78:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADEF8C;
      }
      goto L_08ADEF88;
    }
L_08ADEF88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08ADEF8C;
L_08ADEF8C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08ADEF68;
    }
    goto L_08ADEF94;
L_08ADEF94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08ADEF98;
L_08ADEF98:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08ADEFD0;
      }
      goto L_08ADEFB0;
    }
L_08ADEFB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
        goto L_08ADF010;
    }
    goto L_08ADEFD0;
L_08ADEFD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08ADF000u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 319u, 0x08B71A28u>(ctx, &aot_mem) && ctx.pc == 0x08ADF000u) goto L_08ADF000;
    return;
L_08ADF000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    goto L_08ADF010;
L_08ADF010:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08ADF014;
L_08ADF014:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADF02C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[20] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADF060;
      }
      goto L_08ADF058;
    }
L_08ADF058:
    ctx.gpr[31] = (0x08ADF060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF060u) goto L_08ADF060;
    return;
L_08ADF060:
    ctx.gpr[31] = (0x08ADF068u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 559u, 0x08A5306Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF068u) goto L_08ADF068;
    return;
L_08ADF068:
    ctx.gpr[19] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    ctx.gpr[17] = (0u | 1u);
    goto L_08ADF070;
L_08ADF070:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF0F8;
      }
      goto L_08ADF0A0;
    }
L_08ADF0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF0CC;
      }
      goto L_08ADF0AC;
    }
L_08ADF0AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08ADF0CC;
      }
      goto L_08ADF0B8;
    }
L_08ADF0B8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF0F8;
      }
      goto L_08ADF0CC;
    }
L_08ADF0CC:
    ctx.gpr[31] = (0x08ADF0D4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADF0D4u) goto L_08ADF0D4;
    return;
L_08ADF0D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF0A0;
      }
      goto L_08ADF0F8;
    }
L_08ADF0F8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08ADF070;
      }
      goto L_08ADF100;
    }
L_08ADF100:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08ADF130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ADF190;
      }
      goto L_08ADF15C;
    }
L_08ADF15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08ADF170u);
    ctx.gpr[20] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF170u) goto L_08ADF170;
    return;
L_08ADF170:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ADF180u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADF180u) goto L_08ADF180;
    return;
L_08ADF180:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF194;
      }
      goto L_08ADF188;
    }
L_08ADF188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08ADF194;
      }
      goto L_08ADF190;
    }
L_08ADF190:
    ctx.gpr[4] = (0u | 0u);
    goto L_08ADF194;
L_08ADF194:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF1B4;
      }
      goto L_08ADF19C;
    }
L_08ADF19C:
    ctx.gpr[31] = (0x08ADF1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 542u, 0x0888F890u>(ctx, &aot_mem) && ctx.pc == 0x08ADF1A4u) goto L_08ADF1A4;
    return;
L_08ADF1A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF1B4;
      }
      goto L_08ADF1AC;
    }
L_08ADF1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF1F0;
      }
      goto L_08ADF1B4;
    }
L_08ADF1B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 7u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10338)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08ADF1F0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08ADCA34;
L_08ADF1F0:
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
L_08ADF210:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ADF24C;
      }
      goto L_08ADF244;
    }
L_08ADF244:
    ctx.gpr[31] = (0x08ADF24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF24Cu) goto L_08ADF24C;
    return;
L_08ADF24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[31] = (0x08ADF258u);
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF258u) goto L_08ADF258;
    return;
L_08ADF258:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF2A0;
      }
      goto L_08ADF268;
    }
L_08ADF268:
    ctx.gpr[31] = (0x08ADF270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 459u, 0x08A52A20u>(ctx, &aot_mem) && ctx.pc == 0x08ADF270u) goto L_08ADF270;
    return;
L_08ADF270:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF298;
      }
      goto L_08ADF278;
    }
L_08ADF278:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
      if (branch_taken) {
          goto L_08ADF2A8;
      }
      goto L_08ADF290;
    }
L_08ADF290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF2DC;
      }
      goto L_08ADF298;
    }
L_08ADF298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF354;
      }
      goto L_08ADF2A0;
    }
L_08ADF2A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF354;
      }
      goto L_08ADF2A8;
    }
L_08ADF2A8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08ADF2B0;
L_08ADF2B0:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08ADF2D0;
    }
    goto L_08ADF2C0;
L_08ADF2C0:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADF2D4;
      }
      goto L_08ADF2D0;
    }
L_08ADF2D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08ADF2D4;
L_08ADF2D4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08ADF2B0;
    }
    goto L_08ADF2DC;
L_08ADF2DC:
    if (ctx.gpr[5] == ctx.gpr[16]) {
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
        goto L_08ADF300;
    }
    goto L_08ADF2E4;
L_08ADF2E4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
        goto L_08ADF304;
    }
    goto L_08ADF2FC;
L_08ADF2FC:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08ADF300;
L_08ADF300:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_08ADF304;
L_08ADF304:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[16]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ADF354;
      }
      goto L_08ADF31C;
    }
L_08ADF31C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[8] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08ADF354u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADF354u) goto L_08ADF354;
    return;
L_08ADF354:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADF370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ADF4F4;
      }
      goto L_08ADF3C8;
    }
L_08ADF3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
      if (branch_taken) {
          goto L_08ADF3E0;
      }
      goto L_08ADF3D4;
    }
L_08ADF3D4:
    ctx.gpr[31] = (0x08ADF3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF3DCu) goto L_08ADF3DC;
    return;
L_08ADF3DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADF3E0;
L_08ADF3E0:
    ctx.gpr[31] = (0x08ADF3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 559u, 0x08A5306Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF3E8u) goto L_08ADF3E8;
    return;
L_08ADF3E8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
        goto L_08ADF438;
    }
    goto L_08ADF400;
L_08ADF400:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08ADF408;
L_08ADF408:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08ADF428;
    }
    goto L_08ADF418;
L_08ADF418:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADF42C;
      }
      goto L_08ADF428;
    }
L_08ADF428:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08ADF42C;
L_08ADF42C:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08ADF408;
    }
    goto L_08ADF434;
L_08ADF434:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08ADF438;
L_08ADF438:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ADF474;
      }
      goto L_08ADF454;
    }
L_08ADF454:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
        goto L_08ADF4B0;
    }
    goto L_08ADF474;
L_08ADF474:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x08ADF4A0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 425u, 0x08B722A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF4A0u) goto L_08ADF4A0;
    return;
L_08ADF4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    goto L_08ADF4B0;
L_08ADF4B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF4EC;
      }
      goto L_08ADF4BC;
    }
L_08ADF4BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF4EC;
      }
      goto L_08ADF4D0;
    }
L_08ADF4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08ADF4ECu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADF4ECu) goto L_08ADF4EC;
    return;
L_08ADF4EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF848;
      }
      goto L_08ADF4F4;
    }
L_08ADF4F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ADF848;
      }
      goto L_08ADF4FC;
    }
L_08ADF4FC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ADF848;
      }
      goto L_08ADF50C;
    }
L_08ADF50C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADF52C;
      }
      goto L_08ADF518;
    }
L_08ADF518:
    ctx.gpr[31] = (0x08ADF520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF520u) goto L_08ADF520;
    return;
L_08ADF520:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08ADF52C;
L_08ADF52C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08ADF538u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem) && ctx.pc == 0x08ADF538u) goto L_08ADF538;
    return;
L_08ADF538:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF848;
      }
      goto L_08ADF540;
    }
L_08ADF540:
    ctx.gpr[31] = (0x08ADF548u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADF02C;
L_08ADF548:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
      if (branch_taken) {
          goto L_08ADF564;
      }
      goto L_08ADF558;
    }
L_08ADF558:
    ctx.gpr[31] = (0x08ADF560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF560u) goto L_08ADF560;
    return;
L_08ADF560:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADF564;
L_08ADF564:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08ADF574u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF574u) goto L_08ADF574;
    return;
L_08ADF574:
    ctx.gpr[20] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08ADF5C0;
      }
      goto L_08ADF58C;
    }
L_08ADF58C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08ADF594;
L_08ADF594:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08ADF5B4;
    }
    goto L_08ADF5A4;
L_08ADF5A4:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADF5B8;
      }
      goto L_08ADF5B4;
    }
L_08ADF5B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADF5B8;
L_08ADF5B8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08ADF594;
    }
    goto L_08ADF5C0;
L_08ADF5C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ADF600;
      }
      goto L_08ADF5E0;
    }
L_08ADF5E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08ADF640;
      }
      goto L_08ADF600;
    }
L_08ADF600:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[31] = (0x08ADF630u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 425u, 0x08B722A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF630u) goto L_08ADF630;
    return;
L_08ADF630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
    goto L_08ADF640;
L_08ADF640:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
        goto L_08ADF690;
    }
    goto L_08ADF658;
L_08ADF658:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_08ADF660;
L_08ADF660:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
        goto L_08ADF680;
    }
    goto L_08ADF670;
L_08ADF670:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADF684;
      }
      goto L_08ADF680;
    }
L_08ADF680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08ADF684;
L_08ADF684:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
        goto L_08ADF660;
    }
    goto L_08ADF68C;
L_08ADF68C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_08ADF690;
L_08ADF690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ADF6CC;
      }
      goto L_08ADF6AC;
    }
L_08ADF6AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
        goto L_08ADF70C;
    }
    goto L_08ADF6CC;
L_08ADF6CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[31] = (0x08ADF6FCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 425u, 0x08B722A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF6FCu) goto L_08ADF6FC;
    return;
L_08ADF6FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    goto L_08ADF70C;
L_08ADF70C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF75C;
      }
      goto L_08ADF718;
    }
L_08ADF718:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[20] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(96))))));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08ADF748u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADF748u) goto L_08ADF748;
    return;
L_08ADF748:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ADF75Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 291u, 0x08B112B4u>(ctx, &aot_mem) && ctx.pc == 0x08ADF75Cu) goto L_08ADF75C;
    return;
L_08ADF75C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADF774;
      }
      goto L_08ADF768;
    }
L_08ADF768:
    ctx.gpr[31] = (0x08ADF770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF770u) goto L_08ADF770;
    return;
L_08ADF770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08ADF774;
L_08ADF774:
    ctx.gpr[31] = (0x08ADF77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 559u, 0x08A5306Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADF77Cu) goto L_08ADF77C;
    return;
L_08ADF77C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
        goto L_08ADF7CC;
    }
    goto L_08ADF794;
L_08ADF794:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08ADF79C;
L_08ADF79C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_08ADF7BC;
    }
    goto L_08ADF7AC;
L_08ADF7AC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADF7C0;
      }
      goto L_08ADF7BC;
    }
L_08ADF7BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08ADF7C0;
L_08ADF7C0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08ADF79C;
    }
    goto L_08ADF7C8;
L_08ADF7C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    goto L_08ADF7CC;
L_08ADF7CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08ADF808;
      }
      goto L_08ADF7E8;
    }
L_08ADF7E8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
        goto L_08ADF844;
    }
    goto L_08ADF808;
L_08ADF808:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(156), static_cast<std::uint16_t>(ctx.gpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[31] = (0x08ADF834u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 425u, 0x08B722A8u>(ctx, &aot_mem) && ctx.pc == 0x08ADF834u) goto L_08ADF834;
    return;
L_08ADF834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    goto L_08ADF844;
L_08ADF844:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    goto L_08ADF848;
L_08ADF848:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADF870:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(6), ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[9] << 16u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08ADF908;
      }
      goto L_08ADF8D4;
    }
L_08ADF8D4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    goto L_08ADF8DC;
L_08ADF8DC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
        goto L_08ADF8FC;
    }
    goto L_08ADF8EC;
L_08ADF8EC:
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08ADF900;
      }
      goto L_08ADF8FC;
    }
L_08ADF8FC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    goto L_08ADF900;
L_08ADF900:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
        goto L_08ADF8DC;
    }
    goto L_08ADF908;
L_08ADF908:
    if (ctx.gpr[6] == ctx.gpr[7]) {
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
        goto L_08ADF92C;
    }
    goto L_08ADF910;
L_08ADF910:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
        goto L_08ADF930;
    }
    goto L_08ADF928;
L_08ADF928:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08ADF92C;
L_08ADF92C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    goto L_08ADF930;
L_08ADF930:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[7] ^ ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
        goto L_08ADF968;
    }
    goto L_08ADF960;
L_08ADF960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADF968;
      }
      goto L_08ADF968;
    }
L_08ADF968:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ADF998;
      }
      goto L_08ADF974;
    }
L_08ADF974:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80))))));
    jump_target = ctx.gpr[9];
    ctx.gpr[31] = (0x08ADF998u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08ADF998u) goto L_08ADF998;
    return;
L_08ADF998:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADF9A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADF9B4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9B4u) goto L_08ADF9B4;
    return;
L_08ADF9B4:
    ctx.gpr[31] = (0x08ADF9BCu);
    ctx.gpr[4] = (0u | 228u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9BCu) goto L_08ADF9BC;
    return;
L_08ADF9BC:
    ctx.gpr[31] = (0x08ADF9C4u);
    ctx.gpr[4] = (0u | 199u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9C4u) goto L_08ADF9C4;
    return;
L_08ADF9C4:
    ctx.gpr[31] = (0x08ADF9CCu);
    ctx.gpr[4] = (0u | 254u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9CCu) goto L_08ADF9CC;
    return;
L_08ADF9CC:
    ctx.gpr[31] = (0x08ADF9D4u);
    ctx.gpr[4] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9D4u) goto L_08ADF9D4;
    return;
L_08ADF9D4:
    ctx.gpr[31] = (0x08ADF9DCu);
    ctx.gpr[4] = (0u | 228u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9DCu) goto L_08ADF9DC;
    return;
L_08ADF9DC:
    ctx.gpr[31] = (0x08ADF9E4u);
    ctx.gpr[4] = (0u | 246u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9E4u) goto L_08ADF9E4;
    return;
L_08ADF9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08ADF9F0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(294)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9F0u) goto L_08ADF9F0;
    return;
L_08ADF9F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08ADF9FCu);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADF9FCu) goto L_08ADF9FC;
    return;
L_08ADF9FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08ADFA08u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(298)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA08u) goto L_08ADFA08;
    return;
L_08ADFA08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADFA14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ADFA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 528u, 0x08AD312Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFA24u) goto L_08ADFA24;
    return;
L_08ADFA24:
    ctx.gpr[31] = (0x08ADFA2Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA2Cu) goto L_08ADFA2C;
    return;
L_08ADFA2C:
    ctx.gpr[31] = (0x08ADFA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 532u, 0x08AD317Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFA34u) goto L_08ADFA34;
    return;
L_08ADFA34:
    ctx.gpr[31] = (0x08ADFA3Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA3Cu) goto L_08ADFA3C;
    return;
L_08ADFA3C:
    ctx.gpr[31] = (0x08ADFA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 536u, 0x08AD31CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFA44u) goto L_08ADFA44;
    return;
L_08ADFA44:
    ctx.gpr[31] = (0x08ADFA4Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08ADFA4Cu) goto L_08ADFA4C;
    return;
L_08ADFA4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADFA58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (2234u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14424));
    ctx.gpr[17] = (0u | 0u);
    goto L_08ADFA88;
L_08ADFA88:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08ADFAA0;
    }
    goto L_08ADFA90;
L_08ADFA90:
    ctx.gpr[31] = (0x08ADFA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFA98u) goto L_08ADFA98;
    return;
L_08ADFA98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08ADFAA0;
L_08ADFAA0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFB20;
      }
      goto L_08ADFAAC;
    }
L_08ADFAAC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFAC0;
      }
      goto L_08ADFAB4;
    }
L_08ADFAB4:
    ctx.gpr[31] = (0x08ADFABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFABCu) goto L_08ADFABC;
    return;
L_08ADFABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08ADFAC0;
L_08ADFAC0:
    ctx.gpr[31] = (0x08ADFAC8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x08ADFAC8u) goto L_08ADFAC8;
    return;
L_08ADFAC8:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFAE4;
      }
      goto L_08ADFAD8;
    }
L_08ADFAD8:
    ctx.gpr[31] = (0x08ADFAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFAE0u) goto L_08ADFAE0;
    return;
L_08ADFAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08ADFAE4;
L_08ADFAE4:
    ctx.gpr[31] = (0x08ADFAECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x08ADFAECu) goto L_08ADFAEC;
    return;
L_08ADFAEC:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFB08;
      }
      goto L_08ADFAFC;
    }
L_08ADFAFC:
    ctx.gpr[31] = (0x08ADFB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFB04u) goto L_08ADFB04;
    return;
L_08ADFB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08ADFB08;
L_08ADFB08:
    ctx.gpr[31] = (0x08ADFB10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB10u) goto L_08ADFB10;
    return;
L_08ADFB10:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
      if (branch_taken) {
          goto L_08ADFA88;
      }
      goto L_08ADFB20;
    }
L_08ADFB20:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFB34;
      }
      goto L_08ADFB28;
    }
L_08ADFB28:
    ctx.gpr[31] = (0x08ADFB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFB30u) goto L_08ADFB30;
    return;
L_08ADFB30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08ADFB34;
L_08ADFB34:
    ctx.gpr[31] = (0x08ADFB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 27u, 0x089EC260u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB3Cu) goto L_08ADFB3C;
    return;
L_08ADFB3C:
    ctx.gpr[31] = (0x08ADFB44u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB44u) goto L_08ADFB44;
    return;
L_08ADFB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFB5C;
      }
      goto L_08ADFB50;
    }
L_08ADFB50:
    ctx.gpr[31] = (0x08ADFB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFB58u) goto L_08ADFB58;
    return;
L_08ADFB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08ADFB5C;
L_08ADFB5C:
    ctx.gpr[31] = (0x08ADFB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 27u, 0x089EC260u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB64u) goto L_08ADFB64;
    return;
L_08ADFB64:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08ADFB74u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB74u) goto L_08ADFB74;
    return;
L_08ADFB74:
    ctx.gpr[31] = (0x08ADFB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 528u, 0x08AD312Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFB7Cu) goto L_08ADFB7C;
    return;
L_08ADFB7C:
    ctx.gpr[31] = (0x08ADFB84u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB84u) goto L_08ADFB84;
    return;
L_08ADFB84:
    ctx.gpr[31] = (0x08ADFB8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 532u, 0x08AD317Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFB8Cu) goto L_08ADFB8C;
    return;
L_08ADFB8C:
    ctx.gpr[31] = (0x08ADFB94u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08ADFB94u) goto L_08ADFB94;
    return;
L_08ADFB94:
    ctx.gpr[31] = (0x08ADFB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 536u, 0x08AD31CCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFB9Cu) goto L_08ADFB9C;
    return;
L_08ADFB9C:
    ctx.gpr[31] = (0x08ADFBA4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08ADFBA4u) goto L_08ADFBA4;
    return;
L_08ADFBA4:
    ctx.gpr[31] = (0x08ADFBACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADC734;
L_08ADFBAC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD38;
      }
      goto L_08ADFBBC;
    }
L_08ADFBBC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(16480)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADFBD4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFBE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADC734;
L_08ADFBE0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08ADFC00;
      }
      goto L_08ADFBE8;
    }
L_08ADFBE8:
    ctx.gpr[31] = (0x08ADFBF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADC784;
L_08ADFBF0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08ADFC00;
      }
      goto L_08ADFBF8;
    }
L_08ADFBF8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_08ADFC00;
L_08ADFC00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFC18;
      }
      goto L_08ADFC08;
    }
L_08ADFC08:
    ctx.gpr[31] = (0x08ADFC10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 423u, 0x08AE1590u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC10u) goto L_08ADFC10;
    return;
L_08ADFC10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFC78;
      }
      goto L_08ADFC18;
    }
L_08ADFC18:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFC24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADC734;
L_08ADFC24:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08ADFC48;
      }
      goto L_08ADFC2C;
    }
L_08ADFC2C:
    ctx.gpr[31] = (0x08ADFC34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ADC784;
L_08ADFC34:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08ADFC48;
      }
      goto L_08ADFC40;
    }
L_08ADFC40:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    goto L_08ADFC48;
L_08ADFC48:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFC68;
      }
      goto L_08ADFC50;
    }
L_08ADFC50:
    ctx.gpr[4] = (0u | 233u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08ADFC60u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC60u) goto L_08ADFC60;
    return;
L_08ADFC60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFC78;
      }
      goto L_08ADFC68;
    }
L_08ADFC68:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(54)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08ADFC78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC78u) goto L_08ADFC78;
    return;
L_08ADFC78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD38;
      }
      goto L_08ADFC80;
    }
L_08ADFC80:
    ctx.gpr[31] = (0x08ADFC88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 335u, 0x08AE11B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC88u) goto L_08ADFC88;
    return;
L_08ADFC88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD38;
      }
      goto L_08ADFC90;
    }
L_08ADFC90:
    ctx.gpr[31] = (0x08ADFC98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 241u, 0x08AE0D14u>(ctx, &aot_mem) && ctx.pc == 0x08ADFC98u) goto L_08ADFC98;
    return;
L_08ADFC98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD38;
      }
      goto L_08ADFCA0;
    }
L_08ADFCA0:
    ctx.gpr[4] = (0u | 246u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08ADFCB0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCB0u) goto L_08ADFCB0;
    return;
L_08ADFCB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD38;
      }
      goto L_08ADFCB8;
    }
L_08ADFCB8:
    ctx.gpr[4] = (0u | 192u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08ADFCC8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCC8u) goto L_08ADFCC8;
    return;
L_08ADFCC8:
    ctx.gpr[4] = (0u | 254u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08ADFCD8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCD8u) goto L_08ADFCD8;
    return;
L_08ADFCD8:
    ctx.gpr[4] = (0u | 175u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08ADFCE8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADFCE8u) goto L_08ADFCE8;
    return;
L_08ADFCE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD38;
      }
      goto L_08ADFCF0;
    }
L_08ADFCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08ADFD04u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD04u) goto L_08ADFD04;
    return;
L_08ADFD04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD38;
      }
      goto L_08ADFD0C;
    }
L_08ADFD0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08ADFD20u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD20u) goto L_08ADFD20;
    return;
L_08ADFD20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD38;
      }
      goto L_08ADFD28;
    }
L_08ADFD28:
    ctx.gpr[4] = (0u | 275u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08ADFD38u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD38u) goto L_08ADFD38;
    return;
L_08ADFD38:
    ctx.gpr[31] = (0x08ADFD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 645u, 0x08AD38F8u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD40u) goto L_08ADFD40;
    return;
L_08ADFD40:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFD5C;
      }
      goto L_08ADFD58;
    }
L_08ADFD58:
    ctx.gpr[4] = (0u | 0u);
    goto L_08ADFD5C;
L_08ADFD5C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08ADFD68;
L_08ADFD68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08ADFD78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD78u) goto L_08ADFD78;
    return;
L_08ADFD78:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ADFD68;
      }
      goto L_08ADFD88;
    }
L_08ADFD88:
    ctx.gpr[31] = (0x08ADFD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 69u, 0x08A30794u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD90u) goto L_08ADFD90;
    return;
L_08ADFD90:
    ctx.gpr[31] = (0x08ADFD98u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08ADFD98u) goto L_08ADFD98;
    return;
L_08ADFD98:
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
L_08ADFDB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFDE4;
      }
      goto L_08ADFDDC;
    }
L_08ADFDDC:
    ctx.gpr[31] = (0x08ADFDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFDE4u) goto L_08ADFDE4;
    return;
L_08ADFDE4:
    ctx.gpr[31] = (0x08ADFDECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 47u, 0x089EC3FCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFDECu) goto L_08ADFDEC;
    return;
L_08ADFDEC:
    ctx.gpr[31] = (0x08ADFDF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 696u, 0x08AD3BF0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFDF4u) goto L_08ADFDF4;
    return;
L_08ADFDF4:
    ctx.gpr[31] = (0x08ADFDFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 544u, 0x08AD323Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFDFCu) goto L_08ADFDFC;
    return;
L_08ADFDFC:
    ctx.gpr[31] = (0x08ADFE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 639u, 0x08AD38A0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE04u) goto L_08ADFE04;
    return;
L_08ADFE04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFDFC;
      }
      goto L_08ADFE0C;
    }
L_08ADFE0C:
    ctx.gpr[31] = (0x08ADFE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 643u, 0x08AD38DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFE14u) goto L_08ADFE14;
    return;
L_08ADFE14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE0C;
      }
      goto L_08ADFE1C;
    }
L_08ADFE1C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[16] = (0u | 7u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08ADFE30;
L_08ADFE30:
    ctx.gpr[31] = (0x08ADFE38u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 583u, 0x08AD3538u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE38u) goto L_08ADFE38;
    return;
L_08ADFE38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFF3C;
      }
      goto L_08ADFE40;
    }
L_08ADFE40:
    ctx.gpr[31] = (0x08ADFE48u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE48u) goto L_08ADFE48;
    return;
L_08ADFE48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFF3C;
      }
      goto L_08ADFE50;
    }
L_08ADFE50:
    ctx.gpr[31] = (0x08ADFE58u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE58u) goto L_08ADFE58;
    return;
L_08ADFE58:
    ctx.gpr[4] = (ctx.gpr[2] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFF3C;
      }
      goto L_08ADFE64;
    }
L_08ADFE64:
    ctx.gpr[31] = (0x08ADFE6Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE6Cu) goto L_08ADFE6C;
    return;
L_08ADFE6C:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE80;
      }
      goto L_08ADFE78;
    }
L_08ADFE78:
    ctx.gpr[31] = (0x08ADFE80u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE80u) goto L_08ADFE80;
    return;
L_08ADFE80:
    ctx.gpr[31] = (0x08ADFE88u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE88u) goto L_08ADFE88;
    return;
L_08ADFE88:
    ctx.gpr[4] = (ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFE9C;
      }
      goto L_08ADFE94;
    }
L_08ADFE94:
    ctx.gpr[31] = (0x08ADFE9Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 625u, 0x08AD37C0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFE9Cu) goto L_08ADFE9C;
    return;
L_08ADFE9C:
    ctx.gpr[31] = (0x08ADFEA4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem) && ctx.pc == 0x08ADFEA4u) goto L_08ADFEA4;
    return;
L_08ADFEA4:
    ctx.gpr[4] = (ctx.gpr[2] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFEB8;
      }
      goto L_08ADFEB0;
    }
L_08ADFEB0:
    ctx.gpr[31] = (0x08ADFEB8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 627u, 0x08AD37E0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFEB8u) goto L_08ADFEB8;
    return;
L_08ADFEB8:
    ctx.gpr[31] = (0x08ADFEC0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem) && ctx.pc == 0x08ADFEC0u) goto L_08ADFEC0;
    return;
L_08ADFEC0:
    ctx.gpr[5] = (ctx.gpr[2] & ctx.gpr[19]);
    ctx.gpr[31] = (0x08ADFECCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 616u, 0x08AD372Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFECCu) goto L_08ADFECC;
    return;
L_08ADFECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADFEE8;
      }
      goto L_08ADFEDC;
    }
L_08ADFEDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08ADFEE8;
L_08ADFEE8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ADFF0C;
      }
      goto L_08ADFEF4;
    }
L_08ADFEF4:
    ctx.gpr[31] = (0x08ADFEFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 639u, 0x08AD38A0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFEFCu) goto L_08ADFEFC;
    return;
L_08ADFEFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFEF4;
      }
      goto L_08ADFF04;
    }
L_08ADFF04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFF3C;
      }
      goto L_08ADFF0C;
    }
L_08ADFF0C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08ADFF20;
      }
      goto L_08ADFF14;
    }
L_08ADFF14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08ADFF20;
L_08ADFF20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08ADFF3C;
      }
      goto L_08ADFF2C;
    }
L_08ADFF2C:
    ctx.gpr[31] = (0x08ADFF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 643u, 0x08AD38DCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF34u) goto L_08ADFF34;
    return;
L_08ADFF34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ADFF2C;
      }
      goto L_08ADFF3C;
    }
L_08ADFF3C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 400 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08ADFE30;
      }
      goto L_08ADFF4C;
    }
L_08ADFF4C:
    ctx.gpr[31] = (0x08ADFF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 327u, 0x088099B0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF54u) goto L_08ADFF54;
    return;
L_08ADFF54:
    ctx.gpr[31] = (0x08ADFF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 696u, 0x08AD3BF0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF5Cu) goto L_08ADFF5C;
    return;
L_08ADFF5C:
    ctx.gpr[31] = (0x08ADFF64u);
    ctx.gpr[4] = (0u | 207u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF64u) goto L_08ADFF64;
    return;
L_08ADFF64:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08ADFF70u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 616u, 0x08AD372Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF70u) goto L_08ADFF70;
    return;
L_08ADFF70:
    ctx.gpr[31] = (0x08ADFF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 575u, 0x08AD34BCu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF78u) goto L_08ADFF78;
    return;
L_08ADFF78:
    ctx.gpr[31] = (0x08ADFF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 600u, 0x08AD3634u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF80u) goto L_08ADFF80;
    return;
L_08ADFF80:
    ctx.gpr[31] = (0x08ADFF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 696u, 0x08AD3BF0u>(ctx, &aot_mem) && ctx.pc == 0x08ADFF88u) goto L_08ADFF88;
    return;
L_08ADFF88:
    ctx.gpr[31] = (0x08ADFF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 544u, 0x08AD323Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF90u) goto L_08ADFF90;
    return;
L_08ADFF90:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08ADFF9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31984));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 620u, 0x08ABEE2Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFF9Cu) goto L_08ADFF9C;
    return;
L_08ADFF9C:
    ctx.gpr[31] = (0x08ADFFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 746u, 0x0887F804u>(ctx, &aot_mem) && ctx.pc == 0x08ADFFA4u) goto L_08ADFFA4;
    return;
L_08ADFFA4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4206), static_cast<std::uint8_t>(0u));
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
L_08ADFFC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08ADFFE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08ADFFE0u) goto L_08ADFFE0;
    return;
L_08ADFFE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ADFFEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08AE0004u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0182(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0182_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_182(Runtime &runtime) {
    runtime.register_generated_unit(182u, 0x08ADC000u, 16384u, &recomp_unit_0182, &recomp_unit_0182_entry);
    runtime.register_function(0x08ADC000u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC00Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC02Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC06Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC08Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC094u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC0F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC100u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC10Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC114u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC120u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC130u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC13Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC144u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC150u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC168u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC170u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC17Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC18Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC1F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC204u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC220u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC228u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC234u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC240u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC24Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC254u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC258u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC260u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC268u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC274u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC280u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC28Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC294u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC29Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC2F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC304u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC314u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC31Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC32Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC33Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC344u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC350u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC35Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC368u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC370u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC378u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC37Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC384u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC38Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC39Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC3F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC400u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC40Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC418u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC420u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC428u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC430u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC444u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC44Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC454u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC45Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC468u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC474u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC47Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC484u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC48Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC4FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC514u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC520u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC524u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC52Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC534u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC538u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC544u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC560u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC578u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC588u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC5E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC60Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC614u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC628u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC630u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC638u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC640u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC668u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC670u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC678u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC680u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC688u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC698u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC6FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC700u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC724u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC72Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC734u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC73Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC748u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC74Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC754u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC75Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC764u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC76Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC774u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC77Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC784u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC78Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC794u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC79Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC7F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC814u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC824u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC83Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC848u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC84Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC854u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC85Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC868u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC870u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC874u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC88Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC8F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC910u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC914u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC92Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC93Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC94Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC95Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC970u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC980u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC994u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADC9FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCA98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCABCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCAF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCB84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBCCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCBECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCC94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCCC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCD9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCDFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCE74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCEC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCF84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADCFF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD030u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD044u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD054u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD05Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD064u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD068u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD070u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD090u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD098u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD0FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD104u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD120u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD128u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD140u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD148u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD184u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD188u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD1E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD228u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD230u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD23Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD244u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD24Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD270u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD278u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD27Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD288u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD28Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD290u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD2FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD318u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD338u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD350u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD35Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD378u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD38Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD39Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD3DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD404u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD414u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD420u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD438u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD448u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD450u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD460u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD468u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD47Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD484u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD488u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD4F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD500u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD52Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD53Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD558u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD570u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD58Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD590u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD5FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD618u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD620u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD628u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD66Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD674u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD684u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD68Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD694u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD69Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD6F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD704u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD70Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD710u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD720u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD73Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD75Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD768u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD774u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD780u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD78Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD790u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD798u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD7ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD808u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD810u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD814u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD81Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD834u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD854u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD884u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD89Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD8DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD90Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD91Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD928u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD948u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD960u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD968u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD980u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD988u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADD9F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDA98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDADCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDAFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDB94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDBF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDC98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDCFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDD98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDDFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDECCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDEE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDF90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADDFF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE000u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE008u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE010u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE01Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE02Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE034u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE038u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE040u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE04Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE05Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE064u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE068u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE070u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE07Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE08Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE094u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE098u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE0F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE104u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE10Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE110u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE120u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE130u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE138u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE140u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE14Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE154u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE15Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE16Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE1F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE204u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE20Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE210u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE218u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE230u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE238u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE254u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE260u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE268u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE26Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE274u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE27Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE284u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE28Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE29Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE2F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE304u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE318u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE324u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE32Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE330u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE340u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE350u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE358u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE35Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE374u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE380u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE388u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE38Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE398u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE3E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE404u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE430u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE438u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE43Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE448u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE450u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE454u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE480u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE48Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE494u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE498u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE4E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE534u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE58Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE5ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE630u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE63Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE668u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE670u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE684u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE6F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE700u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE740u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE768u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE798u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE7F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE814u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE8FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE91Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE93Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE944u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE954u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE980u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE98Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9D8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADE9E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEA94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEAF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEB94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBA8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEBF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEC90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADECFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADED80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEDF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEE88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEC4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEED8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEEE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEF98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADEFD0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF000u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF010u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF014u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF02Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF058u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF060u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF068u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF070u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF0F8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF100u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF130u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF15Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF170u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF180u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF188u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF190u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF194u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF19Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF1F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF210u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF244u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF24Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF258u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF268u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF270u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF278u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF290u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF298u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2A8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF2FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF300u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF304u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF31Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF354u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF370u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF3E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF400u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF408u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF418u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF428u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF42Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF434u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF438u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF454u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF474u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4A0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4B0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4D0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4F4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF4FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF50Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF518u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF520u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF52Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF538u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF540u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF548u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF558u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF560u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF564u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF574u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF58Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF594u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5B8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF5E0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF600u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF630u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF640u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF658u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF660u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF670u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF680u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF684u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF68Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF690u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF6FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF70Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF718u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF748u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF75Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF768u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF770u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF774u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF77Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF794u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF79Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7ACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7C0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7C8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF7E8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF808u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF834u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF844u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF848u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF870u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8ECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF8FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF900u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF908u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF910u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF928u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF92Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF930u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF960u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF968u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF974u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF998u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9A4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9B4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9BCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9C4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9CCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9D4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9DCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9E4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9F0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADF9FCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFA98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFABCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFAFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB44u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB74u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB7Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB84u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB8Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFB9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBACu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBBCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBD4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFBF8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC00u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC08u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC10u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC18u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC24u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC60u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFC98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCA0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCD8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFCF0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD28u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD68u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFD98u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDB4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDE4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDECu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFDFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE1Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE30u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE38u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE40u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE48u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE50u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE58u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE6Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE94u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFE9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEB0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEB8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEC0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFECCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEDCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEE8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEF4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFEFCu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF04u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF0Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF14u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF20u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF2Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF34u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF3Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF4Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF54u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF5Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF64u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF70u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF78u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF80u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF88u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF90u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFF9Cu, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFA4u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFC8u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFE0u, &recomp_unit_0182, "recomp_unit_0182");
    runtime.register_function(0x08ADFFECu, &recomp_unit_0182, "recomp_unit_0182");
}
} // namespace psprecomp
