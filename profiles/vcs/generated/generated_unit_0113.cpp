#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0113[4067] = {
    1, 2, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 10, 11, 0, 0, 0, 12, 0,
    0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 0, 0, 0, 0,
    0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0,
    0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0,
    39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46,
    0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54,
    0, 55, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 62, 0,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 87, 0, 0, 88, 0, 89, 0, 0, 0, 0,
    90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 99,
    0, 0, 0, 100, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121,
    0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137,
    0, 138, 0, 139, 140, 0, 141, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153,
    0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 169, 0,
    170, 0, 0, 171, 0, 172, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 185,
    0, 186, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0,
    0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 198, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0,
    210, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 213, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 0, 0, 219,
    0, 220, 0, 0, 0, 0, 221, 0, 222, 223, 0, 224, 0, 225, 0, 226, 0, 0, 227, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231,
    0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 236, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239,
    0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0,
    261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 267,
    0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 281, 0,
    0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 0, 295, 0, 296, 0, 297, 0, 298, 299,
    0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 310, 0, 311, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0,
    0, 0, 316, 0, 317, 0, 318, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 324, 0,
    325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0,
    336, 0, 0, 337, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 0,
    349, 0, 350, 351, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0,
    0, 0, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 363, 0, 364, 0, 0, 365, 0,
    366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0,
    373, 0, 374, 375, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0,
    0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 390, 0, 391, 0, 392, 0,
    393, 0, 394, 395, 0, 0, 396, 0, 0, 0, 397, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0, 401, 0, 0, 402, 403, 0, 0, 404, 0, 405, 0,
    0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0, 411, 412, 0, 0, 413, 0, 414, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 0, 423, 0, 424, 0,
    425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 432, 0, 0, 433, 0, 434, 435, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 439, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0,
    451, 0, 452, 0, 453, 0, 454, 455, 0, 0, 456, 0, 0, 0, 457, 0, 458, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 463, 0, 464, 0, 0, 0, 0, 465,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 469, 0, 470, 0, 471, 0, 0, 0,
    472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0,
    0, 481, 0, 482, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0,
    487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    491, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0,
    0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 501, 0, 0, 502, 0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0,
    507, 0, 508, 0, 0, 509, 0, 510, 0, 511, 0, 512, 0, 0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 0, 520, 0, 521,
    0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0,
    0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0,
    0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 547, 548, 0, 549, 0, 0, 0, 550, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0,
    554, 0, 555, 0, 0, 0, 0, 0, 556, 0, 557, 0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0,
    0, 562, 0, 0, 0, 0, 563, 0, 564, 0, 565, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0,
    568, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 572, 0, 0, 0, 573, 0, 0, 0,
    574, 0, 0, 0, 575, 0, 576, 577, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 581, 0, 582, 0, 0, 583, 0, 584, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587,
    0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0,
    0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 596, 597, 0, 0, 0, 598, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 604, 0, 605, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0, 0, 608, 0,
    609, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0,
    616, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 621, 0, 622, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 631, 632,
    0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 0, 639, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0,
    643, 0, 0, 0, 644, 0, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 652, 0, 0, 653, 0, 0, 654, 0, 655, 0, 656,
    0, 0, 0, 657, 0, 658, 0, 0, 659, 0, 0, 660, 0, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0,
    0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 0, 674, 0, 675,
    0, 676, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 682,
    0, 0, 683, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0,
    0, 691, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 698, 0, 699, 0, 700, 0, 701,
    0, 702, 0, 703, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 707, 0, 708, 0, 0, 0, 709, 0, 0, 710,
    711, 0, 0, 0, 712, 0, 0, 0, 713, 714, 0, 715, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0,
    720, 0, 0, 0, 721, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0,
    0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 0, 733, 0, 0, 734, 735, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 738, 0, 0, 739, 0, 740, 0, 0, 741, 0, 0, 0, 742, 0, 0,
    743, 0, 744, 0, 745, 0, 0, 746, 0, 747, 0, 748, 0, 0, 749, 0, 0, 750, 0, 0, 751, 0, 752, 0, 0, 0, 753, 0, 754, 0, 0, 755,
    0, 0, 756, 0, 757, 0, 758, 0, 0, 759, 0, 760, 0, 761, 0, 0, 762, 0, 0, 763, 0, 0, 764, 765, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0, 768, 0, 0, 769, 0, 770, 0, 771, 0, 0, 772, 0, 773, 0, 774, 0, 0, 775, 0,
    0, 776, 0, 777, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 783,
    0, 784, 0, 0, 785, 0, 786, 0, 787, 0, 0, 788, 0, 0, 789, 0, 790, 791, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    792, 0, 0, 0, 0, 793, 0, 794, 0, 0, 795, 0, 796, 0, 797, 0, 0, 798, 0, 799, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 803, 804,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 806, 0, 807, 0, 808, 0, 0, 0, 0, 809, 0, 0, 0,
    0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 814, 0, 0, 815, 0, 0, 816,
    0, 817, 0, 818, 0, 0, 819, 0, 820, 0, 821, 0, 0, 822, 0, 0, 823, 0, 0, 824, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 828, 0, 0, 829, 0, 830, 0, 0, 0, 831, 0, 832, 0, 0, 833, 0, 0, 834, 0, 835, 0, 836,
    0, 0, 837, 0, 838, 0, 839, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0, 847, 0, 848, 0, 0, 0, 0, 849,
    0, 850, 851, 0, 0, 852, 0, 853, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 856, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 858, 0, 859, 0, 0, 0, 860, 0, 0, 861, 0,
    862, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 865, 0, 0, 0, 866, 0, 867, 0, 868, 869, 0, 0, 0, 870, 0, 0, 871, 0, 872,
    0, 0, 0, 0, 0, 0, 873, 0, 874, 0, 0, 0, 875, 0, 0, 0, 876, 0, 0, 0, 877, 0, 878, 0, 879, 0, 880, 0, 0, 0, 0, 881,
    0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 884, 0, 885, 0, 0, 0,
    886, 0, 887, 0, 0, 0, 0, 888, 0, 889, 890, 0, 891, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 893, 0,
    0, 0, 894, 895, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 898, 0,
    0, 0, 899, 0, 900, 0, 0, 0, 0, 901, 0, 902, 0, 903, 0, 904, 0, 905, 0, 906, 0, 907, 0, 908, 0, 909, 0, 910, 0, 0, 0, 0,
    0, 0, 911, 0, 912, 0, 913, 0, 914, 0, 915, 0, 0, 916, 0, 0, 0, 917, 0, 918, 0, 919, 0, 920, 0, 921, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 923, 0, 0, 0, 924, 0, 0, 0, 925, 0, 0, 926, 927, 0, 928, 0, 0, 0, 0,
    0, 0, 0, 0, 929, 0, 930, 0, 0, 0, 931, 0, 932, 0, 0, 0, 0, 0, 0, 0, 0, 933, 0, 934, 0, 935, 0, 0, 0, 0, 0, 0,
    936, 0, 0, 0, 0, 937, 0, 938, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 941, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 943, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 944, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 947, 0, 0, 0,
    948, 0, 0, 0, 949, 0, 0, 950, 0, 0, 0, 951, 952, 0, 953, 0, 0, 954, 0, 0, 955, 0, 0, 0, 0, 0, 0, 956, 957, 958, 0, 959,
    960, 0, 0, 961, 0, 962, 963, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 964, 0, 0, 965, 0, 966, 967, 0, 968, 0, 0, 0, 0, 0, 969,
    0, 0, 970, 0, 0, 971, 0, 0, 972, 0, 973, 0, 0, 974, 0, 975, 0, 976, 0, 0, 0, 977, 0, 0, 0, 978, 0, 0, 0, 979, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 980, 0, 0, 0, 0, 0, 981, 0, 982, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 983, 0, 984, 0, 985, 0,
    986, 0, 987, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 988, 0, 989, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 990, 0, 0, 0, 991, 0,
    992, 0, 993, 0, 0, 0, 994, 0, 995, 0, 0, 0, 0, 0, 0, 0, 996, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 997,
};
void recomp_unit_0113_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C8000u;
        entry_id = (entry_delta < 16268u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0113[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C8000;
    case 2u: goto L_089C8004;
    case 3u: goto L_089C8010;
    case 4u: goto L_089C8018;
    case 5u: goto L_089C8020;
    case 6u: goto L_089C8034;
    case 7u: goto L_089C8044;
    case 8u: goto L_089C8054;
    case 9u: goto L_089C805C;
    case 10u: goto L_089C8064;
    case 11u: goto L_089C8068;
    case 12u: goto L_089C8078;
    case 13u: goto L_089C8084;
    case 14u: goto L_089C808C;
    case 15u: goto L_089C8094;
    case 16u: goto L_089C809C;
    case 17u: goto L_089C80AC;
    case 18u: goto L_089C80C4;
    case 19u: goto L_089C80D8;
    case 20u: goto L_089C80E4;
    case 21u: goto L_089C80EC;
    case 22u: goto L_089C8108;
    case 23u: goto L_089C8110;
    case 24u: goto L_089C8128;
    case 25u: goto L_089C8190;
    case 26u: goto L_089C819C;
    case 27u: goto L_089C81A4;
    case 28u: goto L_089C81A8;
    case 29u: goto L_089C81B8;
    case 30u: goto L_089C81C8;
    case 31u: goto L_089C81D8;
    case 32u: goto L_089C81F8;
    case 33u: goto L_089C8218;
    case 34u: goto L_089C8220;
    case 35u: goto L_089C8234;
    case 36u: goto L_089C8268;
    case 37u: goto L_089C8270;
    case 38u: goto L_089C8278;
    case 39u: goto L_089C8280;
    case 40u: goto L_089C8288;
    case 41u: goto L_089C8290;
    case 42u: goto L_089C8298;
    case 43u: goto L_089C82AC;
    case 44u: goto L_089C82E8;
    case 45u: goto L_089C82F4;
    case 46u: goto L_089C82FC;
    case 47u: goto L_089C8314;
    case 48u: goto L_089C8334;
    case 49u: goto L_089C8354;
    case 50u: goto L_089C835C;
    case 51u: goto L_089C8364;
    case 52u: goto L_089C836C;
    case 53u: goto L_089C8374;
    case 54u: goto L_089C837C;
    case 55u: goto L_089C8384;
    case 56u: goto L_089C839C;
    case 57u: goto L_089C83A0;
    case 58u: goto L_089C83C8;
    case 59u: goto L_089C83D4;
    case 60u: goto L_089C83DC;
    case 61u: goto L_089C83F4;
    case 62u: goto L_089C83F8;
    case 63u: goto L_089C8414;
    case 64u: goto L_089C842C;
    case 65u: goto L_089C8444;
    case 66u: goto L_089C8460;
    case 67u: goto L_089C849C;
    case 68u: goto L_089C84B0;
    case 69u: goto L_089C84BC;
    case 70u: goto L_089C84F4;
    case 71u: goto L_089C851C;
    case 72u: goto L_089C852C;
    case 73u: goto L_089C8534;
    case 74u: goto L_089C8544;
    case 75u: goto L_089C8564;
    case 76u: goto L_089C85BC;
    case 77u: goto L_089C85C4;
    case 78u: goto L_089C85CC;
    case 79u: goto L_089C85D8;
    case 80u: goto L_089C85EC;
    case 81u: goto L_089C8618;
    case 82u: goto L_089C8620;
    case 83u: goto L_089C8628;
    case 84u: goto L_089C8638;
    case 85u: goto L_089C8648;
    case 86u: goto L_089C8654;
    case 87u: goto L_089C8658;
    case 88u: goto L_089C8664;
    case 89u: goto L_089C866C;
    case 90u: goto L_089C8680;
    case 91u: goto L_089C8688;
    case 92u: goto L_089C86A0;
    case 93u: goto L_089C86A8;
    case 94u: goto L_089C86B8;
    case 95u: goto L_089C86C8;
    case 96u: goto L_089C86D4;
    case 97u: goto L_089C86E4;
    case 98u: goto L_089C86F4;
    case 99u: goto L_089C86FC;
    case 100u: goto L_089C870C;
    case 101u: goto L_089C8718;
    case 102u: goto L_089C8720;
    case 103u: goto L_089C872C;
    case 104u: goto L_089C8738;
    case 105u: goto L_089C8740;
    case 106u: goto L_089C8748;
    case 107u: goto L_089C8754;
    case 108u: goto L_089C875C;
    case 109u: goto L_089C8768;
    case 110u: goto L_089C8778;
    case 111u: goto L_089C87A8;
    case 112u: goto L_089C87B4;
    case 113u: goto L_089C87BC;
    case 114u: goto L_089C87C4;
    case 115u: goto L_089C87CC;
    case 116u: goto L_089C87D4;
    case 117u: goto L_089C87DC;
    case 118u: goto L_089C87E4;
    case 119u: goto L_089C87EC;
    case 120u: goto L_089C87F4;
    case 121u: goto L_089C87FC;
    case 122u: goto L_089C8804;
    case 123u: goto L_089C880C;
    case 124u: goto L_089C8814;
    case 125u: goto L_089C881C;
    case 126u: goto L_089C8824;
    case 127u: goto L_089C882C;
    case 128u: goto L_089C8834;
    case 129u: goto L_089C883C;
    case 130u: goto L_089C8844;
    case 131u: goto L_089C884C;
    case 132u: goto L_089C8854;
    case 133u: goto L_089C885C;
    case 134u: goto L_089C8864;
    case 135u: goto L_089C886C;
    case 136u: goto L_089C8874;
    case 137u: goto L_089C887C;
    case 138u: goto L_089C8884;
    case 139u: goto L_089C888C;
    case 140u: goto L_089C8890;
    case 141u: goto L_089C8898;
    case 142u: goto L_089C88A4;
    case 143u: goto L_089C88AC;
    case 144u: goto L_089C88B4;
    case 145u: goto L_089C88BC;
    case 146u: goto L_089C88C4;
    case 147u: goto L_089C88CC;
    case 148u: goto L_089C88D4;
    case 149u: goto L_089C88DC;
    case 150u: goto L_089C88E4;
    case 151u: goto L_089C88EC;
    case 152u: goto L_089C88F4;
    case 153u: goto L_089C88FC;
    case 154u: goto L_089C8904;
    case 155u: goto L_089C890C;
    case 156u: goto L_089C8914;
    case 157u: goto L_089C891C;
    case 158u: goto L_089C8924;
    case 159u: goto L_089C892C;
    case 160u: goto L_089C8934;
    case 161u: goto L_089C893C;
    case 162u: goto L_089C8944;
    case 163u: goto L_089C894C;
    case 164u: goto L_089C8954;
    case 165u: goto L_089C895C;
    case 166u: goto L_089C8964;
    case 167u: goto L_089C896C;
    case 168u: goto L_089C8974;
    case 169u: goto L_089C8978;
    case 170u: goto L_089C8980;
    case 171u: goto L_089C898C;
    case 172u: goto L_089C8994;
    case 173u: goto L_089C8998;
    case 174u: goto L_089C89A0;
    case 175u: goto L_089C8A18;
    case 176u: goto L_089C8A24;
    case 177u: goto L_089C8A2C;
    case 178u: goto L_089C8A34;
    case 179u: goto L_089C8A3C;
    case 180u: goto L_089C8A44;
    case 181u: goto L_089C8A48;
    case 182u: goto L_089C8A58;
    case 183u: goto L_089C8A68;
    case 184u: goto L_089C8A74;
    case 185u: goto L_089C8A7C;
    case 186u: goto L_089C8A84;
    case 187u: goto L_089C8A88;
    case 188u: goto L_089C8A90;
    case 189u: goto L_089C8AC8;
    case 190u: goto L_089C8AD0;
    case 191u: goto L_089C8ADC;
    case 192u: goto L_089C8AEC;
    case 193u: goto L_089C8AF8;
    case 194u: goto L_089C8B04;
    case 195u: goto L_089C8B1C;
    case 196u: goto L_089C8B24;
    case 197u: goto L_089C8B2C;
    case 198u: goto L_089C8B34;
    case 199u: goto L_089C8B38;
    case 200u: goto L_089C8B58;
    case 201u: goto L_089C8B8C;
    case 202u: goto L_089C8B9C;
    case 203u: goto L_089C8BA4;
    case 204u: goto L_089C8BB4;
    case 205u: goto L_089C8BBC;
    case 206u: goto L_089C8BCC;
    case 207u: goto L_089C8BDC;
    case 208u: goto L_089C8BF0;
    case 209u: goto L_089C8BF8;
    case 210u: goto L_089C8C00;
    case 211u: goto L_089C8C10;
    case 212u: goto L_089C8C24;
    case 213u: goto L_089C8C2C;
    case 214u: goto L_089C8C30;
    case 215u: goto L_089C8C40;
    case 216u: goto L_089C8C58;
    case 217u: goto L_089C8C64;
    case 218u: goto L_089C8C6C;
    case 219u: goto L_089C8C7C;
    case 220u: goto L_089C8C84;
    case 221u: goto L_089C8C98;
    case 222u: goto L_089C8CA0;
    case 223u: goto L_089C8CA4;
    case 224u: goto L_089C8CAC;
    case 225u: goto L_089C8CB4;
    case 226u: goto L_089C8CBC;
    case 227u: goto L_089C8CC8;
    case 228u: goto L_089C8CCC;
    case 229u: goto L_089C8CE0;
    case 230u: goto L_089C8CF0;
    case 231u: goto L_089C8CFC;
    case 232u: goto L_089C8D08;
    case 233u: goto L_089C8D24;
    case 234u: goto L_089C8D2C;
    case 235u: goto L_089C8D34;
    case 236u: goto L_089C8D3C;
    case 237u: goto L_089C8D40;
    case 238u: goto L_089C8D68;
    case 239u: goto L_089C8D7C;
    case 240u: goto L_089C8D84;
    case 241u: goto L_089C8D9C;
    case 242u: goto L_089C8DB0;
    case 243u: goto L_089C8DC4;
    case 244u: goto L_089C8DD8;
    case 245u: goto L_089C8DEC;
    case 246u: goto L_089C8E00;
    case 247u: goto L_089C8E14;
    case 248u: goto L_089C8E28;
    case 249u: goto L_089C8E3C;
    case 250u: goto L_089C8E50;
    case 251u: goto L_089C8E64;
    case 252u: goto L_089C8E78;
    case 253u: goto L_089C8E8C;
    case 254u: goto L_089C8EA0;
    case 255u: goto L_089C8EB4;
    case 256u: goto L_089C8EC8;
    case 257u: goto L_089C8EDC;
    case 258u: goto L_089C8EE4;
    case 259u: goto L_089C8EF0;
    case 260u: goto L_089C8EF8;
    case 261u: goto L_089C8F00;
    case 262u: goto L_089C8F18;
    case 263u: goto L_089C8F2C;
    case 264u: goto L_089C8F40;
    case 265u: goto L_089C8F54;
    case 266u: goto L_089C8F68;
    case 267u: goto L_089C8F7C;
    case 268u: goto L_089C8F90;
    case 269u: goto L_089C8FA4;
    case 270u: goto L_089C8FB8;
    case 271u: goto L_089C8FCC;
    case 272u: goto L_089C8FE0;
    case 273u: goto L_089C8FF4;
    case 274u: goto L_089C9008;
    case 275u: goto L_089C901C;
    case 276u: goto L_089C9030;
    case 277u: goto L_089C9044;
    case 278u: goto L_089C9058;
    case 279u: goto L_089C9060;
    case 280u: goto L_089C906C;
    case 281u: goto L_089C9078;
    case 282u: goto L_089C9090;
    case 283u: goto L_089C9098;
    case 284u: goto L_089C90A0;
    case 285u: goto L_089C90AC;
    case 286u: goto L_089C90BC;
    case 287u: goto L_089C90C8;
    case 288u: goto L_089C9108;
    case 289u: goto L_089C9120;
    case 290u: goto L_089C9128;
    case 291u: goto L_089C9130;
    case 292u: goto L_089C9144;
    case 293u: goto L_089C914C;
    case 294u: goto L_089C9154;
    case 295u: goto L_089C9160;
    case 296u: goto L_089C9168;
    case 297u: goto L_089C9170;
    case 298u: goto L_089C9178;
    case 299u: goto L_089C917C;
    case 300u: goto L_089C9184;
    case 301u: goto L_089C9248;
    case 302u: goto L_089C92A4;
    case 303u: goto L_089C92AC;
    case 304u: goto L_089C92B4;
    case 305u: goto L_089C92C0;
    case 306u: goto L_089C92D4;
    case 307u: goto L_089C931C;
    case 308u: goto L_089C9334;
    case 309u: goto L_089C933C;
    case 310u: goto L_089C934C;
    case 311u: goto L_089C9354;
    case 312u: goto L_089C935C;
    case 313u: goto L_089C9364;
    case 314u: goto L_089C9370;
    case 315u: goto L_089C9378;
    case 316u: goto L_089C9388;
    case 317u: goto L_089C9390;
    case 318u: goto L_089C9398;
    case 319u: goto L_089C939C;
    case 320u: goto L_089C93A8;
    case 321u: goto L_089C93B4;
    case 322u: goto L_089C93E0;
    case 323u: goto L_089C93F0;
    case 324u: goto L_089C93F8;
    case 325u: goto L_089C9400;
    case 326u: goto L_089C9408;
    case 327u: goto L_089C9420;
    case 328u: goto L_089C9450;
    case 329u: goto L_089C948C;
    case 330u: goto L_089C9494;
    case 331u: goto L_089C94A0;
    case 332u: goto L_089C94B4;
    case 333u: goto L_089C94C0;
    case 334u: goto L_089C94F0;
    case 335u: goto L_089C94F8;
    case 336u: goto L_089C9500;
    case 337u: goto L_089C950C;
    case 338u: goto L_089C9514;
    case 339u: goto L_089C951C;
    case 340u: goto L_089C9528;
    case 341u: goto L_089C953C;
    case 342u: goto L_089C9544;
    case 343u: goto L_089C954C;
    case 344u: goto L_089C9554;
    case 345u: goto L_089C955C;
    case 346u: goto L_089C9564;
    case 347u: goto L_089C956C;
    case 348u: goto L_089C9574;
    case 349u: goto L_089C9580;
    case 350u: goto L_089C9588;
    case 351u: goto L_089C958C;
    case 352u: goto L_089C9598;
    case 353u: goto L_089C95A0;
    case 354u: goto L_089C95A8;
    case 355u: goto L_089C95EC;
    case 356u: goto L_089C95F8;
    case 357u: goto L_089C960C;
    case 358u: goto L_089C9614;
    case 359u: goto L_089C961C;
    case 360u: goto L_089C9630;
    case 361u: goto L_089C9658;
    case 362u: goto L_089C9660;
    case 363u: goto L_089C9664;
    case 364u: goto L_089C966C;
    case 365u: goto L_089C9678;
    case 366u: goto L_089C9680;
    case 367u: goto L_089C9690;
    case 368u: goto L_089C96A8;
    case 369u: goto L_089C96B0;
    case 370u: goto L_089C96C4;
    case 371u: goto L_089C96E0;
    case 372u: goto L_089C96F4;
    case 373u: goto L_089C9700;
    case 374u: goto L_089C9708;
    case 375u: goto L_089C970C;
    case 376u: goto L_089C9714;
    case 377u: goto L_089C9724;
    case 378u: goto L_089C9730;
    case 379u: goto L_089C9738;
    case 380u: goto L_089C9740;
    case 381u: goto L_089C9750;
    case 382u: goto L_089C9778;
    case 383u: goto L_089C9788;
    case 384u: goto L_089C9798;
    case 385u: goto L_089C97A8;
    case 386u: goto L_089C97BC;
    case 387u: goto L_089C97C4;
    case 388u: goto L_089C97CC;
    case 389u: goto L_089C97E0;
    case 390u: goto L_089C97E8;
    case 391u: goto L_089C97F0;
    case 392u: goto L_089C97F8;
    case 393u: goto L_089C9800;
    case 394u: goto L_089C9808;
    case 395u: goto L_089C980C;
    case 396u: goto L_089C9818;
    case 397u: goto L_089C9828;
    case 398u: goto L_089C9830;
    case 399u: goto L_089C9838;
    case 400u: goto L_089C984C;
    case 401u: goto L_089C9854;
    case 402u: goto L_089C9860;
    case 403u: goto L_089C9864;
    case 404u: goto L_089C9870;
    case 405u: goto L_089C9878;
    case 406u: goto L_089C9884;
    case 407u: goto L_089C988C;
    case 408u: goto L_089C9894;
    case 409u: goto L_089C989C;
    case 410u: goto L_089C98A4;
    case 411u: goto L_089C98AC;
    case 412u: goto L_089C98B0;
    case 413u: goto L_089C98BC;
    case 414u: goto L_089C98C4;
    case 415u: goto L_089C98CC;
    case 416u: goto L_089C98E0;
    case 417u: goto L_089C98F8;
    case 418u: goto L_089C9908;
    case 419u: goto L_089C993C;
    case 420u: goto L_089C9948;
    case 421u: goto L_089C9954;
    case 422u: goto L_089C9960;
    case 423u: goto L_089C9970;
    case 424u: goto L_089C9978;
    case 425u: goto L_089C9980;
    case 426u: goto L_089C9990;
    case 427u: goto L_089C99A0;
    case 428u: goto L_089C99B8;
    case 429u: goto L_089C99C0;
    case 430u: goto L_089C99D4;
    case 431u: goto L_089C99F0;
    case 432u: goto L_089C9A04;
    case 433u: goto L_089C9A10;
    case 434u: goto L_089C9A18;
    case 435u: goto L_089C9A1C;
    case 436u: goto L_089C9A24;
    case 437u: goto L_089C9A34;
    case 438u: goto L_089C9A40;
    case 439u: goto L_089C9A48;
    case 440u: goto L_089C9A50;
    case 441u: goto L_089C9A60;
    case 442u: goto L_089C9A88;
    case 443u: goto L_089C9A98;
    case 444u: goto L_089C9AA8;
    case 445u: goto L_089C9AB8;
    case 446u: goto L_089C9ACC;
    case 447u: goto L_089C9AD4;
    case 448u: goto L_089C9ADC;
    case 449u: goto L_089C9AF0;
    case 450u: goto L_089C9AF8;
    case 451u: goto L_089C9B00;
    case 452u: goto L_089C9B08;
    case 453u: goto L_089C9B10;
    case 454u: goto L_089C9B18;
    case 455u: goto L_089C9B1C;
    case 456u: goto L_089C9B28;
    case 457u: goto L_089C9B38;
    case 458u: goto L_089C9B40;
    case 459u: goto L_089C9B48;
    case 460u: goto L_089C9B5C;
    case 461u: goto L_089C9BC8;
    case 462u: goto L_089C9BDC;
    case 463u: goto L_089C9BE0;
    case 464u: goto L_089C9BE8;
    case 465u: goto L_089C9BFC;
    case 466u: goto L_089C9C30;
    case 467u: goto L_089C9C48;
    case 468u: goto L_089C9C58;
    case 469u: goto L_089C9C60;
    case 470u: goto L_089C9C68;
    case 471u: goto L_089C9C70;
    case 472u: goto L_089C9C80;
    case 473u: goto L_089C9CA4;
    case 474u: goto L_089C9CB0;
    case 475u: goto L_089C9CB8;
    case 476u: goto L_089C9CC4;
    case 477u: goto L_089C9CCC;
    case 478u: goto L_089C9CD4;
    case 479u: goto L_089C9CDC;
    case 480u: goto L_089C9CE4;
    case 481u: goto L_089C9D04;
    case 482u: goto L_089C9D0C;
    case 483u: goto L_089C9D14;
    case 484u: goto L_089C9D4C;
    case 485u: goto L_089C9D54;
    case 486u: goto L_089C9D64;
    case 487u: goto L_089C9D80;
    case 488u: goto L_089C9D98;
    case 489u: goto L_089C9DB4;
    case 490u: goto L_089C9DC4;
    case 491u: goto L_089C9E00;
    case 492u: goto L_089C9E04;
    case 493u: goto L_089C9E2C;
    case 494u: goto L_089C9E34;
    case 495u: goto L_089C9E48;
    case 496u: goto L_089C9E58;
    case 497u: goto L_089C9E60;
    case 498u: goto L_089C9E74;
    case 499u: goto L_089C9E98;
    case 500u: goto L_089C9EA0;
    case 501u: goto L_089C9EB0;
    case 502u: goto L_089C9EBC;
    case 503u: goto L_089C9EC4;
    case 504u: goto L_089C9ECC;
    case 505u: goto L_089C9ED4;
    case 506u: goto L_089C9EF8;
    case 507u: goto L_089C9F00;
    case 508u: goto L_089C9F08;
    case 509u: goto L_089C9F14;
    case 510u: goto L_089C9F1C;
    case 511u: goto L_089C9F24;
    case 512u: goto L_089C9F2C;
    case 513u: goto L_089C9F38;
    case 514u: goto L_089C9F40;
    case 515u: goto L_089C9F48;
    case 516u: goto L_089C9F50;
    case 517u: goto L_089C9F58;
    case 518u: goto L_089C9F60;
    case 519u: goto L_089C9F68;
    case 520u: goto L_089C9F74;
    case 521u: goto L_089C9F7C;
    case 522u: goto L_089C9F84;
    case 523u: goto L_089C9F8C;
    case 524u: goto L_089C9F94;
    case 525u: goto L_089C9F9C;
    case 526u: goto L_089C9FA4;
    case 527u: goto L_089C9FB0;
    case 528u: goto L_089C9FB8;
    case 529u: goto L_089C9FC0;
    case 530u: goto L_089C9FC8;
    case 531u: goto L_089C9FD0;
    case 532u: goto L_089C9FD8;
    case 533u: goto L_089C9FE0;
    case 534u: goto L_089C9FE8;
    case 535u: goto L_089C9FF0;
    case 536u: goto L_089C9FF8;
    case 537u: goto L_089CA008;
    case 538u: goto L_089CA018;
    case 539u: goto L_089CA030;
    case 540u: goto L_089CA038;
    case 541u: goto L_089CA040;
    case 542u: goto L_089CA048;
    case 543u: goto L_089CA050;
    case 544u: goto L_089CA078;
    case 545u: goto L_089CA08C;
    case 546u: goto L_089CA0A0;
    case 547u: goto L_089CA0B0;
    case 548u: goto L_089CA0B4;
    case 549u: goto L_089CA0BC;
    case 550u: goto L_089CA0CC;
    case 551u: goto L_089CA0D0;
    case 552u: goto L_089CA0EC;
    case 553u: goto L_089CA0F8;
    case 554u: goto L_089CA100;
    case 555u: goto L_089CA108;
    case 556u: goto L_089CA120;
    case 557u: goto L_089CA128;
    case 558u: goto L_089CA130;
    case 559u: goto L_089CA138;
    case 560u: goto L_089CA148;
    case 561u: goto L_089CA168;
    case 562u: goto L_089CA184;
    case 563u: goto L_089CA198;
    case 564u: goto L_089CA1A0;
    case 565u: goto L_089CA1A8;
    case 566u: goto L_089CA1AC;
    case 567u: goto L_089CA1F8;
    case 568u: goto L_089CA200;
    case 569u: goto L_089CA208;
    case 570u: goto L_089CA240;
    case 571u: goto L_089CA25C;
    case 572u: goto L_089CA260;
    case 573u: goto L_089CA270;
    case 574u: goto L_089CA280;
    case 575u: goto L_089CA290;
    case 576u: goto L_089CA298;
    case 577u: goto L_089CA29C;
    case 578u: goto L_089CA2A4;
    case 579u: goto L_089CA2BC;
    case 580u: goto L_089CA2C8;
    case 581u: goto L_089CA2D8;
    case 582u: goto L_089CA2E0;
    case 583u: goto L_089CA2EC;
    case 584u: goto L_089CA2F4;
    case 585u: goto L_089CA360;
    case 586u: goto L_089CA36C;
    case 587u: goto L_089CA37C;
    case 588u: goto L_089CA38C;
    case 589u: goto L_089CA39C;
    case 590u: goto L_089CA3AC;
    case 591u: goto L_089CA3C4;
    case 592u: goto L_089CA3EC;
    case 593u: goto L_089CA3F4;
    case 594u: goto L_089CA404;
    case 595u: goto L_089CA418;
    case 596u: goto L_089CA428;
    case 597u: goto L_089CA42C;
    case 598u: goto L_089CA43C;
    case 599u: goto L_089CA444;
    case 600u: goto L_089CA454;
    case 601u: goto L_089CA480;
    case 602u: goto L_089CA494;
    case 603u: goto L_089CA4B0;
    case 604u: goto L_089CA4B8;
    case 605u: goto L_089CA4C0;
    case 606u: goto L_089CA4D8;
    case 607u: goto L_089CA4E0;
    case 608u: goto L_089CA4F8;
    case 609u: goto L_089CA500;
    case 610u: goto L_089CA508;
    case 611u: goto L_089CA51C;
    case 612u: goto L_089CA540;
    case 613u: goto L_089CA554;
    case 614u: goto L_089CA564;
    case 615u: goto L_089CA574;
    case 616u: goto L_089CA580;
    case 617u: goto L_089CA58C;
    case 618u: goto L_089CA594;
    case 619u: goto L_089CA5B0;
    case 620u: goto L_089CA5B8;
    case 621u: goto L_089CA604;
    case 622u: goto L_089CA60C;
    case 623u: goto L_089CA618;
    case 624u: goto L_089CA620;
    case 625u: goto L_089CA63C;
    case 626u: goto L_089CA644;
    case 627u: goto L_089CA64C;
    case 628u: goto L_089CA658;
    case 629u: goto L_089CA664;
    case 630u: goto L_089CA670;
    case 631u: goto L_089CA678;
    case 632u: goto L_089CA67C;
    case 633u: goto L_089CA688;
    case 634u: goto L_089CA698;
    case 635u: goto L_089CA6A0;
    case 636u: goto L_089CA6A8;
    case 637u: goto L_089CA6B0;
    case 638u: goto L_089CA6B8;
    case 639u: goto L_089CA6C8;
    case 640u: goto L_089CA6CC;
    case 641u: goto L_089CA714;
    case 642u: goto L_089CA760;
    case 643u: goto L_089CA780;
    case 644u: goto L_089CA790;
    case 645u: goto L_089CA79C;
    case 646u: goto L_089CA7A4;
    case 647u: goto L_089CA7AC;
    case 648u: goto L_089CA7B4;
    case 649u: goto L_089CA7BC;
    case 650u: goto L_089CA7C4;
    case 651u: goto L_089CA7CC;
    case 652u: goto L_089CA7D4;
    case 653u: goto L_089CA7E0;
    case 654u: goto L_089CA7EC;
    case 655u: goto L_089CA7F4;
    case 656u: goto L_089CA7FC;
    case 657u: goto L_089CA80C;
    case 658u: goto L_089CA814;
    case 659u: goto L_089CA820;
    case 660u: goto L_089CA82C;
    case 661u: goto L_089CA83C;
    case 662u: goto L_089CA844;
    case 663u: goto L_089CA84C;
    case 664u: goto L_089CA864;
    case 665u: goto L_089CA874;
    case 666u: goto L_089CA884;
    case 667u: goto L_089CA894;
    case 668u: goto L_089CA8A4;
    case 669u: goto L_089CA8B4;
    case 670u: goto L_089CA8C4;
    case 671u: goto L_089CA8D4;
    case 672u: goto L_089CA8DC;
    case 673u: goto L_089CA8E4;
    case 674u: goto L_089CA8F4;
    case 675u: goto L_089CA8FC;
    case 676u: goto L_089CA904;
    case 677u: goto L_089CA914;
    case 678u: goto L_089CA928;
    case 679u: goto L_089CA950;
    case 680u: goto L_089CA95C;
    case 681u: goto L_089CA96C;
    case 682u: goto L_089CA97C;
    case 683u: goto L_089CA988;
    case 684u: goto L_089CA990;
    case 685u: goto L_089CA9A4;
    case 686u: goto L_089CA9B4;
    case 687u: goto L_089CA9C0;
    case 688u: goto L_089CA9CC;
    case 689u: goto L_089CA9DC;
    case 690u: goto L_089CA9EC;
    case 691u: goto L_089CAA04;
    case 692u: goto L_089CAA0C;
    case 693u: goto L_089CAA20;
    case 694u: goto L_089CAA30;
    case 695u: goto L_089CAA40;
    case 696u: goto L_089CAA50;
    case 697u: goto L_089CAA60;
    case 698u: goto L_089CAA64;
    case 699u: goto L_089CAA6C;
    case 700u: goto L_089CAA74;
    case 701u: goto L_089CAA7C;
    case 702u: goto L_089CAA84;
    case 703u: goto L_089CAA8C;
    case 704u: goto L_089CAA9C;
    case 705u: goto L_089CAAAC;
    case 706u: goto L_089CAAD0;
    case 707u: goto L_089CAAD8;
    case 708u: goto L_089CAAE0;
    case 709u: goto L_089CAAF0;
    case 710u: goto L_089CAAFC;
    case 711u: goto L_089CAB00;
    case 712u: goto L_089CAB10;
    case 713u: goto L_089CAB20;
    case 714u: goto L_089CAB24;
    case 715u: goto L_089CAB2C;
    case 716u: goto L_089CAB3C;
    case 717u: goto L_089CAB4C;
    case 718u: goto L_089CAB64;
    case 719u: goto L_089CAB6C;
    case 720u: goto L_089CAB80;
    case 721u: goto L_089CAB90;
    case 722u: goto L_089CAB94;
    case 723u: goto L_089CABAC;
    case 724u: goto L_089CABF4;
    case 725u: goto L_089CAC14;
    case 726u: goto L_089CAC20;
    case 727u: goto L_089CAC28;
    case 728u: goto L_089CAC38;
    case 729u: goto L_089CAC6C;
    case 730u: goto L_089CACAC;
    case 731u: goto L_089CACC8;
    case 732u: goto L_089CACD4;
    case 733u: goto L_089CACE0;
    case 734u: goto L_089CACEC;
    case 735u: goto L_089CACF0;
    case 736u: goto L_089CAD28;
    case 737u: goto L_089CAD3C;
    case 738u: goto L_089CAD44;
    case 739u: goto L_089CAD50;
    case 740u: goto L_089CAD58;
    case 741u: goto L_089CAD64;
    case 742u: goto L_089CAD74;
    case 743u: goto L_089CAD80;
    case 744u: goto L_089CAD88;
    case 745u: goto L_089CAD90;
    case 746u: goto L_089CAD9C;
    case 747u: goto L_089CADA4;
    case 748u: goto L_089CADAC;
    case 749u: goto L_089CADB8;
    case 750u: goto L_089CADC4;
    case 751u: goto L_089CADD0;
    case 752u: goto L_089CADD8;
    case 753u: goto L_089CADE8;
    case 754u: goto L_089CADF0;
    case 755u: goto L_089CADFC;
    case 756u: goto L_089CAE08;
    case 757u: goto L_089CAE10;
    case 758u: goto L_089CAE18;
    case 759u: goto L_089CAE24;
    case 760u: goto L_089CAE2C;
    case 761u: goto L_089CAE34;
    case 762u: goto L_089CAE40;
    case 763u: goto L_089CAE4C;
    case 764u: goto L_089CAE58;
    case 765u: goto L_089CAE5C;
    case 766u: goto L_089CAE98;
    case 767u: goto L_089CAEAC;
    case 768u: goto L_089CAEB4;
    case 769u: goto L_089CAEC0;
    case 770u: goto L_089CAEC8;
    case 771u: goto L_089CAED0;
    case 772u: goto L_089CAEDC;
    case 773u: goto L_089CAEE4;
    case 774u: goto L_089CAEEC;
    case 775u: goto L_089CAEF8;
    case 776u: goto L_089CAF04;
    case 777u: goto L_089CAF0C;
    case 778u: goto L_089CAF10;
    case 779u: goto L_089CAF4C;
    case 780u: goto L_089CAF60;
    case 781u: goto L_089CAF68;
    case 782u: goto L_089CAF74;
    case 783u: goto L_089CAF7C;
    case 784u: goto L_089CAF84;
    case 785u: goto L_089CAF90;
    case 786u: goto L_089CAF98;
    case 787u: goto L_089CAFA0;
    case 788u: goto L_089CAFAC;
    case 789u: goto L_089CAFB8;
    case 790u: goto L_089CAFC0;
    case 791u: goto L_089CAFC4;
    case 792u: goto L_089CB000;
    case 793u: goto L_089CB014;
    case 794u: goto L_089CB01C;
    case 795u: goto L_089CB028;
    case 796u: goto L_089CB030;
    case 797u: goto L_089CB038;
    case 798u: goto L_089CB044;
    case 799u: goto L_089CB04C;
    case 800u: goto L_089CB054;
    case 801u: goto L_089CB060;
    case 802u: goto L_089CB06C;
    case 803u: goto L_089CB078;
    case 804u: goto L_089CB07C;
    case 805u: goto L_089CB0B8;
    case 806u: goto L_089CB0CC;
    case 807u: goto L_089CB0D4;
    case 808u: goto L_089CB0DC;
    case 809u: goto L_089CB0F0;
    case 810u: goto L_089CB110;
    case 811u: goto L_089CB130;
    case 812u: goto L_089CB14C;
    case 813u: goto L_089CB15C;
    case 814u: goto L_089CB164;
    case 815u: goto L_089CB170;
    case 816u: goto L_089CB17C;
    case 817u: goto L_089CB184;
    case 818u: goto L_089CB18C;
    case 819u: goto L_089CB198;
    case 820u: goto L_089CB1A0;
    case 821u: goto L_089CB1A8;
    case 822u: goto L_089CB1B4;
    case 823u: goto L_089CB1C0;
    case 824u: goto L_089CB1CC;
    case 825u: goto L_089CB1D0;
    case 826u: goto L_089CB20C;
    case 827u: goto L_089CB220;
    case 828u: goto L_089CB228;
    case 829u: goto L_089CB234;
    case 830u: goto L_089CB23C;
    case 831u: goto L_089CB24C;
    case 832u: goto L_089CB254;
    case 833u: goto L_089CB260;
    case 834u: goto L_089CB26C;
    case 835u: goto L_089CB274;
    case 836u: goto L_089CB27C;
    case 837u: goto L_089CB288;
    case 838u: goto L_089CB290;
    case 839u: goto L_089CB298;
    case 840u: goto L_089CB2A8;
    case 841u: goto L_089CB2B0;
    case 842u: goto L_089CB2D4;
    case 843u: goto L_089CB33C;
    case 844u: goto L_089CB38C;
    case 845u: goto L_089CB3C8;
    case 846u: goto L_089CB3D0;
    case 847u: goto L_089CB3E0;
    case 848u: goto L_089CB3E8;
    case 849u: goto L_089CB3FC;
    case 850u: goto L_089CB404;
    case 851u: goto L_089CB408;
    case 852u: goto L_089CB414;
    case 853u: goto L_089CB41C;
    case 854u: goto L_089CB424;
    case 855u: goto L_089CB494;
    case 856u: goto L_089CB4A8;
    case 857u: goto L_089CB4BC;
    case 858u: goto L_089CB4D4;
    case 859u: goto L_089CB4DC;
    case 860u: goto L_089CB4EC;
    case 861u: goto L_089CB4F8;
    case 862u: goto L_089CB500;
    case 863u: goto L_089CB51C;
    case 864u: goto L_089CB524;
    case 865u: goto L_089CB534;
    case 866u: goto L_089CB544;
    case 867u: goto L_089CB54C;
    case 868u: goto L_089CB554;
    case 869u: goto L_089CB558;
    case 870u: goto L_089CB568;
    case 871u: goto L_089CB574;
    case 872u: goto L_089CB57C;
    case 873u: goto L_089CB598;
    case 874u: goto L_089CB5A0;
    case 875u: goto L_089CB5B0;
    case 876u: goto L_089CB5C0;
    case 877u: goto L_089CB5D0;
    case 878u: goto L_089CB5D8;
    case 879u: goto L_089CB5E0;
    case 880u: goto L_089CB5E8;
    case 881u: goto L_089CB5FC;
    case 882u: goto L_089CB608;
    case 883u: goto L_089CB650;
    case 884u: goto L_089CB668;
    case 885u: goto L_089CB670;
    case 886u: goto L_089CB680;
    case 887u: goto L_089CB688;
    case 888u: goto L_089CB69C;
    case 889u: goto L_089CB6A4;
    case 890u: goto L_089CB6A8;
    case 891u: goto L_089CB6B0;
    case 892u: goto L_089CB6F0;
    case 893u: goto L_089CB6F8;
    case 894u: goto L_089CB708;
    case 895u: goto L_089CB70C;
    case 896u: goto L_089CB71C;
    case 897u: goto L_089CB770;
    case 898u: goto L_089CB778;
    case 899u: goto L_089CB788;
    case 900u: goto L_089CB790;
    case 901u: goto L_089CB7A4;
    case 902u: goto L_089CB7AC;
    case 903u: goto L_089CB7B4;
    case 904u: goto L_089CB7BC;
    case 905u: goto L_089CB7C4;
    case 906u: goto L_089CB7CC;
    case 907u: goto L_089CB7D4;
    case 908u: goto L_089CB7DC;
    case 909u: goto L_089CB7E4;
    case 910u: goto L_089CB7EC;
    case 911u: goto L_089CB808;
    case 912u: goto L_089CB810;
    case 913u: goto L_089CB818;
    case 914u: goto L_089CB820;
    case 915u: goto L_089CB828;
    case 916u: goto L_089CB834;
    case 917u: goto L_089CB844;
    case 918u: goto L_089CB84C;
    case 919u: goto L_089CB854;
    case 920u: goto L_089CB85C;
    case 921u: goto L_089CB864;
    case 922u: goto L_089CB8A4;
    case 923u: goto L_089CB8B4;
    case 924u: goto L_089CB8C4;
    case 925u: goto L_089CB8D4;
    case 926u: goto L_089CB8E0;
    case 927u: goto L_089CB8E4;
    case 928u: goto L_089CB8EC;
    case 929u: goto L_089CB910;
    case 930u: goto L_089CB918;
    case 931u: goto L_089CB928;
    case 932u: goto L_089CB930;
    case 933u: goto L_089CB954;
    case 934u: goto L_089CB95C;
    case 935u: goto L_089CB964;
    case 936u: goto L_089CB980;
    case 937u: goto L_089CB994;
    case 938u: goto L_089CB99C;
    case 939u: goto L_089CB9A4;
    case 940u: goto L_089CB9D4;
    case 941u: goto L_089CBA04;
    case 942u: goto L_089CBA34;
    case 943u: goto L_089CBA64;
    case 944u: goto L_089CBA90;
    case 945u: goto L_089CBABC;
    case 946u: goto L_089CBAE8;
    case 947u: goto L_089CBAF0;
    case 948u: goto L_089CBB00;
    case 949u: goto L_089CBB10;
    case 950u: goto L_089CBB1C;
    case 951u: goto L_089CBB2C;
    case 952u: goto L_089CBB30;
    case 953u: goto L_089CBB38;
    case 954u: goto L_089CBB44;
    case 955u: goto L_089CBB50;
    case 956u: goto L_089CBB6C;
    case 957u: goto L_089CBB70;
    case 958u: goto L_089CBB74;
    case 959u: goto L_089CBB7C;
    case 960u: goto L_089CBB80;
    case 961u: goto L_089CBB8C;
    case 962u: goto L_089CBB94;
    case 963u: goto L_089CBB98;
    case 964u: goto L_089CBBC4;
    case 965u: goto L_089CBBD0;
    case 966u: goto L_089CBBD8;
    case 967u: goto L_089CBBDC;
    case 968u: goto L_089CBBE4;
    case 969u: goto L_089CBBFC;
    case 970u: goto L_089CBC08;
    case 971u: goto L_089CBC14;
    case 972u: goto L_089CBC20;
    case 973u: goto L_089CBC28;
    case 974u: goto L_089CBC34;
    case 975u: goto L_089CBC3C;
    case 976u: goto L_089CBC44;
    case 977u: goto L_089CBC54;
    case 978u: goto L_089CBC64;
    case 979u: goto L_089CBC74;
    case 980u: goto L_089CBC9C;
    case 981u: goto L_089CBCB4;
    case 982u: goto L_089CBCBC;
    case 983u: goto L_089CBD68;
    case 984u: goto L_089CBD70;
    case 985u: goto L_089CBD78;
    case 986u: goto L_089CBD80;
    case 987u: goto L_089CBD88;
    case 988u: goto L_089CBE34;
    case 989u: goto L_089CBE3C;
    case 990u: goto L_089CBEE8;
    case 991u: goto L_089CBEF8;
    case 992u: goto L_089CBF00;
    case 993u: goto L_089CBF08;
    case 994u: goto L_089CBF18;
    case 995u: goto L_089CBF20;
    case 996u: goto L_089CBF40;
    case 997u: goto L_089CBF88;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C8000:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089C8004;
L_089C8004:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(352));
    ctx.gpr[31] = (0x089C8010u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x089C8010u) goto L_089C8010;
    return;
L_089C8010:
    ctx.gpr[31] = (0x089C8018u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x089C8018u) goto L_089C8018;
    return;
L_089C8018:
    ctx.gpr[31] = (0x089C8020u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8020u) goto L_089C8020;
    return;
L_089C8020:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8044;
      }
      goto L_089C8034;
    }
L_089C8034:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089C8044;
L_089C8044:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 3u);
      if (branch_taken) {
          goto L_089C8064;
      }
      goto L_089C8054;
    }
L_089C8054:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089C8068;
      }
      goto L_089C805C;
    }
L_089C805C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C808C;
      }
      goto L_089C8064;
    }
L_089C8064:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    goto L_089C8068;
L_089C8068:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(58)));
    ctx.gpr[8] = (ctx.gpr[7] & 8192u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8084;
      }
      goto L_089C8078;
    }
L_089C8078:
    ctx.gpr[7] = (ctx.gpr[7] & 16384u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089C808C;
      }
      goto L_089C8084;
    }
L_089C8084:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089C808C;
L_089C808C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C80D8;
      }
      goto L_089C8094;
    }
L_089C8094:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089C80AC;
      }
      goto L_089C809C;
    }
L_089C809C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C80AC;
L_089C80AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C80D8;
      }
      goto L_089C80C4;
    }
L_089C80C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089C80D8;
L_089C80D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089C80E4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C80E4u) goto L_089C80E4;
    return;
L_089C80E4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8108;
      }
      goto L_089C80EC;
    }
L_089C80EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089C8108u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8108u) goto L_089C8108;
    return;
L_089C8108:
    ctx.gpr[31] = (0x089C8110u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8110u) goto L_089C8110;
    return;
L_089C8110:
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
L_089C8128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089C8190u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem) && ctx.pc == 0x089C8190u) goto L_089C8190;
    return;
L_089C8190:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C81A4;
      }
      goto L_089C819C;
    }
L_089C819C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C81A8;
      }
      goto L_089C81A4;
    }
L_089C81A4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089C81A8;
L_089C81A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C81B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C81C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C81C8u) goto L_089C81C8;
    return;
L_089C81C8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C81D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C8268;
      }
      goto L_089C81F8;
    }
L_089C81F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C8278;
      }
      goto L_089C8218;
    }
L_089C8218:
    ctx.gpr[31] = (0x089C8220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C8220u) goto L_089C8220;
    return;
L_089C8220:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11788)));
    ctx.gpr[31] = (0x089C8234u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11792)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8234u) goto L_089C8234;
    return;
L_089C8234:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6868), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C82FC;
      }
      goto L_089C8268;
    }
L_089C8268:
    ctx.gpr[31] = (0x089C8270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 692u, 0x08AD3B78u>(ctx, &aot_mem) && ctx.pc == 0x089C8270u) goto L_089C8270;
    return;
L_089C8270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C82FC;
      }
      goto L_089C8278;
    }
L_089C8278:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089C8280;
L_089C8280:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C82F4;
      }
      goto L_089C8288;
    }
L_089C8288:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C82F4;
      }
      goto L_089C8290;
    }
L_089C8290:
    ctx.gpr[31] = (0x089C8298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C8298u) goto L_089C8298;
    return;
L_089C8298:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11788)));
    ctx.gpr[31] = (0x089C82ACu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11792)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C82ACu) goto L_089C82AC;
    return;
L_089C82AC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6868), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089C82E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C9144;
L_089C82E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8280;
      }
      goto L_089C82F4;
    }
L_089C82F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089C82FC;
      }
      goto L_089C82FC;
    }
L_089C82FC:
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
L_089C8314:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C835C;
      }
      goto L_089C8334;
    }
L_089C8334:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C836C;
      }
      goto L_089C8354;
    }
L_089C8354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C83DC;
      }
      goto L_089C835C;
    }
L_089C835C:
    ctx.gpr[31] = (0x089C8364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 692u, 0x08AD3B78u>(ctx, &aot_mem) && ctx.pc == 0x089C8364u) goto L_089C8364;
    return;
L_089C8364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8414;
      }
      goto L_089C836C;
    }
L_089C836C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_089C8374;
L_089C8374:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C83D4;
      }
      goto L_089C837C;
    }
L_089C837C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C83D4;
      }
      goto L_089C8384;
    }
L_089C8384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6868), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C83A0;
      }
      goto L_089C839C;
    }
L_089C839C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6868), 0u);
    goto L_089C83A0;
L_089C83A0:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6868)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089C83C8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089C9144;
L_089C83C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8374;
      }
      goto L_089C83D4;
    }
L_089C83D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089C8414;
      }
      goto L_089C83DC;
    }
L_089C83DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6868), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C83F8;
      }
      goto L_089C83F4;
    }
L_089C83F4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6868), 0u);
    goto L_089C83F8;
L_089C83F8:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6868)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8414;
L_089C8414:
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
L_089C842C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C8444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C8444u) goto L_089C8444;
    return;
L_089C8444:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11780)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11784)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C8460u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8460u) goto L_089C8460;
    return;
L_089C8460:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C849C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089C84B0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 520u, 0x08A87660u>(ctx, &aot_mem) && ctx.pc == 0x089C84B0u) goto L_089C84B0;
    return;
L_089C84B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C84BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x089C84F4u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089C84F4u) goto L_089C84F4;
    return;
L_089C84F4:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16042u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32506u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C8534;
      }
      goto L_089C851C;
    }
L_089C851C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C852Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 134u, 0x089CCB54u>(ctx, &aot_mem) && ctx.pc == 0x089C852Cu) goto L_089C852C;
    return;
L_089C852C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8544;
      }
      goto L_089C8534;
    }
L_089C8534:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C8544u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 38u, 0x089CC370u>(ctx, &aot_mem) && ctx.pc == 0x089C8544u) goto L_089C8544;
    return;
L_089C8544:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8564:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[4] << 6u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11788)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11792)));
    ctx.gpr[30] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    goto L_089C85BC;
L_089C85BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 8 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C8664;
      }
      goto L_089C85C4;
    }
L_089C85C4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8664;
      }
      goto L_089C85CC;
    }
L_089C85CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[31] = (0x089C85D8u);
    ctx.gpr[23] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C85D8u) goto L_089C85D8;
    return;
L_089C85D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089C85ECu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C85ECu) goto L_089C85EC;
    return;
L_089C85EC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C8658;
      }
      goto L_089C8618;
    }
L_089C8618:
    ctx.gpr[31] = (0x089C8620u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089C87A8;
L_089C8620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8658;
      }
      goto L_089C8628;
    }
L_089C8628:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8648;
      }
      goto L_089C8638;
    }
L_089C8638:
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C8648;
L_089C8648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_089C8658;
      }
      goto L_089C8654;
    }
L_089C8654:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    goto L_089C8658;
L_089C8658:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089C85BC;
      }
      goto L_089C8664;
    }
L_089C8664:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C8680;
      }
      goto L_089C866C;
    }
L_089C866C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[23] = (0u | 39u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8688;
      }
      goto L_089C8680;
    }
L_089C8680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8778;
      }
      goto L_089C8688;
    }
L_089C8688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11840)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089C86A0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089C8898;
L_089C86A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8768;
      }
      goto L_089C86A8;
    }
L_089C86A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089C86C8;
      }
      goto L_089C86B8;
    }
L_089C86B8:
    ctx.gpr[6] = (ctx.gpr[20] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_089C86C8;
L_089C86C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[21];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089C8768;
      }
      goto L_089C86D4;
    }
L_089C86D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089C86F4;
      }
      goto L_089C86E4;
    }
L_089C86E4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C86F4;
L_089C86F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089C870C;
      }
      goto L_089C86FC;
    }
L_089C86FC:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C870C;
L_089C870C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8768;
      }
      goto L_089C8718;
    }
L_089C8718:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8768;
      }
      goto L_089C8720;
    }
L_089C8720:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089C8738;
      }
      goto L_089C872C;
    }
L_089C872C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089C8748;
      }
      goto L_089C8738;
    }
L_089C8738:
    if (ctx.gpr[6] == ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
        goto L_089C8754;
    }
    goto L_089C8740;
L_089C8740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8768;
      }
      goto L_089C8748;
    }
L_089C8748:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8778;
      }
      goto L_089C8754;
    }
L_089C8754:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089C8768;
      }
      goto L_089C875C;
    }
L_089C875C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8778;
      }
      goto L_089C8768;
    }
L_089C8768:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089C8688;
      }
      goto L_089C8778;
    }
L_089C8778:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C87A8:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C87B4;
    }
L_089C87B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C87BC;
    }
L_089C87BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C87C4;
    }
L_089C87C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C87CC;
    }
L_089C87CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 31u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C87D4;
    }
L_089C87D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C87DC;
    }
L_089C87DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 35u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C87E4;
    }
L_089C87E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 36u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C87EC;
    }
L_089C87EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 39u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C87F4;
    }
L_089C87F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 40u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C87FC;
    }
L_089C87FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 43u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C8804;
    }
L_089C8804:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C880C;
    }
L_089C880C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 45u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C8814;
    }
L_089C8814:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 47u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C881C;
    }
L_089C881C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 48u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C8824;
    }
L_089C8824:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 49u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C882C;
    }
L_089C882C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 50u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C8834;
    }
L_089C8834:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 51u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C883C;
    }
L_089C883C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C8844;
    }
L_089C8844:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 57u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C884C;
    }
L_089C884C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C8854;
    }
L_089C8854:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 60u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C885C;
    }
L_089C885C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 62u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C8864;
    }
L_089C8864:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 64u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C886C;
    }
L_089C886C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 65u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C8874;
    }
L_089C8874:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 70u);
      if (branch_taken) {
          goto L_089C8884;
      }
      goto L_089C887C;
    }
L_089C887C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C888C;
      }
      goto L_089C8884;
    }
L_089C8884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C8890;
      }
      goto L_089C888C;
    }
L_089C888C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C8890;
L_089C8890:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8898:
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 25u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88A4;
    }
L_089C88A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 26u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88AC;
    }
L_089C88AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88B4;
    }
L_089C88B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 28u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88BC;
    }
L_089C88BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 29u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88C4;
    }
L_089C88C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 30u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88CC;
    }
L_089C88CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 33u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88D4;
    }
L_089C88D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 34u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88DC;
    }
L_089C88DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 37u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88E4;
    }
L_089C88E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 38u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88EC;
    }
L_089C88EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 41u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88F4;
    }
L_089C88F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 42u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C88FC;
    }
L_089C88FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C8904;
    }
L_089C8904:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 52u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C890C;
    }
L_089C890C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 53u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C8914;
    }
L_089C8914:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 54u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C891C;
    }
L_089C891C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 56u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C8924;
    }
L_089C8924:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C892C;
    }
L_089C892C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 61u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C8934;
    }
L_089C8934:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C893C;
    }
L_089C893C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 66u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C8944;
    }
L_089C8944:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 67u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C894C;
    }
L_089C894C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 68u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C8954;
    }
L_089C8954:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 69u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C895C;
    }
L_089C895C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 71u);
      if (branch_taken) {
          goto L_089C896C;
      }
      goto L_089C8964;
    }
L_089C8964:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C8974;
      }
      goto L_089C896C;
    }
L_089C896C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C8978;
      }
      goto L_089C8974;
    }
L_089C8974:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C8978;
L_089C8978:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8980:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C8994;
      }
      goto L_089C898C;
    }
L_089C898C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C8998;
      }
      goto L_089C8994;
    }
L_089C8994:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C8998;
L_089C8998:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C89A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089C8A18u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x089C8A18u) goto L_089C8A18;
    return;
L_089C8A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8A3C;
      }
      goto L_089C8A24;
    }
L_089C8A24:
    ctx.gpr[31] = (0x089C8A2Cu);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(78)));
    goto L_089C8A58;
L_089C8A2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8A44;
      }
      goto L_089C8A34;
    }
L_089C8A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8A48;
      }
      goto L_089C8A3C;
    }
L_089C8A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8A48;
      }
      goto L_089C8A44;
    }
L_089C8A44:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_089C8A48;
L_089C8A48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8A58:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C8A7C;
      }
      goto L_089C8A68;
    }
L_089C8A68:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C8A84;
      }
      goto L_089C8A74;
    }
L_089C8A74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C8A88;
      }
      goto L_089C8A7C;
    }
L_089C8A7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C8A88;
      }
      goto L_089C8A84;
    }
L_089C8A84:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C8A88;
L_089C8A88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_089C8AC8;
L_089C8AC8:
    ctx.gpr[31] = (0x089C8AD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C8AD0u) goto L_089C8AD0;
    return;
L_089C8AD0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8B34;
      }
      goto L_089C8ADC;
    }
L_089C8ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089C8B2C;
      }
      goto L_089C8AEC;
    }
L_089C8AEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C8AF8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem) && ctx.pc == 0x089C8AF8u) goto L_089C8AF8;
    return;
L_089C8AF8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8B2C;
      }
      goto L_089C8B04;
    }
L_089C8B04:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089C8B1Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 38u, 0x08824354u>(ctx, &aot_mem) && ctx.pc == 0x089C8B1Cu) goto L_089C8B1C;
    return;
L_089C8B1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8B2C;
      }
      goto L_089C8B24;
    }
L_089C8B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8B38;
      }
      goto L_089C8B2C;
    }
L_089C8B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089C8AC8;
      }
      goto L_089C8B34;
    }
L_089C8B34:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C8B38;
L_089C8B38:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8B58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8BA4;
      }
      goto L_089C8B8C;
    }
L_089C8B8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4210)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C8BA4;
      }
      goto L_089C8B9C;
    }
L_089C8B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8D40;
      }
      goto L_089C8BA4;
    }
L_089C8BA4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9624)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089C8C40;
      }
      goto L_089C8BB4;
    }
L_089C8BB4:
    ctx.gpr[20] = (0u | 65535u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    goto L_089C8BBC;
L_089C8BBC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_089C8BF0;
    }
    goto L_089C8BCC;
L_089C8BCC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C8BDCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089C8BDCu) goto L_089C8BDC;
    return;
L_089C8BDC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_089C8BF0;
L_089C8BF0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089C8C30;
      }
      goto L_089C8BF8;
    }
L_089C8BF8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(182)));
        goto L_089C8C24;
    }
    goto L_089C8C00;
L_089C8C00:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C8C10u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x089C8C10u) goto L_089C8C10;
    return;
L_089C8C10:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(182)));
    goto L_089C8C24;
L_089C8C24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8C30;
      }
      goto L_089C8C2C;
    }
L_089C8C2C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089C8C30;
L_089C8C30:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9628)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C8BBC;
      }
      goto L_089C8C40;
    }
L_089C8C40:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089C8CE0;
      }
      goto L_089C8C58;
    }
L_089C8C58:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[21] = (ctx.lo);
    goto L_089C8C64;
L_089C8C64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C8C7C;
      }
      goto L_089C8C6C;
    }
L_089C8C6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_089C8C84;
    }
    goto L_089C8C7C;
L_089C8C7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8CA4;
      }
      goto L_089C8C84;
    }
L_089C8C84:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_089C8CA0;
    }
    goto L_089C8C98;
L_089C8C98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8CA4;
      }
      goto L_089C8CA0;
    }
L_089C8CA0:
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[21]);
    goto L_089C8CA4;
L_089C8CA4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8CCC;
      }
      goto L_089C8CAC;
    }
L_089C8CAC:
    ctx.gpr[31] = (0x089C8CB4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8CB4u) goto L_089C8CB4;
    return;
L_089C8CB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8CCC;
      }
      goto L_089C8CBC;
    }
L_089C8CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8CCC;
      }
      goto L_089C8CC8;
    }
L_089C8CC8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089C8CCC;
L_089C8CCC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_089C8C64;
      }
      goto L_089C8CE0;
    }
L_089C8CE0:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8D34;
      }
      goto L_089C8CF0;
    }
L_089C8CF0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8D2C;
      }
      goto L_089C8CFC;
    }
L_089C8CFC:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x089C8D08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem) && ctx.pc == 0x089C8D08u) goto L_089C8D08;
    return;
L_089C8D08:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[5] = (0u | 15u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8D3C;
      }
      goto L_089C8D24;
    }
L_089C8D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8D40;
      }
      goto L_089C8D2C;
    }
L_089C8D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8D40;
      }
      goto L_089C8D34;
    }
L_089C8D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089C8D40;
      }
      goto L_089C8D3C;
    }
L_089C8D3C:
    ctx.gpr[2] = (0u | 1u);
    goto L_089C8D40;
L_089C8D40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8D68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(23) ? 1u : 0u);
      if (branch_taken) {
          goto L_089C8EF8;
      }
      goto L_089C8D7C;
    }
L_089C8D7C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8EE4;
      }
      goto L_089C8D84;
    }
L_089C8D84:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-3824)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9548)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9548), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8DB0;
    }
L_089C8DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9552), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8DC4;
    }
L_089C8DC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9556)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9556), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8DD8;
    }
L_089C8DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9560)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9560), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8DEC;
    }
L_089C8DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9564)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9564), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8E00;
    }
L_089C8E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9568)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9568), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8E14;
    }
L_089C8E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9572)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9572), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8E28;
    }
L_089C8E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9576)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9576), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8E3C;
    }
L_089C8E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9580)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9580), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8E50;
    }
L_089C8E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9584)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9584), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8E64;
    }
L_089C8E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9588)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9588), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8E78;
    }
L_089C8E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9592)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9592), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8E8C;
    }
L_089C8E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9596)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9596), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8EA0;
    }
L_089C8EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9548)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9548), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8EB4;
    }
L_089C8EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9552), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8EC8;
    }
L_089C8EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9600), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8EDC;
    }
L_089C8EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8EE4;
    }
L_089C8EE4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089C8EF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3928));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 740u, 0x089C7220u>(ctx, &aot_mem) && ctx.pc == 0x089C8EF0u) goto L_089C8EF0;
    return;
L_089C8EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8EF8;
    }
L_089C8EF8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9060;
      }
      goto L_089C8F00;
    }
L_089C8F00:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-3728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9548)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9548), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8F2C;
    }
L_089C8F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9552), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8F40;
    }
L_089C8F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9556)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9556), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8F54;
    }
L_089C8F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9560)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9560), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8F68;
    }
L_089C8F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9564)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9564), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8F7C;
    }
L_089C8F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9568)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9568), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8F90;
    }
L_089C8F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9572)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9572), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8FA4;
    }
L_089C8FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9576)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9576), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8FB8;
    }
L_089C8FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9580)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9580), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8FCC;
    }
L_089C8FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9584)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9584), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8FE0;
    }
L_089C8FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9588)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9588), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C8FF4;
    }
L_089C8FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9592)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9592), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C9008;
    }
L_089C9008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9596)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9596), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C901C;
    }
L_089C901C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9548)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9548), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C9030;
    }
L_089C9030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9552)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9552), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C9044;
    }
L_089C9044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9600), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C9058;
    }
L_089C9058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C906C;
      }
      goto L_089C9060;
    }
L_089C9060:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089C906Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3928));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 740u, 0x089C7220u>(ctx, &aot_mem) && ctx.pc == 0x089C906Cu) goto L_089C906C;
    return;
L_089C906C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089C9090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089C9090u) goto L_089C9090;
    return;
L_089C9090:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9128;
      }
      goto L_089C9098;
    }
L_089C9098:
    ctx.gpr[31] = (0x089C90A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089C90A0u) goto L_089C90A0;
    return;
L_089C90A0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x089C90ACu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089C90ACu) goto L_089C90AC;
    return;
L_089C90AC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(320));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089C90BCu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089C90BCu) goto L_089C90BC;
    return;
L_089C90BC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x089C90C8u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089C90C8u) goto L_089C90C8;
    return;
L_089C90C8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(320));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089C9108;
    }
    goto L_089C9108;
L_089C9108:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_089C9120;
    }
    goto L_089C9120;
L_089C9120:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089C9130;
      }
      goto L_089C9128;
    }
L_089C9128:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089C9130;
L_089C9130:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9144:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C914C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9154:
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 50u);
      if (branch_taken) {
          goto L_089C9170;
      }
      goto L_089C9160;
    }
L_089C9160:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 76u);
      if (branch_taken) {
          goto L_089C9170;
      }
      goto L_089C9168;
    }
L_089C9168:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9178;
      }
      goto L_089C9170;
    }
L_089C9170:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089C917C;
      }
      goto L_089C9178;
    }
L_089C9178:
    ctx.gpr[2] = (0u | 0u);
    goto L_089C917C;
L_089C917C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9184:
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[7] = (ctx.gpr[7] & 2u);
    ctx.gpr[7] = (ctx.gpr[7] >> 1u);
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    ctx.gpr[7] = (ctx.gpr[7] << 1u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2480));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2404), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2408), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2412), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2416), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2420), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2424), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2428), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2432), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2436), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2440), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2444), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2448), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2452), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2456), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2460), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2464), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_089C92B4;
      }
      goto L_089C92A4;
    }
L_089C92A4:
    ctx.gpr[31] = (0x089C92ACu);
    // nop
    goto L_089C8B58;
L_089C92AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C935C;
      }
      goto L_089C92B4;
    }
L_089C92B4:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x089C92C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 685u, 0x08ABF2D8u>(ctx, &aot_mem) && ctx.pc == 0x089C92C0u) goto L_089C92C0;
    return;
L_089C92C0:
    ctx.gpr[4] = (3u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8192));
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9354;
      }
      goto L_089C92D4;
    }
L_089C92D4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089C931Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 48u, 0x08960450u>(ctx, &aot_mem) && ctx.pc == 0x089C931Cu) goto L_089C931C;
    return;
L_089C931C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x089C9334u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem) && ctx.pc == 0x089C9334u) goto L_089C9334;
    return;
L_089C9334:
    ctx.gpr[31] = (0x089C933Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C933Cu) goto L_089C933C;
    return;
L_089C933C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2320)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9364;
      }
      goto L_089C934C;
    }
L_089C934C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C94C0;
      }
      goto L_089C9354;
    }
L_089C9354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C935C;
    }
L_089C935C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C9364;
    }
L_089C9364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C939C;
      }
      goto L_089C9370;
    }
L_089C9370:
    ctx.gpr[31] = (0x089C9378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C9378u) goto L_089C9378;
    return;
L_089C9378:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C939C;
      }
      goto L_089C9388;
    }
L_089C9388:
    ctx.gpr[31] = (0x089C9390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089C9390u) goto L_089C9390;
    return;
L_089C9390:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C939C;
      }
      goto L_089C9398;
    }
L_089C9398:
    ctx.gpr[17] = (0u | 1u);
    goto L_089C939C;
L_089C939C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C93B4;
      }
      goto L_089C93A8;
    }
L_089C93A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2313)));
      if (branch_taken) {
          goto L_089C93E0;
      }
      goto L_089C93B4;
    }
L_089C93B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2313)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089C93E0;
L_089C93E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9556)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C93F8;
      }
      goto L_089C93F0;
    }
L_089C93F0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C94C0;
      }
      goto L_089C93F8;
    }
L_089C93F8:
    ctx.gpr[31] = (0x089C9400u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089C9400u) goto L_089C9400;
    return;
L_089C9400:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C948C;
      }
      goto L_089C9408;
    }
L_089C9408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2314)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5440)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9494;
      }
      goto L_089C9420;
    }
L_089C9420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(300)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5432)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C9494;
      }
      goto L_089C9450;
    }
L_089C9450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5440)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5444)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5448)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5468)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9494;
      }
      goto L_089C948C;
    }
L_089C948C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C94C0;
      }
      goto L_089C9494;
    }
L_089C9494:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[31] = (0x089C94A0u);
    // nop
    goto L_089C9078;
L_089C94A0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[31] = (0x089C94B4u);
    // nop
    goto L_089C9078;
L_089C94B4:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_089C94C0;
L_089C94C0:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[31] = (0x089C94F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem) && ctx.pc == 0x089C94F0u) goto L_089C94F0;
    return;
L_089C94F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C955C;
      }
      goto L_089C94F8;
    }
L_089C94F8:
    ctx.gpr[31] = (0x089C9500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C9500u) goto L_089C9500;
    return;
L_089C9500:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C955C;
      }
      goto L_089C950C;
    }
L_089C950C:
    ctx.gpr[31] = (0x089C9514u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089C9514u) goto L_089C9514;
    return;
L_089C9514:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C955C;
      }
      goto L_089C951C;
    }
L_089C951C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C955C;
      }
      goto L_089C9528;
    }
L_089C9528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (0u | 226u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 183u);
      if (branch_taken) {
          goto L_089C9554;
      }
      goto L_089C953C;
    }
L_089C953C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-959));
      if (branch_taken) {
          goto L_089C9554;
      }
      goto L_089C9544;
    }
L_089C9544:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-937));
      if (branch_taken) {
          goto L_089C9554;
      }
      goto L_089C954C;
    }
L_089C954C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C955C;
      }
      goto L_089C9554;
    }
L_089C9554:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089C955C;
L_089C955C:
    ctx.gpr[31] = (0x089C9564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem) && ctx.pc == 0x089C9564u) goto L_089C9564;
    return;
L_089C9564:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9574;
      }
      goto L_089C956C;
    }
L_089C956C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089C9574;
L_089C9574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9588;
      }
      goto L_089C9580;
    }
L_089C9580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11824)));
      if (branch_taken) {
          goto L_089C958C;
      }
      goto L_089C9588;
    }
L_089C9588:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11820)));
    goto L_089C958C;
L_089C958C:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4256)));
    ctx.gpr[31] = (0x089C9598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem) && ctx.pc == 0x089C9598u) goto L_089C9598;
    return;
L_089C9598:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C95A8;
      }
      goto L_089C95A0;
    }
L_089C95A0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089C95A8;
L_089C95A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11836)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[28]));
        goto L_089C95F8;
    }
    goto L_089C95EC;
L_089C95EC:
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[28]));
    goto L_089C95F8;
L_089C95F8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9612)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9614;
      }
      goto L_089C960C;
    }
L_089C960C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6C8;
      }
      goto L_089C9614;
    }
L_089C9614:
    ctx.gpr[31] = (0x089C961Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C961Cu) goto L_089C961C;
    return;
L_089C961C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11756)));
    ctx.gpr[31] = (0x089C9630u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11760)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9630u) goto L_089C9630;
    return;
L_089C9630:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] & 65535u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
        goto L_089C9664;
    }
    goto L_089C9658;
L_089C9658:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9680;
      }
      goto L_089C9660;
    }
L_089C9660:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    goto L_089C9664;
L_089C9664:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9680;
      }
      goto L_089C966C;
    }
L_089C966C:
    ctx.gpr[18] = (0u | 6u);
    ctx.gpr[31] = (0x089C9678u);
    // nop
    goto L_089C81B8;
L_089C9678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C984C;
      }
      goto L_089C9680;
    }
L_089C9680:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9724;
      }
      goto L_089C9690;
    }
L_089C9690:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9714;
      }
      goto L_089C96A8;
    }
L_089C96A8:
    ctx.gpr[31] = (0x089C96B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C96B0u) goto L_089C96B0;
    return;
L_089C96B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11780)));
    ctx.gpr[31] = (0x089C96C4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11784)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C96C4u) goto L_089C96C4;
    return;
L_089C96C4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_089C96F4;
      }
      goto L_089C96E0;
    }
L_089C96E0:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (0u | 1000u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9708;
      }
      goto L_089C96F4;
    }
L_089C96F4:
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(7));
    ctx.gpr[31] = (0x089C9700u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C8980;
L_089C9700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C970C;
      }
      goto L_089C9708;
    }
L_089C9708:
    ctx.gpr[23] = (0u | 9u);
    goto L_089C970C;
L_089C970C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9724;
      }
      goto L_089C9714;
    }
L_089C9714:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9690;
      }
      goto L_089C9724;
    }
L_089C9724:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9738;
      }
      goto L_089C9730;
    }
L_089C9730:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C984C;
      }
      goto L_089C9738;
    }
L_089C9738:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C97E8;
      }
      goto L_089C9740;
    }
L_089C9740:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x089C9750u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089C9750u) goto L_089C9750;
    return;
L_089C9750:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C97E8;
      }
      goto L_089C9778;
    }
L_089C9778:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(150)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C9788u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_089C8564;
L_089C9788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C97C4;
      }
      goto L_089C9798;
    }
L_089C9798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C97C4;
      }
      goto L_089C97A8;
    }
L_089C97A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C97CC;
      }
      goto L_089C97BC;
    }
L_089C97BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C97E0;
      }
      goto L_089C97C4;
    }
L_089C97C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C97CC;
    }
L_089C97CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C97E0;
L_089C97E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089C984C;
      }
      goto L_089C97E8;
    }
L_089C97E8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9800;
      }
      goto L_089C97F0;
    }
L_089C97F0:
    ctx.gpr[31] = (0x089C97F8u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7));
    goto L_089C849C;
L_089C97F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C980C;
      }
      goto L_089C9800;
    }
L_089C9800:
    ctx.gpr[31] = (0x089C9808u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(150)));
    goto L_089C81D8;
L_089C9808:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_089C980C;
L_089C980C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9830;
      }
      goto L_089C9818;
    }
L_089C9818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9838;
      }
      goto L_089C9828;
    }
L_089C9828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089C984C;
      }
      goto L_089C9830;
    }
L_089C9830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C9838;
    }
L_089C9838:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    goto L_089C984C;
L_089C984C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9864;
      }
      goto L_089C9854;
    }
L_089C9854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089C9864;
      }
      goto L_089C9860;
    }
L_089C9860:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832)));
    goto L_089C9864;
L_089C9864:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C98AC;
      }
      goto L_089C9870;
    }
L_089C9870:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C98AC;
      }
      goto L_089C9878;
    }
L_089C9878:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C989C;
      }
      goto L_089C9884;
    }
L_089C9884:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C98A4;
      }
      goto L_089C988C;
    }
L_089C988C:
    ctx.gpr[31] = (0x089C9894u);
    // nop
    goto L_089C842C;
L_089C9894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C98B0;
      }
      goto L_089C989C;
    }
L_089C989C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C98A4;
    }
L_089C98A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089C98B0;
      }
      goto L_089C98AC;
    }
L_089C98AC:
    ctx.gpr[20] = (0u | 1u);
    goto L_089C98B0;
L_089C98B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C9908;
      }
      goto L_089C98BC;
    }
L_089C98BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9908;
      }
      goto L_089C98C4;
    }
L_089C98C4:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9908;
      }
      goto L_089C98CC;
    }
L_089C98CC:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    ctx.gpr[31] = (0x089C98E0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089C98E0u) goto L_089C98E0;
    return;
L_089C98E0:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x089C98F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089C98F8u) goto L_089C98F8;
    return;
L_089C98F8:
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[28];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[28] + ctx.fpr[13];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    goto L_089C9908;
L_089C9908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089C993Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 379u, 0x0897AD4Cu>(ctx, &aot_mem) && ctx.pc == 0x089C993Cu) goto L_089C993C;
    return;
L_089C993C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6C8;
      }
      goto L_089C9948;
    }
L_089C9948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_089C9B5C;
      }
      goto L_089C9954;
    }
L_089C9954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x089C9960u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 433u, 0x08A8E2ACu>(ctx, &aot_mem) && ctx.pc == 0x089C9960u) goto L_089C9960;
    return;
L_089C9960:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x089C9970u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 433u, 0x08A8E2ACu>(ctx, &aot_mem) && ctx.pc == 0x089C9970u) goto L_089C9970;
    return;
L_089C9970:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C9B5C;
      }
      goto L_089C9978;
    }
L_089C9978:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9A34;
      }
      goto L_089C9980;
    }
L_089C9980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089C9990u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(198));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem) && ctx.pc == 0x089C9990u) goto L_089C9990;
    return;
L_089C9990:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9A34;
      }
      goto L_089C99A0;
    }
L_089C99A0:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9A24;
      }
      goto L_089C99B8;
    }
L_089C99B8:
    ctx.gpr[31] = (0x089C99C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C99C0u) goto L_089C99C0;
    return;
L_089C99C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11780)));
    ctx.gpr[31] = (0x089C99D4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11784)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089C99D4u) goto L_089C99D4;
    return;
L_089C99D4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_089C9A04;
      }
      goto L_089C99F0;
    }
L_089C99F0:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[5] = (0u | 1000u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9A18;
      }
      goto L_089C9A04;
    }
L_089C9A04:
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(7));
    ctx.gpr[31] = (0x089C9A10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_089C8980;
L_089C9A10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C9A1C;
      }
      goto L_089C9A18;
    }
L_089C9A18:
    ctx.gpr[23] = (0u | 9u);
    goto L_089C9A1C;
L_089C9A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9A34;
      }
      goto L_089C9A24;
    }
L_089C9A24:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C99A0;
      }
      goto L_089C9A34;
    }
L_089C9A34:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9A48;
      }
      goto L_089C9A40;
    }
L_089C9A40:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9B5C;
      }
      goto L_089C9A48;
    }
L_089C9A48:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9AF8;
      }
      goto L_089C9A50;
    }
L_089C9A50:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x089C9A60u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089C9A60u) goto L_089C9A60;
    return;
L_089C9A60:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16243u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C9AF8;
      }
      goto L_089C9A88;
    }
L_089C9A88:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(150)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089C9A98u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_089C8564;
L_089C9A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9AD4;
      }
      goto L_089C9AA8;
    }
L_089C9AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9AD4;
      }
      goto L_089C9AB8;
    }
L_089C9AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9ADC;
      }
      goto L_089C9ACC;
    }
L_089C9ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9AF0;
      }
      goto L_089C9AD4;
    }
L_089C9AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C9ADC;
    }
L_089C9ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089C9AF0;
L_089C9AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089C9B5C;
      }
      goto L_089C9AF8;
    }
L_089C9AF8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9B10;
      }
      goto L_089C9B00;
    }
L_089C9B00:
    ctx.gpr[31] = (0x089C9B08u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7));
    goto L_089C849C;
L_089C9B08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089C9B1C;
      }
      goto L_089C9B10;
    }
L_089C9B10:
    ctx.gpr[31] = (0x089C9B18u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(150)));
    goto L_089C81D8;
L_089C9B18:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_089C9B1C;
L_089C9B1C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9B40;
      }
      goto L_089C9B28;
    }
L_089C9B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089C9B48;
      }
      goto L_089C9B38;
    }
L_089C9B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_089C9B5C;
      }
      goto L_089C9B40;
    }
L_089C9B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C9B48;
    }
L_089C9B48:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    goto L_089C9B5C;
L_089C9B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[4] & 12288u);
    ctx.gpr[4] = (ctx.gpr[4] >> 12u);
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9404));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[5] & 12288u);
    ctx.gpr[5] = (ctx.gpr[5] >> 12u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_089C9BC8;
    }
    goto L_089C9BC8;
L_089C9BC8:
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089C9BE0;
      }
      goto L_089C9BDC;
    }
L_089C9BDC:
    ctx.gpr[22] = (0u | 9u);
    goto L_089C9BE0;
L_089C9BE0:
    ctx.gpr[31] = (0x089C9BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C9BE8u) goto L_089C9BE8;
    return;
L_089C9BE8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6C8;
      }
      goto L_089C9BFC;
    }
L_089C9BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089C9C30u);
    ctx.gpr[23] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089C9C30u) goto L_089C9C30;
    return;
L_089C9C30:
    ctx.gpr[6] = (ctx.gpr[2] & 65535u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089C9C48u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 91u, 0x08978B78u>(ctx, &aot_mem) && ctx.pc == 0x089C9C48u) goto L_089C9C48;
    return;
L_089C9C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_089C9CB8;
      }
      goto L_089C9C58;
    }
L_089C9C58:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_089C9C70;
      }
      goto L_089C9C60;
    }
L_089C9C60:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_089C9C70;
      }
      goto L_089C9C68;
    }
L_089C9C68:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9CB8;
      }
      goto L_089C9C70;
    }
L_089C9C70:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x089C9C80u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089C9C80u) goto L_089C9C80;
    return;
L_089C9C80:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C9CB8;
      }
      goto L_089C9CA4;
    }
L_089C9CA4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089C9CB0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(150)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 209u, 0x089CD130u>(ctx, &aot_mem) && ctx.pc == 0x089C9CB0u) goto L_089C9CB0;
    return;
L_089C9CB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6C8;
      }
      goto L_089C9CB8;
    }
L_089C9CB8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_089C9E60;
      }
      goto L_089C9CC4;
    }
L_089C9CC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E60;
      }
      goto L_089C9CCC;
    }
L_089C9CCC:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E60;
      }
      goto L_089C9CD4;
    }
L_089C9CD4:
    ctx.gpr[31] = (0x089C9CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C9CDCu) goto L_089C9CDC;
    return;
L_089C9CDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
      if (branch_taken) {
          goto L_089C9E48;
      }
      goto L_089C9CE4;
    }
L_089C9CE4:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30712));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-170)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E48;
      }
      goto L_089C9D04;
    }
L_089C9D04:
    ctx.gpr[31] = (0x089C9D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem) && ctx.pc == 0x089C9D0Cu) goto L_089C9D0C;
    return;
L_089C9D0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E48;
      }
      goto L_089C9D14;
    }
L_089C9D14:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30712));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-172)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[31] = (0x089C9D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089C9D4Cu) goto L_089C9D4C;
    return;
L_089C9D4C:
    ctx.gpr[31] = (0x089C9D54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 82u, 0x0894855Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9D54u) goto L_089C9D54;
    return;
L_089C9D54:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089C9D64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 394u, 0x089F2404u>(ctx, &aot_mem) && ctx.pc == 0x089C9D64u) goto L_089C9D64;
    return;
L_089C9D64:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[7] = (2205u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28284));
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[31] = (0x089C9D80u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 115u, 0x08B6095Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9D80u) goto L_089C9D80;
    return;
L_089C9D80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1920)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2192), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E48;
      }
      goto L_089C9D98;
    }
L_089C9D98:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(288)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E04;
      }
      goto L_089C9DB4;
    }
L_089C9DB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E04;
      }
      goto L_089C9DC4;
    }
L_089C9DC4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2208));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C9E04;
      }
      goto L_089C9E00;
    }
L_089C9E00:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089C9E04;
L_089C9E04:
    ctx.gpr[5] = (ctx.gpr[18] << 5u);
    ctx.gpr[6] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (2246u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(30712));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-170)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E34;
      }
      goto L_089C9E2C;
    }
L_089C9E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C9E34;
    }
L_089C9E34:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9D98;
      }
      goto L_089C9E48;
    }
L_089C9E48:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089C9E58u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_089C84BC;
L_089C9E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6C8;
      }
      goto L_089C9E60;
    }
L_089C9E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C9EA0;
      }
      goto L_089C9E74;
    }
L_089C9E74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(2224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x089C9E98u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 293u, 0x089CD854u>(ctx, &aot_mem) && ctx.pc == 0x089C9E98u) goto L_089C9E98;
    return;
L_089C9E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6C8;
      }
      goto L_089C9EA0;
    }
L_089C9EA0:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6C8;
      }
      goto L_089C9EB0;
    }
L_089C9EB0:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9FF8;
      }
      goto L_089C9EBC;
    }
L_089C9EBC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9F08;
      }
      goto L_089C9EC4;
    }
L_089C9EC4:
    ctx.gpr[31] = (0x089C9ECCu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x089C9ECCu) goto L_089C9ECC;
    return;
L_089C9ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9F00;
      }
      goto L_089C9ED4;
    }
L_089C9ED4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA040;
      }
      goto L_089C9EF8;
    }
L_089C9EF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA0EC;
      }
      goto L_089C9F00;
    }
L_089C9F00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C9F08;
    }
L_089C9F08:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9F2C;
      }
      goto L_089C9F14;
    }
L_089C9F14:
    ctx.gpr[31] = (0x089C9F1Cu);
    ctx.gpr[4] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x089C9F1Cu) goto L_089C9F1C;
    return;
L_089C9F1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9ED4;
      }
      goto L_089C9F24;
    }
L_089C9F24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C9F2C;
    }
L_089C9F2C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9F68;
      }
      goto L_089C9F38;
    }
L_089C9F38:
    ctx.gpr[31] = (0x089C9F40u);
    ctx.gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x089C9F40u) goto L_089C9F40;
    return;
L_089C9F40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9F60;
      }
      goto L_089C9F48;
    }
L_089C9F48:
    ctx.gpr[31] = (0x089C9F50u);
    ctx.gpr[4] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089C9F50u) goto L_089C9F50;
    return;
L_089C9F50:
    ctx.gpr[31] = (0x089C9F58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x089C9F58u) goto L_089C9F58;
    return;
L_089C9F58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9ED4;
      }
      goto L_089C9F60;
    }
L_089C9F60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C9F68;
    }
L_089C9F68:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9FA4;
      }
      goto L_089C9F74;
    }
L_089C9F74:
    ctx.gpr[31] = (0x089C9F7Cu);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x089C9F7Cu) goto L_089C9F7C;
    return;
L_089C9F7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9F9C;
      }
      goto L_089C9F84;
    }
L_089C9F84:
    ctx.gpr[31] = (0x089C9F8Cu);
    ctx.gpr[4] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089C9F8Cu) goto L_089C9F8C;
    return;
L_089C9F8C:
    ctx.gpr[31] = (0x089C9F94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x089C9F94u) goto L_089C9F94;
    return;
L_089C9F94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9ED4;
      }
      goto L_089C9F9C;
    }
L_089C9F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C9FA4;
    }
L_089C9FA4:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9ED4;
      }
      goto L_089C9FB0;
    }
L_089C9FB0:
    ctx.gpr[31] = (0x089C9FB8u);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x089C9FB8u) goto L_089C9FB8;
    return;
L_089C9FB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9FF0;
      }
      goto L_089C9FC0;
    }
L_089C9FC0:
    ctx.gpr[31] = (0x089C9FC8u);
    ctx.gpr[4] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089C9FC8u) goto L_089C9FC8;
    return;
L_089C9FC8:
    ctx.gpr[31] = (0x089C9FD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x089C9FD0u) goto L_089C9FD0;
    return;
L_089C9FD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9FF0;
      }
      goto L_089C9FD8;
    }
L_089C9FD8:
    ctx.gpr[31] = (0x089C9FE0u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089C9FE0u) goto L_089C9FE0;
    return;
L_089C9FE0:
    ctx.gpr[31] = (0x089C9FE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x089C9FE8u) goto L_089C9FE8;
    return;
L_089C9FE8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9ED4;
      }
      goto L_089C9FF0;
    }
L_089C9FF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089C9FF8;
    }
L_089C9FF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA018;
      }
      goto L_089CA008;
    }
L_089CA008:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CA018;
L_089CA018:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CA030u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA030u) goto L_089CA030;
    return;
L_089CA030:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9ED4;
      }
      goto L_089CA038;
    }
L_089CA038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089CA040;
    }
L_089CA040:
    ctx.gpr[31] = (0x089CA048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089CA048u) goto L_089CA048;
    return;
L_089CA048:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA0EC;
      }
      goto L_089CA050;
    }
L_089CA050:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[31] = (0x089CA078u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089CA078u) goto L_089CA078;
    return;
L_089CA078:
    ctx.fpr[15] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[20];
    ctx.gpr[31] = (0x089CA08Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089CA08Cu) goto L_089CA08C;
    return;
L_089CA08C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x089CA0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089CA0A0u) goto L_089CA0A0;
    return;
L_089CA0A0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA0B4;
      }
      goto L_089CA0B0;
    }
L_089CA0B0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    goto L_089CA0B4;
L_089CA0B4:
    ctx.gpr[31] = (0x089CA0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089CA0BCu) goto L_089CA0BC;
    return;
L_089CA0BC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA0D0;
      }
      goto L_089CA0CC;
    }
L_089CA0CC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    goto L_089CA0D0;
L_089CA0D0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089CA0EC;
L_089CA0EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA108;
      }
      goto L_089CA0F8;
    }
L_089CA0F8:
    ctx.gpr[31] = (0x089CA100u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_089C8A90;
L_089CA100:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA130;
      }
      goto L_089CA108;
    }
L_089CA108:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089CA120u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 708u, 0x08B1FAACu>(ctx, &aot_mem) && ctx.pc == 0x089CA120u) goto L_089CA120;
    return;
L_089CA120:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA138;
      }
      goto L_089CA128;
    }
L_089CA128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089CA130;
    }
L_089CA130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089CA138;
    }
L_089CA138:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA1AC;
      }
      goto L_089CA148;
    }
L_089CA148:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x089CA168u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x089CA168u) goto L_089CA168;
    return;
L_089CA168:
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA1A0;
      }
      goto L_089CA184;
    }
L_089CA184:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_089CA1A8;
    }
    goto L_089CA198;
L_089CA198:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089CA1AC;
      }
      goto L_089CA1A0;
    }
L_089CA1A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089CA1A8;
    }
L_089CA1A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089CA1AC;
L_089CA1AC:
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_089CA200;
      }
      goto L_089CA1F8;
    }
L_089CA1F8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089CA200;
L_089CA200:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA260;
      }
      goto L_089CA208;
    }
L_089CA208:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2240));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089CA240u);
    // nop
    goto L_089C9078;
L_089CA240:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CA260;
      }
      goto L_089CA25C;
    }
L_089CA25C:
    ctx.gpr[22] = (0u | 0u);
    goto L_089CA260;
L_089CA260:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA280;
      }
      goto L_089CA270;
    }
L_089CA270:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CA280;
L_089CA280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA29C;
      }
      goto L_089CA290;
    }
L_089CA290:
    ctx.gpr[31] = (0x089CA298u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    goto L_089C89A0;
L_089CA298:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_089CA29C;
L_089CA29C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6B0;
      }
      goto L_089CA2A4;
    }
L_089CA2A4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089CA2BCu);
    ctx.gpr[8] = (0u | 1u);
    goto L_089CAC6C;
L_089CA2BC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA2E0;
      }
      goto L_089CA2C8;
    }
L_089CA2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA2E0;
      }
      goto L_089CA2D8;
    }
L_089CA2D8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(2312), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089CA2E0;
L_089CA2E0:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x089CA2ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089C9144;
L_089CA2EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA43C;
      }
      goto L_089CA2F4;
    }
L_089CA2F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2320), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2272));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(2288));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(2320));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x089CA360u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem) && ctx.pc == 0x089CA360u) goto L_089CA360;
    return;
L_089CA360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA43C;
      }
      goto L_089CA36C;
    }
L_089CA36C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2318)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA38C;
      }
      goto L_089CA37C;
    }
L_089CA37C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2318)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA43C;
      }
      goto L_089CA38C;
    }
L_089CA38C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA43C;
      }
      goto L_089CA39C;
    }
L_089CA39C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 19 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA43C;
      }
      goto L_089CA3AC;
    }
L_089CA3AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CA43C;
      }
      goto L_089CA3C4;
    }
L_089CA3C4:
    ctx.gpr[23] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2324), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2328), 0u);
    ctx.gpr[30] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(2324));
    ctx.gpr[31] = (0x089CA3ECu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 708u, 0x08B1FAACu>(ctx, &aot_mem) && ctx.pc == 0x089CA3ECu) goto L_089CA3EC;
    return;
L_089CA3EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA43C;
      }
      goto L_089CA3F4;
    }
L_089CA3F4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA43C;
      }
      goto L_089CA404;
    }
L_089CA404:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2324)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_089CA42C;
      }
      goto L_089CA418;
    }
L_089CA418:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2324)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089CA42C;
      }
      goto L_089CA428;
    }
L_089CA428:
    ctx.gpr[23] = (0u | 0u);
    goto L_089CA42C;
L_089CA42C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA404;
      }
      goto L_089CA43C;
    }
L_089CA43C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA500;
      }
      goto L_089CA444;
    }
L_089CA444:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x089CA454u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089CA454u) goto L_089CA454;
    return;
L_089CA454:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089CA480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089CA480u) goto L_089CA480;
    return;
L_089CA480:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11780)));
    ctx.gpr[31] = (0x089CA494u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11784)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA494u) goto L_089CA494;
    return;
L_089CA494:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA4B8;
      }
      goto L_089CA4B0;
    }
L_089CA4B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089CA4B8;
      }
      goto L_089CA4B8;
    }
L_089CA4B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA4E0;
      }
      goto L_089CA4C0;
    }
L_089CA4C0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089CA4D8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x089CA4D8u) goto L_089CA4D8;
    return;
L_089CA4D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA4F8;
      }
      goto L_089CA4E0;
    }
L_089CA4E0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089CA4F8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x089CA4F8u) goto L_089CA4F8;
    return;
L_089CA4F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA644;
      }
      goto L_089CA500;
    }
L_089CA500:
    ctx.gpr[31] = (0x089CA508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089CA508u) goto L_089CA508;
    return;
L_089CA508:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11748)));
    ctx.gpr[31] = (0x089CA51Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11752)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA51Cu) goto L_089CA51C;
    return;
L_089CA51C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x089CA540u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x089CA540u) goto L_089CA540;
    return;
L_089CA540:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA564;
      }
      goto L_089CA554;
    }
L_089CA554:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CA564;
L_089CA564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA644;
      }
      goto L_089CA574;
    }
L_089CA574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1032)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA5B8;
      }
      goto L_089CA580;
    }
L_089CA580:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089CA58Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA58Cu) goto L_089CA58C;
    return;
L_089CA58C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA5B0;
      }
      goto L_089CA594;
    }
L_089CA594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CA5B0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA5B0u) goto L_089CA5B0;
    return;
L_089CA5B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089CA5B8;
    }
L_089CA5B8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1032)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(2336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089CA604u);
    // nop
    goto L_089C89A0;
L_089CA604:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA644;
      }
      goto L_089CA60C;
    }
L_089CA60C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089CA618u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA618u) goto L_089CA618;
    return;
L_089CA618:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA63C;
      }
      goto L_089CA620;
    }
L_089CA620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CA63Cu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA63Cu) goto L_089CA63C;
    return;
L_089CA63C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089CA644;
    }
L_089CA644:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA678;
      }
      goto L_089CA64C;
    }
L_089CA64C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089CA658u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 475u, 0x0890DF20u>(ctx, &aot_mem) && ctx.pc == 0x089CA658u) goto L_089CA658;
    return;
L_089CA658:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089CA664u);
    ctx.gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089CA664u) goto L_089CA664;
    return;
L_089CA664:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CA670u);
    ctx.gpr[5] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x089CA670u) goto L_089CA670;
    return;
L_089CA670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA67C;
      }
      goto L_089CA678;
    }
L_089CA678:
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    goto L_089CA67C;
L_089CA67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089CA688u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem) && ctx.pc == 0x089CA688u) goto L_089CA688;
    return;
L_089CA688:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CA6A0;
      }
      goto L_089CA698;
    }
L_089CA698:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6A8;
      }
      goto L_089CA6A0;
    }
L_089CA6A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089CA6A8;
    }
L_089CA6A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6B8;
      }
      goto L_089CA6B0;
    }
L_089CA6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA6CC;
      }
      goto L_089CA6B8;
    }
L_089CA6B8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9EB0;
      }
      goto L_089CA6C8;
    }
L_089CA6C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089CA6CC;
L_089CA6CC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2404)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2408)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2412)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2416)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2420)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2424)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2428)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2432)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2436)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2440)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2444)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2448)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2452)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2456)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2460)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2464)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2480));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 14u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x089CA760u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x089CA760u) goto L_089CA760;
    return;
L_089CA760:
    ctx.gpr[21] = (0u | 0u);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089CA780u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem) && ctx.pc == 0x089CA780u) goto L_089CA780;
    return;
L_089CA780:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 195 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 218 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CA7CC;
      }
      goto L_089CA790;
    }
L_089CA790:
    ctx.gpr[5] = (0u | 194u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 193u);
      if (branch_taken) {
          goto L_089CA8A4;
      }
      goto L_089CA79C;
    }
L_089CA79C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 191u);
      if (branch_taken) {
          goto L_089CA884;
      }
      goto L_089CA7A4;
    }
L_089CA7A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 183u);
      if (branch_taken) {
          goto L_089CA864;
      }
      goto L_089CA7AC;
    }
L_089CA7AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-937));
      if (branch_taken) {
          goto L_089CA8FC;
      }
      goto L_089CA7B4;
    }
L_089CA7B4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-959));
      if (branch_taken) {
          goto L_089CA8FC;
      }
      goto L_089CA7BC;
    }
L_089CA7BC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA8FC;
      }
      goto L_089CA7C4;
    }
L_089CA7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA914;
      }
      goto L_089CA7CC;
    }
L_089CA7CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 247 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CA80C;
      }
      goto L_089CA7D4;
    }
L_089CA7D4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 205 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 207u);
      if (branch_taken) {
          goto L_089CA7F4;
      }
      goto L_089CA7E0;
    }
L_089CA7E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 204 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA914;
      }
      goto L_089CA7EC;
    }
L_089CA7EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA8B4;
      }
      goto L_089CA7F4;
    }
L_089CA7F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA914;
      }
      goto L_089CA7FC;
    }
L_089CA7FC:
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB24;
      }
      goto L_089CA80C;
    }
L_089CA80C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 261u);
      if (branch_taken) {
          goto L_089CA83C;
      }
      goto L_089CA814;
    }
L_089CA814:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 235 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-218));
        goto L_089CA84C;
    }
    goto L_089CA820;
L_089CA820:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 246 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA914;
      }
      goto L_089CA82C;
    }
L_089CA82C:
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[22] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB24;
      }
      goto L_089CA83C;
    }
L_089CA83C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA7FC;
      }
      goto L_089CA844;
    }
L_089CA844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA914;
      }
      goto L_089CA84C;
    }
L_089CA84C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-3632)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA864:
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB24;
      }
      goto L_089CA874;
    }
L_089CA874:
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[22] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB24;
      }
      goto L_089CA884;
    }
L_089CA884:
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB24;
      }
      goto L_089CA894;
    }
L_089CA894:
    ctx.gpr[17] = (0u | 16u);
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB24;
      }
      goto L_089CA8A4;
    }
L_089CA8A4:
    ctx.gpr[17] = (0u | 17u);
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB24;
      }
      goto L_089CA8B4;
    }
L_089CA8B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089CA8F4;
      }
      goto L_089CA8C4;
    }
L_089CA8C4:
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[22] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA8E4;
      }
      goto L_089CA8D4;
    }
L_089CA8D4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5472)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[20]);
    goto L_089CA8DC;
L_089CA8DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB24;
      }
      goto L_089CA8E4;
    }
L_089CA8E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5472)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CA8DC;
      }
      goto L_089CA8F4;
    }
L_089CA8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA914;
      }
      goto L_089CA8FC;
    }
L_089CA8FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA914;
      }
      goto L_089CA904;
    }
L_089CA904:
    ctx.gpr[22] = (0u | 35u);
    ctx.gpr[17] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB24;
      }
      goto L_089CA914;
    }
L_089CA914:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA97C;
      }
      goto L_089CA928;
    }
L_089CA928:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (ctx.gpr[23] << 5u);
    ctx.gpr[6] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (2246u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(30712));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA96C;
      }
      goto L_089CA950;
    }
L_089CA950:
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(7));
    ctx.gpr[31] = (0x089CA95Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089C849C;
L_089CA95C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA97C;
      }
      goto L_089CA96C;
    }
L_089CA96C:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA928;
      }
      goto L_089CA97C;
    }
L_089CA97C:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CA990;
      }
      goto L_089CA988;
    }
L_089CA988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB24;
      }
      goto L_089CA990;
    }
L_089CA990:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA9B4;
      }
      goto L_089CA9A4;
    }
L_089CA9A4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CA9B4;
L_089CA9B4:
    ctx.gpr[30] = (0u | 16u);
    ctx.gpr[31] = (0x089CA9C0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(86)));
    goto L_089C81D8;
L_089CA9C0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CAAF0;
      }
      goto L_089CA9CC;
    }
L_089CA9CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CA9EC;
      }
      goto L_089CA9DC;
    }
L_089CA9DC:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CA9EC;
L_089CA9EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CAA04u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAA04u) goto L_089CAA04;
    return;
L_089CAA04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAAD8;
      }
      goto L_089CAA0C;
    }
L_089CAA0C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 231u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CAA30;
      }
      goto L_089CAA20;
    }
L_089CAA20:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 232u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CAA64;
      }
      goto L_089CAA30;
    }
L_089CAA30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089CAA50;
      }
      goto L_089CAA40;
    }
L_089CAA40:
    ctx.gpr[5] = (ctx.gpr[22] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_089CAA50;
L_089CAA50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CAA64;
      }
      goto L_089CAA60;
    }
L_089CAA60:
    ctx.gpr[4] = (0u | 1u);
    goto L_089CAA64;
L_089CAA64:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089CAAD8;
      }
      goto L_089CAA6C;
    }
L_089CAA6C:
    ctx.gpr[31] = (0x089CAA74u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 178u, 0x08B00AD8u>(ctx, &aot_mem) && ctx.pc == 0x089CAA74u) goto L_089CAA74;
    return;
L_089CAA74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089CAAD8;
      }
      goto L_089CAA7C;
    }
L_089CAA7C:
    ctx.gpr[31] = (0x089CAA84u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 193u, 0x08B00B98u>(ctx, &aot_mem) && ctx.pc == 0x089CAA84u) goto L_089CAA84;
    return;
L_089CAA84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAAD8;
      }
      goto L_089CAA8C;
    }
L_089CAA8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CAAAC;
      }
      goto L_089CAA9C;
    }
L_089CAA9C:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CAAAC;
L_089CAAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(629))))));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAAD8;
      }
      goto L_089CAAD0;
    }
L_089CAAD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAAF0;
      }
      goto L_089CAAD8;
    }
L_089CAAD8:
    ctx.gpr[31] = (0x089CAAE0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(86)));
    goto L_089C8314;
L_089CAAE0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089CA9CC;
      }
      goto L_089CAAF0;
    }
L_089CAAF0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CAB00;
      }
      goto L_089CAAFC;
    }
L_089CAAFC:
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    goto L_089CAB00;
L_089CAB00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CAB20;
      }
      goto L_089CAB10;
    }
L_089CAB10:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CAB20;
L_089CAB20:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    goto L_089CAB24;
L_089CAB24:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB94;
      }
      goto L_089CAB2C;
    }
L_089CAB2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CAB4C;
      }
      goto L_089CAB3C;
    }
L_089CAB3C:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CAB4C;
L_089CAB4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CAB64u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAB64u) goto L_089CAB64;
    return;
L_089CAB64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB94;
      }
      goto L_089CAB6C;
    }
L_089CAB6C:
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_089CAB90;
      }
      goto L_089CAB80;
    }
L_089CAB80:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089CAB90;
L_089CAB90:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    goto L_089CAB94;
L_089CAB94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CABACu);
    ctx.gpr[8] = (0u | 1u);
    goto L_089CAC6C;
L_089CABAC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAC20;
      }
      goto L_089CABF4;
    }
L_089CABF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x089CAC14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089CAC14u) goto L_089CAC14;
    return;
L_089CAC14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089CAC20u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem) && ctx.pc == 0x089CAC20u) goto L_089CAC20;
    return;
L_089CAC20:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAC38;
      }
      goto L_089CAC28;
    }
L_089CAC28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_089CAC38;
L_089CAC38:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CAC6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_089CB298;
      }
      goto L_089CACAC;
    }
L_089CACAC:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-3560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CACC8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089CACD4u);
    ctx.gpr[4] = (0u | 2384u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x089CACD4u) goto L_089CACD4;
    return;
L_089CACD4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089CACF0;
      }
      goto L_089CACE0;
    }
L_089CACE0:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CACECu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E2490u>(ctx, &aot_mem) && ctx.pc == 0x089CACECu) goto L_089CACEC;
    return;
L_089CACEC:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_089CACF0;
L_089CACF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089CAD28u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x089CAD28u) goto L_089CAD28;
    return;
L_089CAD28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089CAD3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x089CAD3Cu) goto L_089CAD3C;
    return;
L_089CAD3C:
    ctx.gpr[31] = (0x089CAD44u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089CAD44u) goto L_089CAD44;
    return;
L_089CAD44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-11828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADFC;
      }
      goto L_089CAD50;
    }
L_089CAD50:
    ctx.gpr[31] = (0x089CAD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089CAD58u) goto L_089CAD58;
    return;
L_089CAD58:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
        goto L_089CAD74;
    }
    goto L_089CAD64;
L_089CAD64:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CAD74;
      }
      goto L_089CAD74;
    }
L_089CAD74:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CAD9C;
      }
      goto L_089CAD80;
    }
L_089CAD80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CADD0;
      }
      goto L_089CAD88;
    }
L_089CAD88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_089CADB8;
      }
      goto L_089CAD90;
    }
L_089CAD90:
    ctx.gpr[16] = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADD0;
      }
      goto L_089CAD9C;
    }
L_089CAD9C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CADC4;
      }
      goto L_089CADA4;
    }
L_089CADA4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADD0;
      }
      goto L_089CADAC;
    }
L_089CADAC:
    ctx.gpr[16] = (0u | 24u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADD0;
      }
      goto L_089CADB8;
    }
L_089CADB8:
    ctx.gpr[16] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADD0;
      }
      goto L_089CADC4;
    }
L_089CADC4:
    ctx.gpr[16] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADD0;
      }
      goto L_089CADD0;
    }
L_089CADD0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADFC;
      }
      goto L_089CADD8;
    }
L_089CADD8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CADE8u);
    ctx.gpr[6] = (0u | 25001u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 31u, 0x0890819Cu>(ctx, &aot_mem) && ctx.pc == 0x089CADE8u) goto L_089CADE8;
    return;
L_089CADE8:
    ctx.gpr[31] = (0x089CADF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089CADF0u) goto L_089CADF0;
    return;
L_089CADF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x089CADFCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem) && ctx.pc == 0x089CADFCu) goto L_089CADFC;
    return;
L_089CADFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAE2C;
      }
      goto L_089CAE08;
    }
L_089CAE08:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAE2C;
      }
      goto L_089CAE10;
    }
L_089CAE10:
    ctx.gpr[31] = (0x089CAE18u);
    ctx.gpr[4] = (0u | 228u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089CAE18u) goto L_089CAE18;
    return;
L_089CAE18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAE2C;
      }
      goto L_089CAE24;
    }
L_089CAE24:
    ctx.gpr[31] = (0x089CAE2Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 483u, 0x089D2B68u>(ctx, &aot_mem) && ctx.pc == 0x089CAE2Cu) goto L_089CAE2C;
    return;
L_089CAE2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CB2B0;
      }
      goto L_089CAE34;
    }
L_089CAE34:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x089CAE40u);
    ctx.gpr[4] = (0u | 2352u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x089CAE40u) goto L_089CAE40;
    return;
L_089CAE40:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089CAE5C;
      }
      goto L_089CAE4C;
    }
L_089CAE4C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CAE58u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0139_entry, 139u, 437u, 0x08A31EA4u>(ctx, &aot_mem) && ctx.pc == 0x089CAE58u) goto L_089CAE58;
    return;
L_089CAE58:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_089CAE5C;
L_089CAE5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089CAE98u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x089CAE98u) goto L_089CAE98;
    return;
L_089CAE98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089CAEACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x089CAEACu) goto L_089CAEAC;
    return;
L_089CAEAC:
    ctx.gpr[31] = (0x089CAEB4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089CAEB4u) goto L_089CAEB4;
    return;
L_089CAEB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAEE4;
      }
      goto L_089CAEC0;
    }
L_089CAEC0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAEE4;
      }
      goto L_089CAEC8;
    }
L_089CAEC8:
    ctx.gpr[31] = (0x089CAED0u);
    ctx.gpr[4] = (0u | 228u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089CAED0u) goto L_089CAED0;
    return;
L_089CAED0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAEE4;
      }
      goto L_089CAEDC;
    }
L_089CAEDC:
    ctx.gpr[31] = (0x089CAEE4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 483u, 0x089D2B68u>(ctx, &aot_mem) && ctx.pc == 0x089CAEE4u) goto L_089CAEE4;
    return;
L_089CAEE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089CB2B0;
      }
      goto L_089CAEEC;
    }
L_089CAEEC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089CAEF8u);
    ctx.gpr[4] = (0u | 2320u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x089CAEF8u) goto L_089CAEF8;
    return;
L_089CAEF8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CAF10;
      }
      goto L_089CAF04;
    }
L_089CAF04:
    ctx.gpr[31] = (0x089CAF0Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 300u, 0x08B219ACu>(ctx, &aot_mem) && ctx.pc == 0x089CAF0Cu) goto L_089CAF0C;
    return;
L_089CAF0C:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_089CAF10;
L_089CAF10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089CAF4Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x089CAF4Cu) goto L_089CAF4C;
    return;
L_089CAF4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x089CAF60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x089CAF60u) goto L_089CAF60;
    return;
L_089CAF60:
    ctx.gpr[31] = (0x089CAF68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089CAF68u) goto L_089CAF68;
    return;
L_089CAF68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF98;
      }
      goto L_089CAF74;
    }
L_089CAF74:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF98;
      }
      goto L_089CAF7C;
    }
L_089CAF7C:
    ctx.gpr[31] = (0x089CAF84u);
    ctx.gpr[4] = (0u | 228u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089CAF84u) goto L_089CAF84;
    return;
L_089CAF84:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF98;
      }
      goto L_089CAF90;
    }
L_089CAF90:
    ctx.gpr[31] = (0x089CAF98u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 483u, 0x089D2B68u>(ctx, &aot_mem) && ctx.pc == 0x089CAF98u) goto L_089CAF98;
    return;
L_089CAF98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089CB2B0;
      }
      goto L_089CAFA0;
    }
L_089CAFA0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089CAFACu);
    ctx.gpr[4] = (0u | 2320u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x089CAFACu) goto L_089CAFAC;
    return;
L_089CAFAC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089CAFC4;
      }
      goto L_089CAFB8;
    }
L_089CAFB8:
    ctx.gpr[31] = (0x089CAFC0u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 300u, 0x08B219ACu>(ctx, &aot_mem) && ctx.pc == 0x089CAFC0u) goto L_089CAFC0;
    return;
L_089CAFC0:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_089CAFC4;
L_089CAFC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089CB000u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x089CB000u) goto L_089CB000;
    return;
L_089CB000:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x089CB014u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x089CB014u) goto L_089CB014;
    return;
L_089CB014:
    ctx.gpr[31] = (0x089CB01Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB01Cu) goto L_089CB01C;
    return;
L_089CB01C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB04C;
      }
      goto L_089CB028;
    }
L_089CB028:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB04C;
      }
      goto L_089CB030;
    }
L_089CB030:
    ctx.gpr[31] = (0x089CB038u);
    ctx.gpr[4] = (0u | 228u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089CB038u) goto L_089CB038;
    return;
L_089CB038:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB04C;
      }
      goto L_089CB044;
    }
L_089CB044:
    ctx.gpr[31] = (0x089CB04Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 483u, 0x089D2B68u>(ctx, &aot_mem) && ctx.pc == 0x089CB04Cu) goto L_089CB04C;
    return;
L_089CB04C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CB2B0;
      }
      goto L_089CB054;
    }
L_089CB054:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089CB060u);
    ctx.gpr[4] = (0u | 2384u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x089CB060u) goto L_089CB060;
    return;
L_089CB060:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089CB07C;
      }
      goto L_089CB06C;
    }
L_089CB06C:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CB078u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E2490u>(ctx, &aot_mem) && ctx.pc == 0x089CB078u) goto L_089CB078;
    return;
L_089CB078:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_089CB07C;
L_089CB07C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089CB0B8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x089CB0B8u) goto L_089CB0B8;
    return;
L_089CB0B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x089CB0CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x089CB0CCu) goto L_089CB0CC;
    return;
L_089CB0CC:
    ctx.gpr[31] = (0x089CB0D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB0D4u) goto L_089CB0D4;
    return;
L_089CB0D4:
    ctx.gpr[31] = (0x089CB0DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089CB0DCu) goto L_089CB0DC;
    return;
L_089CB0DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11740)));
    ctx.gpr[31] = (0x089CB0F0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11744)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB0F0u) goto L_089CB0F0;
    return;
L_089CB0F0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB130;
      }
      goto L_089CB110;
    }
L_089CB110:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30712));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-180)));
      if (branch_taken) {
          goto L_089CB14C;
      }
      goto L_089CB130;
    }
L_089CB130:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2246u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30712));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-176)));
    goto L_089CB14C;
L_089CB14C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CB15Cu);
    ctx.gpr[6] = (0u | 25001u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 31u, 0x0890819Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB15Cu) goto L_089CB15C;
    return;
L_089CB15C:
    ctx.gpr[31] = (0x089CB164u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089CB164u) goto L_089CB164;
    return;
L_089CB164:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x089CB170u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem) && ctx.pc == 0x089CB170u) goto L_089CB170;
    return;
L_089CB170:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB1A0;
      }
      goto L_089CB17C;
    }
L_089CB17C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB1A0;
      }
      goto L_089CB184;
    }
L_089CB184:
    ctx.gpr[31] = (0x089CB18Cu);
    ctx.gpr[4] = (0u | 228u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089CB18Cu) goto L_089CB18C;
    return;
L_089CB18C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB1A0;
      }
      goto L_089CB198;
    }
L_089CB198:
    ctx.gpr[31] = (0x089CB1A0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 483u, 0x089D2B68u>(ctx, &aot_mem) && ctx.pc == 0x089CB1A0u) goto L_089CB1A0;
    return;
L_089CB1A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CB2B0;
      }
      goto L_089CB1A8;
    }
L_089CB1A8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x089CB1B4u);
    ctx.gpr[4] = (0u | 2384u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 475u, 0x089062ECu>(ctx, &aot_mem) && ctx.pc == 0x089CB1B4u) goto L_089CB1B4;
    return;
L_089CB1B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089CB1D0;
      }
      goto L_089CB1C0;
    }
L_089CB1C0:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089CB1CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 453u, 0x089E2490u>(ctx, &aot_mem) && ctx.pc == 0x089CB1CCu) goto L_089CB1CC;
    return;
L_089CB1CC:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    goto L_089CB1D0;
L_089CB1D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089CB20Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x089CB20Cu) goto L_089CB20C;
    return;
L_089CB20C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x089CB220u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x089CB220u) goto L_089CB220;
    return;
L_089CB220:
    ctx.gpr[31] = (0x089CB228u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB228u) goto L_089CB228;
    return;
L_089CB228:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-11828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_089CB260;
      }
      goto L_089CB234;
    }
L_089CB234:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089CB260;
      }
      goto L_089CB23C;
    }
L_089CB23C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x089CB24Cu);
    ctx.gpr[6] = (0u | 25001u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 31u, 0x0890819Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB24Cu) goto L_089CB24C;
    return;
L_089CB24C:
    ctx.gpr[31] = (0x089CB254u);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x089CB254u) goto L_089CB254;
    return;
L_089CB254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x089CB260u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem) && ctx.pc == 0x089CB260u) goto L_089CB260;
    return;
L_089CB260:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB290;
      }
      goto L_089CB26C;
    }
L_089CB26C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB290;
      }
      goto L_089CB274;
    }
L_089CB274:
    ctx.gpr[31] = (0x089CB27Cu);
    ctx.gpr[4] = (0u | 228u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089CB27Cu) goto L_089CB27C;
    return;
L_089CB27C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB290;
      }
      goto L_089CB288;
    }
L_089CB288:
    ctx.gpr[31] = (0x089CB290u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 483u, 0x089D2B68u>(ctx, &aot_mem) && ctx.pc == 0x089CB290u) goto L_089CB290;
    return;
L_089CB290:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_089CB2B0;
      }
      goto L_089CB298;
    }
L_089CB298:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3876));
    ctx.gpr[31] = (0x089CB2A8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 740u, 0x089C7220u>(ctx, &aot_mem) && ctx.pc == 0x089CB2A8u) goto L_089CB2A8;
    return;
L_089CB2A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB2B0;
      }
      goto L_089CB2B0;
    }
L_089CB2B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB2D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15952)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[16] = (ctx.gpr[4] & 31u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[31] = (0x089CB33Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 48u, 0x08960450u>(ctx, &aot_mem) && ctx.pc == 0x089CB33Cu) goto L_089CB33C;
    return;
L_089CB33C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
    ctx.gpr[6] = (ctx.gpr[6] >> 27u);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] >> 27u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CB5FC;
      }
      goto L_089CB38C;
    }
L_089CB38C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16972u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[20] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_089CB3C8;
L_089CB3C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CB3E0;
      }
      goto L_089CB3D0;
    }
L_089CB3D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
        goto L_089CB3E8;
    }
    goto L_089CB3E0;
L_089CB3E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB408;
      }
      goto L_089CB3E8;
    }
L_089CB3E8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
        goto L_089CB404;
    }
    goto L_089CB3FC;
L_089CB3FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB408;
      }
      goto L_089CB404;
    }
L_089CB404:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    goto L_089CB408;
L_089CB408:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB5E8;
      }
      goto L_089CB414;
    }
L_089CB414:
    ctx.gpr[31] = (0x089CB41Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 398u, 0x0882B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089CB41Cu) goto L_089CB41C;
    return;
L_089CB41C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB5E8;
      }
      goto L_089CB424;
    }
L_089CB424:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CB5A0;
      }
      goto L_089CB494;
    }
L_089CB494:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CB4DC;
      }
      goto L_089CB4A8;
    }
L_089CB4A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CB524;
      }
      goto L_089CB4BC;
    }
L_089CB4BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089CB4D4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB4D4u) goto L_089CB4D4;
    return;
L_089CB4D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB524;
      }
      goto L_089CB4DC;
    }
L_089CB4DC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CB598;
      }
      goto L_089CB4EC;
    }
L_089CB4EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CB4F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB4F8u) goto L_089CB4F8;
    return;
L_089CB4F8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB598;
      }
      goto L_089CB500;
    }
L_089CB500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CB51Cu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB51Cu) goto L_089CB51C;
    return;
L_089CB51C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB598;
      }
      goto L_089CB524;
    }
L_089CB524:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CB568;
      }
      goto L_089CB534;
    }
L_089CB534:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
        goto L_089CB558;
    }
    goto L_089CB544;
L_089CB544:
    ctx.gpr[31] = (0x089CB54Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem) && ctx.pc == 0x089CB54Cu) goto L_089CB54C;
    return;
L_089CB54C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB568;
      }
      goto L_089CB554;
    }
L_089CB554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    goto L_089CB558;
L_089CB558:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB598;
      }
      goto L_089CB568;
    }
L_089CB568:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CB574u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB574u) goto L_089CB574;
    return;
L_089CB574:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB598;
      }
      goto L_089CB57C;
    }
L_089CB57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089CB598u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB598u) goto L_089CB598;
    return;
L_089CB598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB5E8;
      }
      goto L_089CB5A0;
    }
L_089CB5A0:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CB5E8;
      }
      goto L_089CB5B0;
    }
L_089CB5B0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CB5E8;
      }
      goto L_089CB5C0;
    }
L_089CB5C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(476)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CB5E8;
      }
      goto L_089CB5D0;
    }
L_089CB5D0:
    ctx.gpr[31] = (0x089CB5D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089C8128;
L_089CB5D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB5E8;
      }
      goto L_089CB5E0;
    }
L_089CB5E0:
    ctx.gpr[31] = (0x089CB5E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 919u, 0x089C7FC8u>(ctx, &aot_mem) && ctx.pc == 0x089CB5E8u) goto L_089CB5E8;
    return;
L_089CB5E8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_089CB3C8;
      }
      goto L_089CB5FC;
    }
L_089CB5FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
        goto L_089CB70C;
    }
    goto L_089CB608;
L_089CB608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    ctx.gpr[6] = (ctx.gpr[6] >> 27u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 5u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    ctx.gpr[5] = (ctx.gpr[5] >> 27u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 5u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089CB708;
      }
      goto L_089CB650;
    }
L_089CB650:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_089CB668;
L_089CB668:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CB680;
      }
      goto L_089CB670;
    }
L_089CB670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
        goto L_089CB688;
    }
    goto L_089CB680;
L_089CB680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB6A8;
      }
      goto L_089CB688;
    }
L_089CB688:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_089CB6A4;
    }
    goto L_089CB69C;
L_089CB69C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB6A8;
      }
      goto L_089CB6A4;
    }
L_089CB6A4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_089CB6A8;
L_089CB6A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB6F8;
      }
      goto L_089CB6B0;
    }
L_089CB6B0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CB6F8;
      }
      goto L_089CB6F0;
    }
L_089CB6F0:
    ctx.gpr[31] = (0x089CB6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 881u, 0x089C7DB8u>(ctx, &aot_mem) && ctx.pc == 0x089CB6F8u) goto L_089CB6F8;
    return;
L_089CB6F8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_089CB668;
      }
      goto L_089CB708;
    }
L_089CB708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    goto L_089CB70C;
L_089CB70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CBF40;
      }
      goto L_089CB71C;
    }
L_089CB71C:
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (32768u << 16u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32304));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48998u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_089CB770;
L_089CB770:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_089CB788;
      }
      goto L_089CB778;
    }
L_089CB778:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_089CB790;
    }
    goto L_089CB788;
L_089CB788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB7B4;
      }
      goto L_089CB790;
    }
L_089CB790:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
        goto L_089CB7AC;
    }
    goto L_089CB7A4;
L_089CB7A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089CB7B4;
      }
      goto L_089CB7AC;
    }
L_089CB7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_089CB7B4;
L_089CB7B4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CB7BC;
    }
L_089CB7BC:
    ctx.gpr[31] = (0x089CB7C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB7C4u) goto L_089CB7C4;
    return;
L_089CB7C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CB7CC;
    }
L_089CB7CC:
    ctx.gpr[31] = (0x089CB7D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem) && ctx.pc == 0x089CB7D4u) goto L_089CB7D4;
    return;
L_089CB7D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CB7DC;
    }
L_089CB7DC:
    ctx.gpr[31] = (0x089CB7E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089CB7E4u) goto L_089CB7E4;
    return;
L_089CB7E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CB7EC;
    }
L_089CB7EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1768)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 30001 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CB834;
      }
      goto L_089CB808;
    }
L_089CB808:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB828;
      }
      goto L_089CB810;
    }
L_089CB810:
    ctx.gpr[31] = (0x089CB818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem) && ctx.pc == 0x089CB818u) goto L_089CB818;
    return;
L_089CB818:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 15001 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CB834;
      }
      goto L_089CB820;
    }
L_089CB820:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB834;
      }
      goto L_089CB828;
    }
L_089CB828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_089CB834;
L_089CB834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB864;
      }
      goto L_089CB844;
    }
L_089CB844:
    ctx.gpr[31] = (0x089CB84Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 191u, 0x0894530Cu>(ctx, &aot_mem) && ctx.pc == 0x089CB84Cu) goto L_089CB84C;
    return;
L_089CB84C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB864;
      }
      goto L_089CB854;
    }
L_089CB854:
    ctx.gpr[31] = (0x089CB85Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x089CB85Cu) goto L_089CB85C;
    return;
L_089CB85C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CB864;
    }
L_089CB864:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_089CB8C4;
      }
      goto L_089CB8A4;
    }
L_089CB8A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16384u << 16u);
      if (branch_taken) {
          goto L_089CB8C4;
      }
      goto L_089CB8B4;
    }
L_089CB8B4:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_089CB8E4;
      }
      goto L_089CB8C4;
    }
L_089CB8C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB8E4;
      }
      goto L_089CB8D4;
    }
L_089CB8D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB8E4;
      }
      goto L_089CB8E0;
    }
L_089CB8E0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089CB8E4;
L_089CB8E4:
    ctx.gpr[31] = (0x089CB8ECu);
    // nop
    goto L_089C9078;
L_089CB8EC:
    ctx.gpr[4] = (17026u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1952)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CB918;
      }
      goto L_089CB910;
    }
L_089CB910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CB918;
    }
L_089CB918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB95C;
      }
      goto L_089CB928;
    }
L_089CB928:
    ctx.gpr[31] = (0x089CB930u);
    // nop
    goto L_089C9078;
L_089CB930:
    ctx.gpr[4] = (16972u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1952)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CB95C;
      }
      goto L_089CB954;
    }
L_089CB954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CB95C;
    }
L_089CB95C:
    ctx.gpr[31] = (0x089CB964u);
    // nop
    goto L_089C9078;
L_089CB964:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CBAF0;
      }
      goto L_089CB980;
    }
L_089CB980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1260)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CB994;
    }
L_089CB994:
    ctx.gpr[31] = (0x089CB99Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem) && ctx.pc == 0x089CB99Cu) goto L_089CB99C;
    return;
L_089CB99C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CB9A4;
    }
L_089CB9A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CB9D4;
    }
L_089CB9D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CBA04;
    }
L_089CBA04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CBA34;
    }
L_089CBA34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(112))))));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CBA64;
    }
L_089CBA64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(245)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CBA90;
    }
L_089CBA90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(246)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CBABC;
    }
L_089CBABC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CBAE8;
    }
L_089CBAE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CBAF0;
    }
L_089CBAF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CBB10;
      }
      goto L_089CBB00;
    }
L_089CBB00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1260), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CBB1C;
      }
      goto L_089CBB10;
    }
L_089CBB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1260), ctx.gpr[4]);
    goto L_089CBB1C;
L_089CBB1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBB30;
      }
      goto L_089CBB2C;
    }
L_089CBB2C:
    ctx.gpr[20] = (0u | 0u);
    goto L_089CBB30;
L_089CBB30:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBC3C;
      }
      goto L_089CBB38;
    }
L_089CBB38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBC3C;
      }
      goto L_089CBB44;
    }
L_089CBB44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089CBB70;
      }
      goto L_089CBB50;
    }
L_089CBB50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089CBB74;
      }
      goto L_089CBB6C;
    }
L_089CBB6C:
    ctx.gpr[4] = (0u | 1u);
    goto L_089CBB70;
L_089CBB70:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089CBB74;
L_089CBB74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBC3C;
      }
      goto L_089CBB7C;
    }
L_089CBB7C:
    ctx.gpr[16] = (0u | 0u);
    goto L_089CBB80;
L_089CBB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_089CBB98;
    }
    goto L_089CBB8C;
L_089CBB8C:
    ctx.gpr[31] = (0x089CBB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x089CBB94u) goto L_089CBB94;
    return;
L_089CBB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_089CBB98;
L_089CBB98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBC3C;
      }
      goto L_089CBBC4;
    }
L_089CBBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_089CBBDC;
    }
    goto L_089CBBD0;
L_089CBBD0:
    ctx.gpr[31] = (0x089CBBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x089CBBD8u) goto L_089CBBD8;
    return;
L_089CBBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_089CBBDC;
L_089CBBDC:
    ctx.gpr[31] = (0x089CBBE4u);
    ctx.gpr[5] = (ctx.gpr[16] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem) && ctx.pc == 0x089CBBE4u) goto L_089CBBE4;
    return;
L_089CBBE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089CBC34;
      }
      goto L_089CBBFC;
    }
L_089CBBFC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089CBC08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem) && ctx.pc == 0x089CBC08u) goto L_089CBC08;
    return;
L_089CBC08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBC34;
      }
      goto L_089CBC14;
    }
L_089CBC14:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089CBC20u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 59u, 0x08824560u>(ctx, &aot_mem) && ctx.pc == 0x089CBC20u) goto L_089CBC20;
    return;
L_089CBC20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBC34;
      }
      goto L_089CBC28;
    }
L_089CBC28:
    ctx.gpr[20] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBC3C;
      }
      goto L_089CBC34;
    }
L_089CBC34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089CBB80;
      }
      goto L_089CBC3C;
    }
L_089CBC3C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[16] = (0u | 40000u);
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CBC44;
    }
L_089CBC44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CBEE8;
      }
      goto L_089CBC54;
    }
L_089CBC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBEE8;
      }
      goto L_089CBC64;
    }
L_089CBC64:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089CBC74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089CBC74u) goto L_089CBC74;
    return;
L_089CBC74:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (15560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 62915u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x089CBC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x089CBC9Cu) goto L_089CBC9C;
    return;
L_089CBC9C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CBD70;
      }
      goto L_089CBCB4;
    }
L_089CBCB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CBEE8;
      }
      goto L_089CBCBC;
    }
L_089CBCBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5040)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CBD68u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem) && ctx.pc == 0x089CBD68u) goto L_089CBD68;
    return;
L_089CBD68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBEE8;
      }
      goto L_089CBD70;
    }
L_089CBD70:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089CBD88;
      }
      goto L_089CBD78;
    }
L_089CBD78:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE3C;
      }
      goto L_089CBD80;
    }
L_089CBD80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBEE8;
      }
      goto L_089CBD88;
    }
L_089CBD88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5036)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CBE34u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem) && ctx.pc == 0x089CBE34u) goto L_089CBE34;
    return;
L_089CBE34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBEE8;
      }
      goto L_089CBE3C;
    }
L_089CBE3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5032)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089CBEE8u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem) && ctx.pc == 0x089CBEE8u) goto L_089CBEE8;
    return;
L_089CBEE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CBF18;
      }
      goto L_089CBEF8;
    }
L_089CBEF8:
    ctx.gpr[31] = (0x089CBF00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem) && ctx.pc == 0x089CBF00u) goto L_089CBF00;
    return;
L_089CBF00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF18;
      }
      goto L_089CBF08;
    }
L_089CBF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089CBF20;
      }
      goto L_089CBF18;
    }
L_089CBF18:
    ctx.gpr[31] = (0x089CBF20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x089CBF20u) goto L_089CBF20;
    return;
L_089CBF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3344));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089CB770;
      }
      goto L_089CBF40;
    }
L_089CBF40:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CBF88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 49u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.pc = 0x089CC000u; return;
}

void recomp_unit_0113(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0113_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_113(Runtime &runtime) {
    runtime.register_generated_unit(113u, 0x089C8000u, 16384u, &recomp_unit_0113, &recomp_unit_0113_entry);
    runtime.register_function(0x089C8000u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8004u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8010u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8018u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8020u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8034u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8044u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8054u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C805Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8064u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8068u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8078u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8084u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C808Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8094u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C809Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8108u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8110u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8128u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8190u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C819Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8218u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8220u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8234u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8268u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8270u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8278u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8280u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8288u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8290u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8298u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8314u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8334u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8354u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C835Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8364u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C836Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8374u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C837Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8384u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C839Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8414u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C842Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8444u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8460u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C849Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C851Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C852Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8534u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8544u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8564u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8618u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8620u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8628u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8638u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8648u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8654u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8658u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8664u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C866Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8680u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8688u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C870Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8718u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8720u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C872Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8738u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8740u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8748u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8754u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C875Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8768u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8778u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8804u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C880Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8814u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C881Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8824u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C882Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8834u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C883Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8844u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C884Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8854u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C885Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8864u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C886Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8874u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C887Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8884u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C888Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8890u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8898u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8904u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C890Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8914u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C891Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8924u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C892Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8934u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C893Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8944u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C894Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8954u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C895Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8964u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C896Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8974u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8978u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8980u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C898Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8994u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8998u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8ADCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8AF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BCCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CCCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8DECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FCCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9008u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C901Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9030u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9044u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9058u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9060u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C906Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9078u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9090u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9098u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9108u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9120u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9128u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9130u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9144u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C914Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9154u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9160u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9168u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9170u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9178u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C917Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9184u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9248u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C931Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9334u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C933Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C934Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9354u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C935Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9364u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9370u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9378u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9388u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9390u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9398u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C939Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9400u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9408u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9420u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9450u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C948Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9494u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C94F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9500u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C950Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9514u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C951Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9528u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C953Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9544u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C954Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9554u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C955Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9564u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C956Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9574u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9580u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9588u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C958Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9598u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C960Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9614u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C961Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9630u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9658u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9660u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9664u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C966Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9678u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9680u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9690u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C96F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9700u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9708u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C970Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9714u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9724u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9730u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9738u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9740u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9750u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9778u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9788u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9798u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9800u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9808u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C980Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9818u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9828u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9830u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9838u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C984Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9854u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9860u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9864u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9870u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9878u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9884u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C988Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9894u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C989Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9908u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C993Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9948u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9954u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9960u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9970u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9978u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9980u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9990u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9ACCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9ADCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CCCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9CE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9ECCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9ED4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA008u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA018u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA030u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA038u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA040u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA048u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA050u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA078u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA08Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA100u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA108u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA120u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA128u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA130u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA138u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA148u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA168u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA184u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA198u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA200u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA208u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA240u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA25Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA260u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA270u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA280u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA290u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA298u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA29Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA360u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA36Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA37Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA38Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA39Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA404u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA418u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA428u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA42Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA43Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA444u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA454u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA480u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA494u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA500u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA508u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA51Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA540u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA554u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA564u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA574u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA580u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA58Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA594u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA604u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA60Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA618u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA620u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA63Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA644u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA64Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA658u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA664u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA670u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA678u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA67Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA688u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA698u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA714u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA760u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA780u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA790u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA79Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA80Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA814u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA820u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA82Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA83Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA844u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA84Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA864u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA874u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA884u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA894u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA904u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA914u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA928u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA950u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA95Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA96Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA97Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA988u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA990u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAED0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB000u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB014u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB01Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB028u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB030u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB038u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB044u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB04Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB054u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB060u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB06Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB078u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB07Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB110u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB130u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB14Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB15Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB164u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB170u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB17Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB184u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB18Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB198u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB20Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB220u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB228u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB234u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB23Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB24Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB254u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB260u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB26Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB274u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB27Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB288u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB290u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB298u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB33Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB38Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB404u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB408u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB414u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB41Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB424u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB494u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB500u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB51Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB524u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB534u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB544u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB54Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB554u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB558u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB568u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB574u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB57Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB598u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB608u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB650u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB668u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB670u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB680u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB688u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB69Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB708u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB70Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB71Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB770u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB778u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB788u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB790u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB7ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB808u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB810u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB818u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB820u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB828u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB834u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB844u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB84Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB854u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB85Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB864u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB910u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB918u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB928u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB930u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB954u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB95Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB964u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB980u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB994u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB99Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBABCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF88u, &recomp_unit_0113, "recomp_unit_0113");
}
} // namespace psprecomp
