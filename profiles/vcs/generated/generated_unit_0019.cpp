#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0019[4095] = {
    1, 0, 2, 0, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 7, 0, 0, 8, 9, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 13, 0,
    14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 20, 21, 0, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 25, 0, 26,
    0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 30, 0, 31, 0, 32, 33, 0, 34, 0, 35, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 43, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0,
    47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54,
    0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0,
    0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 69, 0, 70, 0, 0, 0,
    0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0,
    0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0,
    0, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0,
    0, 93, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0,
    0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0,
    0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117,
    0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 121, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0,
    0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    133, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0,
    0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0,
    0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 158, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0,
    0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0,
    0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0,
    0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0,
    0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0,
    0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0,
    204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 208, 209, 0, 210, 0, 0, 0, 0,
    0, 211, 0, 212, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0,
    0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0,
    0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    233, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 0,
    0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0,
    0, 250, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0,
    0, 0, 257, 0, 0, 0, 0, 0, 258, 259, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0,
    0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0,
    0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0,
    0, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0,
    0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0,
    304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 309, 0, 310, 0, 0, 0, 0,
    0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0,
    0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0,
    0, 327, 0, 328, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0,
    333, 334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0,
    0, 342, 0, 343, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0,
    0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 358, 359, 0, 360, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0,
    0, 365, 0, 366, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0,
    373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 378, 0, 379, 0, 0, 0, 0,
    0, 380, 0, 381, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0,
    0, 388, 0, 389, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0,
    0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    402, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0,
    0, 411, 0, 412, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0,
    0, 419, 0, 420, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 427, 428, 0, 429, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0,
    0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0,
    0, 442, 0, 443, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0,
    0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 453, 0, 454, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0,
    0, 457, 0, 458, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0,
    0, 465, 0, 466, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0,
    473, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 478, 0, 479, 0, 0, 0, 0,
    0, 480, 0, 481, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0,
    0, 488, 0, 489, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 0,
    0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0,
    502, 503, 0, 504, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0,
    0, 511, 0, 512, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0,
    0, 519, 0, 520, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0,
    0, 0, 526, 0, 0, 0, 0, 0, 527, 528, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0,
    0, 534, 0, 535, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0,
    0, 542, 0, 543, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0,
    0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 553, 0, 554, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0,
    0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0,
    0, 565, 0, 566, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0,
    573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 578, 0, 579, 0, 0, 0, 0,
    0, 580, 0, 581, 0, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0,
    0, 588, 0, 589, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0,
    0, 596, 0, 597, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0,
    602, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0,
    0, 611, 0, 612, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0,
    0, 619, 0, 620, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0,
    0, 0, 626, 0, 0, 0, 0, 0, 627, 628, 0, 629, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0,
    0, 634, 0, 635, 0, 0, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0,
    0, 642, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0,
    0, 0, 0, 650, 0, 0, 651, 0, 652, 0, 653, 0, 0, 0, 0, 0, 654, 655, 0, 656, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 0,
    0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0,
    0, 666, 0, 0, 0, 0, 0, 667, 668, 0, 669, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0,
    674, 0, 675, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 0, 0, 0,
    682, 0, 683, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 0,
    0, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 692, 693, 0, 694, 0, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 0,
    697, 0, 698, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0,
    705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 713,
    0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 717, 0, 718, 0, 0, 0, 0, 0, 719, 720, 0, 721, 0, 0, 0, 0, 0,
    722, 0, 723, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 0, 0, 0, 726, 0, 727, 0, 0, 0, 728, 0, 0, 729, 0, 0, 0, 0, 0, 0,
    0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 732, 733, 0, 734, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 737,
    0, 738, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 745,
    0, 746, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 752,
    0, 753, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 0, 0, 760,
    0, 761, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 0, 0, 0,
    0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 771, 0, 772, 0, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 0, 775,
    0, 776, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 779, 0, 780, 0, 0, 0, 0, 0, 781, 0, 782, 0, 0, 0, 0, 0, 783,
    0, 784, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 790,
    0, 791, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 798,
    0, 799, 0, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 804, 0, 0, 805, 0, 0, 0, 0, 0, 0,
    0, 0, 806, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 808, 809, 0, 810, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 0, 813,
    0, 814, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 0, 0, 821,
    0, 822, 0, 0, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 828,
    0, 829, 0, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0, 836,
    0, 837, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 842, 0, 843, 0, 0, 0, 0, 0, 844,
    0, 845, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0,
    851, 0, 0, 0, 0, 0, 852, 853, 0, 854, 0, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 0, 857, 0, 858, 0, 0, 0, 0, 0, 859,
    0, 860, 0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 0, 867,
    0, 868, 0, 0, 0, 0, 0, 869, 0, 870, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 873, 0, 0, 874, 0, 0, 0, 0, 0, 0,
    0, 875, 0, 0, 876, 0, 877, 0, 878, 0, 0, 0, 0, 0, 879, 880, 0, 881, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 0, 0, 884,
    0, 885, 0, 0, 0, 0, 0, 886, 0, 887, 0, 0, 0, 888, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 891, 0, 892, 0, 893,
    0, 0, 0, 0, 0, 894, 895, 0, 896, 0, 0, 0, 0, 0, 897, 0, 898, 0, 0, 0, 0, 0, 899, 0, 900, 0, 0, 0, 0, 0, 901, 0,
    902, 0, 0, 0, 903, 0, 0, 904, 0, 0, 0, 0, 0, 0, 0, 905, 0, 0, 906, 0, 907, 0, 908, 0, 0, 0, 0, 0, 909, 910, 0, 911,
    0, 0, 0, 0, 0, 912, 0, 913, 0, 0, 0, 0, 0, 914, 0, 915, 0, 0, 0, 0, 0, 916, 0, 917, 0, 0, 0, 918, 0, 0, 919, 0,
    0, 0, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 921, 0, 0, 0, 0, 0, 922, 923, 0, 924, 0, 0, 0, 0, 0, 925, 0, 926, 0,
    0, 0, 0, 0, 927, 0, 928, 0, 0, 0, 0, 0, 929, 0, 930, 0, 0, 0, 0, 0, 931, 0, 932, 0, 0, 0, 0, 0, 933, 0, 934, 0,
    0, 0, 0, 0, 935, 0, 936, 0, 0, 0, 0, 0, 937, 0, 938, 0, 0, 0, 0, 0, 939, 0, 940, 0, 0, 0, 0, 0, 941, 0, 942, 0,
    0, 0, 0, 943, 0, 0, 944, 0, 0, 0, 0, 0, 0, 0, 0, 945, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 947, 948, 0, 949, 0,
    0, 0, 0, 0, 950, 0, 951, 0, 0, 0, 0, 0, 952, 0, 953, 0, 0, 0, 0, 0, 954, 0, 955, 0, 0, 0, 0, 0, 956, 0, 957, 0,
    0, 0, 0, 0, 958, 0, 959, 0, 0, 0, 0, 0, 960, 0, 961, 0, 0, 0, 0, 0, 962, 0, 963, 0, 0, 0, 0, 0, 964, 0, 965, 0,
    0, 0, 0, 966, 0, 0, 967, 0, 0, 0, 0, 0, 0, 0, 968, 0, 0, 969, 0, 970, 0, 971, 0, 0, 0, 0, 0, 972, 973, 0, 974, 0,
    0, 0, 0, 0, 975, 0, 976, 0, 0, 0, 0, 0, 977, 0, 978, 0, 0, 0, 0, 0, 979, 0, 980, 0, 0, 0, 981, 0, 0, 982, 0, 0,
    0, 0, 0, 0, 0, 983, 0, 0, 984, 0, 985, 0, 986, 0, 0, 0, 0, 0, 987, 988, 0, 989, 0, 0, 0, 0, 0, 990, 0, 991, 0, 0,
    0, 0, 0, 992, 0, 993, 0, 0, 0, 0, 0, 994, 0, 995, 0, 0, 0, 996, 0, 0, 997, 0, 0, 0, 0, 0, 0, 0, 998, 0, 0, 999,
    0, 1000, 0, 1001, 0, 0, 0, 0, 0, 1002, 1003, 0, 1004, 0, 0, 0, 0, 0, 1005, 0, 1006, 0, 0, 0, 0, 0, 1007, 0, 1008, 0, 0, 0,
    0, 0, 1009, 0, 1010, 0, 0, 0, 1011, 0, 0, 1012, 0, 0, 0, 0, 0, 0, 0, 1013, 0, 0, 1014, 0, 0, 0, 0, 0, 1015, 0, 1016,
};
void recomp_unit_0019_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08850000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0019[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08850000;
    case 2u: goto L_08850008;
    case 3u: goto L_08850014;
    case 4u: goto L_08850020;
    case 5u: goto L_08850028;
    case 6u: goto L_08850030;
    case 7u: goto L_08850038;
    case 8u: goto L_08850044;
    case 9u: goto L_08850048;
    case 10u: goto L_08850058;
    case 11u: goto L_08850064;
    case 12u: goto L_08850070;
    case 13u: goto L_08850078;
    case 14u: goto L_08850080;
    case 15u: goto L_08850090;
    case 16u: goto L_0885009C;
    case 17u: goto L_088500A8;
    case 18u: goto L_088500B0;
    case 19u: goto L_088500B8;
    case 20u: goto L_088500C0;
    case 21u: goto L_088500C4;
    case 22u: goto L_088500D4;
    case 23u: goto L_088500E0;
    case 24u: goto L_088500EC;
    case 25u: goto L_088500F4;
    case 26u: goto L_088500FC;
    case 27u: goto L_0885010C;
    case 28u: goto L_08850118;
    case 29u: goto L_08850124;
    case 30u: goto L_0885012C;
    case 31u: goto L_08850134;
    case 32u: goto L_0885013C;
    case 33u: goto L_08850140;
    case 34u: goto L_08850148;
    case 35u: goto L_08850150;
    case 36u: goto L_08850164;
    case 37u: goto L_08850168;
    case 38u: goto L_08850180;
    case 39u: goto L_088501A0;
    case 40u: goto L_088501AC;
    case 41u: goto L_088501B4;
    case 42u: goto L_088501BC;
    case 43u: goto L_088501D4;
    case 44u: goto L_088501D8;
    case 45u: goto L_088501E0;
    case 46u: goto L_088501F8;
    case 47u: goto L_08850200;
    case 48u: goto L_08850218;
    case 49u: goto L_08850220;
    case 50u: goto L_08850238;
    case 51u: goto L_08850240;
    case 52u: goto L_08850250;
    case 53u: goto L_0885025C;
    case 54u: goto L_0885027C;
    case 55u: goto L_08850288;
    case 56u: goto L_08850290;
    case 57u: goto L_088502A8;
    case 58u: goto L_088502AC;
    case 59u: goto L_088502B4;
    case 60u: goto L_088502CC;
    case 61u: goto L_088502D4;
    case 62u: goto L_088502EC;
    case 63u: goto L_088502F4;
    case 64u: goto L_08850304;
    case 65u: goto L_08850310;
    case 66u: goto L_08850334;
    case 67u: goto L_0885034C;
    case 68u: goto L_08850364;
    case 69u: goto L_08850368;
    case 70u: goto L_08850370;
    case 71u: goto L_08850388;
    case 72u: goto L_08850390;
    case 73u: goto L_088503A8;
    case 74u: goto L_088503B0;
    case 75u: goto L_088503C8;
    case 76u: goto L_088503D0;
    case 77u: goto L_088503E8;
    case 78u: goto L_088503F0;
    case 79u: goto L_08850408;
    case 80u: goto L_08850410;
    case 81u: goto L_08850428;
    case 82u: goto L_08850430;
    case 83u: goto L_08850448;
    case 84u: goto L_08850450;
    case 85u: goto L_08850468;
    case 86u: goto L_08850470;
    case 87u: goto L_08850488;
    case 88u: goto L_08850490;
    case 89u: goto L_088504A4;
    case 90u: goto L_088504B0;
    case 91u: goto L_088504D4;
    case 92u: goto L_088504EC;
    case 93u: goto L_08850504;
    case 94u: goto L_08850508;
    case 95u: goto L_08850510;
    case 96u: goto L_08850528;
    case 97u: goto L_08850530;
    case 98u: goto L_08850548;
    case 99u: goto L_08850550;
    case 100u: goto L_08850568;
    case 101u: goto L_08850570;
    case 102u: goto L_08850588;
    case 103u: goto L_08850590;
    case 104u: goto L_088505A8;
    case 105u: goto L_088505B0;
    case 106u: goto L_088505C8;
    case 107u: goto L_088505D0;
    case 108u: goto L_088505E8;
    case 109u: goto L_088505F0;
    case 110u: goto L_08850608;
    case 111u: goto L_08850610;
    case 112u: goto L_08850628;
    case 113u: goto L_08850630;
    case 114u: goto L_08850644;
    case 115u: goto L_08850650;
    case 116u: goto L_08850670;
    case 117u: goto L_0885067C;
    case 118u: goto L_08850684;
    case 119u: goto L_0885068C;
    case 120u: goto L_088506A4;
    case 121u: goto L_088506A8;
    case 122u: goto L_088506B0;
    case 123u: goto L_088506C8;
    case 124u: goto L_088506D0;
    case 125u: goto L_088506E8;
    case 126u: goto L_088506F0;
    case 127u: goto L_08850708;
    case 128u: goto L_08850710;
    case 129u: goto L_08850720;
    case 130u: goto L_0885072C;
    case 131u: goto L_08850750;
    case 132u: goto L_08850768;
    case 133u: goto L_08850780;
    case 134u: goto L_08850784;
    case 135u: goto L_0885078C;
    case 136u: goto L_088507A4;
    case 137u: goto L_088507AC;
    case 138u: goto L_088507C4;
    case 139u: goto L_088507CC;
    case 140u: goto L_088507E4;
    case 141u: goto L_088507EC;
    case 142u: goto L_08850804;
    case 143u: goto L_0885080C;
    case 144u: goto L_08850824;
    case 145u: goto L_0885082C;
    case 146u: goto L_08850844;
    case 147u: goto L_0885084C;
    case 148u: goto L_08850864;
    case 149u: goto L_0885086C;
    case 150u: goto L_08850884;
    case 151u: goto L_0885088C;
    case 152u: goto L_088508A4;
    case 153u: goto L_088508AC;
    case 154u: goto L_088508C0;
    case 155u: goto L_088508CC;
    case 156u: goto L_088508F0;
    case 157u: goto L_08850908;
    case 158u: goto L_08850920;
    case 159u: goto L_08850924;
    case 160u: goto L_0885092C;
    case 161u: goto L_08850944;
    case 162u: goto L_0885094C;
    case 163u: goto L_08850964;
    case 164u: goto L_0885096C;
    case 165u: goto L_08850984;
    case 166u: goto L_0885098C;
    case 167u: goto L_088509A4;
    case 168u: goto L_088509AC;
    case 169u: goto L_088509C4;
    case 170u: goto L_088509CC;
    case 171u: goto L_088509E4;
    case 172u: goto L_088509EC;
    case 173u: goto L_08850A04;
    case 174u: goto L_08850A0C;
    case 175u: goto L_08850A24;
    case 176u: goto L_08850A2C;
    case 177u: goto L_08850A44;
    case 178u: goto L_08850A4C;
    case 179u: goto L_08850A60;
    case 180u: goto L_08850A6C;
    case 181u: goto L_08850A90;
    case 182u: goto L_08850AA8;
    case 183u: goto L_08850AC0;
    case 184u: goto L_08850AC4;
    case 185u: goto L_08850ACC;
    case 186u: goto L_08850AE4;
    case 187u: goto L_08850AEC;
    case 188u: goto L_08850B04;
    case 189u: goto L_08850B0C;
    case 190u: goto L_08850B24;
    case 191u: goto L_08850B2C;
    case 192u: goto L_08850B44;
    case 193u: goto L_08850B4C;
    case 194u: goto L_08850B64;
    case 195u: goto L_08850B6C;
    case 196u: goto L_08850B84;
    case 197u: goto L_08850B8C;
    case 198u: goto L_08850BA4;
    case 199u: goto L_08850BAC;
    case 200u: goto L_08850BC4;
    case 201u: goto L_08850BCC;
    case 202u: goto L_08850BE4;
    case 203u: goto L_08850BEC;
    case 204u: goto L_08850C00;
    case 205u: goto L_08850C0C;
    case 206u: goto L_08850C30;
    case 207u: goto L_08850C48;
    case 208u: goto L_08850C60;
    case 209u: goto L_08850C64;
    case 210u: goto L_08850C6C;
    case 211u: goto L_08850C84;
    case 212u: goto L_08850C8C;
    case 213u: goto L_08850CA4;
    case 214u: goto L_08850CAC;
    case 215u: goto L_08850CC4;
    case 216u: goto L_08850CCC;
    case 217u: goto L_08850CE4;
    case 218u: goto L_08850CEC;
    case 219u: goto L_08850D04;
    case 220u: goto L_08850D0C;
    case 221u: goto L_08850D24;
    case 222u: goto L_08850D2C;
    case 223u: goto L_08850D44;
    case 224u: goto L_08850D4C;
    case 225u: goto L_08850D64;
    case 226u: goto L_08850D6C;
    case 227u: goto L_08850D84;
    case 228u: goto L_08850D8C;
    case 229u: goto L_08850DA0;
    case 230u: goto L_08850DAC;
    case 231u: goto L_08850DD0;
    case 232u: goto L_08850DE8;
    case 233u: goto L_08850E00;
    case 234u: goto L_08850E04;
    case 235u: goto L_08850E0C;
    case 236u: goto L_08850E24;
    case 237u: goto L_08850E2C;
    case 238u: goto L_08850E44;
    case 239u: goto L_08850E4C;
    case 240u: goto L_08850E64;
    case 241u: goto L_08850E6C;
    case 242u: goto L_08850E84;
    case 243u: goto L_08850E8C;
    case 244u: goto L_08850EA4;
    case 245u: goto L_08850EAC;
    case 246u: goto L_08850EC4;
    case 247u: goto L_08850ECC;
    case 248u: goto L_08850EE4;
    case 249u: goto L_08850EEC;
    case 250u: goto L_08850F04;
    case 251u: goto L_08850F0C;
    case 252u: goto L_08850F24;
    case 253u: goto L_08850F2C;
    case 254u: goto L_08850F40;
    case 255u: goto L_08850F4C;
    case 256u: goto L_08850F70;
    case 257u: goto L_08850F88;
    case 258u: goto L_08850FA0;
    case 259u: goto L_08850FA4;
    case 260u: goto L_08850FAC;
    case 261u: goto L_08850FC4;
    case 262u: goto L_08850FCC;
    case 263u: goto L_08850FE4;
    case 264u: goto L_08850FEC;
    case 265u: goto L_08851004;
    case 266u: goto L_0885100C;
    case 267u: goto L_08851024;
    case 268u: goto L_0885102C;
    case 269u: goto L_08851044;
    case 270u: goto L_0885104C;
    case 271u: goto L_08851064;
    case 272u: goto L_0885106C;
    case 273u: goto L_08851084;
    case 274u: goto L_0885108C;
    case 275u: goto L_088510A4;
    case 276u: goto L_088510AC;
    case 277u: goto L_088510C4;
    case 278u: goto L_088510CC;
    case 279u: goto L_088510E0;
    case 280u: goto L_088510EC;
    case 281u: goto L_08851110;
    case 282u: goto L_08851128;
    case 283u: goto L_08851140;
    case 284u: goto L_08851144;
    case 285u: goto L_0885114C;
    case 286u: goto L_08851164;
    case 287u: goto L_0885116C;
    case 288u: goto L_08851184;
    case 289u: goto L_0885118C;
    case 290u: goto L_088511A4;
    case 291u: goto L_088511AC;
    case 292u: goto L_088511C4;
    case 293u: goto L_088511CC;
    case 294u: goto L_088511E4;
    case 295u: goto L_088511EC;
    case 296u: goto L_08851204;
    case 297u: goto L_0885120C;
    case 298u: goto L_08851224;
    case 299u: goto L_0885122C;
    case 300u: goto L_08851244;
    case 301u: goto L_0885124C;
    case 302u: goto L_08851264;
    case 303u: goto L_0885126C;
    case 304u: goto L_08851280;
    case 305u: goto L_0885128C;
    case 306u: goto L_088512B0;
    case 307u: goto L_088512C8;
    case 308u: goto L_088512E0;
    case 309u: goto L_088512E4;
    case 310u: goto L_088512EC;
    case 311u: goto L_08851304;
    case 312u: goto L_0885130C;
    case 313u: goto L_08851324;
    case 314u: goto L_0885132C;
    case 315u: goto L_08851344;
    case 316u: goto L_0885134C;
    case 317u: goto L_08851364;
    case 318u: goto L_0885136C;
    case 319u: goto L_08851384;
    case 320u: goto L_0885138C;
    case 321u: goto L_088513A4;
    case 322u: goto L_088513AC;
    case 323u: goto L_088513C4;
    case 324u: goto L_088513CC;
    case 325u: goto L_088513E4;
    case 326u: goto L_088513EC;
    case 327u: goto L_08851404;
    case 328u: goto L_0885140C;
    case 329u: goto L_08851420;
    case 330u: goto L_0885142C;
    case 331u: goto L_08851450;
    case 332u: goto L_08851468;
    case 333u: goto L_08851480;
    case 334u: goto L_08851484;
    case 335u: goto L_0885148C;
    case 336u: goto L_088514A4;
    case 337u: goto L_088514AC;
    case 338u: goto L_088514C4;
    case 339u: goto L_088514CC;
    case 340u: goto L_088514E4;
    case 341u: goto L_088514EC;
    case 342u: goto L_08851504;
    case 343u: goto L_0885150C;
    case 344u: goto L_08851524;
    case 345u: goto L_0885152C;
    case 346u: goto L_08851544;
    case 347u: goto L_0885154C;
    case 348u: goto L_08851564;
    case 349u: goto L_0885156C;
    case 350u: goto L_08851584;
    case 351u: goto L_0885158C;
    case 352u: goto L_088515A4;
    case 353u: goto L_088515AC;
    case 354u: goto L_088515C0;
    case 355u: goto L_088515CC;
    case 356u: goto L_088515F0;
    case 357u: goto L_08851608;
    case 358u: goto L_08851620;
    case 359u: goto L_08851624;
    case 360u: goto L_0885162C;
    case 361u: goto L_08851644;
    case 362u: goto L_0885164C;
    case 363u: goto L_08851664;
    case 364u: goto L_0885166C;
    case 365u: goto L_08851684;
    case 366u: goto L_0885168C;
    case 367u: goto L_088516A4;
    case 368u: goto L_088516AC;
    case 369u: goto L_088516C4;
    case 370u: goto L_088516CC;
    case 371u: goto L_088516E4;
    case 372u: goto L_088516EC;
    case 373u: goto L_08851700;
    case 374u: goto L_0885170C;
    case 375u: goto L_08851730;
    case 376u: goto L_08851748;
    case 377u: goto L_08851760;
    case 378u: goto L_08851764;
    case 379u: goto L_0885176C;
    case 380u: goto L_08851784;
    case 381u: goto L_0885178C;
    case 382u: goto L_088517A4;
    case 383u: goto L_088517AC;
    case 384u: goto L_088517C4;
    case 385u: goto L_088517CC;
    case 386u: goto L_088517E4;
    case 387u: goto L_088517EC;
    case 388u: goto L_08851804;
    case 389u: goto L_0885180C;
    case 390u: goto L_08851824;
    case 391u: goto L_0885182C;
    case 392u: goto L_08851844;
    case 393u: goto L_0885184C;
    case 394u: goto L_08851864;
    case 395u: goto L_0885186C;
    case 396u: goto L_08851884;
    case 397u: goto L_0885188C;
    case 398u: goto L_088518A0;
    case 399u: goto L_088518AC;
    case 400u: goto L_088518D0;
    case 401u: goto L_088518E8;
    case 402u: goto L_08851900;
    case 403u: goto L_08851904;
    case 404u: goto L_0885190C;
    case 405u: goto L_08851924;
    case 406u: goto L_0885192C;
    case 407u: goto L_08851944;
    case 408u: goto L_0885194C;
    case 409u: goto L_08851964;
    case 410u: goto L_0885196C;
    case 411u: goto L_08851984;
    case 412u: goto L_0885198C;
    case 413u: goto L_088519A4;
    case 414u: goto L_088519AC;
    case 415u: goto L_088519C4;
    case 416u: goto L_088519CC;
    case 417u: goto L_088519E4;
    case 418u: goto L_088519EC;
    case 419u: goto L_08851A04;
    case 420u: goto L_08851A0C;
    case 421u: goto L_08851A24;
    case 422u: goto L_08851A2C;
    case 423u: goto L_08851A40;
    case 424u: goto L_08851A4C;
    case 425u: goto L_08851A70;
    case 426u: goto L_08851A88;
    case 427u: goto L_08851AA0;
    case 428u: goto L_08851AA4;
    case 429u: goto L_08851AAC;
    case 430u: goto L_08851AC4;
    case 431u: goto L_08851ACC;
    case 432u: goto L_08851AE4;
    case 433u: goto L_08851AEC;
    case 434u: goto L_08851B04;
    case 435u: goto L_08851B0C;
    case 436u: goto L_08851B24;
    case 437u: goto L_08851B2C;
    case 438u: goto L_08851B44;
    case 439u: goto L_08851B4C;
    case 440u: goto L_08851B64;
    case 441u: goto L_08851B6C;
    case 442u: goto L_08851B84;
    case 443u: goto L_08851B8C;
    case 444u: goto L_08851BA4;
    case 445u: goto L_08851BAC;
    case 446u: goto L_08851BC4;
    case 447u: goto L_08851BCC;
    case 448u: goto L_08851BE0;
    case 449u: goto L_08851BEC;
    case 450u: goto L_08851C10;
    case 451u: goto L_08851C28;
    case 452u: goto L_08851C40;
    case 453u: goto L_08851C44;
    case 454u: goto L_08851C4C;
    case 455u: goto L_08851C64;
    case 456u: goto L_08851C6C;
    case 457u: goto L_08851C84;
    case 458u: goto L_08851C8C;
    case 459u: goto L_08851CA4;
    case 460u: goto L_08851CAC;
    case 461u: goto L_08851CC4;
    case 462u: goto L_08851CCC;
    case 463u: goto L_08851CE4;
    case 464u: goto L_08851CEC;
    case 465u: goto L_08851D04;
    case 466u: goto L_08851D0C;
    case 467u: goto L_08851D24;
    case 468u: goto L_08851D2C;
    case 469u: goto L_08851D44;
    case 470u: goto L_08851D4C;
    case 471u: goto L_08851D64;
    case 472u: goto L_08851D6C;
    case 473u: goto L_08851D80;
    case 474u: goto L_08851D8C;
    case 475u: goto L_08851DB0;
    case 476u: goto L_08851DC8;
    case 477u: goto L_08851DE0;
    case 478u: goto L_08851DE4;
    case 479u: goto L_08851DEC;
    case 480u: goto L_08851E04;
    case 481u: goto L_08851E0C;
    case 482u: goto L_08851E24;
    case 483u: goto L_08851E2C;
    case 484u: goto L_08851E44;
    case 485u: goto L_08851E4C;
    case 486u: goto L_08851E64;
    case 487u: goto L_08851E6C;
    case 488u: goto L_08851E84;
    case 489u: goto L_08851E8C;
    case 490u: goto L_08851EA4;
    case 491u: goto L_08851EAC;
    case 492u: goto L_08851EC4;
    case 493u: goto L_08851ECC;
    case 494u: goto L_08851EE4;
    case 495u: goto L_08851EEC;
    case 496u: goto L_08851F04;
    case 497u: goto L_08851F0C;
    case 498u: goto L_08851F20;
    case 499u: goto L_08851F2C;
    case 500u: goto L_08851F50;
    case 501u: goto L_08851F68;
    case 502u: goto L_08851F80;
    case 503u: goto L_08851F84;
    case 504u: goto L_08851F8C;
    case 505u: goto L_08851FA4;
    case 506u: goto L_08851FAC;
    case 507u: goto L_08851FC4;
    case 508u: goto L_08851FCC;
    case 509u: goto L_08851FE4;
    case 510u: goto L_08851FEC;
    case 511u: goto L_08852004;
    case 512u: goto L_0885200C;
    case 513u: goto L_08852024;
    case 514u: goto L_0885202C;
    case 515u: goto L_08852044;
    case 516u: goto L_0885204C;
    case 517u: goto L_08852064;
    case 518u: goto L_0885206C;
    case 519u: goto L_08852084;
    case 520u: goto L_0885208C;
    case 521u: goto L_088520A4;
    case 522u: goto L_088520AC;
    case 523u: goto L_088520C0;
    case 524u: goto L_088520CC;
    case 525u: goto L_088520F0;
    case 526u: goto L_08852108;
    case 527u: goto L_08852120;
    case 528u: goto L_08852124;
    case 529u: goto L_0885212C;
    case 530u: goto L_08852144;
    case 531u: goto L_0885214C;
    case 532u: goto L_08852164;
    case 533u: goto L_0885216C;
    case 534u: goto L_08852184;
    case 535u: goto L_0885218C;
    case 536u: goto L_088521A4;
    case 537u: goto L_088521AC;
    case 538u: goto L_088521C4;
    case 539u: goto L_088521CC;
    case 540u: goto L_088521E4;
    case 541u: goto L_088521EC;
    case 542u: goto L_08852204;
    case 543u: goto L_0885220C;
    case 544u: goto L_08852224;
    case 545u: goto L_0885222C;
    case 546u: goto L_08852244;
    case 547u: goto L_0885224C;
    case 548u: goto L_08852260;
    case 549u: goto L_0885226C;
    case 550u: goto L_08852290;
    case 551u: goto L_088522A8;
    case 552u: goto L_088522C0;
    case 553u: goto L_088522C4;
    case 554u: goto L_088522CC;
    case 555u: goto L_088522E4;
    case 556u: goto L_088522EC;
    case 557u: goto L_08852304;
    case 558u: goto L_0885230C;
    case 559u: goto L_08852324;
    case 560u: goto L_0885232C;
    case 561u: goto L_08852344;
    case 562u: goto L_0885234C;
    case 563u: goto L_08852364;
    case 564u: goto L_0885236C;
    case 565u: goto L_08852384;
    case 566u: goto L_0885238C;
    case 567u: goto L_088523A4;
    case 568u: goto L_088523AC;
    case 569u: goto L_088523C4;
    case 570u: goto L_088523CC;
    case 571u: goto L_088523E4;
    case 572u: goto L_088523EC;
    case 573u: goto L_08852400;
    case 574u: goto L_0885240C;
    case 575u: goto L_08852430;
    case 576u: goto L_08852448;
    case 577u: goto L_08852460;
    case 578u: goto L_08852464;
    case 579u: goto L_0885246C;
    case 580u: goto L_08852484;
    case 581u: goto L_0885248C;
    case 582u: goto L_088524A4;
    case 583u: goto L_088524AC;
    case 584u: goto L_088524C4;
    case 585u: goto L_088524CC;
    case 586u: goto L_088524E4;
    case 587u: goto L_088524EC;
    case 588u: goto L_08852504;
    case 589u: goto L_0885250C;
    case 590u: goto L_08852524;
    case 591u: goto L_0885252C;
    case 592u: goto L_08852544;
    case 593u: goto L_0885254C;
    case 594u: goto L_08852564;
    case 595u: goto L_0885256C;
    case 596u: goto L_08852584;
    case 597u: goto L_0885258C;
    case 598u: goto L_088525A0;
    case 599u: goto L_088525AC;
    case 600u: goto L_088525D0;
    case 601u: goto L_088525E8;
    case 602u: goto L_08852600;
    case 603u: goto L_08852604;
    case 604u: goto L_0885260C;
    case 605u: goto L_08852624;
    case 606u: goto L_0885262C;
    case 607u: goto L_08852644;
    case 608u: goto L_0885264C;
    case 609u: goto L_08852664;
    case 610u: goto L_0885266C;
    case 611u: goto L_08852684;
    case 612u: goto L_0885268C;
    case 613u: goto L_088526A4;
    case 614u: goto L_088526AC;
    case 615u: goto L_088526C4;
    case 616u: goto L_088526CC;
    case 617u: goto L_088526E4;
    case 618u: goto L_088526EC;
    case 619u: goto L_08852704;
    case 620u: goto L_0885270C;
    case 621u: goto L_08852724;
    case 622u: goto L_0885272C;
    case 623u: goto L_08852740;
    case 624u: goto L_0885274C;
    case 625u: goto L_08852770;
    case 626u: goto L_08852788;
    case 627u: goto L_088527A0;
    case 628u: goto L_088527A4;
    case 629u: goto L_088527AC;
    case 630u: goto L_088527C4;
    case 631u: goto L_088527CC;
    case 632u: goto L_088527E4;
    case 633u: goto L_088527EC;
    case 634u: goto L_08852804;
    case 635u: goto L_0885280C;
    case 636u: goto L_08852824;
    case 637u: goto L_0885282C;
    case 638u: goto L_08852844;
    case 639u: goto L_0885284C;
    case 640u: goto L_08852864;
    case 641u: goto L_0885286C;
    case 642u: goto L_08852884;
    case 643u: goto L_0885288C;
    case 644u: goto L_088528A4;
    case 645u: goto L_088528AC;
    case 646u: goto L_088528C4;
    case 647u: goto L_088528CC;
    case 648u: goto L_088528E0;
    case 649u: goto L_088528EC;
    case 650u: goto L_0885290C;
    case 651u: goto L_08852918;
    case 652u: goto L_08852920;
    case 653u: goto L_08852928;
    case 654u: goto L_08852940;
    case 655u: goto L_08852944;
    case 656u: goto L_0885294C;
    case 657u: goto L_08852964;
    case 658u: goto L_0885296C;
    case 659u: goto L_08852984;
    case 660u: goto L_0885298C;
    case 661u: goto L_088529A4;
    case 662u: goto L_088529AC;
    case 663u: goto L_088529BC;
    case 664u: goto L_088529C8;
    case 665u: goto L_088529EC;
    case 666u: goto L_08852A04;
    case 667u: goto L_08852A1C;
    case 668u: goto L_08852A20;
    case 669u: goto L_08852A28;
    case 670u: goto L_08852A40;
    case 671u: goto L_08852A48;
    case 672u: goto L_08852A60;
    case 673u: goto L_08852A68;
    case 674u: goto L_08852A80;
    case 675u: goto L_08852A88;
    case 676u: goto L_08852AA0;
    case 677u: goto L_08852AA8;
    case 678u: goto L_08852AC0;
    case 679u: goto L_08852AC8;
    case 680u: goto L_08852AE0;
    case 681u: goto L_08852AE8;
    case 682u: goto L_08852B00;
    case 683u: goto L_08852B08;
    case 684u: goto L_08852B20;
    case 685u: goto L_08852B28;
    case 686u: goto L_08852B40;
    case 687u: goto L_08852B48;
    case 688u: goto L_08852B5C;
    case 689u: goto L_08852B68;
    case 690u: goto L_08852B8C;
    case 691u: goto L_08852BA4;
    case 692u: goto L_08852BBC;
    case 693u: goto L_08852BC0;
    case 694u: goto L_08852BC8;
    case 695u: goto L_08852BE0;
    case 696u: goto L_08852BE8;
    case 697u: goto L_08852C00;
    case 698u: goto L_08852C08;
    case 699u: goto L_08852C20;
    case 700u: goto L_08852C28;
    case 701u: goto L_08852C40;
    case 702u: goto L_08852C48;
    case 703u: goto L_08852C60;
    case 704u: goto L_08852C68;
    case 705u: goto L_08852C80;
    case 706u: goto L_08852C88;
    case 707u: goto L_08852CA0;
    case 708u: goto L_08852CA8;
    case 709u: goto L_08852CC0;
    case 710u: goto L_08852CC8;
    case 711u: goto L_08852CE0;
    case 712u: goto L_08852CE8;
    case 713u: goto L_08852CFC;
    case 714u: goto L_08852D08;
    case 715u: goto L_08852D28;
    case 716u: goto L_08852D34;
    case 717u: goto L_08852D3C;
    case 718u: goto L_08852D44;
    case 719u: goto L_08852D5C;
    case 720u: goto L_08852D60;
    case 721u: goto L_08852D68;
    case 722u: goto L_08852D80;
    case 723u: goto L_08852D88;
    case 724u: goto L_08852DA0;
    case 725u: goto L_08852DA8;
    case 726u: goto L_08852DC0;
    case 727u: goto L_08852DC8;
    case 728u: goto L_08852DD8;
    case 729u: goto L_08852DE4;
    case 730u: goto L_08852E08;
    case 731u: goto L_08852E20;
    case 732u: goto L_08852E38;
    case 733u: goto L_08852E3C;
    case 734u: goto L_08852E44;
    case 735u: goto L_08852E5C;
    case 736u: goto L_08852E64;
    case 737u: goto L_08852E7C;
    case 738u: goto L_08852E84;
    case 739u: goto L_08852E9C;
    case 740u: goto L_08852EA4;
    case 741u: goto L_08852EBC;
    case 742u: goto L_08852EC4;
    case 743u: goto L_08852EDC;
    case 744u: goto L_08852EE4;
    case 745u: goto L_08852EFC;
    case 746u: goto L_08852F04;
    case 747u: goto L_08852F18;
    case 748u: goto L_08852F24;
    case 749u: goto L_08852F48;
    case 750u: goto L_08852F60;
    case 751u: goto L_08852F78;
    case 752u: goto L_08852F7C;
    case 753u: goto L_08852F84;
    case 754u: goto L_08852F9C;
    case 755u: goto L_08852FA4;
    case 756u: goto L_08852FBC;
    case 757u: goto L_08852FC4;
    case 758u: goto L_08852FDC;
    case 759u: goto L_08852FE4;
    case 760u: goto L_08852FFC;
    case 761u: goto L_08853004;
    case 762u: goto L_0885301C;
    case 763u: goto L_08853024;
    case 764u: goto L_0885303C;
    case 765u: goto L_08853044;
    case 766u: goto L_08853058;
    case 767u: goto L_08853064;
    case 768u: goto L_08853088;
    case 769u: goto L_088530A0;
    case 770u: goto L_088530B8;
    case 771u: goto L_088530BC;
    case 772u: goto L_088530C4;
    case 773u: goto L_088530DC;
    case 774u: goto L_088530E4;
    case 775u: goto L_088530FC;
    case 776u: goto L_08853104;
    case 777u: goto L_0885311C;
    case 778u: goto L_08853124;
    case 779u: goto L_0885313C;
    case 780u: goto L_08853144;
    case 781u: goto L_0885315C;
    case 782u: goto L_08853164;
    case 783u: goto L_0885317C;
    case 784u: goto L_08853184;
    case 785u: goto L_08853198;
    case 786u: goto L_088531A4;
    case 787u: goto L_088531C8;
    case 788u: goto L_088531E0;
    case 789u: goto L_088531F8;
    case 790u: goto L_088531FC;
    case 791u: goto L_08853204;
    case 792u: goto L_0885321C;
    case 793u: goto L_08853224;
    case 794u: goto L_0885323C;
    case 795u: goto L_08853244;
    case 796u: goto L_0885325C;
    case 797u: goto L_08853264;
    case 798u: goto L_0885327C;
    case 799u: goto L_08853284;
    case 800u: goto L_0885329C;
    case 801u: goto L_088532A4;
    case 802u: goto L_088532BC;
    case 803u: goto L_088532C4;
    case 804u: goto L_088532D8;
    case 805u: goto L_088532E4;
    case 806u: goto L_08853308;
    case 807u: goto L_08853320;
    case 808u: goto L_08853338;
    case 809u: goto L_0885333C;
    case 810u: goto L_08853344;
    case 811u: goto L_0885335C;
    case 812u: goto L_08853364;
    case 813u: goto L_0885337C;
    case 814u: goto L_08853384;
    case 815u: goto L_0885339C;
    case 816u: goto L_088533A4;
    case 817u: goto L_088533BC;
    case 818u: goto L_088533C4;
    case 819u: goto L_088533DC;
    case 820u: goto L_088533E4;
    case 821u: goto L_088533FC;
    case 822u: goto L_08853404;
    case 823u: goto L_08853418;
    case 824u: goto L_08853424;
    case 825u: goto L_08853448;
    case 826u: goto L_08853460;
    case 827u: goto L_08853478;
    case 828u: goto L_0885347C;
    case 829u: goto L_08853484;
    case 830u: goto L_0885349C;
    case 831u: goto L_088534A4;
    case 832u: goto L_088534BC;
    case 833u: goto L_088534C4;
    case 834u: goto L_088534DC;
    case 835u: goto L_088534E4;
    case 836u: goto L_088534FC;
    case 837u: goto L_08853504;
    case 838u: goto L_0885351C;
    case 839u: goto L_08853524;
    case 840u: goto L_0885353C;
    case 841u: goto L_08853544;
    case 842u: goto L_0885355C;
    case 843u: goto L_08853564;
    case 844u: goto L_0885357C;
    case 845u: goto L_08853584;
    case 846u: goto L_0885359C;
    case 847u: goto L_088535A4;
    case 848u: goto L_088535B8;
    case 849u: goto L_088535C4;
    case 850u: goto L_088535E8;
    case 851u: goto L_08853600;
    case 852u: goto L_08853618;
    case 853u: goto L_0885361C;
    case 854u: goto L_08853624;
    case 855u: goto L_0885363C;
    case 856u: goto L_08853644;
    case 857u: goto L_0885365C;
    case 858u: goto L_08853664;
    case 859u: goto L_0885367C;
    case 860u: goto L_08853684;
    case 861u: goto L_0885369C;
    case 862u: goto L_088536A4;
    case 863u: goto L_088536BC;
    case 864u: goto L_088536C4;
    case 865u: goto L_088536DC;
    case 866u: goto L_088536E4;
    case 867u: goto L_088536FC;
    case 868u: goto L_08853704;
    case 869u: goto L_0885371C;
    case 870u: goto L_08853724;
    case 871u: goto L_0885373C;
    case 872u: goto L_08853744;
    case 873u: goto L_08853758;
    case 874u: goto L_08853764;
    case 875u: goto L_08853784;
    case 876u: goto L_08853790;
    case 877u: goto L_08853798;
    case 878u: goto L_088537A0;
    case 879u: goto L_088537B8;
    case 880u: goto L_088537BC;
    case 881u: goto L_088537C4;
    case 882u: goto L_088537DC;
    case 883u: goto L_088537E4;
    case 884u: goto L_088537FC;
    case 885u: goto L_08853804;
    case 886u: goto L_0885381C;
    case 887u: goto L_08853824;
    case 888u: goto L_08853834;
    case 889u: goto L_08853840;
    case 890u: goto L_08853860;
    case 891u: goto L_0885386C;
    case 892u: goto L_08853874;
    case 893u: goto L_0885387C;
    case 894u: goto L_08853894;
    case 895u: goto L_08853898;
    case 896u: goto L_088538A0;
    case 897u: goto L_088538B8;
    case 898u: goto L_088538C0;
    case 899u: goto L_088538D8;
    case 900u: goto L_088538E0;
    case 901u: goto L_088538F8;
    case 902u: goto L_08853900;
    case 903u: goto L_08853910;
    case 904u: goto L_0885391C;
    case 905u: goto L_0885393C;
    case 906u: goto L_08853948;
    case 907u: goto L_08853950;
    case 908u: goto L_08853958;
    case 909u: goto L_08853970;
    case 910u: goto L_08853974;
    case 911u: goto L_0885397C;
    case 912u: goto L_08853994;
    case 913u: goto L_0885399C;
    case 914u: goto L_088539B4;
    case 915u: goto L_088539BC;
    case 916u: goto L_088539D4;
    case 917u: goto L_088539DC;
    case 918u: goto L_088539EC;
    case 919u: goto L_088539F8;
    case 920u: goto L_08853A1C;
    case 921u: goto L_08853A34;
    case 922u: goto L_08853A4C;
    case 923u: goto L_08853A50;
    case 924u: goto L_08853A58;
    case 925u: goto L_08853A70;
    case 926u: goto L_08853A78;
    case 927u: goto L_08853A90;
    case 928u: goto L_08853A98;
    case 929u: goto L_08853AB0;
    case 930u: goto L_08853AB8;
    case 931u: goto L_08853AD0;
    case 932u: goto L_08853AD8;
    case 933u: goto L_08853AF0;
    case 934u: goto L_08853AF8;
    case 935u: goto L_08853B10;
    case 936u: goto L_08853B18;
    case 937u: goto L_08853B30;
    case 938u: goto L_08853B38;
    case 939u: goto L_08853B50;
    case 940u: goto L_08853B58;
    case 941u: goto L_08853B70;
    case 942u: goto L_08853B78;
    case 943u: goto L_08853B8C;
    case 944u: goto L_08853B98;
    case 945u: goto L_08853BBC;
    case 946u: goto L_08853BD4;
    case 947u: goto L_08853BEC;
    case 948u: goto L_08853BF0;
    case 949u: goto L_08853BF8;
    case 950u: goto L_08853C10;
    case 951u: goto L_08853C18;
    case 952u: goto L_08853C30;
    case 953u: goto L_08853C38;
    case 954u: goto L_08853C50;
    case 955u: goto L_08853C58;
    case 956u: goto L_08853C70;
    case 957u: goto L_08853C78;
    case 958u: goto L_08853C90;
    case 959u: goto L_08853C98;
    case 960u: goto L_08853CB0;
    case 961u: goto L_08853CB8;
    case 962u: goto L_08853CD0;
    case 963u: goto L_08853CD8;
    case 964u: goto L_08853CF0;
    case 965u: goto L_08853CF8;
    case 966u: goto L_08853D0C;
    case 967u: goto L_08853D18;
    case 968u: goto L_08853D38;
    case 969u: goto L_08853D44;
    case 970u: goto L_08853D4C;
    case 971u: goto L_08853D54;
    case 972u: goto L_08853D6C;
    case 973u: goto L_08853D70;
    case 974u: goto L_08853D78;
    case 975u: goto L_08853D90;
    case 976u: goto L_08853D98;
    case 977u: goto L_08853DB0;
    case 978u: goto L_08853DB8;
    case 979u: goto L_08853DD0;
    case 980u: goto L_08853DD8;
    case 981u: goto L_08853DE8;
    case 982u: goto L_08853DF4;
    case 983u: goto L_08853E14;
    case 984u: goto L_08853E20;
    case 985u: goto L_08853E28;
    case 986u: goto L_08853E30;
    case 987u: goto L_08853E48;
    case 988u: goto L_08853E4C;
    case 989u: goto L_08853E54;
    case 990u: goto L_08853E6C;
    case 991u: goto L_08853E74;
    case 992u: goto L_08853E8C;
    case 993u: goto L_08853E94;
    case 994u: goto L_08853EAC;
    case 995u: goto L_08853EB4;
    case 996u: goto L_08853EC4;
    case 997u: goto L_08853ED0;
    case 998u: goto L_08853EF0;
    case 999u: goto L_08853EFC;
    case 1000u: goto L_08853F04;
    case 1001u: goto L_08853F0C;
    case 1002u: goto L_08853F24;
    case 1003u: goto L_08853F28;
    case 1004u: goto L_08853F30;
    case 1005u: goto L_08853F48;
    case 1006u: goto L_08853F50;
    case 1007u: goto L_08853F68;
    case 1008u: goto L_08853F70;
    case 1009u: goto L_08853F88;
    case 1010u: goto L_08853F90;
    case 1011u: goto L_08853FA0;
    case 1012u: goto L_08853FAC;
    case 1013u: goto L_08853FCC;
    case 1014u: goto L_08853FD8;
    case 1015u: goto L_08853FF0;
    case 1016u: goto L_08853FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08850000:
    ctx.gpr[31] = (0x08850008u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08850008u) goto L_08850008;
    return;
L_08850008:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08850014u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08850014u) goto L_08850014;
    return;
L_08850014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08850028;
      }
      goto L_08850020;
    }
L_08850020:
    ctx.gpr[31] = (0x08850028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08850028u) goto L_08850028;
    return;
L_08850028:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08850048;
      }
      goto L_08850030;
    }
L_08850030:
    ctx.gpr[31] = (0x08850038u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 935u, 0x08B577CCu>(ctx, &aot_mem) && ctx.pc == 0x08850038u) goto L_08850038;
    return;
L_08850038:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08850044u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08850044u) goto L_08850044;
    return;
L_08850044:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08850048;
L_08850048:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 164u);
    ctx.gpr[31] = (0x08850058u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08850058u) goto L_08850058;
    return;
L_08850058:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08850064u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x08850064u) goto L_08850064;
    return;
L_08850064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08850078;
      }
      goto L_08850070;
    }
L_08850070:
    ctx.gpr[31] = (0x08850078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08850078u) goto L_08850078;
    return;
L_08850078:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088500C4;
      }
      goto L_08850080;
    }
L_08850080:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x08850090u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08850090u) goto L_08850090;
    return;
L_08850090:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0885009Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x0885009Cu) goto L_0885009C;
    return;
L_0885009C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088500B0;
      }
      goto L_088500A8;
    }
L_088500A8:
    ctx.gpr[31] = (0x088500B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x088500B0u) goto L_088500B0;
    return;
L_088500B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088500C4;
      }
      goto L_088500B8;
    }
L_088500B8:
    ctx.gpr[31] = (0x088500C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x088500C0u) goto L_088500C0;
    return;
L_088500C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    goto L_088500C4;
L_088500C4:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (0u | 165u);
    ctx.gpr[31] = (0x088500D4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x088500D4u) goto L_088500D4;
    return;
L_088500D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088500E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem) && ctx.pc == 0x088500E0u) goto L_088500E0;
    return;
L_088500E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088500F4;
      }
      goto L_088500EC;
    }
L_088500EC:
    ctx.gpr[31] = (0x088500F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x088500F4u) goto L_088500F4;
    return;
L_088500F4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08850140;
      }
      goto L_088500FC;
    }
L_088500FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[5] = (0u | 171u);
    ctx.gpr[31] = (0x0885010Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem) && ctx.pc == 0x0885010Cu) goto L_0885010C;
    return;
L_0885010C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08850118u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem) && ctx.pc == 0x08850118u) goto L_08850118;
    return;
L_08850118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0885012C;
      }
      goto L_08850124;
    }
L_08850124:
    ctx.gpr[31] = (0x0885012Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x0885012Cu) goto L_0885012C;
    return;
L_0885012C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08850140;
      }
      goto L_08850134;
    }
L_08850134:
    ctx.gpr[31] = (0x0885013Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem) && ctx.pc == 0x0885013Cu) goto L_0885013C;
    return;
L_0885013C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    goto L_08850140;
L_08850140:
    ctx.gpr[31] = (0x08850148u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 585u, 0x08AC62A0u>(ctx, &aot_mem) && ctx.pc == 0x08850148u) goto L_08850148;
    return;
L_08850148:
    ctx.gpr[31] = (0x08850150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem) && ctx.pc == 0x08850150u) goto L_08850150;
    return;
L_08850150:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08850164u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 599u, 0x0884F2CCu>(ctx, &aot_mem) && ctx.pc == 0x08850164u) goto L_08850164;
    return;
L_08850164:
    ctx.gpr[2] = (0u | 1u);
    goto L_08850168;
L_08850168:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850180:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850220;
      }
      goto L_088501A0;
    }
L_088501A0:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08850200;
      }
      goto L_088501AC;
    }
L_088501AC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_088501E0;
      }
      goto L_088501B4;
    }
L_088501B4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08850240;
      }
      goto L_088501BC;
    }
L_088501BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 356u);
    ctx.gpr[31] = (0x088501D4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088501D4u) goto L_088501D4;
    return;
L_088501D4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088501D8;
L_088501D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850250;
      }
      goto L_088501E0;
    }
L_088501E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 353u);
    ctx.gpr[31] = (0x088501F8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088501F8u) goto L_088501F8;
    return;
L_088501F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088501D8;
      }
      goto L_08850200;
    }
L_08850200:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 350u);
    ctx.gpr[31] = (0x08850218u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850218u) goto L_08850218;
    return;
L_08850218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088501D8;
      }
      goto L_08850220;
    }
L_08850220:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 359u);
    ctx.gpr[31] = (0x08850238u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850238u) goto L_08850238;
    return;
L_08850238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088501D8;
      }
      goto L_08850240;
    }
L_08850240:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08850250u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08850250u) goto L_08850250;
    return;
L_08850250:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885025C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 143u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088502D4;
      }
      goto L_0885027C;
    }
L_0885027C:
    ctx.gpr[7] = (0u | 137u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_088502B4;
      }
      goto L_08850288;
    }
L_08850288:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088502F4;
      }
      goto L_08850290;
    }
L_08850290:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 367u);
    ctx.gpr[31] = (0x088502A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088502A8u) goto L_088502A8;
    return;
L_088502A8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088502AC;
L_088502AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850304;
      }
      goto L_088502B4;
    }
L_088502B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 364u);
    ctx.gpr[31] = (0x088502CCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088502CCu) goto L_088502CC;
    return;
L_088502CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088502AC;
      }
      goto L_088502D4;
    }
L_088502D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 362u);
    ctx.gpr[31] = (0x088502ECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088502ECu) goto L_088502EC;
    return;
L_088502EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088502AC;
      }
      goto L_088502F4;
    }
L_088502F4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08850304u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08850304u) goto L_08850304;
    return;
L_08850304:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850490;
      }
      goto L_08850334;
    }
L_08850334:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19128)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885034C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 388u);
    ctx.gpr[31] = (0x08850364u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850364u) goto L_08850364;
    return;
L_08850364:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850368;
L_08850368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088504A4;
      }
      goto L_08850370;
    }
L_08850370:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 390u);
    ctx.gpr[31] = (0x08850388u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850388u) goto L_08850388;
    return;
L_08850388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850390;
    }
L_08850390:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 382u);
    ctx.gpr[31] = (0x088503A8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088503A8u) goto L_088503A8;
    return;
L_088503A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_088503B0;
    }
L_088503B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 378u);
    ctx.gpr[31] = (0x088503C8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088503C8u) goto L_088503C8;
    return;
L_088503C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_088503D0;
    }
L_088503D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 376u);
    ctx.gpr[31] = (0x088503E8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088503E8u) goto L_088503E8;
    return;
L_088503E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_088503F0;
    }
L_088503F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 380u);
    ctx.gpr[31] = (0x08850408u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850408u) goto L_08850408;
    return;
L_08850408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850410;
    }
L_08850410:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 393u);
    ctx.gpr[31] = (0x08850428u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850428u) goto L_08850428;
    return;
L_08850428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850430;
    }
L_08850430:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 369u);
    ctx.gpr[31] = (0x08850448u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850448u) goto L_08850448;
    return;
L_08850448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850450;
    }
L_08850450:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 372u);
    ctx.gpr[31] = (0x08850468u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850468u) goto L_08850468;
    return;
L_08850468:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850470;
    }
L_08850470:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 385u);
    ctx.gpr[31] = (0x08850488u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850488u) goto L_08850488;
    return;
L_08850488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850368;
      }
      goto L_08850490;
    }
L_08850490:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088504A4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088504A4u) goto L_088504A4;
    return;
L_088504A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088504B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850630;
      }
      goto L_088504D4;
    }
L_088504D4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088504EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 413u);
    ctx.gpr[31] = (0x08850504u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850504u) goto L_08850504;
    return;
L_08850504:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850508;
L_08850508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850644;
      }
      goto L_08850510;
    }
L_08850510:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 415u);
    ctx.gpr[31] = (0x08850528u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850528u) goto L_08850528;
    return;
L_08850528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850530;
    }
L_08850530:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 407u);
    ctx.gpr[31] = (0x08850548u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850548u) goto L_08850548;
    return;
L_08850548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850550;
    }
L_08850550:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 403u);
    ctx.gpr[31] = (0x08850568u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850568u) goto L_08850568;
    return;
L_08850568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850570;
    }
L_08850570:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 401u);
    ctx.gpr[31] = (0x08850588u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850588u) goto L_08850588;
    return;
L_08850588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850590;
    }
L_08850590:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 405u);
    ctx.gpr[31] = (0x088505A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088505A8u) goto L_088505A8;
    return;
L_088505A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_088505B0;
    }
L_088505B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 420u);
    ctx.gpr[31] = (0x088505C8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088505C8u) goto L_088505C8;
    return;
L_088505C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_088505D0;
    }
L_088505D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 394u);
    ctx.gpr[31] = (0x088505E8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088505E8u) goto L_088505E8;
    return;
L_088505E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_088505F0;
    }
L_088505F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 397u);
    ctx.gpr[31] = (0x08850608u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850608u) goto L_08850608;
    return;
L_08850608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850610;
    }
L_08850610:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 410u);
    ctx.gpr[31] = (0x08850628u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850628u) goto L_08850628;
    return;
L_08850628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850508;
      }
      goto L_08850630;
    }
L_08850630:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08850644u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08850644u) goto L_08850644;
    return;
L_08850644:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088506F0;
      }
      goto L_08850670;
    }
L_08850670:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_088506D0;
      }
      goto L_0885067C;
    }
L_0885067C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_088506B0;
      }
      goto L_08850684;
    }
L_08850684:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08850710;
      }
      goto L_0885068C;
    }
L_0885068C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 458u);
    ctx.gpr[31] = (0x088506A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088506A4u) goto L_088506A4;
    return;
L_088506A4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088506A8;
L_088506A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850720;
      }
      goto L_088506B0;
    }
L_088506B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 455u);
    ctx.gpr[31] = (0x088506C8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088506C8u) goto L_088506C8;
    return;
L_088506C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088506A8;
      }
      goto L_088506D0;
    }
L_088506D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 453u);
    ctx.gpr[31] = (0x088506E8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088506E8u) goto L_088506E8;
    return;
L_088506E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088506A8;
      }
      goto L_088506F0;
    }
L_088506F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 460u);
    ctx.gpr[31] = (0x08850708u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850708u) goto L_08850708;
    return;
L_08850708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088506A8;
      }
      goto L_08850710;
    }
L_08850710:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08850720u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08850720u) goto L_08850720;
    return;
L_08850720:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885072C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088508AC;
      }
      goto L_08850750;
    }
L_08850750:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19464)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850768:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 481u);
    ctx.gpr[31] = (0x08850780u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850780u) goto L_08850780;
    return;
L_08850780:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850784;
L_08850784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088508C0;
      }
      goto L_0885078C;
    }
L_0885078C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 483u);
    ctx.gpr[31] = (0x088507A4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088507A4u) goto L_088507A4;
    return;
L_088507A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088507AC;
    }
L_088507AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 475u);
    ctx.gpr[31] = (0x088507C4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088507C4u) goto L_088507C4;
    return;
L_088507C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088507CC;
    }
L_088507CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 471u);
    ctx.gpr[31] = (0x088507E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088507E4u) goto L_088507E4;
    return;
L_088507E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088507EC;
    }
L_088507EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 469u);
    ctx.gpr[31] = (0x08850804u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850804u) goto L_08850804;
    return;
L_08850804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_0885080C;
    }
L_0885080C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 473u);
    ctx.gpr[31] = (0x08850824u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850824u) goto L_08850824;
    return;
L_08850824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_0885082C;
    }
L_0885082C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 486u);
    ctx.gpr[31] = (0x08850844u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850844u) goto L_08850844;
    return;
L_08850844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_0885084C;
    }
L_0885084C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 462u);
    ctx.gpr[31] = (0x08850864u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850864u) goto L_08850864;
    return;
L_08850864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_0885086C;
    }
L_0885086C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 465u);
    ctx.gpr[31] = (0x08850884u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850884u) goto L_08850884;
    return;
L_08850884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_0885088C;
    }
L_0885088C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 478u);
    ctx.gpr[31] = (0x088508A4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088508A4u) goto L_088508A4;
    return;
L_088508A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850784;
      }
      goto L_088508AC;
    }
L_088508AC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088508C0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x088508C0u) goto L_088508C0;
    return;
L_088508C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088508CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850A4C;
      }
      goto L_088508F0;
    }
L_088508F0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19632)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850908:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 505u);
    ctx.gpr[31] = (0x08850920u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850920u) goto L_08850920;
    return;
L_08850920:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850924;
L_08850924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850A60;
      }
      goto L_0885092C;
    }
L_0885092C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 507u);
    ctx.gpr[31] = (0x08850944u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850944u) goto L_08850944;
    return;
L_08850944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_0885094C;
    }
L_0885094C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 500u);
    ctx.gpr[31] = (0x08850964u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850964u) goto L_08850964;
    return;
L_08850964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_0885096C;
    }
L_0885096C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 496u);
    ctx.gpr[31] = (0x08850984u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850984u) goto L_08850984;
    return;
L_08850984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_0885098C;
    }
L_0885098C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 494u);
    ctx.gpr[31] = (0x088509A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088509A4u) goto L_088509A4;
    return;
L_088509A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_088509AC;
    }
L_088509AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 498u);
    ctx.gpr[31] = (0x088509C4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088509C4u) goto L_088509C4;
    return;
L_088509C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_088509CC;
    }
L_088509CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 510u);
    ctx.gpr[31] = (0x088509E4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088509E4u) goto L_088509E4;
    return;
L_088509E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_088509EC;
    }
L_088509EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 487u);
    ctx.gpr[31] = (0x08850A04u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850A04u) goto L_08850A04;
    return;
L_08850A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_08850A0C;
    }
L_08850A0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 490u);
    ctx.gpr[31] = (0x08850A24u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850A24u) goto L_08850A24;
    return;
L_08850A24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_08850A2C;
    }
L_08850A2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 503u);
    ctx.gpr[31] = (0x08850A44u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850A44u) goto L_08850A44;
    return;
L_08850A44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850924;
      }
      goto L_08850A4C;
    }
L_08850A4C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08850A60u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08850A60u) goto L_08850A60;
    return;
L_08850A60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850BEC;
      }
      goto L_08850A90;
    }
L_08850A90:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19800)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850AA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 530u);
    ctx.gpr[31] = (0x08850AC0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850AC0u) goto L_08850AC0;
    return;
L_08850AC0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850AC4;
L_08850AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850C00;
      }
      goto L_08850ACC;
    }
L_08850ACC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 532u);
    ctx.gpr[31] = (0x08850AE4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850AE4u) goto L_08850AE4;
    return;
L_08850AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850AEC;
    }
L_08850AEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 524u);
    ctx.gpr[31] = (0x08850B04u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850B04u) goto L_08850B04;
    return;
L_08850B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850B0C;
    }
L_08850B0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 520u);
    ctx.gpr[31] = (0x08850B24u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850B24u) goto L_08850B24;
    return;
L_08850B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850B2C;
    }
L_08850B2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 518u);
    ctx.gpr[31] = (0x08850B44u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850B44u) goto L_08850B44;
    return;
L_08850B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850B4C;
    }
L_08850B4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 522u);
    ctx.gpr[31] = (0x08850B64u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850B64u) goto L_08850B64;
    return;
L_08850B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850B6C;
    }
L_08850B6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 535u);
    ctx.gpr[31] = (0x08850B84u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850B84u) goto L_08850B84;
    return;
L_08850B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850B8C;
    }
L_08850B8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 511u);
    ctx.gpr[31] = (0x08850BA4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850BA4u) goto L_08850BA4;
    return;
L_08850BA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850BAC;
    }
L_08850BAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 514u);
    ctx.gpr[31] = (0x08850BC4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850BC4u) goto L_08850BC4;
    return;
L_08850BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850BCC;
    }
L_08850BCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 527u);
    ctx.gpr[31] = (0x08850BE4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850BE4u) goto L_08850BE4;
    return;
L_08850BE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850AC4;
      }
      goto L_08850BEC;
    }
L_08850BEC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08850C00u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08850C00u) goto L_08850C00;
    return;
L_08850C00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850C0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850D8C;
      }
      goto L_08850C30;
    }
L_08850C30:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(19968)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850C48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 554u);
    ctx.gpr[31] = (0x08850C60u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850C60u) goto L_08850C60;
    return;
L_08850C60:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850C64;
L_08850C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850DA0;
      }
      goto L_08850C6C;
    }
L_08850C6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 556u);
    ctx.gpr[31] = (0x08850C84u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850C84u) goto L_08850C84;
    return;
L_08850C84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850C8C;
    }
L_08850C8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 549u);
    ctx.gpr[31] = (0x08850CA4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850CA4u) goto L_08850CA4;
    return;
L_08850CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850CAC;
    }
L_08850CAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 545u);
    ctx.gpr[31] = (0x08850CC4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850CC4u) goto L_08850CC4;
    return;
L_08850CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850CCC;
    }
L_08850CCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 543u);
    ctx.gpr[31] = (0x08850CE4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850CE4u) goto L_08850CE4;
    return;
L_08850CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850CEC;
    }
L_08850CEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 547u);
    ctx.gpr[31] = (0x08850D04u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850D04u) goto L_08850D04;
    return;
L_08850D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850D0C;
    }
L_08850D0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 559u);
    ctx.gpr[31] = (0x08850D24u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850D24u) goto L_08850D24;
    return;
L_08850D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850D2C;
    }
L_08850D2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 536u);
    ctx.gpr[31] = (0x08850D44u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850D44u) goto L_08850D44;
    return;
L_08850D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850D4C;
    }
L_08850D4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 539u);
    ctx.gpr[31] = (0x08850D64u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850D64u) goto L_08850D64;
    return;
L_08850D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850D6C;
    }
L_08850D6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 552u);
    ctx.gpr[31] = (0x08850D84u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850D84u) goto L_08850D84;
    return;
L_08850D84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850C64;
      }
      goto L_08850D8C;
    }
L_08850D8C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08850DA0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08850DA0u) goto L_08850DA0;
    return;
L_08850DA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850DAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08850F2C;
      }
      goto L_08850DD0;
    }
L_08850DD0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20136)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850DE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 579u);
    ctx.gpr[31] = (0x08850E00u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850E00u) goto L_08850E00;
    return;
L_08850E00:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850E04;
L_08850E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08850F40;
      }
      goto L_08850E0C;
    }
L_08850E0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 581u);
    ctx.gpr[31] = (0x08850E24u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850E24u) goto L_08850E24;
    return;
L_08850E24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850E2C;
    }
L_08850E2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 573u);
    ctx.gpr[31] = (0x08850E44u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850E44u) goto L_08850E44;
    return;
L_08850E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850E4C;
    }
L_08850E4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 569u);
    ctx.gpr[31] = (0x08850E64u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850E64u) goto L_08850E64;
    return;
L_08850E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850E6C;
    }
L_08850E6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 567u);
    ctx.gpr[31] = (0x08850E84u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850E84u) goto L_08850E84;
    return;
L_08850E84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850E8C;
    }
L_08850E8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 571u);
    ctx.gpr[31] = (0x08850EA4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850EA4u) goto L_08850EA4;
    return;
L_08850EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850EAC;
    }
L_08850EAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 584u);
    ctx.gpr[31] = (0x08850EC4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850EC4u) goto L_08850EC4;
    return;
L_08850EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850ECC;
    }
L_08850ECC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 560u);
    ctx.gpr[31] = (0x08850EE4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850EE4u) goto L_08850EE4;
    return;
L_08850EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850EEC;
    }
L_08850EEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 563u);
    ctx.gpr[31] = (0x08850F04u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850F04u) goto L_08850F04;
    return;
L_08850F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850F0C;
    }
L_08850F0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 576u);
    ctx.gpr[31] = (0x08850F24u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850F24u) goto L_08850F24;
    return;
L_08850F24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850E04;
      }
      goto L_08850F2C;
    }
L_08850F2C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08850F40u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08850F40u) goto L_08850F40;
    return;
L_08850F40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850F4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088510CC;
      }
      goto L_08850F70;
    }
L_08850F70:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20304)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08850F88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 603u);
    ctx.gpr[31] = (0x08850FA0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850FA0u) goto L_08850FA0;
    return;
L_08850FA0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08850FA4;
L_08850FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088510E0;
      }
      goto L_08850FAC;
    }
L_08850FAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 605u);
    ctx.gpr[31] = (0x08850FC4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850FC4u) goto L_08850FC4;
    return;
L_08850FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_08850FCC;
    }
L_08850FCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 598u);
    ctx.gpr[31] = (0x08850FE4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08850FE4u) goto L_08850FE4;
    return;
L_08850FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_08850FEC;
    }
L_08850FEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 594u);
    ctx.gpr[31] = (0x08851004u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851004u) goto L_08851004;
    return;
L_08851004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_0885100C;
    }
L_0885100C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 592u);
    ctx.gpr[31] = (0x08851024u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851024u) goto L_08851024;
    return;
L_08851024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_0885102C;
    }
L_0885102C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 596u);
    ctx.gpr[31] = (0x08851044u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851044u) goto L_08851044;
    return;
L_08851044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_0885104C;
    }
L_0885104C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 608u);
    ctx.gpr[31] = (0x08851064u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851064u) goto L_08851064;
    return;
L_08851064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_0885106C;
    }
L_0885106C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 585u);
    ctx.gpr[31] = (0x08851084u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851084u) goto L_08851084;
    return;
L_08851084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_0885108C;
    }
L_0885108C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 588u);
    ctx.gpr[31] = (0x088510A4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088510A4u) goto L_088510A4;
    return;
L_088510A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_088510AC;
    }
L_088510AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 601u);
    ctx.gpr[31] = (0x088510C4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088510C4u) goto L_088510C4;
    return;
L_088510C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08850FA4;
      }
      goto L_088510CC;
    }
L_088510CC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088510E0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x088510E0u) goto L_088510E0;
    return;
L_088510E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088510EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885126C;
      }
      goto L_08851110;
    }
L_08851110:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20472)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851128:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 628u);
    ctx.gpr[31] = (0x08851140u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851140u) goto L_08851140;
    return;
L_08851140:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851144;
L_08851144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851280;
      }
      goto L_0885114C;
    }
L_0885114C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 630u);
    ctx.gpr[31] = (0x08851164u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851164u) goto L_08851164;
    return;
L_08851164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885116C;
    }
L_0885116C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 622u);
    ctx.gpr[31] = (0x08851184u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851184u) goto L_08851184;
    return;
L_08851184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885118C;
    }
L_0885118C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 618u);
    ctx.gpr[31] = (0x088511A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088511A4u) goto L_088511A4;
    return;
L_088511A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_088511AC;
    }
L_088511AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 616u);
    ctx.gpr[31] = (0x088511C4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088511C4u) goto L_088511C4;
    return;
L_088511C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_088511CC;
    }
L_088511CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 620u);
    ctx.gpr[31] = (0x088511E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088511E4u) goto L_088511E4;
    return;
L_088511E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_088511EC;
    }
L_088511EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 633u);
    ctx.gpr[31] = (0x08851204u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851204u) goto L_08851204;
    return;
L_08851204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885120C;
    }
L_0885120C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 609u);
    ctx.gpr[31] = (0x08851224u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851224u) goto L_08851224;
    return;
L_08851224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885122C;
    }
L_0885122C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 612u);
    ctx.gpr[31] = (0x08851244u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851244u) goto L_08851244;
    return;
L_08851244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885124C;
    }
L_0885124C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 625u);
    ctx.gpr[31] = (0x08851264u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851264u) goto L_08851264;
    return;
L_08851264:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851144;
      }
      goto L_0885126C;
    }
L_0885126C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08851280u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08851280u) goto L_08851280;
    return;
L_08851280:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885128C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885140C;
      }
      goto L_088512B0;
    }
L_088512B0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20640)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088512C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 652u);
    ctx.gpr[31] = (0x088512E0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088512E0u) goto L_088512E0;
    return;
L_088512E0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088512E4;
L_088512E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851420;
      }
      goto L_088512EC;
    }
L_088512EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 654u);
    ctx.gpr[31] = (0x08851304u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851304u) goto L_08851304;
    return;
L_08851304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885130C;
    }
L_0885130C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 647u);
    ctx.gpr[31] = (0x08851324u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851324u) goto L_08851324;
    return;
L_08851324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885132C;
    }
L_0885132C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 643u);
    ctx.gpr[31] = (0x08851344u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851344u) goto L_08851344;
    return;
L_08851344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885134C;
    }
L_0885134C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 641u);
    ctx.gpr[31] = (0x08851364u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851364u) goto L_08851364;
    return;
L_08851364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885136C;
    }
L_0885136C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 645u);
    ctx.gpr[31] = (0x08851384u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851384u) goto L_08851384;
    return;
L_08851384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885138C;
    }
L_0885138C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 657u);
    ctx.gpr[31] = (0x088513A4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088513A4u) goto L_088513A4;
    return;
L_088513A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_088513AC;
    }
L_088513AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 634u);
    ctx.gpr[31] = (0x088513C4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088513C4u) goto L_088513C4;
    return;
L_088513C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_088513CC;
    }
L_088513CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 637u);
    ctx.gpr[31] = (0x088513E4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088513E4u) goto L_088513E4;
    return;
L_088513E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_088513EC;
    }
L_088513EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 650u);
    ctx.gpr[31] = (0x08851404u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851404u) goto L_08851404;
    return;
L_08851404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088512E4;
      }
      goto L_0885140C;
    }
L_0885140C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08851420u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08851420u) goto L_08851420;
    return;
L_08851420:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885142C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088515AC;
      }
      goto L_08851450;
    }
L_08851450:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20808)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851468:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 679u);
    ctx.gpr[31] = (0x08851480u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851480u) goto L_08851480;
    return;
L_08851480:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851484;
L_08851484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088515C0;
      }
      goto L_0885148C;
    }
L_0885148C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 681u);
    ctx.gpr[31] = (0x088514A4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088514A4u) goto L_088514A4;
    return;
L_088514A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_088514AC;
    }
L_088514AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 673u);
    ctx.gpr[31] = (0x088514C4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088514C4u) goto L_088514C4;
    return;
L_088514C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_088514CC;
    }
L_088514CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 669u);
    ctx.gpr[31] = (0x088514E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088514E4u) goto L_088514E4;
    return;
L_088514E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_088514EC;
    }
L_088514EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 666u);
    ctx.gpr[31] = (0x08851504u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851504u) goto L_08851504;
    return;
L_08851504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_0885150C;
    }
L_0885150C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 671u);
    ctx.gpr[31] = (0x08851524u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851524u) goto L_08851524;
    return;
L_08851524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_0885152C;
    }
L_0885152C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 684u);
    ctx.gpr[31] = (0x08851544u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851544u) goto L_08851544;
    return;
L_08851544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_0885154C;
    }
L_0885154C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 658u);
    ctx.gpr[31] = (0x08851564u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851564u) goto L_08851564;
    return;
L_08851564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_0885156C;
    }
L_0885156C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 662u);
    ctx.gpr[31] = (0x08851584u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851584u) goto L_08851584;
    return;
L_08851584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_0885158C;
    }
L_0885158C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 676u);
    ctx.gpr[31] = (0x088515A4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088515A4u) goto L_088515A4;
    return;
L_088515A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851484;
      }
      goto L_088515AC;
    }
L_088515AC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088515C0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088515C0u) goto L_088515C0;
    return;
L_088515C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088515CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-109));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088516EC;
      }
      goto L_088515F0;
    }
L_088515F0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(20992)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851608:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 755u);
    ctx.gpr[31] = (0x08851620u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851620u) goto L_08851620;
    return;
L_08851620:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851624;
L_08851624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851700;
      }
      goto L_0885162C;
    }
L_0885162C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 773u);
    ctx.gpr[31] = (0x08851644u);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851644u) goto L_08851644;
    return;
L_08851644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_0885164C;
    }
L_0885164C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 768u);
    ctx.gpr[31] = (0x08851664u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851664u) goto L_08851664;
    return;
L_08851664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_0885166C;
    }
L_0885166C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 766u);
    ctx.gpr[31] = (0x08851684u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851684u) goto L_08851684;
    return;
L_08851684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_0885168C;
    }
L_0885168C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 760u);
    ctx.gpr[31] = (0x088516A4u);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088516A4u) goto L_088516A4;
    return;
L_088516A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_088516AC;
    }
L_088516AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 757u);
    ctx.gpr[31] = (0x088516C4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088516C4u) goto L_088516C4;
    return;
L_088516C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_088516CC;
    }
L_088516CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 770u);
    ctx.gpr[31] = (0x088516E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088516E4u) goto L_088516E4;
    return;
L_088516E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851624;
      }
      goto L_088516EC;
    }
L_088516EC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08851700u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08851700u) goto L_08851700;
    return;
L_08851700:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885170C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885188C;
      }
      goto L_08851730;
    }
L_08851730:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(21192)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851748:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 798u);
    ctx.gpr[31] = (0x08851760u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851760u) goto L_08851760;
    return;
L_08851760:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851764;
L_08851764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088518A0;
      }
      goto L_0885176C;
    }
L_0885176C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 800u);
    ctx.gpr[31] = (0x08851784u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851784u) goto L_08851784;
    return;
L_08851784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885178C;
    }
L_0885178C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 792u);
    ctx.gpr[31] = (0x088517A4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088517A4u) goto L_088517A4;
    return;
L_088517A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_088517AC;
    }
L_088517AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 788u);
    ctx.gpr[31] = (0x088517C4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088517C4u) goto L_088517C4;
    return;
L_088517C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_088517CC;
    }
L_088517CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 786u);
    ctx.gpr[31] = (0x088517E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088517E4u) goto L_088517E4;
    return;
L_088517E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_088517EC;
    }
L_088517EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 790u);
    ctx.gpr[31] = (0x08851804u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851804u) goto L_08851804;
    return;
L_08851804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885180C;
    }
L_0885180C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 803u);
    ctx.gpr[31] = (0x08851824u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851824u) goto L_08851824;
    return;
L_08851824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885182C;
    }
L_0885182C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 779u);
    ctx.gpr[31] = (0x08851844u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851844u) goto L_08851844;
    return;
L_08851844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885184C;
    }
L_0885184C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 782u);
    ctx.gpr[31] = (0x08851864u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851864u) goto L_08851864;
    return;
L_08851864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885186C;
    }
L_0885186C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 795u);
    ctx.gpr[31] = (0x08851884u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851884u) goto L_08851884;
    return;
L_08851884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851764;
      }
      goto L_0885188C;
    }
L_0885188C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088518A0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088518A0u) goto L_088518A0;
    return;
L_088518A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088518AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08851A2C;
      }
      goto L_088518D0;
    }
L_088518D0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(21360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088518E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 823u);
    ctx.gpr[31] = (0x08851900u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851900u) goto L_08851900;
    return;
L_08851900:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851904;
L_08851904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851A40;
      }
      goto L_0885190C;
    }
L_0885190C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 825u);
    ctx.gpr[31] = (0x08851924u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851924u) goto L_08851924;
    return;
L_08851924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_0885192C;
    }
L_0885192C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 817u);
    ctx.gpr[31] = (0x08851944u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851944u) goto L_08851944;
    return;
L_08851944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_0885194C;
    }
L_0885194C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 813u);
    ctx.gpr[31] = (0x08851964u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851964u) goto L_08851964;
    return;
L_08851964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_0885196C;
    }
L_0885196C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 811u);
    ctx.gpr[31] = (0x08851984u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851984u) goto L_08851984;
    return;
L_08851984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_0885198C;
    }
L_0885198C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 815u);
    ctx.gpr[31] = (0x088519A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088519A4u) goto L_088519A4;
    return;
L_088519A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_088519AC;
    }
L_088519AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 828u);
    ctx.gpr[31] = (0x088519C4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088519C4u) goto L_088519C4;
    return;
L_088519C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_088519CC;
    }
L_088519CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 804u);
    ctx.gpr[31] = (0x088519E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088519E4u) goto L_088519E4;
    return;
L_088519E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_088519EC;
    }
L_088519EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 807u);
    ctx.gpr[31] = (0x08851A04u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851A04u) goto L_08851A04;
    return;
L_08851A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_08851A0C;
    }
L_08851A0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 820u);
    ctx.gpr[31] = (0x08851A24u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851A24u) goto L_08851A24;
    return;
L_08851A24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851904;
      }
      goto L_08851A2C;
    }
L_08851A2C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08851A40u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08851A40u) goto L_08851A40;
    return;
L_08851A40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851A4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08851BCC;
      }
      goto L_08851A70;
    }
L_08851A70:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(21528)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851A88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 848u);
    ctx.gpr[31] = (0x08851AA0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851AA0u) goto L_08851AA0;
    return;
L_08851AA0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851AA4;
L_08851AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851BE0;
      }
      goto L_08851AAC;
    }
L_08851AAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 850u);
    ctx.gpr[31] = (0x08851AC4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851AC4u) goto L_08851AC4;
    return;
L_08851AC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851ACC;
    }
L_08851ACC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 842u);
    ctx.gpr[31] = (0x08851AE4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851AE4u) goto L_08851AE4;
    return;
L_08851AE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851AEC;
    }
L_08851AEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 838u);
    ctx.gpr[31] = (0x08851B04u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851B04u) goto L_08851B04;
    return;
L_08851B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851B0C;
    }
L_08851B0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 836u);
    ctx.gpr[31] = (0x08851B24u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851B24u) goto L_08851B24;
    return;
L_08851B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851B2C;
    }
L_08851B2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 840u);
    ctx.gpr[31] = (0x08851B44u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851B44u) goto L_08851B44;
    return;
L_08851B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851B4C;
    }
L_08851B4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 853u);
    ctx.gpr[31] = (0x08851B64u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851B64u) goto L_08851B64;
    return;
L_08851B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851B6C;
    }
L_08851B6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 829u);
    ctx.gpr[31] = (0x08851B84u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851B84u) goto L_08851B84;
    return;
L_08851B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851B8C;
    }
L_08851B8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 832u);
    ctx.gpr[31] = (0x08851BA4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851BA4u) goto L_08851BA4;
    return;
L_08851BA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851BAC;
    }
L_08851BAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 845u);
    ctx.gpr[31] = (0x08851BC4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851BC4u) goto L_08851BC4;
    return;
L_08851BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851AA4;
      }
      goto L_08851BCC;
    }
L_08851BCC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08851BE0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08851BE0u) goto L_08851BE0;
    return;
L_08851BE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851BEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08851D6C;
      }
      goto L_08851C10;
    }
L_08851C10:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(21696)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851C28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 873u);
    ctx.gpr[31] = (0x08851C40u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851C40u) goto L_08851C40;
    return;
L_08851C40:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851C44;
L_08851C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851D80;
      }
      goto L_08851C4C;
    }
L_08851C4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 875u);
    ctx.gpr[31] = (0x08851C64u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851C64u) goto L_08851C64;
    return;
L_08851C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851C6C;
    }
L_08851C6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 867u);
    ctx.gpr[31] = (0x08851C84u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851C84u) goto L_08851C84;
    return;
L_08851C84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851C8C;
    }
L_08851C8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 863u);
    ctx.gpr[31] = (0x08851CA4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851CA4u) goto L_08851CA4;
    return;
L_08851CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851CAC;
    }
L_08851CAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 861u);
    ctx.gpr[31] = (0x08851CC4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851CC4u) goto L_08851CC4;
    return;
L_08851CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851CCC;
    }
L_08851CCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 865u);
    ctx.gpr[31] = (0x08851CE4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851CE4u) goto L_08851CE4;
    return;
L_08851CE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851CEC;
    }
L_08851CEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 878u);
    ctx.gpr[31] = (0x08851D04u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851D04u) goto L_08851D04;
    return;
L_08851D04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851D0C;
    }
L_08851D0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 854u);
    ctx.gpr[31] = (0x08851D24u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851D24u) goto L_08851D24;
    return;
L_08851D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851D2C;
    }
L_08851D2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 857u);
    ctx.gpr[31] = (0x08851D44u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851D44u) goto L_08851D44;
    return;
L_08851D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851D4C;
    }
L_08851D4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 870u);
    ctx.gpr[31] = (0x08851D64u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851D64u) goto L_08851D64;
    return;
L_08851D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851C44;
      }
      goto L_08851D6C;
    }
L_08851D6C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08851D80u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08851D80u) goto L_08851D80;
    return;
L_08851D80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851D8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08851F0C;
      }
      goto L_08851DB0;
    }
L_08851DB0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(21864)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851DC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 897u);
    ctx.gpr[31] = (0x08851DE0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851DE0u) goto L_08851DE0;
    return;
L_08851DE0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851DE4;
L_08851DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08851F20;
      }
      goto L_08851DEC;
    }
L_08851DEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 899u);
    ctx.gpr[31] = (0x08851E04u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851E04u) goto L_08851E04;
    return;
L_08851E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851E0C;
    }
L_08851E0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 891u);
    ctx.gpr[31] = (0x08851E24u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851E24u) goto L_08851E24;
    return;
L_08851E24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851E2C;
    }
L_08851E2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 887u);
    ctx.gpr[31] = (0x08851E44u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851E44u) goto L_08851E44;
    return;
L_08851E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851E4C;
    }
L_08851E4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 885u);
    ctx.gpr[31] = (0x08851E64u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851E64u) goto L_08851E64;
    return;
L_08851E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851E6C;
    }
L_08851E6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 889u);
    ctx.gpr[31] = (0x08851E84u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851E84u) goto L_08851E84;
    return;
L_08851E84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851E8C;
    }
L_08851E8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 902u);
    ctx.gpr[31] = (0x08851EA4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851EA4u) goto L_08851EA4;
    return;
L_08851EA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851EAC;
    }
L_08851EAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 879u);
    ctx.gpr[31] = (0x08851EC4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851EC4u) goto L_08851EC4;
    return;
L_08851EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851ECC;
    }
L_08851ECC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 881u);
    ctx.gpr[31] = (0x08851EE4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851EE4u) goto L_08851EE4;
    return;
L_08851EE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851EEC;
    }
L_08851EEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 894u);
    ctx.gpr[31] = (0x08851F04u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851F04u) goto L_08851F04;
    return;
L_08851F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851DE4;
      }
      goto L_08851F0C;
    }
L_08851F0C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08851F20u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08851F20u) goto L_08851F20;
    return;
L_08851F20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851F2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088520AC;
      }
      goto L_08851F50;
    }
L_08851F50:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22032)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08851F68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 922u);
    ctx.gpr[31] = (0x08851F80u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851F80u) goto L_08851F80;
    return;
L_08851F80:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08851F84;
L_08851F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088520C0;
      }
      goto L_08851F8C;
    }
L_08851F8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 924u);
    ctx.gpr[31] = (0x08851FA4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851FA4u) goto L_08851FA4;
    return;
L_08851FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_08851FAC;
    }
L_08851FAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 916u);
    ctx.gpr[31] = (0x08851FC4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851FC4u) goto L_08851FC4;
    return;
L_08851FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_08851FCC;
    }
L_08851FCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 912u);
    ctx.gpr[31] = (0x08851FE4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08851FE4u) goto L_08851FE4;
    return;
L_08851FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_08851FEC;
    }
L_08851FEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 910u);
    ctx.gpr[31] = (0x08852004u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852004u) goto L_08852004;
    return;
L_08852004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_0885200C;
    }
L_0885200C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 914u);
    ctx.gpr[31] = (0x08852024u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852024u) goto L_08852024;
    return;
L_08852024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_0885202C;
    }
L_0885202C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 927u);
    ctx.gpr[31] = (0x08852044u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852044u) goto L_08852044;
    return;
L_08852044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_0885204C;
    }
L_0885204C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 903u);
    ctx.gpr[31] = (0x08852064u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852064u) goto L_08852064;
    return;
L_08852064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_0885206C;
    }
L_0885206C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 906u);
    ctx.gpr[31] = (0x08852084u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852084u) goto L_08852084;
    return;
L_08852084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_0885208C;
    }
L_0885208C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 919u);
    ctx.gpr[31] = (0x088520A4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088520A4u) goto L_088520A4;
    return;
L_088520A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08851F84;
      }
      goto L_088520AC;
    }
L_088520AC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088520C0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088520C0u) goto L_088520C0;
    return;
L_088520C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088520CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885224C;
      }
      goto L_088520F0;
    }
L_088520F0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22200)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852108:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 947u);
    ctx.gpr[31] = (0x08852120u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852120u) goto L_08852120;
    return;
L_08852120:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852124;
L_08852124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852260;
      }
      goto L_0885212C;
    }
L_0885212C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 949u);
    ctx.gpr[31] = (0x08852144u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852144u) goto L_08852144;
    return;
L_08852144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885214C;
    }
L_0885214C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 941u);
    ctx.gpr[31] = (0x08852164u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852164u) goto L_08852164;
    return;
L_08852164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885216C;
    }
L_0885216C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 937u);
    ctx.gpr[31] = (0x08852184u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852184u) goto L_08852184;
    return;
L_08852184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885218C;
    }
L_0885218C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 935u);
    ctx.gpr[31] = (0x088521A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088521A4u) goto L_088521A4;
    return;
L_088521A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_088521AC;
    }
L_088521AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 939u);
    ctx.gpr[31] = (0x088521C4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088521C4u) goto L_088521C4;
    return;
L_088521C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_088521CC;
    }
L_088521CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 952u);
    ctx.gpr[31] = (0x088521E4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088521E4u) goto L_088521E4;
    return;
L_088521E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_088521EC;
    }
L_088521EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 928u);
    ctx.gpr[31] = (0x08852204u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852204u) goto L_08852204;
    return;
L_08852204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885220C;
    }
L_0885220C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 931u);
    ctx.gpr[31] = (0x08852224u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852224u) goto L_08852224;
    return;
L_08852224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885222C;
    }
L_0885222C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 944u);
    ctx.gpr[31] = (0x08852244u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852244u) goto L_08852244;
    return;
L_08852244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852124;
      }
      goto L_0885224C;
    }
L_0885224C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08852260u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08852260u) goto L_08852260;
    return;
L_08852260:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885226C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088523EC;
      }
      goto L_08852290;
    }
L_08852290:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22368)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088522A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 972u);
    ctx.gpr[31] = (0x088522C0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088522C0u) goto L_088522C0;
    return;
L_088522C0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088522C4;
L_088522C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852400;
      }
      goto L_088522CC;
    }
L_088522CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 974u);
    ctx.gpr[31] = (0x088522E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088522E4u) goto L_088522E4;
    return;
L_088522E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_088522EC;
    }
L_088522EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 966u);
    ctx.gpr[31] = (0x08852304u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852304u) goto L_08852304;
    return;
L_08852304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_0885230C;
    }
L_0885230C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 962u);
    ctx.gpr[31] = (0x08852324u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852324u) goto L_08852324;
    return;
L_08852324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_0885232C;
    }
L_0885232C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 960u);
    ctx.gpr[31] = (0x08852344u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852344u) goto L_08852344;
    return;
L_08852344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_0885234C;
    }
L_0885234C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 964u);
    ctx.gpr[31] = (0x08852364u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852364u) goto L_08852364;
    return;
L_08852364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_0885236C;
    }
L_0885236C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 977u);
    ctx.gpr[31] = (0x08852384u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852384u) goto L_08852384;
    return;
L_08852384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_0885238C;
    }
L_0885238C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 953u);
    ctx.gpr[31] = (0x088523A4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088523A4u) goto L_088523A4;
    return;
L_088523A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_088523AC;
    }
L_088523AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 956u);
    ctx.gpr[31] = (0x088523C4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088523C4u) goto L_088523C4;
    return;
L_088523C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_088523CC;
    }
L_088523CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 969u);
    ctx.gpr[31] = (0x088523E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088523E4u) goto L_088523E4;
    return;
L_088523E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088522C4;
      }
      goto L_088523EC;
    }
L_088523EC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08852400u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08852400u) goto L_08852400;
    return;
L_08852400:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885240C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885258C;
      }
      goto L_08852430;
    }
L_08852430:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22536)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852448:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 997u);
    ctx.gpr[31] = (0x08852460u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852460u) goto L_08852460;
    return;
L_08852460:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852464;
L_08852464:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088525A0;
      }
      goto L_0885246C;
    }
L_0885246C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 999u);
    ctx.gpr[31] = (0x08852484u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852484u) goto L_08852484;
    return;
L_08852484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885248C;
    }
L_0885248C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 991u);
    ctx.gpr[31] = (0x088524A4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088524A4u) goto L_088524A4;
    return;
L_088524A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_088524AC;
    }
L_088524AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 987u);
    ctx.gpr[31] = (0x088524C4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088524C4u) goto L_088524C4;
    return;
L_088524C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_088524CC;
    }
L_088524CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 985u);
    ctx.gpr[31] = (0x088524E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088524E4u) goto L_088524E4;
    return;
L_088524E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_088524EC;
    }
L_088524EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 989u);
    ctx.gpr[31] = (0x08852504u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852504u) goto L_08852504;
    return;
L_08852504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885250C;
    }
L_0885250C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1002u);
    ctx.gpr[31] = (0x08852524u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852524u) goto L_08852524;
    return;
L_08852524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885252C;
    }
L_0885252C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 978u);
    ctx.gpr[31] = (0x08852544u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852544u) goto L_08852544;
    return;
L_08852544:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885254C;
    }
L_0885254C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 981u);
    ctx.gpr[31] = (0x08852564u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852564u) goto L_08852564;
    return;
L_08852564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885256C;
    }
L_0885256C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 994u);
    ctx.gpr[31] = (0x08852584u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852584u) goto L_08852584;
    return;
L_08852584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852464;
      }
      goto L_0885258C;
    }
L_0885258C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088525A0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088525A0u) goto L_088525A0;
    return;
L_088525A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088525AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885272C;
      }
      goto L_088525D0;
    }
L_088525D0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088525E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1022u);
    ctx.gpr[31] = (0x08852600u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852600u) goto L_08852600;
    return;
L_08852600:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852604;
L_08852604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852740;
      }
      goto L_0885260C;
    }
L_0885260C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1024u);
    ctx.gpr[31] = (0x08852624u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852624u) goto L_08852624;
    return;
L_08852624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885262C;
    }
L_0885262C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1016u);
    ctx.gpr[31] = (0x08852644u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852644u) goto L_08852644;
    return;
L_08852644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885264C;
    }
L_0885264C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1012u);
    ctx.gpr[31] = (0x08852664u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852664u) goto L_08852664;
    return;
L_08852664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885266C;
    }
L_0885266C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1010u);
    ctx.gpr[31] = (0x08852684u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852684u) goto L_08852684;
    return;
L_08852684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885268C;
    }
L_0885268C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1014u);
    ctx.gpr[31] = (0x088526A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088526A4u) goto L_088526A4;
    return;
L_088526A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_088526AC;
    }
L_088526AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1027u);
    ctx.gpr[31] = (0x088526C4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088526C4u) goto L_088526C4;
    return;
L_088526C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_088526CC;
    }
L_088526CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1003u);
    ctx.gpr[31] = (0x088526E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088526E4u) goto L_088526E4;
    return;
L_088526E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_088526EC;
    }
L_088526EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1006u);
    ctx.gpr[31] = (0x08852704u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852704u) goto L_08852704;
    return;
L_08852704:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885270C;
    }
L_0885270C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1019u);
    ctx.gpr[31] = (0x08852724u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852724u) goto L_08852724;
    return;
L_08852724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852604;
      }
      goto L_0885272C;
    }
L_0885272C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08852740u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08852740u) goto L_08852740;
    return;
L_08852740:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885274C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088528CC;
      }
      goto L_08852770;
    }
L_08852770:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22872)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852788:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1047u);
    ctx.gpr[31] = (0x088527A0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088527A0u) goto L_088527A0;
    return;
L_088527A0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088527A4;
L_088527A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088528E0;
      }
      goto L_088527AC;
    }
L_088527AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1049u);
    ctx.gpr[31] = (0x088527C4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088527C4u) goto L_088527C4;
    return;
L_088527C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_088527CC;
    }
L_088527CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1041u);
    ctx.gpr[31] = (0x088527E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088527E4u) goto L_088527E4;
    return;
L_088527E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_088527EC;
    }
L_088527EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1037u);
    ctx.gpr[31] = (0x08852804u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852804u) goto L_08852804;
    return;
L_08852804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_0885280C;
    }
L_0885280C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1035u);
    ctx.gpr[31] = (0x08852824u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852824u) goto L_08852824;
    return;
L_08852824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_0885282C;
    }
L_0885282C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1039u);
    ctx.gpr[31] = (0x08852844u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852844u) goto L_08852844;
    return;
L_08852844:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_0885284C;
    }
L_0885284C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1052u);
    ctx.gpr[31] = (0x08852864u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852864u) goto L_08852864;
    return;
L_08852864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_0885286C;
    }
L_0885286C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1028u);
    ctx.gpr[31] = (0x08852884u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852884u) goto L_08852884;
    return;
L_08852884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_0885288C;
    }
L_0885288C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1031u);
    ctx.gpr[31] = (0x088528A4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088528A4u) goto L_088528A4;
    return;
L_088528A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_088528AC;
    }
L_088528AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1044u);
    ctx.gpr[31] = (0x088528C4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088528C4u) goto L_088528C4;
    return;
L_088528C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088527A4;
      }
      goto L_088528CC;
    }
L_088528CC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088528E0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088528E0u) goto L_088528E0;
    return;
L_088528E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088528EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885298C;
      }
      goto L_0885290C;
    }
L_0885290C:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_0885296C;
      }
      goto L_08852918;
    }
L_08852918:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_0885294C;
      }
      goto L_08852920;
    }
L_08852920:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088529AC;
      }
      goto L_08852928;
    }
L_08852928:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1059u);
    ctx.gpr[31] = (0x08852940u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852940u) goto L_08852940;
    return;
L_08852940:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852944;
L_08852944:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088529BC;
      }
      goto L_0885294C;
    }
L_0885294C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1056u);
    ctx.gpr[31] = (0x08852964u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852964u) goto L_08852964;
    return;
L_08852964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852944;
      }
      goto L_0885296C;
    }
L_0885296C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1053u);
    ctx.gpr[31] = (0x08852984u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852984u) goto L_08852984;
    return;
L_08852984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852944;
      }
      goto L_0885298C;
    }
L_0885298C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1062u);
    ctx.gpr[31] = (0x088529A4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088529A4u) goto L_088529A4;
    return;
L_088529A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852944;
      }
      goto L_088529AC;
    }
L_088529AC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088529BCu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088529BCu) goto L_088529BC;
    return;
L_088529BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088529C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08852B48;
      }
      goto L_088529EC;
    }
L_088529EC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23040)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852A04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1108u);
    ctx.gpr[31] = (0x08852A1Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852A1Cu) goto L_08852A1C;
    return;
L_08852A1C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852A20;
L_08852A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852B5C;
      }
      goto L_08852A28;
    }
L_08852A28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1110u);
    ctx.gpr[31] = (0x08852A40u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852A40u) goto L_08852A40;
    return;
L_08852A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852A48;
    }
L_08852A48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1101u);
    ctx.gpr[31] = (0x08852A60u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852A60u) goto L_08852A60;
    return;
L_08852A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852A68;
    }
L_08852A68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1097u);
    ctx.gpr[31] = (0x08852A80u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852A80u) goto L_08852A80;
    return;
L_08852A80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852A88;
    }
L_08852A88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1095u);
    ctx.gpr[31] = (0x08852AA0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852AA0u) goto L_08852AA0;
    return;
L_08852AA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852AA8;
    }
L_08852AA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1099u);
    ctx.gpr[31] = (0x08852AC0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852AC0u) goto L_08852AC0;
    return;
L_08852AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852AC8;
    }
L_08852AC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1113u);
    ctx.gpr[31] = (0x08852AE0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852AE0u) goto L_08852AE0;
    return;
L_08852AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852AE8;
    }
L_08852AE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1088u);
    ctx.gpr[31] = (0x08852B00u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852B00u) goto L_08852B00;
    return;
L_08852B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852B08;
    }
L_08852B08:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1091u);
    ctx.gpr[31] = (0x08852B20u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852B20u) goto L_08852B20;
    return;
L_08852B20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852B28;
    }
L_08852B28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1105u);
    ctx.gpr[31] = (0x08852B40u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852B40u) goto L_08852B40;
    return;
L_08852B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852A20;
      }
      goto L_08852B48;
    }
L_08852B48:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08852B5Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08852B5Cu) goto L_08852B5C;
    return;
L_08852B5C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852B68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08852CE8;
      }
      goto L_08852B8C;
    }
L_08852B8C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23208)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852BA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1133u);
    ctx.gpr[31] = (0x08852BBCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852BBCu) goto L_08852BBC;
    return;
L_08852BBC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852BC0;
L_08852BC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852CFC;
      }
      goto L_08852BC8;
    }
L_08852BC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1135u);
    ctx.gpr[31] = (0x08852BE0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852BE0u) goto L_08852BE0;
    return;
L_08852BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852BE8;
    }
L_08852BE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1127u);
    ctx.gpr[31] = (0x08852C00u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852C00u) goto L_08852C00;
    return;
L_08852C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852C08;
    }
L_08852C08:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1123u);
    ctx.gpr[31] = (0x08852C20u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852C20u) goto L_08852C20;
    return;
L_08852C20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852C28;
    }
L_08852C28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1121u);
    ctx.gpr[31] = (0x08852C40u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852C40u) goto L_08852C40;
    return;
L_08852C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852C48;
    }
L_08852C48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1125u);
    ctx.gpr[31] = (0x08852C60u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852C60u) goto L_08852C60;
    return;
L_08852C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852C68;
    }
L_08852C68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1138u);
    ctx.gpr[31] = (0x08852C80u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852C80u) goto L_08852C80;
    return;
L_08852C80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852C88;
    }
L_08852C88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1114u);
    ctx.gpr[31] = (0x08852CA0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852CA0u) goto L_08852CA0;
    return;
L_08852CA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852CA8;
    }
L_08852CA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1117u);
    ctx.gpr[31] = (0x08852CC0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852CC0u) goto L_08852CC0;
    return;
L_08852CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852CC8;
    }
L_08852CC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1130u);
    ctx.gpr[31] = (0x08852CE0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852CE0u) goto L_08852CE0;
    return;
L_08852CE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852BC0;
      }
      goto L_08852CE8;
    }
L_08852CE8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08852CFCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08852CFCu) goto L_08852CFC;
    return;
L_08852CFC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852D08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08852DA8;
      }
      goto L_08852D28;
    }
L_08852D28:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08852D88;
      }
      goto L_08852D34;
    }
L_08852D34:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08852D68;
      }
      goto L_08852D3C;
    }
L_08852D3C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08852DC8;
      }
      goto L_08852D44;
    }
L_08852D44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1145u);
    ctx.gpr[31] = (0x08852D5Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852D5Cu) goto L_08852D5C;
    return;
L_08852D5C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852D60;
L_08852D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852DD8;
      }
      goto L_08852D68;
    }
L_08852D68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1142u);
    ctx.gpr[31] = (0x08852D80u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852D80u) goto L_08852D80;
    return;
L_08852D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852D60;
      }
      goto L_08852D88;
    }
L_08852D88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1139u);
    ctx.gpr[31] = (0x08852DA0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852DA0u) goto L_08852DA0;
    return;
L_08852DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852D60;
      }
      goto L_08852DA8;
    }
L_08852DA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1148u);
    ctx.gpr[31] = (0x08852DC0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852DC0u) goto L_08852DC0;
    return;
L_08852DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852D60;
      }
      goto L_08852DC8;
    }
L_08852DC8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08852DD8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08852DD8u) goto L_08852DD8;
    return;
L_08852DD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-109));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08852F04;
      }
      goto L_08852E08;
    }
L_08852E08:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23376)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852E20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1163u);
    ctx.gpr[31] = (0x08852E38u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852E38u) goto L_08852E38;
    return;
L_08852E38:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852E3C;
L_08852E3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08852F18;
      }
      goto L_08852E44;
    }
L_08852E44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1182u);
    ctx.gpr[31] = (0x08852E5Cu);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852E5Cu) goto L_08852E5C;
    return;
L_08852E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852E64;
    }
L_08852E64:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1168u);
    ctx.gpr[31] = (0x08852E7Cu);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852E7Cu) goto L_08852E7C;
    return;
L_08852E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852E84;
    }
L_08852E84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1176u);
    ctx.gpr[31] = (0x08852E9Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852E9Cu) goto L_08852E9C;
    return;
L_08852E9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852EA4;
    }
L_08852EA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1174u);
    ctx.gpr[31] = (0x08852EBCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852EBCu) goto L_08852EBC;
    return;
L_08852EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852EC4;
    }
L_08852EC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1165u);
    ctx.gpr[31] = (0x08852EDCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852EDCu) goto L_08852EDC;
    return;
L_08852EDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852EE4;
    }
L_08852EE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1179u);
    ctx.gpr[31] = (0x08852EFCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852EFCu) goto L_08852EFC;
    return;
L_08852EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852E3C;
      }
      goto L_08852F04;
    }
L_08852F04:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08852F18u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08852F18u) goto L_08852F18;
    return;
L_08852F18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852F24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-109));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853044;
      }
      goto L_08852F48;
    }
L_08852F48:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23576)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08852F60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1214u);
    ctx.gpr[31] = (0x08852F78u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852F78u) goto L_08852F78;
    return;
L_08852F78:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08852F7C;
L_08852F7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853058;
      }
      goto L_08852F84;
    }
L_08852F84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1232u);
    ctx.gpr[31] = (0x08852F9Cu);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852F9Cu) goto L_08852F9C;
    return;
L_08852F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08852FA4;
    }
L_08852FA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1219u);
    ctx.gpr[31] = (0x08852FBCu);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852FBCu) goto L_08852FBC;
    return;
L_08852FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08852FC4;
    }
L_08852FC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1227u);
    ctx.gpr[31] = (0x08852FDCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852FDCu) goto L_08852FDC;
    return;
L_08852FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08852FE4;
    }
L_08852FE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1225u);
    ctx.gpr[31] = (0x08852FFCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08852FFCu) goto L_08852FFC;
    return;
L_08852FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08853004;
    }
L_08853004:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1216u);
    ctx.gpr[31] = (0x0885301Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885301Cu) goto L_0885301C;
    return;
L_0885301C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08853024;
    }
L_08853024:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1229u);
    ctx.gpr[31] = (0x0885303Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885303Cu) goto L_0885303C;
    return;
L_0885303C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08852F7C;
      }
      goto L_08853044;
    }
L_08853044:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08853058u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08853058u) goto L_08853058;
    return;
L_08853058:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-109));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853184;
      }
      goto L_08853088;
    }
L_08853088:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23776)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088530A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1238u);
    ctx.gpr[31] = (0x088530B8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088530B8u) goto L_088530B8;
    return;
L_088530B8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088530BC;
L_088530BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853198;
      }
      goto L_088530C4;
    }
L_088530C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1257u);
    ctx.gpr[31] = (0x088530DCu);
    ctx.gpr[8] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088530DCu) goto L_088530DC;
    return;
L_088530DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_088530E4;
    }
L_088530E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1243u);
    ctx.gpr[31] = (0x088530FCu);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088530FCu) goto L_088530FC;
    return;
L_088530FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_08853104;
    }
L_08853104:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1251u);
    ctx.gpr[31] = (0x0885311Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885311Cu) goto L_0885311C;
    return;
L_0885311C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_08853124;
    }
L_08853124:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1249u);
    ctx.gpr[31] = (0x0885313Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885313Cu) goto L_0885313C;
    return;
L_0885313C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_08853144;
    }
L_08853144:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1240u);
    ctx.gpr[31] = (0x0885315Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885315Cu) goto L_0885315C;
    return;
L_0885315C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_08853164;
    }
L_08853164:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1254u);
    ctx.gpr[31] = (0x0885317Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885317Cu) goto L_0885317C;
    return;
L_0885317C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088530BC;
      }
      goto L_08853184;
    }
L_08853184:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08853198u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08853198u) goto L_08853198;
    return;
L_08853198:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088531A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-109));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088532C4;
      }
      goto L_088531C8;
    }
L_088531C8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(23976)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088531E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1264u);
    ctx.gpr[31] = (0x088531F8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088531F8u) goto L_088531F8;
    return;
L_088531F8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088531FC;
L_088531FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088532D8;
      }
      goto L_08853204;
    }
L_08853204:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1283u);
    ctx.gpr[31] = (0x0885321Cu);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885321Cu) goto L_0885321C;
    return;
L_0885321C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_08853224;
    }
L_08853224:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1269u);
    ctx.gpr[31] = (0x0885323Cu);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885323Cu) goto L_0885323C;
    return;
L_0885323C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_08853244;
    }
L_08853244:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1277u);
    ctx.gpr[31] = (0x0885325Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885325Cu) goto L_0885325C;
    return;
L_0885325C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_08853264;
    }
L_08853264:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1275u);
    ctx.gpr[31] = (0x0885327Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885327Cu) goto L_0885327C;
    return;
L_0885327C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_08853284;
    }
L_08853284:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1266u);
    ctx.gpr[31] = (0x0885329Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885329Cu) goto L_0885329C;
    return;
L_0885329C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_088532A4;
    }
L_088532A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1280u);
    ctx.gpr[31] = (0x088532BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088532BCu) goto L_088532BC;
    return;
L_088532BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088531FC;
      }
      goto L_088532C4;
    }
L_088532C4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088532D8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088532D8u) goto L_088532D8;
    return;
L_088532D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088532E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-109));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853404;
      }
      goto L_08853308;
    }
L_08853308:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24176)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853320:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1289u);
    ctx.gpr[31] = (0x08853338u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853338u) goto L_08853338;
    return;
L_08853338:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885333C;
L_0885333C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853418;
      }
      goto L_08853344;
    }
L_08853344:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1308u);
    ctx.gpr[31] = (0x0885335Cu);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885335Cu) goto L_0885335C;
    return;
L_0885335C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_08853364;
    }
L_08853364:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1294u);
    ctx.gpr[31] = (0x0885337Cu);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885337Cu) goto L_0885337C;
    return;
L_0885337C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_08853384;
    }
L_08853384:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1302u);
    ctx.gpr[31] = (0x0885339Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885339Cu) goto L_0885339C;
    return;
L_0885339C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_088533A4;
    }
L_088533A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1300u);
    ctx.gpr[31] = (0x088533BCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088533BCu) goto L_088533BC;
    return;
L_088533BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_088533C4;
    }
L_088533C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1291u);
    ctx.gpr[31] = (0x088533DCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088533DCu) goto L_088533DC;
    return;
L_088533DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_088533E4;
    }
L_088533E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1305u);
    ctx.gpr[31] = (0x088533FCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088533FCu) goto L_088533FC;
    return;
L_088533FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885333C;
      }
      goto L_08853404;
    }
L_08853404:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08853418u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08853418u) goto L_08853418;
    return;
L_08853418:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088535A4;
      }
      goto L_08853448;
    }
L_08853448:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24376)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853460:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1358u);
    ctx.gpr[31] = (0x08853478u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853478u) goto L_08853478;
    return;
L_08853478:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885347C;
L_0885347C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088535B8;
      }
      goto L_08853484;
    }
L_08853484:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1360u);
    ctx.gpr[31] = (0x0885349Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885349Cu) goto L_0885349C;
    return;
L_0885349C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_088534A4;
    }
L_088534A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1353u);
    ctx.gpr[31] = (0x088534BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088534BCu) goto L_088534BC;
    return;
L_088534BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_088534C4;
    }
L_088534C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1349u);
    ctx.gpr[31] = (0x088534DCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088534DCu) goto L_088534DC;
    return;
L_088534DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_088534E4;
    }
L_088534E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1346u);
    ctx.gpr[31] = (0x088534FCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088534FCu) goto L_088534FC;
    return;
L_088534FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_08853504;
    }
L_08853504:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1351u);
    ctx.gpr[31] = (0x0885351Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885351Cu) goto L_0885351C;
    return;
L_0885351C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_08853524;
    }
L_08853524:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1363u);
    ctx.gpr[31] = (0x0885353Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885353Cu) goto L_0885353C;
    return;
L_0885353C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_08853544;
    }
L_08853544:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1338u);
    ctx.gpr[31] = (0x0885355Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885355Cu) goto L_0885355C;
    return;
L_0885355C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_08853564;
    }
L_08853564:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1342u);
    ctx.gpr[31] = (0x0885357Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885357Cu) goto L_0885357C;
    return;
L_0885357C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_08853584;
    }
L_08853584:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1356u);
    ctx.gpr[31] = (0x0885359Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885359Cu) goto L_0885359C;
    return;
L_0885359C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885347C;
      }
      goto L_088535A4;
    }
L_088535A4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088535B8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088535B8u) goto L_088535B8;
    return;
L_088535B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088535C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853744;
      }
      goto L_088535E8;
    }
L_088535E8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24544)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853600:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1385u);
    ctx.gpr[31] = (0x08853618u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853618u) goto L_08853618;
    return;
L_08853618:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885361C;
L_0885361C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853758;
      }
      goto L_08853624;
    }
L_08853624:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1387u);
    ctx.gpr[31] = (0x0885363Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885363Cu) goto L_0885363C;
    return;
L_0885363C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853644;
    }
L_08853644:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1379u);
    ctx.gpr[31] = (0x0885365Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885365Cu) goto L_0885365C;
    return;
L_0885365C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853664;
    }
L_08853664:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1374u);
    ctx.gpr[31] = (0x0885367Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885367Cu) goto L_0885367C;
    return;
L_0885367C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853684;
    }
L_08853684:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1372u);
    ctx.gpr[31] = (0x0885369Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885369Cu) goto L_0885369C;
    return;
L_0885369C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_088536A4;
    }
L_088536A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1376u);
    ctx.gpr[31] = (0x088536BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088536BCu) goto L_088536BC;
    return;
L_088536BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_088536C4;
    }
L_088536C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1390u);
    ctx.gpr[31] = (0x088536DCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088536DCu) goto L_088536DC;
    return;
L_088536DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_088536E4;
    }
L_088536E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1365u);
    ctx.gpr[31] = (0x088536FCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088536FCu) goto L_088536FC;
    return;
L_088536FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853704;
    }
L_08853704:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1368u);
    ctx.gpr[31] = (0x0885371Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885371Cu) goto L_0885371C;
    return;
L_0885371C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853724;
    }
L_08853724:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1382u);
    ctx.gpr[31] = (0x0885373Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885373Cu) goto L_0885373C;
    return;
L_0885373C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885361C;
      }
      goto L_08853744;
    }
L_08853744:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08853758u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08853758u) goto L_08853758;
    return;
L_08853758:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853804;
      }
      goto L_08853784;
    }
L_08853784:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_088537E4;
      }
      goto L_08853790;
    }
L_08853790:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_088537C4;
      }
      goto L_08853798;
    }
L_08853798:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08853824;
      }
      goto L_088537A0;
    }
L_088537A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1397u);
    ctx.gpr[31] = (0x088537B8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088537B8u) goto L_088537B8;
    return;
L_088537B8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088537BC;
L_088537BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853834;
      }
      goto L_088537C4;
    }
L_088537C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1394u);
    ctx.gpr[31] = (0x088537DCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088537DCu) goto L_088537DC;
    return;
L_088537DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088537BC;
      }
      goto L_088537E4;
    }
L_088537E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1391u);
    ctx.gpr[31] = (0x088537FCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088537FCu) goto L_088537FC;
    return;
L_088537FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088537BC;
      }
      goto L_08853804;
    }
L_08853804:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1400u);
    ctx.gpr[31] = (0x0885381Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885381Cu) goto L_0885381C;
    return;
L_0885381C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088537BC;
      }
      goto L_08853824;
    }
L_08853824:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08853834u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08853834u) goto L_08853834;
    return;
L_08853834:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853840:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088538E0;
      }
      goto L_08853860;
    }
L_08853860:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_088538C0;
      }
      goto L_0885386C;
    }
L_0885386C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_088538A0;
      }
      goto L_08853874;
    }
L_08853874:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08853900;
      }
      goto L_0885387C;
    }
L_0885387C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1409u);
    ctx.gpr[31] = (0x08853894u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853894u) goto L_08853894;
    return;
L_08853894:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853898;
L_08853898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853910;
      }
      goto L_088538A0;
    }
L_088538A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1406u);
    ctx.gpr[31] = (0x088538B8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088538B8u) goto L_088538B8;
    return;
L_088538B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853898;
      }
      goto L_088538C0;
    }
L_088538C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1403u);
    ctx.gpr[31] = (0x088538D8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088538D8u) goto L_088538D8;
    return;
L_088538D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853898;
      }
      goto L_088538E0;
    }
L_088538E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1412u);
    ctx.gpr[31] = (0x088538F8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088538F8u) goto L_088538F8;
    return;
L_088538F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853898;
      }
      goto L_08853900;
    }
L_08853900:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08853910u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08853910u) goto L_08853910;
    return;
L_08853910:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885391C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088539BC;
      }
      goto L_0885393C;
    }
L_0885393C:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_0885399C;
      }
      goto L_08853948;
    }
L_08853948:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_0885397C;
      }
      goto L_08853950;
    }
L_08853950:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088539DC;
      }
      goto L_08853958;
    }
L_08853958:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1489u);
    ctx.gpr[31] = (0x08853970u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853970u) goto L_08853970;
    return;
L_08853970:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853974;
L_08853974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088539EC;
      }
      goto L_0885397C;
    }
L_0885397C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1417u);
    ctx.gpr[31] = (0x08853994u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853994u) goto L_08853994;
    return;
L_08853994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853974;
      }
      goto L_0885399C;
    }
L_0885399C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1415u);
    ctx.gpr[31] = (0x088539B4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088539B4u) goto L_088539B4;
    return;
L_088539B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853974;
      }
      goto L_088539BC;
    }
L_088539BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1491u);
    ctx.gpr[31] = (0x088539D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088539D4u) goto L_088539D4;
    return;
L_088539D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853974;
      }
      goto L_088539DC;
    }
L_088539DC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088539ECu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088539ECu) goto L_088539EC;
    return;
L_088539EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088539F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853B78;
      }
      goto L_08853A1C;
    }
L_08853A1C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24712)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853A34:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1437u);
    ctx.gpr[31] = (0x08853A4Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853A4Cu) goto L_08853A4C;
    return;
L_08853A4C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853A50;
L_08853A50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853B8C;
      }
      goto L_08853A58;
    }
L_08853A58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1439u);
    ctx.gpr[31] = (0x08853A70u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853A70u) goto L_08853A70;
    return;
L_08853A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853A78;
    }
L_08853A78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1431u);
    ctx.gpr[31] = (0x08853A90u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853A90u) goto L_08853A90;
    return;
L_08853A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853A98;
    }
L_08853A98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1427u);
    ctx.gpr[31] = (0x08853AB0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853AB0u) goto L_08853AB0;
    return;
L_08853AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853AB8;
    }
L_08853AB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1424u);
    ctx.gpr[31] = (0x08853AD0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853AD0u) goto L_08853AD0;
    return;
L_08853AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853AD8;
    }
L_08853AD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1429u);
    ctx.gpr[31] = (0x08853AF0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853AF0u) goto L_08853AF0;
    return;
L_08853AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853AF8;
    }
L_08853AF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1442u);
    ctx.gpr[31] = (0x08853B10u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853B10u) goto L_08853B10;
    return;
L_08853B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853B18;
    }
L_08853B18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1419u);
    ctx.gpr[31] = (0x08853B30u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853B30u) goto L_08853B30;
    return;
L_08853B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853B38;
    }
L_08853B38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1422u);
    ctx.gpr[31] = (0x08853B50u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853B50u) goto L_08853B50;
    return;
L_08853B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853B58;
    }
L_08853B58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1434u);
    ctx.gpr[31] = (0x08853B70u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853B70u) goto L_08853B70;
    return;
L_08853B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853A50;
      }
      goto L_08853B78;
    }
L_08853B78:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08853B8Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08853B8Cu) goto L_08853B8C;
    return;
L_08853B8C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(41) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853CF8;
      }
      goto L_08853BBC;
    }
L_08853BBC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24880)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853BD4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1459u);
    ctx.gpr[31] = (0x08853BECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853BECu) goto L_08853BEC;
    return;
L_08853BEC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853BF0;
L_08853BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853D0C;
      }
      goto L_08853BF8;
    }
L_08853BF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1461u);
    ctx.gpr[31] = (0x08853C10u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853C10u) goto L_08853C10;
    return;
L_08853C10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853C18;
    }
L_08853C18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1453u);
    ctx.gpr[31] = (0x08853C30u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853C30u) goto L_08853C30;
    return;
L_08853C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853C38;
    }
L_08853C38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1449u);
    ctx.gpr[31] = (0x08853C50u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853C50u) goto L_08853C50;
    return;
L_08853C50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853C58;
    }
L_08853C58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1447u);
    ctx.gpr[31] = (0x08853C70u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853C70u) goto L_08853C70;
    return;
L_08853C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853C78;
    }
L_08853C78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1451u);
    ctx.gpr[31] = (0x08853C90u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853C90u) goto L_08853C90;
    return;
L_08853C90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853C98;
    }
L_08853C98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1464u);
    ctx.gpr[31] = (0x08853CB0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853CB0u) goto L_08853CB0;
    return;
L_08853CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853CB8;
    }
L_08853CB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1443u);
    ctx.gpr[31] = (0x08853CD0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853CD0u) goto L_08853CD0;
    return;
L_08853CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853CD8;
    }
L_08853CD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1456u);
    ctx.gpr[31] = (0x08853CF0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853CF0u) goto L_08853CF0;
    return;
L_08853CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853BF0;
      }
      goto L_08853CF8;
    }
L_08853CF8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08853D0Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08853D0Cu) goto L_08853D0C;
    return;
L_08853D0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853D18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853DB8;
      }
      goto L_08853D38;
    }
L_08853D38:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08853D98;
      }
      goto L_08853D44;
    }
L_08853D44:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08853D78;
      }
      goto L_08853D4C;
    }
L_08853D4C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08853DD8;
      }
      goto L_08853D54;
    }
L_08853D54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1499u);
    ctx.gpr[31] = (0x08853D6Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853D6Cu) goto L_08853D6C;
    return;
L_08853D6C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853D70;
L_08853D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853DE8;
      }
      goto L_08853D78;
    }
L_08853D78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1496u);
    ctx.gpr[31] = (0x08853D90u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853D90u) goto L_08853D90;
    return;
L_08853D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853D70;
      }
      goto L_08853D98;
    }
L_08853D98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1493u);
    ctx.gpr[31] = (0x08853DB0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853DB0u) goto L_08853DB0;
    return;
L_08853DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853D70;
      }
      goto L_08853DB8;
    }
L_08853DB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1502u);
    ctx.gpr[31] = (0x08853DD0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853DD0u) goto L_08853DD0;
    return;
L_08853DD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853D70;
      }
      goto L_08853DD8;
    }
L_08853DD8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08853DE8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08853DE8u) goto L_08853DE8;
    return;
L_08853DE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853E94;
      }
      goto L_08853E14;
    }
L_08853E14:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08853E74;
      }
      goto L_08853E20;
    }
L_08853E20:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08853E54;
      }
      goto L_08853E28;
    }
L_08853E28:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08853EB4;
      }
      goto L_08853E30;
    }
L_08853E30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1511u);
    ctx.gpr[31] = (0x08853E48u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853E48u) goto L_08853E48;
    return;
L_08853E48:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853E4C;
L_08853E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853EC4;
      }
      goto L_08853E54;
    }
L_08853E54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1508u);
    ctx.gpr[31] = (0x08853E6Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853E6Cu) goto L_08853E6C;
    return;
L_08853E6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853E4C;
      }
      goto L_08853E74;
    }
L_08853E74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1505u);
    ctx.gpr[31] = (0x08853E8Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853E8Cu) goto L_08853E8C;
    return;
L_08853E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853E4C;
      }
      goto L_08853E94;
    }
L_08853E94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1514u);
    ctx.gpr[31] = (0x08853EACu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853EACu) goto L_08853EAC;
    return;
L_08853EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853E4C;
      }
      goto L_08853EB4;
    }
L_08853EB4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08853EC4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08853EC4u) goto L_08853EC4;
    return;
L_08853EC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853ED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08853F70;
      }
      goto L_08853EF0;
    }
L_08853EF0:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08853F50;
      }
      goto L_08853EFC;
    }
L_08853EFC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08853F30;
      }
      goto L_08853F04;
    }
L_08853F04:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08853F90;
      }
      goto L_08853F0C;
    }
L_08853F0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1523u);
    ctx.gpr[31] = (0x08853F24u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853F24u) goto L_08853F24;
    return;
L_08853F24:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08853F28;
L_08853F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08853FA0;
      }
      goto L_08853F30;
    }
L_08853F30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1520u);
    ctx.gpr[31] = (0x08853F48u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853F48u) goto L_08853F48;
    return;
L_08853F48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853F28;
      }
      goto L_08853F50;
    }
L_08853F50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1517u);
    ctx.gpr[31] = (0x08853F68u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853F68u) goto L_08853F68;
    return;
L_08853F68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853F28;
      }
      goto L_08853F70;
    }
L_08853F70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1526u);
    ctx.gpr[31] = (0x08853F88u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853F88u) goto L_08853F88;
    return;
L_08853F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08853F28;
      }
      goto L_08853F90;
    }
L_08853F90:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08853FA0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08853FA0u) goto L_08853FA0;
    return;
L_08853FA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08853FAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 116 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 3u, 0x08854010u>(ctx, &aot_mem); return;
      }
      goto L_08853FCC;
    }
L_08853FCC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 115 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08853FF8;
      }
      goto L_08853FD8;
    }
L_08853FD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1551u);
    ctx.gpr[31] = (0x08853FF0u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08853FF0u) goto L_08853FF0;
    return;
L_08853FF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 6u, 0x08854038u>(ctx, &aot_mem); return;
      }
      goto L_08853FF8;
    }
L_08853FF8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = 0x08854000u; return;
}

void recomp_unit_0019(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0019_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_19(Runtime &runtime) {
    runtime.register_generated_unit(19u, 0x08850000u, 16384u, &recomp_unit_0019, &recomp_unit_0019_entry);
    runtime.register_function(0x08850000u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850008u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850014u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850020u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850028u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850030u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850038u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850044u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850048u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850058u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850064u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850070u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850078u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850080u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850090u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885009Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088500FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885010Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850118u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850124u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885012Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850134u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885013Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850140u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850148u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850150u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850164u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850168u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850180u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088501F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850200u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850218u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850220u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850238u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850240u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850250u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885025Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885027Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850288u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850290u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088502F4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850304u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850310u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850334u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885034Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850364u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850368u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850370u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850388u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850390u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088503F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850408u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850410u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850428u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850430u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850448u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850450u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850468u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850470u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850488u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850490u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088504ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850504u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850508u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850510u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850528u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850530u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850548u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850550u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850568u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850570u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850588u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850590u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088505F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850608u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850610u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850628u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850630u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850644u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850650u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850670u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885067Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850684u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885068Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088506F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850708u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850710u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850720u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885072Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850750u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850768u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850780u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850784u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885078Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088507ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850804u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885080Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850824u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885082Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850844u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885084Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850864u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885086Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850884u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885088Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088508A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088508ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088508C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088508CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088508F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850908u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850920u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850924u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885092Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850944u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885094Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850964u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885096Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850984u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885098Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088509ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850A90u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AA8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850ACCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850AECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850B8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850BECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850C8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850CECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850D8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850DE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850E8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850ECCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850EECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850F88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08850FECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851004u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885100Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851024u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885102Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851044u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885104Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851064u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885106Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851084u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885108Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088510ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851110u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851128u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851140u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851144u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885114Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851164u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885116Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851184u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885118Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088511ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851204u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885120Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851224u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885122Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851244u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885124Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851264u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885126Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851280u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885128Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512B0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088512ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851304u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885130Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851324u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885132Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851344u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885134Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851364u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885136Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851384u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885138Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088513ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851404u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885140Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851420u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885142Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851450u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851468u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851480u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851484u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885148Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088514ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851504u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885150Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851524u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885152Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851544u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885154Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851564u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885156Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851584u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885158Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088515F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851608u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851620u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851624u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885162Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851644u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885164Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851664u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885166Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851684u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885168Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088516ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851700u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885170Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851730u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851748u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851760u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851764u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885176Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851784u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885178Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088517ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851804u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885180Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851824u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885182Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851844u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885184Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851864u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885186Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851884u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885188Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088518E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851900u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851904u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885190Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851924u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885192Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851944u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885194Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851964u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885196Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851984u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885198Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088519ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851A88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851ACCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851AECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851B8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851BA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851BACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851BC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851BCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851BE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851BECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C10u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851C8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851CA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851CACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851CC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851CCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851CE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851CECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851D8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DC8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851DECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851E8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851ECCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851EECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F2Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851F8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08851FECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852004u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885200Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852024u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885202Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852044u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885204Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852064u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885206Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852084u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885208Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088520F0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852108u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852120u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852124u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885212Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852144u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885214Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852164u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885216Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852184u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885218Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088521ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852204u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885220Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852224u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885222Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852244u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885224Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852260u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885226Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852290u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522A8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088522ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852304u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885230Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852324u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885232Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852344u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885234Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852364u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885236Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852384u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885238Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088523ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852400u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885240Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852430u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852448u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852460u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852464u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885246Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852484u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885248Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088524ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852504u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885250Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852524u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885252Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852544u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885254Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852564u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885256Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852584u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885258Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525D0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088525E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852600u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852604u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885260Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852624u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885262Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852644u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885264Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852664u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885266Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852684u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885268Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088526ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852704u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885270Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852724u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885272Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852740u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885274Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852770u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852788u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088527ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852804u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885280Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852824u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885282Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852844u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885284Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852864u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885286Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852884u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885288Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088528A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088528ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088528C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088528CCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088528E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088528ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885290Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852918u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852920u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852928u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852940u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852944u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885294Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852964u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885296Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852984u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885298Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529ACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088529ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852A88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AA8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AC8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852AE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B5Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852B8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852BA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852BBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852BC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852BC8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852BE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852BE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C00u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C40u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852C88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CA8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CC8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CE0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852CFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D34u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D5Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D80u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852D88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DA8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DC0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DC8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852DE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E08u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E3Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E5Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E64u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E7Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852E9Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852EA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852EBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852EC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852EDCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852EE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852EFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F18u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F60u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F7Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F84u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852F9Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FA4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FDCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FE4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08852FFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853004u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885301Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853024u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885303Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853044u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853058u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853064u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853088u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088530FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853104u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885311Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853124u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885313Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853144u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885315Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853164u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885317Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853184u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853198u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531C8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088531FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853204u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885321Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853224u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885323Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853244u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885325Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853264u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885327Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853284u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885329Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088532E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853308u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853320u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853338u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885333Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853344u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885335Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853364u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885337Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853384u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885339Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088533FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853404u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853418u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853424u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853448u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853460u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853478u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885347Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853484u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885349Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088534FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853504u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885351Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853524u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885353Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853544u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885355Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853564u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885357Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853584u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885359Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088535E8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853600u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853618u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885361Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853624u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885363Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853644u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885365Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853664u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885367Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853684u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885369Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536A4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088536FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853704u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885371Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853724u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885373Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853744u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853758u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853764u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853784u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853790u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853798u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537C4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537E4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088537FCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853804u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885381Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853824u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853834u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853840u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853860u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885386Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853874u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885387Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853894u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853898u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538A0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538B8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538C0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538D8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538E0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088538F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853900u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853910u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885391Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885393Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853948u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853950u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853958u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853970u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853974u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885397Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853994u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x0885399Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539B4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539BCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539D4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539DCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539ECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x088539F8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A1Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A34u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A90u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853A98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AF0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853AF8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B10u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B18u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853B98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BBCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BD4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BECu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BF0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853BF8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C10u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C18u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C58u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C90u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853C98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CF0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853CF8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D18u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D38u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D44u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D78u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D90u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853D98u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DB0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DB8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DD0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DE8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853DF4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E14u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E20u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E4Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E54u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E6Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E74u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E8Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853E94u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EB4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EC4u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853ED0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EF0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853EFCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F04u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F0Cu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F24u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F28u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F30u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F48u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F50u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F68u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F70u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F88u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853F90u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853FA0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853FACu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853FCCu, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853FD8u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853FF0u, &recomp_unit_0019, "recomp_unit_0019");
    runtime.register_function(0x08853FF8u, &recomp_unit_0019, "recomp_unit_0019");
}
} // namespace psprecomp
