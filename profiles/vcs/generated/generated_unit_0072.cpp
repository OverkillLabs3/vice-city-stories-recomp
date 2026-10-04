#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0072[4093] = {
    1, 0, 2, 0, 3, 0, 4, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0,
    15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28,
    0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44,
    0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0,
    58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68,
    0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 77, 0, 0, 78, 79, 0, 80, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 0, 0,
    86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 0, 102, 0, 103, 0, 0, 104,
    0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126,
    0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 137, 0, 138, 0, 0, 0,
    0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 149,
    0, 150, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 163, 0, 164, 0,
    0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175,
    0, 176, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0,
    186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 191, 192, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0,
    0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0,
    204, 0, 0, 205, 0, 206, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 215, 0,
    0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 219, 220, 0, 221, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225,
    0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0,
    232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 245,
    0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 0,
    0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 256,
    0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 261, 0, 262, 0, 263, 264, 0, 0, 0, 265, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 277, 0, 278, 0, 0, 0,
    279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0,
    0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 291, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 295, 0, 296, 297, 0, 0, 298, 0, 0, 0,
    299, 300, 0, 301, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 310, 0, 0,
    311, 0, 0, 312, 313, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 319, 0, 0, 320, 0, 321, 0, 322, 0, 0,
    0, 323, 0, 324, 0, 325, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0,
    0, 334, 0, 0, 0, 335, 336, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 0,
    0, 343, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 350, 0, 351, 0, 352, 0, 0, 353,
    0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0, 0,
    363, 0, 364, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0,
    0, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 0, 0, 389, 390,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0,
    397, 0, 398, 0, 399, 0, 400, 401, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 404, 405, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0,
    411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0,
    0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 428, 0, 0,
    429, 0, 0, 430, 0, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0,
    0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 442, 0, 443,
    0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447, 0, 448, 0, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 459,
    0, 0, 460, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 467,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472,
    0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0,
    0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0,
    0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496,
    0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0, 504, 0, 505, 506, 0, 0,
    507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0,
    0, 0, 525, 0, 526, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 0, 534, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 0,
    538, 0, 539, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 0, 545, 0, 0,
    0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 553,
    0, 554, 0, 555, 0, 556, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560,
    0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 563, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 570,
    0, 0, 0, 571, 0, 0, 572, 0, 573, 0, 574, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 578, 0, 579, 0, 580, 0, 0, 0,
    581, 0, 0, 582, 0, 583, 584, 0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590,
    0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 594, 0, 595, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0,
    0, 0, 0, 599, 0, 0, 600, 0, 601, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 606, 0, 0, 607, 0, 0, 608, 0,
    0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 618, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0,
    0, 0, 623, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 632, 0, 0, 0,
    633, 0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 637, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 645, 0, 646, 0, 0,
    647, 0, 0, 648, 649, 0, 0, 650, 0, 651, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0,
    0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661,
    0, 662, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 667, 0,
    0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 678, 0, 0, 0, 679,
    0, 0, 0, 680, 0, 0, 681, 0, 682, 0, 683, 0, 684, 0, 685, 686, 0, 687, 0, 688, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 695,
    0, 696, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 699, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0,
    704, 0, 705, 0, 0, 0, 706, 0, 0, 707, 0, 708, 0, 0, 709, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0,
    714, 0, 0, 0, 715, 0, 0, 716, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 729,
    0, 730, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 0, 733, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0,
    0, 0, 738, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 743, 0, 744, 0, 745, 0, 746, 0, 747,
    0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0, 752, 0, 753, 0, 754, 0, 0, 755,
    0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 760, 0, 0, 761, 762, 0, 0,
    763, 0, 0, 764, 0, 765, 0, 766, 0, 0, 0, 767, 0, 768, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 773, 0, 774, 0, 0, 775, 0, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 782,
    0, 0, 783, 0, 784, 0, 785, 0, 0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 788, 0, 0, 789, 0, 790, 0, 0, 0, 791, 0, 0, 792,
    0, 793, 0, 794, 0, 0, 795, 0, 796, 0, 0, 797, 0, 0, 798, 0, 799, 0, 800, 0, 0, 801, 0, 0, 802, 0, 803, 0, 0, 0, 804, 0,
    0, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 0, 807, 0, 0, 808, 0, 0, 809, 0, 810, 0, 0, 0, 0, 811, 0, 0, 0, 812,
    0, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 815, 0, 816, 0, 0, 817, 0, 818, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 825, 0, 0, 826, 0, 827, 0, 828, 0, 0,
    0, 829, 0, 830, 0, 0, 831, 0, 0, 832, 0, 0, 833, 0, 834, 0, 835, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 837, 0,
    838, 0, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 842, 0, 0, 843, 0, 0,
    0, 844, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 848, 0, 849, 0, 850, 0, 851, 0, 852, 0, 853, 0, 0, 854, 0, 0, 0, 0, 0, 0,
    0, 855, 0, 856, 0, 857, 0, 858, 0, 0, 0, 859, 0, 0, 0, 860, 0, 0, 861, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 863, 0, 0,
    0, 0, 0, 0, 864, 0, 0, 0, 865, 0, 866, 0, 867, 0, 0, 868, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0,
    0, 871, 0, 0, 0, 0, 872, 0, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 0, 876, 0, 877, 0, 878, 0, 0, 0, 879, 0, 880, 0, 0,
    0, 881, 0, 0, 882, 0, 0, 883, 0, 0, 0, 884, 0, 0, 0, 885, 0, 0, 0, 886, 0, 0, 0, 887, 0, 888, 0, 0, 0, 0, 889, 0,
    0, 890, 0, 0, 0, 891, 0, 0, 892, 0, 0, 0, 893, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0,
    0, 0, 897, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 899, 0, 900, 0, 901, 0, 0, 902, 0, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 904, 0, 0, 905, 0, 0, 906, 0, 907, 0, 908, 0, 0, 0, 909, 0, 910, 0, 0, 0, 0, 0, 0, 911, 0, 0, 912, 0, 0, 913,
    0, 0, 914, 0, 0, 0, 915, 0, 0, 0, 916, 0, 0, 0, 917, 0, 0, 0, 918, 919, 0, 920, 0, 921, 0, 0, 0, 0, 922, 0, 0, 923,
    0, 0, 924, 925, 0, 0, 926, 0, 0, 927, 0, 0, 928, 0, 929, 0, 0, 0, 930, 0, 931, 0, 0, 932, 0, 0, 933, 0, 0, 0, 934, 0,
    0, 0, 935, 0, 0, 0, 936, 0, 937, 0, 0, 0, 938, 0, 0, 939, 0, 940, 0, 0, 0, 941, 0, 0, 942, 0, 943, 0, 0, 0, 944, 0,
    945, 0, 946, 0, 0, 0, 947, 0, 948, 0, 0, 0, 949, 0, 950, 0, 0, 951, 0, 0, 952, 0, 0, 953, 0, 954, 0, 955, 0, 0, 956, 0,
    0, 957, 0, 0, 0, 958, 0, 0, 0, 959, 0, 0, 0, 960, 0, 0, 0, 961, 962, 0, 963, 0, 964, 0, 0, 0, 965, 0, 966, 0, 967, 0,
    0, 0, 968, 0, 0, 0, 0, 0, 0, 0, 0, 969, 0, 0, 970, 0, 0, 0, 971, 0, 0, 0, 0, 972, 0, 0, 0, 0, 0, 973, 0, 974,
    0, 0, 975, 0, 0, 0, 0, 0, 0, 976, 0, 977, 0, 978, 0, 0, 979, 0, 980, 0, 0, 0, 981, 0, 0, 0, 0, 982, 0, 983, 0, 984,
    0, 985, 0, 986, 0, 0, 987, 0, 988, 0, 0, 0, 989, 0, 0, 990, 0, 0, 0, 0, 0, 991, 0, 0, 992, 0, 0, 0, 993,
};
void recomp_unit_0072_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08924000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0072[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08924000;
    case 2u: goto L_08924008;
    case 3u: goto L_08924010;
    case 4u: goto L_08924018;
    case 5u: goto L_08924020;
    case 6u: goto L_08924028;
    case 7u: goto L_08924030;
    case 8u: goto L_08924038;
    case 9u: goto L_08924044;
    case 10u: goto L_08924054;
    case 11u: goto L_0892405C;
    case 12u: goto L_08924068;
    case 13u: goto L_08924070;
    case 14u: goto L_08924078;
    case 15u: goto L_08924080;
    case 16u: goto L_08924088;
    case 17u: goto L_08924090;
    case 18u: goto L_08924098;
    case 19u: goto L_089240A0;
    case 20u: goto L_089240B8;
    case 21u: goto L_089240C0;
    case 22u: goto L_089240C8;
    case 23u: goto L_089240D4;
    case 24u: goto L_089240DC;
    case 25u: goto L_089240E4;
    case 26u: goto L_089240EC;
    case 27u: goto L_089240F4;
    case 28u: goto L_089240FC;
    case 29u: goto L_08924104;
    case 30u: goto L_0892410C;
    case 31u: goto L_08924114;
    case 32u: goto L_0892411C;
    case 33u: goto L_08924124;
    case 34u: goto L_0892412C;
    case 35u: goto L_08924134;
    case 36u: goto L_0892413C;
    case 37u: goto L_08924144;
    case 38u: goto L_0892414C;
    case 39u: goto L_08924154;
    case 40u: goto L_0892415C;
    case 41u: goto L_08924164;
    case 42u: goto L_0892416C;
    case 43u: goto L_08924174;
    case 44u: goto L_0892417C;
    case 45u: goto L_08924184;
    case 46u: goto L_0892418C;
    case 47u: goto L_08924194;
    case 48u: goto L_0892419C;
    case 49u: goto L_089241A4;
    case 50u: goto L_089241AC;
    case 51u: goto L_089241B4;
    case 52u: goto L_089241BC;
    case 53u: goto L_089241C4;
    case 54u: goto L_089241CC;
    case 55u: goto L_089241D8;
    case 56u: goto L_089241E0;
    case 57u: goto L_089241F0;
    case 58u: goto L_08924200;
    case 59u: goto L_08924208;
    case 60u: goto L_08924210;
    case 61u: goto L_08924218;
    case 62u: goto L_08924220;
    case 63u: goto L_0892422C;
    case 64u: goto L_08924234;
    case 65u: goto L_08924240;
    case 66u: goto L_08924264;
    case 67u: goto L_0892426C;
    case 68u: goto L_0892427C;
    case 69u: goto L_089242A0;
    case 70u: goto L_089242A8;
    case 71u: goto L_089242B0;
    case 72u: goto L_089242BC;
    case 73u: goto L_089242C8;
    case 74u: goto L_089242E0;
    case 75u: goto L_089242E8;
    case 76u: goto L_08924304;
    case 77u: goto L_08924318;
    case 78u: goto L_08924324;
    case 79u: goto L_08924328;
    case 80u: goto L_08924330;
    case 81u: goto L_0892433C;
    case 82u: goto L_08924348;
    case 83u: goto L_08924358;
    case 84u: goto L_08924360;
    case 85u: goto L_08924370;
    case 86u: goto L_08924380;
    case 87u: goto L_08924388;
    case 88u: goto L_089243A4;
    case 89u: goto L_089243AC;
    case 90u: goto L_089243E0;
    case 91u: goto L_08924410;
    case 92u: goto L_08924458;
    case 93u: goto L_08924498;
    case 94u: goto L_089244A0;
    case 95u: goto L_089244A8;
    case 96u: goto L_089244B0;
    case 97u: goto L_089244B8;
    case 98u: goto L_089244C0;
    case 99u: goto L_089244C8;
    case 100u: goto L_089244D4;
    case 101u: goto L_089244DC;
    case 102u: goto L_089244E8;
    case 103u: goto L_089244F0;
    case 104u: goto L_089244FC;
    case 105u: goto L_08924510;
    case 106u: goto L_08924518;
    case 107u: goto L_08924520;
    case 108u: goto L_08924528;
    case 109u: goto L_08924530;
    case 110u: goto L_08924538;
    case 111u: goto L_08924540;
    case 112u: goto L_08924548;
    case 113u: goto L_08924550;
    case 114u: goto L_08924558;
    case 115u: goto L_08924560;
    case 116u: goto L_08924568;
    case 117u: goto L_08924570;
    case 118u: goto L_08924584;
    case 119u: goto L_089245A0;
    case 120u: goto L_089245AC;
    case 121u: goto L_089245B4;
    case 122u: goto L_089245C4;
    case 123u: goto L_089245D4;
    case 124u: goto L_089245E0;
    case 125u: goto L_089245EC;
    case 126u: goto L_089245FC;
    case 127u: goto L_08924608;
    case 128u: goto L_08924610;
    case 129u: goto L_0892461C;
    case 130u: goto L_08924624;
    case 131u: goto L_0892462C;
    case 132u: goto L_08924634;
    case 133u: goto L_0892463C;
    case 134u: goto L_08924648;
    case 135u: goto L_08924650;
    case 136u: goto L_08924660;
    case 137u: goto L_08924668;
    case 138u: goto L_08924670;
    case 139u: goto L_0892468C;
    case 140u: goto L_08924694;
    case 141u: goto L_089246AC;
    case 142u: goto L_089246BC;
    case 143u: goto L_089246C0;
    case 144u: goto L_089246E4;
    case 145u: goto L_08924728;
    case 146u: goto L_08924760;
    case 147u: goto L_0892476C;
    case 148u: goto L_08924774;
    case 149u: goto L_0892477C;
    case 150u: goto L_08924784;
    case 151u: goto L_0892478C;
    case 152u: goto L_08924794;
    case 153u: goto L_089247A4;
    case 154u: goto L_089247C4;
    case 155u: goto L_089247CC;
    case 156u: goto L_089247D4;
    case 157u: goto L_08924820;
    case 158u: goto L_08924828;
    case 159u: goto L_0892483C;
    case 160u: goto L_0892484C;
    case 161u: goto L_0892485C;
    case 162u: goto L_08924864;
    case 163u: goto L_08924870;
    case 164u: goto L_08924878;
    case 165u: goto L_08924888;
    case 166u: goto L_0892489C;
    case 167u: goto L_089248AC;
    case 168u: goto L_089248B4;
    case 169u: goto L_089248CC;
    case 170u: goto L_089248D4;
    case 171u: goto L_089248DC;
    case 172u: goto L_089248E4;
    case 173u: goto L_089248EC;
    case 174u: goto L_089248F4;
    case 175u: goto L_089248FC;
    case 176u: goto L_08924904;
    case 177u: goto L_08924914;
    case 178u: goto L_0892491C;
    case 179u: goto L_08924924;
    case 180u: goto L_08924930;
    case 181u: goto L_08924938;
    case 182u: goto L_08924940;
    case 183u: goto L_08924948;
    case 184u: goto L_08924954;
    case 185u: goto L_08924968;
    case 186u: goto L_08924980;
    case 187u: goto L_08924990;
    case 188u: goto L_089249A0;
    case 189u: goto L_089249B0;
    case 190u: goto L_089249C0;
    case 191u: goto L_089249C4;
    case 192u: goto L_089249C8;
    case 193u: goto L_089249D0;
    case 194u: goto L_089249E0;
    case 195u: goto L_089249E8;
    case 196u: goto L_089249F4;
    case 197u: goto L_08924A04;
    case 198u: goto L_08924A10;
    case 199u: goto L_08924A18;
    case 200u: goto L_08924A30;
    case 201u: goto L_08924A44;
    case 202u: goto L_08924A54;
    case 203u: goto L_08924A6C;
    case 204u: goto L_08924A80;
    case 205u: goto L_08924A8C;
    case 206u: goto L_08924A94;
    case 207u: goto L_08924AA4;
    case 208u: goto L_08924AAC;
    case 209u: goto L_08924AB4;
    case 210u: goto L_08924AC0;
    case 211u: goto L_08924ACC;
    case 212u: goto L_08924AD8;
    case 213u: goto L_08924AE8;
    case 214u: goto L_08924AF0;
    case 215u: goto L_08924AF8;
    case 216u: goto L_08924B0C;
    case 217u: goto L_08924B14;
    case 218u: goto L_08924B1C;
    case 219u: goto L_08924B2C;
    case 220u: goto L_08924B30;
    case 221u: goto L_08924B38;
    case 222u: goto L_08924B40;
    case 223u: goto L_08924B48;
    case 224u: goto L_08924B68;
    case 225u: goto L_08924B7C;
    case 226u: goto L_08924B8C;
    case 227u: goto L_08924B9C;
    case 228u: goto L_08924BDC;
    case 229u: goto L_08924BE4;
    case 230u: goto L_08924BF0;
    case 231u: goto L_08924BF8;
    case 232u: goto L_08924C00;
    case 233u: goto L_08924C08;
    case 234u: goto L_08924C10;
    case 235u: goto L_08924C18;
    case 236u: goto L_08924C20;
    case 237u: goto L_08924C30;
    case 238u: goto L_08924C3C;
    case 239u: goto L_08924C48;
    case 240u: goto L_08924C50;
    case 241u: goto L_08924C58;
    case 242u: goto L_08924C64;
    case 243u: goto L_08924C6C;
    case 244u: goto L_08924C74;
    case 245u: goto L_08924C7C;
    case 246u: goto L_08924C90;
    case 247u: goto L_08924CB4;
    case 248u: goto L_08924CD8;
    case 249u: goto L_08924CE4;
    case 250u: goto L_08924CEC;
    case 251u: goto L_08924D04;
    case 252u: goto L_08924D10;
    case 253u: goto L_08924D28;
    case 254u: goto L_08924D64;
    case 255u: goto L_08924D74;
    case 256u: goto L_08924D7C;
    case 257u: goto L_08924D90;
    case 258u: goto L_08924DA4;
    case 259u: goto L_08924DBC;
    case 260u: goto L_08924DC4;
    case 261u: goto L_08924DCC;
    case 262u: goto L_08924DD4;
    case 263u: goto L_08924DDC;
    case 264u: goto L_08924DE0;
    case 265u: goto L_08924DF0;
    case 266u: goto L_08924E04;
    case 267u: goto L_08924E18;
    case 268u: goto L_08924E20;
    case 269u: goto L_08924E28;
    case 270u: goto L_08924E30;
    case 271u: goto L_08924E58;
    case 272u: goto L_08924E80;
    case 273u: goto L_08924E98;
    case 274u: goto L_08924EC8;
    case 275u: goto L_08924ED4;
    case 276u: goto L_08924EDC;
    case 277u: goto L_08924EE8;
    case 278u: goto L_08924EF0;
    case 279u: goto L_08924F00;
    case 280u: goto L_08924F08;
    case 281u: goto L_08924F10;
    case 282u: goto L_08924F28;
    case 283u: goto L_08924F30;
    case 284u: goto L_08924F38;
    case 285u: goto L_08924F50;
    case 286u: goto L_08924F68;
    case 287u: goto L_08924F78;
    case 288u: goto L_08924F88;
    case 289u: goto L_08924F94;
    case 290u: goto L_08924FA4;
    case 291u: goto L_08924FA8;
    case 292u: goto L_08924FB4;
    case 293u: goto L_08924FC4;
    case 294u: goto L_08924FD4;
    case 295u: goto L_08924FD8;
    case 296u: goto L_08924FE0;
    case 297u: goto L_08924FE4;
    case 298u: goto L_08924FF0;
    case 299u: goto L_08925000;
    case 300u: goto L_08925004;
    case 301u: goto L_0892500C;
    case 302u: goto L_08925014;
    case 303u: goto L_08925020;
    case 304u: goto L_08925028;
    case 305u: goto L_0892503C;
    case 306u: goto L_08925044;
    case 307u: goto L_08925054;
    case 308u: goto L_08925060;
    case 309u: goto L_08925070;
    case 310u: goto L_08925074;
    case 311u: goto L_08925080;
    case 312u: goto L_0892508C;
    case 313u: goto L_08925090;
    case 314u: goto L_0892509C;
    case 315u: goto L_089250A4;
    case 316u: goto L_089250AC;
    case 317u: goto L_089250C8;
    case 318u: goto L_089250D4;
    case 319u: goto L_089250D8;
    case 320u: goto L_089250E4;
    case 321u: goto L_089250EC;
    case 322u: goto L_089250F4;
    case 323u: goto L_08925104;
    case 324u: goto L_0892510C;
    case 325u: goto L_08925114;
    case 326u: goto L_08925118;
    case 327u: goto L_08925128;
    case 328u: goto L_08925138;
    case 329u: goto L_08925140;
    case 330u: goto L_08925148;
    case 331u: goto L_08925154;
    case 332u: goto L_08925168;
    case 333u: goto L_08925178;
    case 334u: goto L_08925184;
    case 335u: goto L_08925194;
    case 336u: goto L_08925198;
    case 337u: goto L_089251A0;
    case 338u: goto L_089251AC;
    case 339u: goto L_089251BC;
    case 340u: goto L_089251C8;
    case 341u: goto L_089251D8;
    case 342u: goto L_089251F0;
    case 343u: goto L_08925204;
    case 344u: goto L_0892520C;
    case 345u: goto L_0892521C;
    case 346u: goto L_0892522C;
    case 347u: goto L_0892523C;
    case 348u: goto L_0892524C;
    case 349u: goto L_0892525C;
    case 350u: goto L_08925260;
    case 351u: goto L_08925268;
    case 352u: goto L_08925270;
    case 353u: goto L_0892527C;
    case 354u: goto L_08925290;
    case 355u: goto L_08925298;
    case 356u: goto L_089252AC;
    case 357u: goto L_089252B4;
    case 358u: goto L_089252BC;
    case 359u: goto L_089252D0;
    case 360u: goto L_089252D8;
    case 361u: goto L_089252E4;
    case 362u: goto L_089252EC;
    case 363u: goto L_08925300;
    case 364u: goto L_08925308;
    case 365u: goto L_08925318;
    case 366u: goto L_08925320;
    case 367u: goto L_08925328;
    case 368u: goto L_08925334;
    case 369u: goto L_08925348;
    case 370u: goto L_08925350;
    case 371u: goto L_08925364;
    case 372u: goto L_0892536C;
    case 373u: goto L_08925374;
    case 374u: goto L_08925388;
    case 375u: goto L_08925390;
    case 376u: goto L_0892539C;
    case 377u: goto L_089253A4;
    case 378u: goto L_089253B8;
    case 379u: goto L_089253C0;
    case 380u: goto L_089253C8;
    case 381u: goto L_089253D0;
    case 382u: goto L_089253D8;
    case 383u: goto L_089253F8;
    case 384u: goto L_08925448;
    case 385u: goto L_08925450;
    case 386u: goto L_08925458;
    case 387u: goto L_08925460;
    case 388u: goto L_08925468;
    case 389u: goto L_08925478;
    case 390u: goto L_0892547C;
    case 391u: goto L_089254A8;
    case 392u: goto L_089254B0;
    case 393u: goto L_089254CC;
    case 394u: goto L_089254D4;
    case 395u: goto L_089254DC;
    case 396u: goto L_089254E4;
    case 397u: goto L_08925500;
    case 398u: goto L_08925508;
    case 399u: goto L_08925510;
    case 400u: goto L_08925518;
    case 401u: goto L_0892551C;
    case 402u: goto L_0892552C;
    case 403u: goto L_08925538;
    case 404u: goto L_0892554C;
    case 405u: goto L_08925550;
    case 406u: goto L_0892555C;
    case 407u: goto L_08925564;
    case 408u: goto L_089255A0;
    case 409u: goto L_089255D4;
    case 410u: goto L_089255DC;
    case 411u: goto L_08925600;
    case 412u: goto L_08925618;
    case 413u: goto L_08925630;
    case 414u: goto L_08925654;
    case 415u: goto L_08925678;
    case 416u: goto L_08925690;
    case 417u: goto L_0892569C;
    case 418u: goto L_089256A8;
    case 419u: goto L_089256B4;
    case 420u: goto L_089256CC;
    case 421u: goto L_089256E0;
    case 422u: goto L_08925704;
    case 423u: goto L_08925728;
    case 424u: goto L_08925740;
    case 425u: goto L_0892574C;
    case 426u: goto L_08925758;
    case 427u: goto L_0892576C;
    case 428u: goto L_08925774;
    case 429u: goto L_08925780;
    case 430u: goto L_0892578C;
    case 431u: goto L_089257A0;
    case 432u: goto L_089257A8;
    case 433u: goto L_089257B4;
    case 434u: goto L_089257C0;
    case 435u: goto L_089257D4;
    case 436u: goto L_089257E8;
    case 437u: goto L_0892580C;
    case 438u: goto L_08925830;
    case 439u: goto L_08925848;
    case 440u: goto L_08925854;
    case 441u: goto L_08925860;
    case 442u: goto L_08925874;
    case 443u: goto L_0892587C;
    case 444u: goto L_08925888;
    case 445u: goto L_08925894;
    case 446u: goto L_089258A8;
    case 447u: goto L_089258B4;
    case 448u: goto L_089258BC;
    case 449u: goto L_089258C8;
    case 450u: goto L_089258D4;
    case 451u: goto L_089258E0;
    case 452u: goto L_08925908;
    case 453u: goto L_0892591C;
    case 454u: goto L_0892592C;
    case 455u: goto L_08925934;
    case 456u: goto L_08925940;
    case 457u: goto L_0892594C;
    case 458u: goto L_08925958;
    case 459u: goto L_0892597C;
    case 460u: goto L_08925988;
    case 461u: goto L_08925994;
    case 462u: goto L_089259A4;
    case 463u: goto L_089259B0;
    case 464u: goto L_089259C4;
    case 465u: goto L_089259D8;
    case 466u: goto L_089259E8;
    case 467u: goto L_089259FC;
    case 468u: goto L_08925A24;
    case 469u: goto L_08925A44;
    case 470u: goto L_08925A50;
    case 471u: goto L_08925A68;
    case 472u: goto L_08925A7C;
    case 473u: goto L_08925A94;
    case 474u: goto L_08925AD0;
    case 475u: goto L_08925B44;
    case 476u: goto L_08925BAC;
    case 477u: goto L_08925C24;
    case 478u: goto L_08925C9C;
    case 479u: goto L_08925CBC;
    case 480u: goto L_08925CCC;
    case 481u: goto L_08925CF4;
    case 482u: goto L_08925D08;
    case 483u: goto L_08925D28;
    case 484u: goto L_08925D48;
    case 485u: goto L_08925D9C;
    case 486u: goto L_08925DA4;
    case 487u: goto L_08925DC8;
    case 488u: goto L_08925DEC;
    case 489u: goto L_08925DF8;
    case 490u: goto L_08925E14;
    case 491u: goto L_08925E2C;
    case 492u: goto L_08925E38;
    case 493u: goto L_08925E54;
    case 494u: goto L_08925E5C;
    case 495u: goto L_08925E6C;
    case 496u: goto L_08925E7C;
    case 497u: goto L_08925E8C;
    case 498u: goto L_08925E9C;
    case 499u: goto L_08925EAC;
    case 500u: goto L_08925EB4;
    case 501u: goto L_08925EC8;
    case 502u: goto L_08925ED0;
    case 503u: goto L_08925ED8;
    case 504u: goto L_08925EE8;
    case 505u: goto L_08925EF0;
    case 506u: goto L_08925EF4;
    case 507u: goto L_08925F00;
    case 508u: goto L_08925F10;
    case 509u: goto L_08925F2C;
    case 510u: goto L_08925F38;
    case 511u: goto L_08925F40;
    case 512u: goto L_08925F48;
    case 513u: goto L_08925FC8;
    case 514u: goto L_08925FE8;
    case 515u: goto L_08926014;
    case 516u: goto L_08926040;
    case 517u: goto L_08926050;
    case 518u: goto L_08926088;
    case 519u: goto L_089260AC;
    case 520u: goto L_089260B4;
    case 521u: goto L_089260C0;
    case 522u: goto L_089260D0;
    case 523u: goto L_089260E0;
    case 524u: goto L_089260F4;
    case 525u: goto L_08926108;
    case 526u: goto L_08926110;
    case 527u: goto L_08926118;
    case 528u: goto L_0892612C;
    case 529u: goto L_0892613C;
    case 530u: goto L_08926144;
    case 531u: goto L_0892614C;
    case 532u: goto L_08926190;
    case 533u: goto L_089261A0;
    case 534u: goto L_089261B4;
    case 535u: goto L_089261B8;
    case 536u: goto L_089261D8;
    case 537u: goto L_089261E0;
    case 538u: goto L_08926200;
    case 539u: goto L_08926208;
    case 540u: goto L_0892620C;
    case 541u: goto L_089262C4;
    case 542u: goto L_089262D4;
    case 543u: goto L_089262E0;
    case 544u: goto L_089262E8;
    case 545u: goto L_089262F4;
    case 546u: goto L_0892630C;
    case 547u: goto L_08926314;
    case 548u: goto L_08926328;
    case 549u: goto L_08926334;
    case 550u: goto L_089263CC;
    case 551u: goto L_089263DC;
    case 552u: goto L_089263F0;
    case 553u: goto L_089263FC;
    case 554u: goto L_08926404;
    case 555u: goto L_0892640C;
    case 556u: goto L_08926414;
    case 557u: goto L_0892641C;
    case 558u: goto L_08926428;
    case 559u: goto L_089264F0;
    case 560u: goto L_089264FC;
    case 561u: goto L_08926510;
    case 562u: goto L_08926520;
    case 563u: goto L_08926528;
    case 564u: goto L_0892652C;
    case 565u: goto L_08926540;
    case 566u: goto L_08926560;
    case 567u: goto L_089265A4;
    case 568u: goto L_089265DC;
    case 569u: goto L_089265F0;
    case 570u: goto L_089265FC;
    case 571u: goto L_0892660C;
    case 572u: goto L_08926618;
    case 573u: goto L_08926620;
    case 574u: goto L_08926628;
    case 575u: goto L_08926630;
    case 576u: goto L_08926640;
    case 577u: goto L_08926654;
    case 578u: goto L_08926660;
    case 579u: goto L_08926668;
    case 580u: goto L_08926670;
    case 581u: goto L_08926680;
    case 582u: goto L_0892668C;
    case 583u: goto L_08926694;
    case 584u: goto L_08926698;
    case 585u: goto L_089266A4;
    case 586u: goto L_089266B0;
    case 587u: goto L_089266B8;
    case 588u: goto L_089266D8;
    case 589u: goto L_08926768;
    case 590u: goto L_0892677C;
    case 591u: goto L_08926794;
    case 592u: goto L_089267A4;
    case 593u: goto L_089267AC;
    case 594u: goto L_089267B8;
    case 595u: goto L_089267C0;
    case 596u: goto L_089267C8;
    case 597u: goto L_089267D8;
    case 598u: goto L_089267E8;
    case 599u: goto L_0892680C;
    case 600u: goto L_08926818;
    case 601u: goto L_08926820;
    case 602u: goto L_08926828;
    case 603u: goto L_08926838;
    case 604u: goto L_08926848;
    case 605u: goto L_08926858;
    case 606u: goto L_08926860;
    case 607u: goto L_0892686C;
    case 608u: goto L_08926878;
    case 609u: goto L_08926888;
    case 610u: goto L_0892689C;
    case 611u: goto L_089268B0;
    case 612u: goto L_08926928;
    case 613u: goto L_08926930;
    case 614u: goto L_08926980;
    case 615u: goto L_08926988;
    case 616u: goto L_089269B8;
    case 617u: goto L_089269C0;
    case 618u: goto L_089269CC;
    case 619u: goto L_089269D0;
    case 620u: goto L_089269E0;
    case 621u: goto L_089269F0;
    case 622u: goto L_089269F8;
    case 623u: goto L_08926A08;
    case 624u: goto L_08926A14;
    case 625u: goto L_08926A24;
    case 626u: goto L_08926A40;
    case 627u: goto L_08926A48;
    case 628u: goto L_08926A50;
    case 629u: goto L_08926A58;
    case 630u: goto L_08926A60;
    case 631u: goto L_08926A68;
    case 632u: goto L_08926A70;
    case 633u: goto L_08926A80;
    case 634u: goto L_08926A8C;
    case 635u: goto L_08926A94;
    case 636u: goto L_08926A9C;
    case 637u: goto L_08926AAC;
    case 638u: goto L_08926AB0;
    case 639u: goto L_08926B10;
    case 640u: goto L_08926B28;
    case 641u: goto L_08926B30;
    case 642u: goto L_08926B40;
    case 643u: goto L_08926B54;
    case 644u: goto L_08926B60;
    case 645u: goto L_08926B6C;
    case 646u: goto L_08926B74;
    case 647u: goto L_08926B80;
    case 648u: goto L_08926B8C;
    case 649u: goto L_08926B90;
    case 650u: goto L_08926B9C;
    case 651u: goto L_08926BA4;
    case 652u: goto L_08926BB8;
    case 653u: goto L_08926BC0;
    case 654u: goto L_08926BD4;
    case 655u: goto L_08926BF8;
    case 656u: goto L_08926C1C;
    case 657u: goto L_08926C28;
    case 658u: goto L_08926C34;
    case 659u: goto L_08926C3C;
    case 660u: goto L_08926C50;
    case 661u: goto L_08926C7C;
    case 662u: goto L_08926C84;
    case 663u: goto L_08926C94;
    case 664u: goto L_08926C9C;
    case 665u: goto L_08926CE4;
    case 666u: goto L_08926CEC;
    case 667u: goto L_08926CF8;
    case 668u: goto L_08926D04;
    case 669u: goto L_08926D14;
    case 670u: goto L_08926D24;
    case 671u: goto L_08926D2C;
    case 672u: goto L_08926D3C;
    case 673u: goto L_08926D44;
    case 674u: goto L_08926D4C;
    case 675u: goto L_08926D54;
    case 676u: goto L_08926D5C;
    case 677u: goto L_08926D64;
    case 678u: goto L_08926D6C;
    case 679u: goto L_08926D7C;
    case 680u: goto L_08926D8C;
    case 681u: goto L_08926D98;
    case 682u: goto L_08926DA0;
    case 683u: goto L_08926DA8;
    case 684u: goto L_08926DB0;
    case 685u: goto L_08926DB8;
    case 686u: goto L_08926DBC;
    case 687u: goto L_08926DC4;
    case 688u: goto L_08926DCC;
    case 689u: goto L_08926DDC;
    case 690u: goto L_08926DE4;
    case 691u: goto L_08926E30;
    case 692u: goto L_08926E44;
    case 693u: goto L_08926E50;
    case 694u: goto L_08926E70;
    case 695u: goto L_08926E7C;
    case 696u: goto L_08926E84;
    case 697u: goto L_08926E90;
    case 698u: goto L_08926EA0;
    case 699u: goto L_08926EB0;
    case 700u: goto L_08926EB8;
    case 701u: goto L_08926EC0;
    case 702u: goto L_08926EC8;
    case 703u: goto L_08926EDC;
    case 704u: goto L_08926F00;
    case 705u: goto L_08926F08;
    case 706u: goto L_08926F18;
    case 707u: goto L_08926F24;
    case 708u: goto L_08926F2C;
    case 709u: goto L_08926F38;
    case 710u: goto L_08926F40;
    case 711u: goto L_08926F4C;
    case 712u: goto L_08926F64;
    case 713u: goto L_08926F70;
    case 714u: goto L_08926F80;
    case 715u: goto L_08926F90;
    case 716u: goto L_08926F9C;
    case 717u: goto L_08926FA4;
    case 718u: goto L_08926FB4;
    case 719u: goto L_08926FEC;
    case 720u: goto L_0892701C;
    case 721u: goto L_0892704C;
    case 722u: goto L_0892706C;
    case 723u: goto L_0892707C;
    case 724u: goto L_089270A8;
    case 725u: goto L_089270B0;
    case 726u: goto L_089270DC;
    case 727u: goto L_089270E8;
    case 728u: goto L_089270F4;
    case 729u: goto L_089270FC;
    case 730u: goto L_08927104;
    case 731u: goto L_08927110;
    case 732u: goto L_08927120;
    case 733u: goto L_08927134;
    case 734u: goto L_08927138;
    case 735u: goto L_0892714C;
    case 736u: goto L_08927168;
    case 737u: goto L_08927170;
    case 738u: goto L_08927188;
    case 739u: goto L_0892719C;
    case 740u: goto L_089271A4;
    case 741u: goto L_089271BC;
    case 742u: goto L_089271C8;
    case 743u: goto L_089271DC;
    case 744u: goto L_089271E4;
    case 745u: goto L_089271EC;
    case 746u: goto L_089271F4;
    case 747u: goto L_089271FC;
    case 748u: goto L_0892721C;
    case 749u: goto L_08927228;
    case 750u: goto L_08927240;
    case 751u: goto L_08927248;
    case 752u: goto L_08927260;
    case 753u: goto L_08927268;
    case 754u: goto L_08927270;
    case 755u: goto L_0892727C;
    case 756u: goto L_08927294;
    case 757u: goto L_0892729C;
    case 758u: goto L_089272BC;
    case 759u: goto L_089272D0;
    case 760u: goto L_089272E4;
    case 761u: goto L_089272F0;
    case 762u: goto L_089272F4;
    case 763u: goto L_08927300;
    case 764u: goto L_0892730C;
    case 765u: goto L_08927314;
    case 766u: goto L_0892731C;
    case 767u: goto L_0892732C;
    case 768u: goto L_08927334;
    case 769u: goto L_08927340;
    case 770u: goto L_0892738C;
    case 771u: goto L_089273CC;
    case 772u: goto L_089273D4;
    case 773u: goto L_08927408;
    case 774u: goto L_08927410;
    case 775u: goto L_0892741C;
    case 776u: goto L_08927424;
    case 777u: goto L_08927438;
    case 778u: goto L_0892744C;
    case 779u: goto L_0892745C;
    case 780u: goto L_0892746C;
    case 781u: goto L_08927474;
    case 782u: goto L_0892747C;
    case 783u: goto L_08927488;
    case 784u: goto L_08927490;
    case 785u: goto L_08927498;
    case 786u: goto L_089274A8;
    case 787u: goto L_089274B0;
    case 788u: goto L_089274CC;
    case 789u: goto L_089274D8;
    case 790u: goto L_089274E0;
    case 791u: goto L_089274F0;
    case 792u: goto L_089274FC;
    case 793u: goto L_08927504;
    case 794u: goto L_0892750C;
    case 795u: goto L_08927518;
    case 796u: goto L_08927520;
    case 797u: goto L_0892752C;
    case 798u: goto L_08927538;
    case 799u: goto L_08927540;
    case 800u: goto L_08927548;
    case 801u: goto L_08927554;
    case 802u: goto L_08927560;
    case 803u: goto L_08927568;
    case 804u: goto L_08927578;
    case 805u: goto L_08927594;
    case 806u: goto L_089275A4;
    case 807u: goto L_089275B8;
    case 808u: goto L_089275C4;
    case 809u: goto L_089275D0;
    case 810u: goto L_089275D8;
    case 811u: goto L_089275EC;
    case 812u: goto L_089275FC;
    case 813u: goto L_0892760C;
    case 814u: goto L_08927624;
    case 815u: goto L_0892762C;
    case 816u: goto L_08927634;
    case 817u: goto L_08927640;
    case 818u: goto L_08927648;
    case 819u: goto L_08927650;
    case 820u: goto L_0892765C;
    case 821u: goto L_089276A0;
    case 822u: goto L_089276AC;
    case 823u: goto L_089276BC;
    case 824u: goto L_089276CC;
    case 825u: goto L_089276D8;
    case 826u: goto L_089276E4;
    case 827u: goto L_089276EC;
    case 828u: goto L_089276F4;
    case 829u: goto L_08927704;
    case 830u: goto L_0892770C;
    case 831u: goto L_08927718;
    case 832u: goto L_08927724;
    case 833u: goto L_08927730;
    case 834u: goto L_08927738;
    case 835u: goto L_08927740;
    case 836u: goto L_0892775C;
    case 837u: goto L_08927778;
    case 838u: goto L_08927780;
    case 839u: goto L_08927794;
    case 840u: goto L_089277B4;
    case 841u: goto L_089277D0;
    case 842u: goto L_089277E8;
    case 843u: goto L_089277F4;
    case 844u: goto L_08927804;
    case 845u: goto L_08927810;
    case 846u: goto L_0892781C;
    case 847u: goto L_08927828;
    case 848u: goto L_08927830;
    case 849u: goto L_08927838;
    case 850u: goto L_08927840;
    case 851u: goto L_08927848;
    case 852u: goto L_08927850;
    case 853u: goto L_08927858;
    case 854u: goto L_08927864;
    case 855u: goto L_08927884;
    case 856u: goto L_0892788C;
    case 857u: goto L_08927894;
    case 858u: goto L_0892789C;
    case 859u: goto L_089278AC;
    case 860u: goto L_089278BC;
    case 861u: goto L_089278C8;
    case 862u: goto L_089278DC;
    case 863u: goto L_089278F4;
    case 864u: goto L_08927910;
    case 865u: goto L_08927920;
    case 866u: goto L_08927928;
    case 867u: goto L_08927930;
    case 868u: goto L_0892793C;
    case 869u: goto L_08927950;
    case 870u: goto L_08927968;
    case 871u: goto L_08927984;
    case 872u: goto L_08927998;
    case 873u: goto L_089279A4;
    case 874u: goto L_089279B8;
    case 875u: goto L_089279C0;
    case 876u: goto L_089279CC;
    case 877u: goto L_089279D4;
    case 878u: goto L_089279DC;
    case 879u: goto L_089279EC;
    case 880u: goto L_089279F4;
    case 881u: goto L_08927A04;
    case 882u: goto L_08927A10;
    case 883u: goto L_08927A1C;
    case 884u: goto L_08927A2C;
    case 885u: goto L_08927A3C;
    case 886u: goto L_08927A4C;
    case 887u: goto L_08927A5C;
    case 888u: goto L_08927A64;
    case 889u: goto L_08927A78;
    case 890u: goto L_08927A84;
    case 891u: goto L_08927A94;
    case 892u: goto L_08927AA0;
    case 893u: goto L_08927AB0;
    case 894u: goto L_08927ACC;
    case 895u: goto L_08927ADC;
    case 896u: goto L_08927AF8;
    case 897u: goto L_08927B08;
    case 898u: goto L_08927B24;
    case 899u: goto L_08927B34;
    case 900u: goto L_08927B3C;
    case 901u: goto L_08927B44;
    case 902u: goto L_08927B50;
    case 903u: goto L_08927B60;
    case 904u: goto L_08927B88;
    case 905u: goto L_08927B94;
    case 906u: goto L_08927BA0;
    case 907u: goto L_08927BA8;
    case 908u: goto L_08927BB0;
    case 909u: goto L_08927BC0;
    case 910u: goto L_08927BC8;
    case 911u: goto L_08927BE4;
    case 912u: goto L_08927BF0;
    case 913u: goto L_08927BFC;
    case 914u: goto L_08927C08;
    case 915u: goto L_08927C18;
    case 916u: goto L_08927C28;
    case 917u: goto L_08927C38;
    case 918u: goto L_08927C48;
    case 919u: goto L_08927C4C;
    case 920u: goto L_08927C54;
    case 921u: goto L_08927C5C;
    case 922u: goto L_08927C70;
    case 923u: goto L_08927C7C;
    case 924u: goto L_08927C88;
    case 925u: goto L_08927C8C;
    case 926u: goto L_08927C98;
    case 927u: goto L_08927CA4;
    case 928u: goto L_08927CB0;
    case 929u: goto L_08927CB8;
    case 930u: goto L_08927CC8;
    case 931u: goto L_08927CD0;
    case 932u: goto L_08927CDC;
    case 933u: goto L_08927CE8;
    case 934u: goto L_08927CF8;
    case 935u: goto L_08927D08;
    case 936u: goto L_08927D18;
    case 937u: goto L_08927D20;
    case 938u: goto L_08927D30;
    case 939u: goto L_08927D3C;
    case 940u: goto L_08927D44;
    case 941u: goto L_08927D54;
    case 942u: goto L_08927D60;
    case 943u: goto L_08927D68;
    case 944u: goto L_08927D78;
    case 945u: goto L_08927D80;
    case 946u: goto L_08927D88;
    case 947u: goto L_08927D98;
    case 948u: goto L_08927DA0;
    case 949u: goto L_08927DB0;
    case 950u: goto L_08927DB8;
    case 951u: goto L_08927DC4;
    case 952u: goto L_08927DD0;
    case 953u: goto L_08927DDC;
    case 954u: goto L_08927DE4;
    case 955u: goto L_08927DEC;
    case 956u: goto L_08927DF8;
    case 957u: goto L_08927E04;
    case 958u: goto L_08927E14;
    case 959u: goto L_08927E24;
    case 960u: goto L_08927E34;
    case 961u: goto L_08927E44;
    case 962u: goto L_08927E48;
    case 963u: goto L_08927E50;
    case 964u: goto L_08927E58;
    case 965u: goto L_08927E68;
    case 966u: goto L_08927E70;
    case 967u: goto L_08927E78;
    case 968u: goto L_08927E88;
    case 969u: goto L_08927EAC;
    case 970u: goto L_08927EB8;
    case 971u: goto L_08927EC8;
    case 972u: goto L_08927EDC;
    case 973u: goto L_08927EF4;
    case 974u: goto L_08927EFC;
    case 975u: goto L_08927F08;
    case 976u: goto L_08927F24;
    case 977u: goto L_08927F2C;
    case 978u: goto L_08927F34;
    case 979u: goto L_08927F40;
    case 980u: goto L_08927F48;
    case 981u: goto L_08927F58;
    case 982u: goto L_08927F6C;
    case 983u: goto L_08927F74;
    case 984u: goto L_08927F7C;
    case 985u: goto L_08927F84;
    case 986u: goto L_08927F8C;
    case 987u: goto L_08927F98;
    case 988u: goto L_08927FA0;
    case 989u: goto L_08927FB0;
    case 990u: goto L_08927FBC;
    case 991u: goto L_08927FD4;
    case 992u: goto L_08927FE0;
    case 993u: goto L_08927FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08924000:
    ctx.gpr[31] = (0x08924008u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem) && ctx.pc == 0x08924008u) goto L_08924008;
    return;
L_08924008:
    ctx.gpr[31] = (0x08924010u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 665u, 0x08917990u>(ctx, &aot_mem) && ctx.pc == 0x08924010u) goto L_08924010;
    return;
L_08924010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924018;
    }
L_08924018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924020;
    }
L_08924020:
    ctx.gpr[31] = (0x08924028u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 309u, 0x088E571Cu>(ctx, &aot_mem) && ctx.pc == 0x08924028u) goto L_08924028;
    return;
L_08924028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924030;
    }
L_08924030:
    ctx.gpr[31] = (0x08924038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 169u, 0x08910A14u>(ctx, &aot_mem) && ctx.pc == 0x08924038u) goto L_08924038;
    return;
L_08924038:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1056), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08924068;
      }
      goto L_08924044;
    }
L_08924044:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08924054u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 36u, 0x088E43E0u>(ctx, &aot_mem) && ctx.pc == 0x08924054u) goto L_08924054;
    return;
L_08924054:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924068;
      }
      goto L_0892405C;
    }
L_0892405C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08924068u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem) && ctx.pc == 0x08924068u) goto L_08924068;
    return;
L_08924068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924070;
    }
L_08924070:
    ctx.gpr[31] = (0x08924078u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 511u, 0x0890652Cu>(ctx, &aot_mem) && ctx.pc == 0x08924078u) goto L_08924078;
    return;
L_08924078:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089240D4;
      }
      goto L_08924080;
    }
L_08924080:
    ctx.gpr[31] = (0x08924088u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 511u, 0x0890652Cu>(ctx, &aot_mem) && ctx.pc == 0x08924088u) goto L_08924088;
    return;
L_08924088:
    ctx.gpr[31] = (0x08924090u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 378u, 0x08905BDCu>(ctx, &aot_mem) && ctx.pc == 0x08924090u) goto L_08924090;
    return;
L_08924090:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089240D4;
      }
      goto L_08924098;
    }
L_08924098:
    ctx.gpr[31] = (0x089240A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 511u, 0x0890652Cu>(ctx, &aot_mem) && ctx.pc == 0x089240A0u) goto L_089240A0;
    return;
L_089240A0:
    ctx.gpr[4] = (16390u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089240B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 627u, 0x089AB048u>(ctx, &aot_mem) && ctx.pc == 0x089240B8u) goto L_089240B8;
    return;
L_089240B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089240D4;
      }
      goto L_089240C0;
    }
L_089240C0:
    ctx.gpr[31] = (0x089240C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 511u, 0x0890652Cu>(ctx, &aot_mem) && ctx.pc == 0x089240C8u) goto L_089240C8;
    return;
L_089240C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089240D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 14u, 0x089380CCu>(ctx, &aot_mem) && ctx.pc == 0x089240D4u) goto L_089240D4;
    return;
L_089240D4:
    ctx.gpr[31] = (0x089240DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 460u, 0x088E3634u>(ctx, &aot_mem) && ctx.pc == 0x089240DCu) goto L_089240DC;
    return;
L_089240DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089240E4;
    }
L_089240E4:
    ctx.gpr[31] = (0x089240ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 12u, 0x0890C0DCu>(ctx, &aot_mem) && ctx.pc == 0x089240ECu) goto L_089240EC;
    return;
L_089240EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089240F4;
    }
L_089240F4:
    ctx.gpr[31] = (0x089240FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 260u, 0x0893176Cu>(ctx, &aot_mem) && ctx.pc == 0x089240FCu) goto L_089240FC;
    return;
L_089240FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924104;
    }
L_08924104:
    ctx.gpr[31] = (0x0892410Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 701u, 0x0890713Cu>(ctx, &aot_mem) && ctx.pc == 0x0892410Cu) goto L_0892410C;
    return;
L_0892410C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924114;
    }
L_08924114:
    ctx.gpr[31] = (0x0892411Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x0892411Cu) goto L_0892411C;
    return;
L_0892411C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924124;
    }
L_08924124:
    ctx.gpr[31] = (0x0892412Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 324u, 0x089162D0u>(ctx, &aot_mem) && ctx.pc == 0x0892412Cu) goto L_0892412C;
    return;
L_0892412C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924134;
    }
L_08924134:
    ctx.gpr[31] = (0x0892413Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 731u, 0x08907360u>(ctx, &aot_mem) && ctx.pc == 0x0892413Cu) goto L_0892413C;
    return;
L_0892413C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924144;
    }
L_08924144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_0892414C;
    }
L_0892414C:
    ctx.gpr[31] = (0x08924154u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 437u, 0x089ADBC8u>(ctx, &aot_mem) && ctx.pc == 0x08924154u) goto L_08924154;
    return;
L_08924154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089246E4;
      }
      goto L_0892415C;
    }
L_0892415C:
    ctx.gpr[31] = (0x08924164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 727u, 0x0890730Cu>(ctx, &aot_mem) && ctx.pc == 0x08924164u) goto L_08924164;
    return;
L_08924164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_0892416C;
    }
L_0892416C:
    ctx.gpr[31] = (0x08924174u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 377u, 0x089165E8u>(ctx, &aot_mem) && ctx.pc == 0x08924174u) goto L_08924174;
    return;
L_08924174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_0892417C;
    }
L_0892417C:
    ctx.gpr[31] = (0x08924184u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 784u, 0x0890787Cu>(ctx, &aot_mem) && ctx.pc == 0x08924184u) goto L_08924184;
    return;
L_08924184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_0892418C;
    }
L_0892418C:
    ctx.gpr[31] = (0x08924194u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 435u, 0x0890DCC8u>(ctx, &aot_mem) && ctx.pc == 0x08924194u) goto L_08924194;
    return;
L_08924194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_0892419C;
    }
L_0892419C:
    ctx.gpr[31] = (0x089241A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 155u, 0x088E89D4u>(ctx, &aot_mem) && ctx.pc == 0x089241A4u) goto L_089241A4;
    return;
L_089241A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089241AC;
    }
L_089241AC:
    ctx.gpr[31] = (0x089241B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 940u, 0x0890BBECu>(ctx, &aot_mem) && ctx.pc == 0x089241B4u) goto L_089241B4;
    return;
L_089241B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089241BC;
    }
L_089241BC:
    ctx.gpr[31] = (0x089241C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089241C4u) goto L_089241C4;
    return;
L_089241C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089241CC;
    }
L_089241CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089242B0;
      }
      goto L_089241D8;
    }
L_089241D8:
    ctx.gpr[31] = (0x089241E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x089241E0u) goto L_089241E0;
    return;
L_089241E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1368)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924210;
      }
      goto L_089241F0;
    }
L_089241F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924210;
      }
      goto L_08924200;
    }
L_08924200:
    ctx.gpr[31] = (0x08924208u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem) && ctx.pc == 0x08924208u) goto L_08924208;
    return;
L_08924208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_08924210;
    }
L_08924210:
    ctx.gpr[31] = (0x08924218u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem) && ctx.pc == 0x08924218u) goto L_08924218;
    return;
L_08924218:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892426C;
      }
      goto L_08924220;
    }
L_08924220:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8864));
    ctx.gpr[31] = (0x0892422Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem) && ctx.pc == 0x0892422Cu) goto L_0892422C;
    return;
L_0892422C:
    ctx.gpr[31] = (0x08924234u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08924234u) goto L_08924234;
    return;
L_08924234:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1068));
    ctx.gpr[31] = (0x08924240u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 364u, 0x08905AC8u>(ctx, &aot_mem) && ctx.pc == 0x08924240u) goto L_08924240;
    return;
L_08924240:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1060));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[6]);
    ctx.gpr[31] = (0x08924264u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem) && ctx.pc == 0x08924264u) goto L_08924264;
    return;
L_08924264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242A0;
      }
      goto L_0892426C;
    }
L_0892426C:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(8864));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1084));
    ctx.gpr[31] = (0x0892427Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 15u, 0x089100C0u>(ctx, &aot_mem) && ctx.pc == 0x0892427Cu) goto L_0892427C;
    return;
L_0892427C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[6]);
    ctx.gpr[31] = (0x089242A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 365u, 0x08905AE4u>(ctx, &aot_mem) && ctx.pc == 0x089242A0u) goto L_089242A0;
    return;
L_089242A0:
    ctx.gpr[31] = (0x089242A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 665u, 0x08917990u>(ctx, &aot_mem) && ctx.pc == 0x089242A8u) goto L_089242A8;
    return;
L_089242A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089242E0;
      }
      goto L_089242B0;
    }
L_089242B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089242BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x089242BCu) goto L_089242BC;
    return;
L_089242BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089242C8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x089242C8u) goto L_089242C8;
    return;
L_089242C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089242E0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x089242E0u) goto L_089242E0;
    return;
L_089242E0:
    ctx.gpr[31] = (0x089242E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 702u, 0x08912CECu>(ctx, &aot_mem) && ctx.pc == 0x089242E8u) goto L_089242E8;
    return;
L_089242E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(248));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08924304u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08924304u) goto L_08924304;
    return;
L_08924304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
        goto L_08924328;
    }
    goto L_08924318;
L_08924318:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1935)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924498;
      }
      goto L_08924324;
    }
L_08924324:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    goto L_08924328;
L_08924328:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924498;
      }
      goto L_08924330;
    }
L_08924330:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1935)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924348;
      }
      goto L_0892433C;
    }
L_0892433C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1935)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1935), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08924348;
L_08924348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
      if (branch_taken) {
          goto L_08924498;
      }
      goto L_08924358;
    }
L_08924358:
    ctx.gpr[31] = (0x08924360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08924360u) goto L_08924360;
    return;
L_08924360:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08924370u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 359u, 0x08905A60u>(ctx, &aot_mem) && ctx.pc == 0x08924370u) goto L_08924370;
    return;
L_08924370:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08924380u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 181u, 0x08904BC0u>(ctx, &aot_mem) && ctx.pc == 0x08924380u) goto L_08924380;
    return;
L_08924380:
    ctx.gpr[31] = (0x08924388u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 353u, 0x089059E4u>(ctx, &aot_mem) && ctx.pc == 0x08924388u) goto L_08924388;
    return;
L_08924388:
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08924498;
      }
      goto L_089243A4;
    }
L_089243A4:
    ctx.gpr[31] = (0x089243ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem) && ctx.pc == 0x089243ACu) goto L_089243AC;
    return;
L_089243AC:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15044u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (15897u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089243E0u);
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem) && ctx.pc == 0x089243E0u) goto L_089243E0;
    return;
L_089243E0:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (15333u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24642u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[31] = (0x08924410u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem) && ctx.pc == 0x08924410u) goto L_08924410;
    return;
L_08924410:
    ctx.gpr[4] = (ctx.gpr[2] & 127u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5028)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.gpr[4] = (16512u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08924458u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1124), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 195u, 0x08904CD4u>(ctx, &aot_mem) && ctx.pc == 0x08924458u) goto L_08924458;
    return;
L_08924458:
    ctx.gpr[11] = (ctx.gpr[2] & 4095u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2000));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (0u | 255u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08924498u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 328u, 0x08A961ECu>(ctx, &aot_mem) && ctx.pc == 0x08924498u) goto L_08924498;
    return;
L_08924498:
    ctx.gpr[31] = (0x089244A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 68u, 0x08860704u>(ctx, &aot_mem) && ctx.pc == 0x089244A0u) goto L_089244A0;
    return;
L_089244A0:
    ctx.gpr[31] = (0x089244A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089244A8u) goto L_089244A8;
    return;
L_089244A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089244FC;
      }
      goto L_089244B0;
    }
L_089244B0:
    ctx.gpr[31] = (0x089244B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem) && ctx.pc == 0x089244B8u) goto L_089244B8;
    return;
L_089244B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089244FC;
      }
      goto L_089244C0;
    }
L_089244C0:
    ctx.gpr[31] = (0x089244C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x089244C8u) goto L_089244C8;
    return;
L_089244C8:
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089244E8;
      }
      goto L_089244D4;
    }
L_089244D4:
    ctx.gpr[31] = (0x089244DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 698u, 0x08907124u>(ctx, &aot_mem) && ctx.pc == 0x089244DCu) goto L_089244DC;
    return;
L_089244DC:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089244F0;
      }
      goto L_089244E8;
    }
L_089244E8:
    ctx.gpr[31] = (0x089244F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089244F0u) goto L_089244F0;
    return;
L_089244F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089244FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x089244FCu) goto L_089244FC;
    return;
L_089244FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924510;
    }
L_08924510:
    ctx.gpr[31] = (0x08924518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem) && ctx.pc == 0x08924518u) goto L_08924518;
    return;
L_08924518:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924520;
    }
L_08924520:
    ctx.gpr[31] = (0x08924528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem) && ctx.pc == 0x08924528u) goto L_08924528;
    return;
L_08924528:
    ctx.gpr[31] = (0x08924530u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 409u, 0x08905F98u>(ctx, &aot_mem) && ctx.pc == 0x08924530u) goto L_08924530;
    return;
L_08924530:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924538;
    }
L_08924538:
    ctx.gpr[31] = (0x08924540u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem) && ctx.pc == 0x08924540u) goto L_08924540;
    return;
L_08924540:
    ctx.gpr[31] = (0x08924548u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 409u, 0x08905F98u>(ctx, &aot_mem) && ctx.pc == 0x08924548u) goto L_08924548;
    return;
L_08924548:
    ctx.gpr[31] = (0x08924550u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08924550u) goto L_08924550;
    return;
L_08924550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924558;
    }
L_08924558:
    ctx.gpr[31] = (0x08924560u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 240u, 0x089051A4u>(ctx, &aot_mem) && ctx.pc == 0x08924560u) goto L_08924560;
    return;
L_08924560:
    ctx.gpr[31] = (0x08924568u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 259u, 0x08B00ED4u>(ctx, &aot_mem) && ctx.pc == 0x08924568u) goto L_08924568;
    return;
L_08924568:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924570;
    }
L_08924570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089245A0;
      }
      goto L_08924584;
    }
L_08924584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089245A0u);
    ctx.gpr[5] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089245A0u) goto L_089245A0;
    return;
L_089245A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1952)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089245E0;
      }
      goto L_089245AC;
    }
L_089245AC:
    ctx.gpr[31] = (0x089245B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 275u, 0x08905378u>(ctx, &aot_mem) && ctx.pc == 0x089245B4u) goto L_089245B4;
    return;
L_089245B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1956)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089245E0;
      }
      goto L_089245C4;
    }
L_089245C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089245D4u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x089245D4u) goto L_089245D4;
    return;
L_089245D4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1952), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1956), 0u);
    goto L_089245E0;
L_089245E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-20331)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892461C;
      }
      goto L_089245EC;
    }
L_089245EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892461C;
      }
      goto L_089245FC;
    }
L_089245FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892461C;
      }
      goto L_08924608;
    }
L_08924608:
    ctx.gpr[31] = (0x08924610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08924610u) goto L_08924610;
    return;
L_08924610:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892461Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 475u, 0x0890DF20u>(ctx, &aot_mem) && ctx.pc == 0x0892461Cu) goto L_0892461C;
    return;
L_0892461C:
    ctx.gpr[31] = (0x08924624u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08924624u) goto L_08924624;
    return;
L_08924624:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892468C;
      }
      goto L_0892462C;
    }
L_0892462C:
    ctx.gpr[31] = (0x08924634u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 512u, 0x08906534u>(ctx, &aot_mem) && ctx.pc == 0x08924634u) goto L_08924634;
    return;
L_08924634:
    ctx.gpr[31] = (0x0892463Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 412u, 0x08905FB8u>(ctx, &aot_mem) && ctx.pc == 0x0892463Cu) goto L_0892463C;
    return;
L_0892463C:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892468C;
      }
      goto L_08924648;
    }
L_08924648:
    ctx.gpr[31] = (0x08924650u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 231u, 0x08905104u>(ctx, &aot_mem) && ctx.pc == 0x08924650u) goto L_08924650;
    return;
L_08924650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892468C;
      }
      goto L_08924660;
    }
L_08924660:
    ctx.gpr[31] = (0x08924668u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08924668u) goto L_08924668;
    return;
L_08924668:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892468C;
      }
      goto L_08924670;
    }
L_08924670:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x0892468Cu);
    ctx.gpr[6] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x0892468Cu) goto L_0892468C;
    return;
L_0892468C:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
        goto L_089246C0;
    }
    goto L_08924694;
L_08924694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089246ACu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089246ACu) goto L_089246AC;
    return;
L_089246AC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089246BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 465u, 0x0881EB08u>(ctx, &aot_mem) && ctx.pc == 0x089246BCu) goto L_089246BC;
    return;
L_089246BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    goto L_089246C0;
L_089246C0:
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] & 32768u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] >> 15u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] << 28u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    goto L_089246E4;
L_089246E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1260)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1264)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1268)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1272)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1276)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1292)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1300)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1304)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1308)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1312)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1156)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08924774;
      }
      goto L_08924760;
    }
L_08924760:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924784;
      }
      goto L_0892476C;
    }
L_0892476C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089247A4;
      }
      goto L_08924774;
    }
L_08924774:
    ctx.gpr[31] = (0x0892477Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x0892477Cu) goto L_0892477C;
    return;
L_0892477C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924784;
    }
L_08924784:
    ctx.gpr[31] = (0x0892478Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0892478Cu) goto L_0892478C;
    return;
L_0892478C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089247A4;
      }
      goto L_08924794;
    }
L_08924794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089247CC;
      }
      goto L_089247A4;
    }
L_089247A4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924828;
      }
      goto L_089247C4;
    }
L_089247C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924980;
      }
      goto L_089247CC;
    }
L_089247CC:
    ctx.gpr[31] = (0x089247D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x089247D4u) goto L_089247D4;
    return;
L_089247D4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924820u);
    ctx.gpr[6] = (0u | 4000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x08924820u) goto L_08924820;
    return;
L_08924820:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924828;
    }
L_08924828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1752)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924864;
      }
      goto L_0892483C;
    }
L_0892483C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 237u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924878;
      }
      goto L_0892484C;
    }
L_0892484C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892485Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 784u, 0x089AF330u>(ctx, &aot_mem) && ctx.pc == 0x0892485Cu) goto L_0892485C;
    return;
L_0892485C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924864;
    }
L_08924864:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924870u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08924870u) goto L_08924870;
    return;
L_08924870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924878;
    }
L_08924878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924904;
      }
      goto L_08924888;
    }
L_08924888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 112u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089248EC;
      }
      goto L_0892489C;
    }
L_0892489C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089248ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 325u, 0x089A9AF0u>(ctx, &aot_mem) && ctx.pc == 0x089248ACu) goto L_089248AC;
    return;
L_089248AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089248D4;
      }
      goto L_089248B4;
    }
L_089248B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08924AF8;
    }
    goto L_089248CC;
L_089248CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924B68;
      }
      goto L_089248D4;
    }
L_089248D4:
    ctx.gpr[31] = (0x089248DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x089248DCu) goto L_089248DC;
    return;
L_089248DC:
    ctx.gpr[31] = (0x089248E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x089248E4u) goto L_089248E4;
    return;
L_089248E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_089248EC;
    }
L_089248EC:
    ctx.gpr[31] = (0x089248F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x089248F4u) goto L_089248F4;
    return;
L_089248F4:
    ctx.gpr[31] = (0x089248FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x089248FCu) goto L_089248FC;
    return;
L_089248FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924904;
    }
L_08924904:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924914u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 863u, 0x089AF91Cu>(ctx, &aot_mem) && ctx.pc == 0x08924914u) goto L_08924914;
    return;
L_08924914:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924968;
      }
      goto L_0892491C;
    }
L_0892491C:
    ctx.gpr[31] = (0x08924924u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 559u, 0x08B021B0u>(ctx, &aot_mem) && ctx.pc == 0x08924924u) goto L_08924924;
    return;
L_08924924:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08924948;
      }
      goto L_08924930;
    }
L_08924930:
    ctx.gpr[31] = (0x08924938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08924938u) goto L_08924938;
    return;
L_08924938:
    ctx.gpr[31] = (0x08924940u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08924940u) goto L_08924940;
    return;
L_08924940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924954;
      }
      goto L_08924948;
    }
L_08924948:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924954u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08924954u) goto L_08924954;
    return;
L_08924954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924968;
    }
L_08924968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924980;
    }
L_08924980:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089249C0;
      }
      goto L_08924990;
    }
L_08924990:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 8u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089249C4;
    }
    goto L_089249A0;
L_089249A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 9u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089249C4;
    }
    goto L_089249B0;
L_089249B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089249C8;
      }
      goto L_089249C0;
    }
L_089249C0:
    ctx.gpr[4] = (0u | 1u);
    goto L_089249C4;
L_089249C4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089249C8;
L_089249C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089249E8;
      }
      goto L_089249D0;
    }
L_089249D0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089249E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 784u, 0x089AF330u>(ctx, &aot_mem) && ctx.pc == 0x089249E0u) goto L_089249E0;
    return;
L_089249E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_089249E8;
    }
L_089249E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924A94;
      }
      goto L_089249F4;
    }
L_089249F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924A94;
      }
      goto L_08924A04;
    }
L_08924A04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924A10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 726u, 0x089AB6C0u>(ctx, &aot_mem) && ctx.pc == 0x08924A10u) goto L_08924A10;
    return;
L_08924A10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924A44;
      }
      goto L_08924A18;
    }
L_08924A18:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08924A30u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x08924A30u) goto L_08924A30;
    return;
L_08924A30:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
          goto L_089248B4;
      }
      goto L_08924A44;
    }
L_08924A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924A80;
      }
      goto L_08924A54;
    }
L_08924A54:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08924A6Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem) && ctx.pc == 0x08924A6Cu) goto L_08924A6C;
    return;
L_08924A6C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
          goto L_089248B4;
      }
      goto L_08924A80;
    }
L_08924A80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924A8Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08924A8Cu) goto L_08924A8C;
    return;
L_08924A8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924A94;
    }
L_08924A94:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924AA4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 784u, 0x089AF330u>(ctx, &aot_mem) && ctx.pc == 0x08924AA4u) goto L_08924AA4;
    return;
L_08924AA4:
    ctx.gpr[31] = (0x08924AACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08924AACu) goto L_08924AAC;
    return;
L_08924AAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924AB4;
    }
L_08924AB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924AC0;
    }
L_08924AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924ACC;
    }
L_08924ACC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(620))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924AD8;
    }
L_08924AD8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089248B4;
      }
      goto L_08924AE8;
    }
L_08924AE8:
    ctx.gpr[31] = (0x08924AF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08924AF0u) goto L_08924AF0;
    return;
L_08924AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924AF8;
    }
L_08924AF8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08924B68;
      }
      goto L_08924B0C;
    }
L_08924B0C:
    ctx.gpr[31] = (0x08924B14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08924B14u) goto L_08924B14;
    return;
L_08924B14:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
        goto L_08924B30;
    }
    goto L_08924B1C;
L_08924B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924BF8;
      }
      goto L_08924B2C;
    }
L_08924B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    goto L_08924B30;
L_08924B30:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08924BF8;
      }
      goto L_08924B38;
    }
L_08924B38:
    ctx.gpr[31] = (0x08924B40u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 296u, 0x08B01088u>(ctx, &aot_mem) && ctx.pc == 0x08924B40u) goto L_08924B40;
    return;
L_08924B40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924BF8;
      }
      goto L_08924B48;
    }
L_08924B48:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924BE4;
      }
      goto L_08924B68;
    }
L_08924B68:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08924B7Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 765u, 0x0892B110u>(ctx, &aot_mem) && ctx.pc == 0x08924B7Cu) goto L_08924B7C;
    return;
L_08924B7C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924B8Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x08924B8Cu) goto L_08924B8C;
    return;
L_08924B8C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924B9Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x08924B9Cu) goto L_08924B9C;
    return;
L_08924B9C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08924CD8;
      }
      goto L_08924BDC;
    }
L_08924BDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08924C74;
      }
      goto L_08924BE4;
    }
L_08924BE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924BF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 878u, 0x0892BA54u>(ctx, &aot_mem) && ctx.pc == 0x08924BF0u) goto L_08924BF0;
    return;
L_08924BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924BF8;
    }
L_08924BF8:
    ctx.gpr[31] = (0x08924C00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08924C00u) goto L_08924C00;
    return;
L_08924C00:
    ctx.gpr[31] = (0x08924C08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08924C08u) goto L_08924C08;
    return;
L_08924C08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924C20;
      }
      goto L_08924C10;
    }
L_08924C10:
    ctx.gpr[31] = (0x08924C18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08924C18u) goto L_08924C18;
    return;
L_08924C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924C3C;
      }
      goto L_08924C20;
    }
L_08924C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924C3C;
      }
      goto L_08924C30;
    }
L_08924C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1752), ctx.gpr[4]);
    goto L_08924C3C;
L_08924C3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924C48u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08924C48u) goto L_08924C48;
    return;
L_08924C48:
    ctx.gpr[31] = (0x08924C50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08924C50u) goto L_08924C50;
    return;
L_08924C50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924C64;
      }
      goto L_08924C58;
    }
L_08924C58:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08924C64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem) && ctx.pc == 0x08924C64u) goto L_08924C64;
    return;
L_08924C64:
    ctx.gpr[31] = (0x08924C6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 369u, 0x08B41658u>(ctx, &aot_mem) && ctx.pc == 0x08924C6Cu) goto L_08924C6C;
    return;
L_08924C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924C74;
    }
L_08924C74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16512u << 16u);
      if (branch_taken) {
          goto L_08924CEC;
      }
      goto L_08924C7C;
    }
L_08924C7C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08924CEC;
      }
      goto L_08924C90;
    }
L_08924C90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08924CD8;
      }
      goto L_08924CB4;
    }
L_08924CB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08924CEC;
      }
      goto L_08924CD8;
    }
L_08924CD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924CE4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08924CE4u) goto L_08924CE4;
    return;
L_08924CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924D10;
      }
      goto L_08924CEC;
    }
L_08924CEC:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08924D10;
      }
      goto L_08924D04;
    }
L_08924D04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924D10u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08924D10u) goto L_08924D10;
    return;
L_08924D10:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08924D7C;
      }
      goto L_08924D28;
    }
L_08924D28:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08924D74;
      }
      goto L_08924D64;
    }
L_08924D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08924D74;
L_08924D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08924D90;
      }
      goto L_08924D7C;
    }
L_08924D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08924D90;
L_08924D90:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08924DDC;
      }
      goto L_08924DA4;
    }
L_08924DA4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12176)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08924DE0;
      }
      goto L_08924DC4;
    }
L_08924DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08924DE0;
      }
      goto L_08924DCC;
    }
L_08924DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08924DE0;
      }
      goto L_08924DD4;
    }
L_08924DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_08924DE0;
      }
      goto L_08924DDC;
    }
L_08924DDC:
    ctx.gpr[4] = (0u | 0u);
    goto L_08924DE0;
L_08924DE0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08924E04;
      }
      goto L_08924DF0;
    }
L_08924DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08924E18;
      }
      goto L_08924E04;
    }
L_08924E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08924E18;
L_08924E18:
    ctx.gpr[31] = (0x08924E20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 461u, 0x08916ABCu>(ctx, &aot_mem) && ctx.pc == 0x08924E20u) goto L_08924E20;
    return;
L_08924E20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924E28;
    }
L_08924E28:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924E30;
    }
L_08924E30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16332u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924E58;
    }
L_08924E58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924E80;
    }
L_08924E80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08924EDC;
      }
      goto L_08924E98;
    }
L_08924E98:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924EF0;
      }
      goto L_08924EC8;
    }
L_08924EC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924ED4u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 367u, 0x0890D81Cu>(ctx, &aot_mem) && ctx.pc == 0x08924ED4u) goto L_08924ED4;
    return;
L_08924ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924EDC;
    }
L_08924EDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08924EE8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08924EE8u) goto L_08924EE8;
    return;
L_08924EE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924EF0;
    }
L_08924EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924F10;
      }
      goto L_08924F00;
    }
L_08924F00:
    ctx.gpr[31] = (0x08924F08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 429u, 0x0890DC74u>(ctx, &aot_mem) && ctx.pc == 0x08924F08u) goto L_08924F08;
    return;
L_08924F08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924F10;
    }
L_08924F10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(562)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D0;
      }
      goto L_08924F28;
    }
L_08924F28:
    ctx.gpr[31] = (0x08924F30u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 327u, 0x08B011C8u>(ctx, &aot_mem) && ctx.pc == 0x08924F30u) goto L_08924F30;
    return;
L_08924F30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D0;
      }
      goto L_08924F38;
    }
L_08924F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_08924F50;
    }
L_08924F50:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12120)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08924F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08924F88;
      }
      goto L_08924F78;
    }
L_08924F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925044;
      }
      goto L_08924F88;
    }
L_08924F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
        goto L_08924FA8;
    }
    goto L_08924F94;
L_08924F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925028;
      }
      goto L_08924FA4;
    }
L_08924FA4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    goto L_08924FA8;
L_08924FA8:
    ctx.gpr[5] = (0u | 10u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
        goto L_08924FD8;
    }
    goto L_08924FB4;
L_08924FB4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 8u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
        goto L_08924FD8;
    }
    goto L_08924FC4;
L_08924FC4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 20u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
        goto L_08924FE4;
    }
    goto L_08924FD4;
L_08924FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    goto L_08924FD8;
L_08924FD8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925014;
      }
      goto L_08924FE0;
    }
L_08924FE0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    goto L_08924FE4;
L_08924FE4:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08925004;
      }
      goto L_08924FF0;
    }
L_08924FF0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925028;
      }
      goto L_08925000;
    }
L_08925000:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08925004;
L_08925004:
    ctx.gpr[31] = (0x0892500Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0892500Cu) goto L_0892500C;
    return;
L_0892500C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925028;
      }
      goto L_08925014;
    }
L_08925014:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08925020u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 148u, 0x089A9038u>(ctx, &aot_mem) && ctx.pc == 0x08925020u) goto L_08925020;
    return;
L_08925020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_08925028;
    }
L_08925028:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892503Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem) && ctx.pc == 0x0892503Cu) goto L_0892503C;
    return;
L_0892503C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_08925044;
    }
L_08925044:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08925118;
      }
      goto L_08925054;
    }
L_08925054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
        goto L_08925074;
    }
    goto L_08925060;
L_08925060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925118;
      }
      goto L_08925070;
    }
L_08925070:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    goto L_08925074;
L_08925074:
    ctx.gpr[5] = (0u | 10u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
        goto L_08925090;
    }
    goto L_08925080;
L_08925080:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08925118;
    }
    goto L_0892508C;
L_0892508C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    goto L_08925090;
L_08925090:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089250D4;
      }
      goto L_0892509C;
    }
L_0892509C:
    ctx.gpr[31] = (0x089250A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089250A4u) goto L_089250A4;
    return;
L_089250A4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08925118;
    }
    goto L_089250AC;
L_089250AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
        goto L_089250D8;
    }
    goto L_089250C8;
L_089250C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08925118;
    }
    goto L_089250D4;
L_089250D4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    goto L_089250D8;
L_089250D8:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089250F4;
      }
      goto L_089250E4;
    }
L_089250E4:
    ctx.gpr[31] = (0x089250ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089250ECu) goto L_089250EC;
    return;
L_089250EC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (0u | 1u);
        goto L_08925118;
    }
    goto L_089250F4;
L_089250F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08925118;
      }
      goto L_08925104;
    }
L_08925104:
    ctx.gpr[31] = (0x0892510Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0892510Cu) goto L_0892510C;
    return;
L_0892510C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925118;
      }
      goto L_08925114;
    }
L_08925114:
    ctx.gpr[18] = (0u | 1u);
    goto L_08925118;
L_08925118:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08925198;
      }
      goto L_08925128;
    }
L_08925128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08925198;
      }
      goto L_08925138;
    }
L_08925138:
    ctx.gpr[31] = (0x08925140u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08925140u) goto L_08925140;
    return;
L_08925140:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925198;
      }
      goto L_08925148;
    }
L_08925148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925198;
      }
      goto L_08925154;
    }
L_08925154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925198;
      }
      goto L_08925168;
    }
L_08925168:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[31] = (0x08925178u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08925178u) goto L_08925178;
    return;
L_08925178:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925184u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem) && ctx.pc == 0x08925184u) goto L_08925184;
    return;
L_08925184:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08925194u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x08925194u) goto L_08925194;
    return;
L_08925194:
    ctx.gpr[18] = (0u | 1u);
    goto L_08925198;
L_08925198:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089251F0;
      }
      goto L_089251A0;
    }
L_089251A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089251ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 148u, 0x089A9038u>(ctx, &aot_mem) && ctx.pc == 0x089251ACu) goto L_089251AC;
    return;
L_089251AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_089251BC;
    }
L_089251BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_089251C8;
    }
L_089251C8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_089251D8;
    }
L_089251D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08925204;
      }
      goto L_089251F0;
    }
L_089251F0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925204u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem) && ctx.pc == 0x08925204u) goto L_08925204;
    return;
L_08925204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_0892520C;
    }
L_0892520C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892523C;
      }
      goto L_0892521C;
    }
L_0892521C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892523C;
      }
      goto L_0892522C;
    }
L_0892522C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925308;
      }
      goto L_0892523C;
    }
L_0892523C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08925260;
      }
      goto L_0892524C;
    }
L_0892524C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089252EC;
      }
      goto L_0892525C;
    }
L_0892525C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08925260;
L_08925260:
    ctx.gpr[31] = (0x08925268u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08925268u) goto L_08925268;
    return;
L_08925268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089252EC;
      }
      goto L_08925270;
    }
L_08925270:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892527Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0892527Cu) goto L_0892527C;
    return;
L_0892527C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089252AC;
      }
      goto L_08925290;
    }
L_08925290:
    ctx.gpr[31] = (0x08925298u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08925298u) goto L_08925298;
    return;
L_08925298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089252D8;
      }
      goto L_089252AC;
    }
L_089252AC:
    ctx.gpr[31] = (0x089252B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089252B4u) goto L_089252B4;
    return;
L_089252B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_089252BC;
    }
L_089252BC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089252D0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem) && ctx.pc == 0x089252D0u) goto L_089252D0;
    return;
L_089252D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_089252D8;
    }
L_089252D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089252E4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 148u, 0x089A9038u>(ctx, &aot_mem) && ctx.pc == 0x089252E4u) goto L_089252E4;
    return;
L_089252E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_089252EC;
    }
L_089252EC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925300u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem) && ctx.pc == 0x08925300u) goto L_08925300;
    return;
L_08925300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_08925308;
    }
L_08925308:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089253A4;
      }
      goto L_08925318;
    }
L_08925318:
    ctx.gpr[31] = (0x08925320u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08925320u) goto L_08925320;
    return;
L_08925320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089253A4;
      }
      goto L_08925328;
    }
L_08925328:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925334u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08925334u) goto L_08925334;
    return;
L_08925334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08925364;
      }
      goto L_08925348;
    }
L_08925348:
    ctx.gpr[31] = (0x08925350u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08925350u) goto L_08925350;
    return;
L_08925350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925390;
      }
      goto L_08925364;
    }
L_08925364:
    ctx.gpr[31] = (0x0892536Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0892536Cu) goto L_0892536C;
    return;
L_0892536C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_08925374;
    }
L_08925374:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925388u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem) && ctx.pc == 0x08925388u) goto L_08925388;
    return;
L_08925388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_08925390;
    }
L_08925390:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892539Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 148u, 0x089A9038u>(ctx, &aot_mem) && ctx.pc == 0x0892539Cu) goto L_0892539C;
    return;
L_0892539C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253B8;
      }
      goto L_089253A4;
    }
L_089253A4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089253B8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 231u, 0x089A95B8u>(ctx, &aot_mem) && ctx.pc == 0x089253B8u) goto L_089253B8;
    return;
L_089253B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_089253C0;
    }
L_089253C0:
    ctx.gpr[31] = (0x089253C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x089253C8u) goto L_089253C8;
    return;
L_089253C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089253D8;
      }
      goto L_089253D0;
    }
L_089253D0:
    ctx.gpr[31] = (0x089253D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x089253D8u) goto L_089253D8;
    return;
L_089253D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089253F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (16u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08925460;
      }
      goto L_08925448;
    }
L_08925448:
    ctx.gpr[31] = (0x08925450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08925450u) goto L_08925450;
    return;
L_08925450:
    if (ctx.gpr[16] == ctx.gpr[2]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_08925468;
    }
    goto L_08925458;
L_08925458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
      if (branch_taken) {
          goto L_0892547C;
      }
      goto L_08925460;
    }
L_08925460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925468;
    }
L_08925468:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089254DC;
      }
      goto L_08925478;
    }
L_08925478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    goto L_0892547C;
L_0892547C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(576)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(256)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(384)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    ctx.gpr[31] = (0x089254A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 358u, 0x08A96658u>(ctx, &aot_mem) && ctx.pc == 0x089254A8u) goto L_089254A8;
    return;
L_089254A8:
    ctx.gpr[31] = (0x089254B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 73u, 0x08AD06ACu>(ctx, &aot_mem) && ctx.pc == 0x089254B0u) goto L_089254B0;
    return;
L_089254B0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089254CCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089254CCu) goto L_089254CC;
    return;
L_089254CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089254E4;
      }
      goto L_089254D4;
    }
L_089254D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892551C;
      }
      goto L_089254DC;
    }
L_089254DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_089254E4;
    }
L_089254E4:
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08925500u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 197u, 0x089DD460u>(ctx, &aot_mem) && ctx.pc == 0x08925500u) goto L_08925500;
    return;
L_08925500:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892551C;
      }
      goto L_08925508;
    }
L_08925508:
    ctx.gpr[31] = (0x08925510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem) && ctx.pc == 0x08925510u) goto L_08925510;
    return;
L_08925510:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892551C;
      }
      goto L_08925518;
    }
L_08925518:
    ctx.gpr[17] = (0u | 1u);
    goto L_0892551C;
L_0892551C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925550;
      }
      goto L_0892552C;
    }
L_0892552C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925550;
      }
      goto L_08925538;
    }
L_08925538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925550;
      }
      goto L_0892554C;
    }
L_0892554C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08925550;
L_08925550:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089258A8;
      }
      goto L_0892555C;
    }
L_0892555C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089255D4;
      }
      goto L_08925564;
    }
L_08925564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16076u << 16u);
      if (branch_taken) {
          goto L_089255D4;
      }
      goto L_089255A0;
    }
L_089255A0:
    ctx.gpr[6] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16153u << 16u);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[6] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[6] = (0u | 203u);
    ctx.gpr[31] = (0x089255D4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x089255D4u) goto L_089255D4;
    return;
L_089255D4:
    if (ctx.gpr[17] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20352)));
        goto L_08925618;
    }
    goto L_089255DC;
L_089255DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20352)));
        goto L_08925618;
    }
    goto L_08925600;
L_08925600:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20352)));
    goto L_08925618;
L_08925618:
    ctx.gpr[4] = (16256u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[31] = (0x08925630u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08925630u) goto L_08925630;
    return;
L_08925630:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20352)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[31] = (0x08925654u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08925654u) goto L_08925654;
    return;
L_08925654:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20352)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[26] = ctx.fpr[15] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[31] = (0x08925678u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08925678u) goto L_08925678;
    return;
L_08925678:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x08925690u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x08925690u) goto L_08925690;
    return;
L_08925690:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0892569Cu);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem) && ctx.pc == 0x0892569Cu) goto L_0892569C;
    return;
L_0892569C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089256A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x089256A8u) goto L_089256A8;
    return;
L_089256A8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089256B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x089256B4u) goto L_089256B4;
    return;
L_089256B4:
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089256CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem) && ctx.pc == 0x089256CCu) goto L_089256CC;
    return;
L_089256CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20348)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[31] = (0x089256E0u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089256E0u) goto L_089256E0;
    return;
L_089256E0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20348)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[31] = (0x08925704u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08925704u) goto L_08925704;
    return;
L_08925704:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20348)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[26] = ctx.fpr[15] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[31] = (0x08925728u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08925728u) goto L_08925728;
    return;
L_08925728:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[24];
    ctx.gpr[4] = (0u | 15u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x08925740u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem) && ctx.pc == 0x08925740u) goto L_08925740;
    return;
L_08925740:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892574Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x0892574Cu) goto L_0892574C;
    return;
L_0892574C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08925758u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x08925758u) goto L_08925758;
    return;
L_08925758:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0892576Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892576Cu) goto L_0892576C;
    return;
L_0892576C:
    ctx.gpr[31] = (0x08925774u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem) && ctx.pc == 0x08925774u) goto L_08925774;
    return;
L_08925774:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925780u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08925780u) goto L_08925780;
    return;
L_08925780:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0892578Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x0892578Cu) goto L_0892578C;
    return;
L_0892578C:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089257A0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem) && ctx.pc == 0x089257A0u) goto L_089257A0;
    return;
L_089257A0:
    ctx.gpr[31] = (0x089257A8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem) && ctx.pc == 0x089257A8u) goto L_089257A8;
    return;
L_089257A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089257B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x089257B4u) goto L_089257B4;
    return;
L_089257B4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089257C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x089257C0u) goto L_089257C0;
    return;
L_089257C0:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089257D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem) && ctx.pc == 0x089257D4u) goto L_089257D4;
    return;
L_089257D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20344)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[31] = (0x089257E8u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x089257E8u) goto L_089257E8;
    return;
L_089257E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20344)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[22] - ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[31] = (0x0892580Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x0892580Cu) goto L_0892580C;
    return;
L_0892580C:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[28];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20344)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[31] = (0x08925830u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08925830u) goto L_08925830;
    return;
L_08925830:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.gpr[4] = (0u | 3u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[31] = (0x08925848u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem) && ctx.pc == 0x08925848u) goto L_08925848;
    return;
L_08925848:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925854u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08925854u) goto L_08925854;
    return;
L_08925854:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08925860u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x08925860u) goto L_08925860;
    return;
L_08925860:
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08925874u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08925874u) goto L_08925874;
    return;
L_08925874:
    ctx.gpr[31] = (0x0892587Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem) && ctx.pc == 0x0892587Cu) goto L_0892587C;
    return;
L_0892587C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925888u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08925888u) goto L_08925888;
    return;
L_08925888:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925894u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x08925894u) goto L_08925894;
    return;
L_08925894:
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089258A8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem) && ctx.pc == 0x089258A8u) goto L_089258A8;
    return;
L_089258A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-20329)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925908;
      }
      goto L_089258B4;
    }
L_089258B4:
    ctx.gpr[31] = (0x089258BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x089258BCu) goto L_089258BC;
    return;
L_089258BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089258C8u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem) && ctx.pc == 0x089258C8u) goto L_089258C8;
    return;
L_089258C8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089258D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x089258D4u) goto L_089258D4;
    return;
L_089258D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089258E0u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x089258E0u) goto L_089258E0;
    return;
L_089258E0:
    ctx.gpr[5] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08925908u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08925908u) goto L_08925908;
    return;
L_08925908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089259B0;
      }
      goto L_0892591C;
    }
L_0892591C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1926))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089259B0;
      }
      goto L_0892592C;
    }
L_0892592C:
    ctx.gpr[31] = (0x08925934u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x08925934u) goto L_08925934;
    return;
L_08925934:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08925940u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 289u, 0x08AB1020u>(ctx, &aot_mem) && ctx.pc == 0x08925940u) goto L_08925940;
    return;
L_08925940:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892594Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x0892594Cu) goto L_0892594C;
    return;
L_0892594C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08925958u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x08925958u) goto L_08925958;
    return;
L_08925958:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x0892597Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem) && ctx.pc == 0x0892597Cu) goto L_0892597C;
    return;
L_0892597C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925988u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08925988u) goto L_08925988;
    return;
L_08925988:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925994u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x08925994u) goto L_08925994;
    return;
L_08925994:
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089259B0;
      }
      goto L_089259A4;
    }
L_089259A4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x089259B0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 151u, 0x089D8C6Cu>(ctx, &aot_mem) && ctx.pc == 0x089259B0u) goto L_089259B0;
    return;
L_089259B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_089259C4;
    }
L_089259C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_089259D8;
    }
L_089259D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1926))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_089259E8;
    }
L_089259E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_089259FC;
    }
L_089259FC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08925A24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x08925A24u) goto L_08925A24;
    return;
L_08925A24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1926))))));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(700)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08925A44u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08925A44u) goto L_08925A44;
    return;
L_08925A44:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08925A50u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x08925A50u) goto L_08925A50;
    return;
L_08925A50:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08925A68u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem) && ctx.pc == 0x08925A68u) goto L_08925A68;
    return;
L_08925A68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1926))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08925C9C;
      }
      goto L_08925A7C;
    }
L_08925A7C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12064)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08925A94:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925AD0;
    }
L_08925AD0:
    ctx.gpr[4] = (48419u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925B44;
    }
L_08925B44:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925BAC;
    }
L_08925BAC:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925C24;
    }
L_08925C24:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08925CBC;
      }
      goto L_08925C9C;
    }
L_08925C9C:
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08925CBC;
L_08925CBC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925D08;
      }
      goto L_08925CCC;
    }
L_08925CCC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08925CF4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x08925CF4u) goto L_08925CF4;
    return;
L_08925CF4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925CCC;
      }
      goto L_08925D08;
    }
L_08925D08:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925D28;
    }
L_08925D28:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2024)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925D48;
    }
L_08925D48:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08925D9C;
    }
    goto L_08925D9C;
L_08925D9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925DA4;
    }
L_08925DA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08925DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem) && ctx.pc == 0x08925DC8u) goto L_08925DC8;
    return;
L_08925DC8:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
        goto L_08925DF8;
    }
    goto L_08925DEC;
L_08925DEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08925DF8;
      }
      goto L_08925DF8;
    }
L_08925DF8:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08925E54;
      }
      goto L_08925E14;
    }
L_08925E14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_08925E38;
    }
    goto L_08925E2C;
L_08925E2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08925E38;
      }
      goto L_08925E38;
    }
L_08925E38:
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08925E5C;
      }
      goto L_08925E54;
    }
L_08925E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08925EF4;
      }
      goto L_08925E5C;
    }
L_08925E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925EAC;
      }
      goto L_08925E6C;
    }
L_08925E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925EAC;
      }
      goto L_08925E7C;
    }
L_08925E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925EAC;
      }
      goto L_08925E8C;
    }
L_08925E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925EAC;
      }
      goto L_08925E9C;
    }
L_08925E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08925EB4;
      }
      goto L_08925EAC;
    }
L_08925EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08925EF4;
      }
      goto L_08925EB4;
    }
L_08925EB4:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08925EC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 563u, 0x088E3DD8u>(ctx, &aot_mem) && ctx.pc == 0x08925EC8u) goto L_08925EC8;
    return;
L_08925EC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925ED8;
      }
      goto L_08925ED0;
    }
L_08925ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08925EF4;
      }
      goto L_08925ED8;
    }
L_08925ED8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08925EE8u);
    ctx.gpr[6] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08925EE8u) goto L_08925EE8;
    return;
L_08925EE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925EF4;
      }
      goto L_08925EF0;
    }
L_08925EF0:
    ctx.gpr[18] = (0u | 0u);
    goto L_08925EF4;
L_08925EF4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925F00;
    }
L_08925F00:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926050;
      }
      goto L_08925F10;
    }
L_08925F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[19] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_08925F40;
      }
      goto L_08925F2C;
    }
L_08925F2C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08925F48;
      }
      goto L_08925F38;
    }
L_08925F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926040;
      }
      goto L_08925F40;
    }
L_08925F40:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08925F38;
      }
      goto L_08925F48;
    }
L_08925F48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08925FC8u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08925FC8u) goto L_08925FC8;
    return;
L_08925FC8:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08925FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08925FE8u) goto L_08925FE8;
    return;
L_08925FE8:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08926014u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08926014u) goto L_08926014;
    return;
L_08926014:
    ctx.gpr[10] = (ctx.gpr[2] & 65535u);
    ctx.gpr[10] = (ctx.gpr[10] & 1u);
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08926040u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x08926040u) goto L_08926040;
    return;
L_08926040:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08925F10;
      }
      goto L_08926050;
    }
L_08926050:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08926088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    ctx.gpr[31] = (0x089260ACu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x089260ACu) goto L_089260AC;
    return;
L_089260AC:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_089260B4;
L_089260B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_089260C0;
L_089260C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 63u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_089260D0;
L_089260D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 60u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_089260E0;
L_089260E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_089260F4;
L_089260F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_08926108;
L_08926108:
    ctx.gpr[31] = (0x08926110u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08926110u) goto L_08926110;
    return;
L_08926110:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(0u);
        goto L_0892620C;
    }
    goto L_08926118;
L_08926118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926144;
      }
      goto L_0892612C;
    }
L_0892612C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892614C;
      }
      goto L_0892613C;
    }
L_0892613C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0892620C;
      }
      goto L_08926144;
    }
L_08926144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_0892614C;
    }
L_0892614C:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1960)));
        goto L_089261B8;
    }
    goto L_08926190;
L_08926190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[5] == ctx.gpr[17]) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1960)));
        goto L_089261B8;
    }
    goto L_089261A0;
L_089261A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1960)));
        goto L_089261E0;
    }
    goto L_089261B4;
L_089261B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1960)));
    goto L_089261B8;
L_089261B8:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926208;
      }
      goto L_089261D8;
    }
L_089261D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_089261E0;
    }
L_089261E0:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08926208;
      }
      goto L_08926200;
    }
L_08926200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_08926208;
    }
L_08926208:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_0892620C;
L_0892620C:
    ctx.gpr[5] = (18944u << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (50944u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[7] = (19200u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (18432u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[8] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (18688u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29552), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089262D4;
      }
      goto L_089262C4;
    }
L_089262C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089262D4;
L_089262D4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089262E0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1276));
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 648u, 0x0890380Cu>(ctx, &aot_mem) && ctx.pc == 0x089262E0u) goto L_089262E0;
    return;
L_089262E0:
    ctx.gpr[31] = (0x089262E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 129u, 0x08AD0934u>(ctx, &aot_mem) && ctx.pc == 0x089262E8u) goto L_089262E8;
    return;
L_089262E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_089262F4;
    }
L_089262F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_0892630C;
    }
L_0892630C:
    ctx.gpr[31] = (0x08926314u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem) && ctx.pc == 0x08926314u) goto L_08926314;
    return;
L_08926314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(724)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08926328u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem) && ctx.pc == 0x08926328u) goto L_08926328;
    return;
L_08926328:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926334u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem) && ctx.pc == 0x08926334u) goto L_08926334;
    return;
L_08926334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    ctx.gpr[17] = (ctx.gpr[17] << 6u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), ctx.gpr[8]);
    ctx.gpr[31] = (0x089263CCu);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem) && ctx.pc == 0x089263CCu) goto L_089263CC;
    return;
L_089263CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926404;
      }
      goto L_089263DC;
    }
L_089263DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (43691u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21846));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08926404;
      }
      goto L_089263F0;
    }
L_089263F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089263FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089263FCu) goto L_089263FC;
    return;
L_089263FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892640C;
      }
      goto L_08926404;
    }
L_08926404:
    ctx.gpr[31] = (0x0892640Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x0892640Cu) goto L_0892640C;
    return;
L_0892640C:
    ctx.gpr[31] = (0x08926414u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08926414u) goto L_08926414;
    return;
L_08926414:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_0892641C;
    }
L_0892641C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_08926428;
    }
L_08926428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3240)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3244)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3248)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089264FC;
      }
      goto L_089264F0;
    }
L_089264F0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3248)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089264FC;
L_089264FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08926528;
      }
      goto L_08926510;
    }
L_08926510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_0892652C;
    }
    goto L_08926520;
L_08926520:
    ctx.gpr[31] = (0x08926528u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08926528u) goto L_08926528;
    return;
L_08926528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    goto L_0892652C;
L_0892652C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    ctx.gpr[31] = (0x08926540u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08926540u) goto L_08926540;
    return;
L_08926540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3248)));
    ctx.gpr[31] = (0x08926560u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x08926560u) goto L_08926560;
    return;
L_08926560:
    ctx.gpr[4] = (48544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8848)));
    ctx.gpr[4] = (ctx.gpr[4] | 1798u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8852)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16132u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55010u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8856)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (15512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089265A4u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 5u, 0x088600C4u>(ctx, &aot_mem) && ctx.pc == 0x089265A4u) goto L_089265A4;
    return;
L_089265A4:
    ctx.gpr[4] = (16212u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14680u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (47747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15975u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 27787u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089265DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x089265DCu) goto L_089265DC;
    return;
L_089265DC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089265F0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 935u, 0x0885FEC8u>(ctx, &aot_mem) && ctx.pc == 0x089265F0u) goto L_089265F0;
    return;
L_089265F0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089265FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem) && ctx.pc == 0x089265FCu) goto L_089265FC;
    return;
L_089265FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926620;
      }
      goto L_0892660C;
    }
L_0892660C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926620;
      }
      goto L_08926618;
    }
L_08926618:
    ctx.gpr[31] = (0x08926620u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08926620u) goto L_08926620;
    return;
L_08926620:
    ctx.gpr[31] = (0x08926628u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08926628u) goto L_08926628;
    return;
L_08926628:
    ctx.gpr[31] = (0x08926630u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem) && ctx.pc == 0x08926630u) goto L_08926630;
    return;
L_08926630:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926668;
      }
      goto L_08926640;
    }
L_08926640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (43691u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21846));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926668;
      }
      goto L_08926654;
    }
L_08926654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08926660u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926660u) goto L_08926660;
    return;
L_08926660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926670;
      }
      goto L_08926668;
    }
L_08926668:
    ctx.gpr[31] = (0x08926670u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem) && ctx.pc == 0x08926670u) goto L_08926670;
    return;
L_08926670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_08926698;
    }
    goto L_08926680;
L_08926680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
        goto L_08926698;
    }
    goto L_0892668C;
L_0892668C:
    ctx.gpr[31] = (0x08926694u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08926694u) goto L_08926694;
    return;
L_08926694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    goto L_08926698;
L_08926698:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_089266A4;
    }
L_089266A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089266B8;
      }
      goto L_089266B0;
    }
L_089266B0:
    ctx.gpr[31] = (0x089266B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x089266B8u) goto L_089266B8;
    return;
L_089266B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089266D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(304))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2064), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1025));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2068), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (8192u << 16u);
      if (branch_taken) {
          goto L_08926794;
      }
      goto L_08926768;
    }
L_08926768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926794;
      }
      goto L_0892677C;
    }
L_0892677C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08926794u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08926794u) goto L_08926794;
    return;
L_08926794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089267D8;
      }
      goto L_089267A4;
    }
L_089267A4:
    ctx.gpr[31] = (0x089267ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x089267ACu) goto L_089267AC;
    return;
L_089267AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_089267B8;
    }
L_089267B8:
    ctx.gpr[31] = (0x089267C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089267C0u) goto L_089267C0;
    return;
L_089267C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_089267C8;
    }
L_089267C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_089267D8;
    }
L_089267D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_089267E8;
    }
L_089267E8:
    ctx.gpr[7] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[31] = (0x0892680Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 653u, 0x0891F338u>(ctx, &aot_mem) && ctx.pc == 0x0892680Cu) goto L_0892680C;
    return;
L_0892680C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_08926818;
    }
L_08926818:
    ctx.gpr[31] = (0x08926820u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08926820u) goto L_08926820;
    return;
L_08926820:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926838;
      }
      goto L_08926828;
    }
L_08926828:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08926838u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 173u, 0x08ADC8D4u>(ctx, &aot_mem) && ctx.pc == 0x08926838u) goto L_08926838;
    return;
L_08926838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926858;
      }
      goto L_08926848;
    }
L_08926848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926860;
      }
      goto L_08926858;
    }
L_08926858:
    ctx.gpr[31] = (0x08926860u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08926860u) goto L_08926860;
    return;
L_08926860:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892686Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x0892686Cu) goto L_0892686C;
    return;
L_0892686C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089269D0;
      }
      goto L_08926878;
    }
L_08926878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089268B0;
      }
      goto L_08926888;
    }
L_08926888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089268B0;
      }
      goto L_0892689C;
    }
L_0892689C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089269D0;
      }
      goto L_089268B0;
    }
L_089268B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08926928u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x08926928u) goto L_08926928;
    return;
L_08926928:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089269C0;
      }
      goto L_08926930;
    }
L_08926930:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08926980u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x08926980u) goto L_08926980;
    return;
L_08926980:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089269C0;
      }
      goto L_08926988;
    }
L_08926988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089269B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem) && ctx.pc == 0x089269B8u) goto L_089269B8;
    return;
L_089269B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089269CC;
      }
      goto L_089269C0;
    }
L_089269C0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), 0u);
    ctx.gpr[31] = (0x089269CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem) && ctx.pc == 0x089269CCu) goto L_089269CC;
    return;
L_089269CC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), 0u);
    goto L_089269D0;
L_089269D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 63u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926F08;
      }
      goto L_089269E0;
    }
L_089269E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926A48;
      }
      goto L_089269F0;
    }
L_089269F0:
    ctx.gpr[31] = (0x089269F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x089269F8u) goto L_089269F8;
    return;
L_089269F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2308)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926A50;
      }
      goto L_08926A08;
    }
L_08926A08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926A50;
      }
      goto L_08926A14;
    }
L_08926A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08926A50;
      }
      goto L_08926A24;
    }
L_08926A24:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08926A40u);
    ctx.gpr[6] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08926A40u) goto L_08926A40;
    return;
L_08926A40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926A50;
      }
      goto L_08926A48;
    }
L_08926A48:
    ctx.gpr[31] = (0x08926A50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem) && ctx.pc == 0x08926A50u) goto L_08926A50;
    return;
L_08926A50:
    ctx.gpr[31] = (0x08926A58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08926A58u) goto L_08926A58;
    return;
L_08926A58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926A70;
      }
      goto L_08926A60;
    }
L_08926A60:
    ctx.gpr[31] = (0x08926A68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x08926A68u) goto L_08926A68;
    return;
L_08926A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926A70;
    }
L_08926A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926BA4;
      }
      goto L_08926A80;
    }
L_08926A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926BA4;
      }
      goto L_08926A8C;
    }
L_08926A8C:
    ctx.gpr[31] = (0x08926A94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08926A94u) goto L_08926A94;
    return;
L_08926A94:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
        goto L_08926AB0;
    }
    goto L_08926A9C;
L_08926A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926BA4;
      }
      goto L_08926AAC;
    }
L_08926AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    goto L_08926AB0;
L_08926AB0:
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926B10u);
    ctx.gpr[6] = (0u | 12000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x08926B10u) goto L_08926B10;
    return;
L_08926B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[31] = (0x08926B28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08926B28u) goto L_08926B28;
    return;
L_08926B28:
    ctx.gpr[31] = (0x08926B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08926B30u) goto L_08926B30;
    return;
L_08926B30:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926B54;
      }
      goto L_08926B40;
    }
L_08926B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1364)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 71 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926B74;
      }
      goto L_08926B54;
    }
L_08926B54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926B60u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08926B60u) goto L_08926B60;
    return;
L_08926B60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926B6Cu);
    ctx.gpr[5] = (0u | 119u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08926B6Cu) goto L_08926B6C;
    return;
L_08926B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08926B90;
      }
      goto L_08926B74;
    }
L_08926B74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926B80u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08926B80u) goto L_08926B80;
    return;
L_08926B80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926B8Cu);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08926B8Cu) goto L_08926B8C;
    return;
L_08926B8C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08926B90;
L_08926B90:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926B9Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08926B9Cu) goto L_08926B9C;
    return;
L_08926B9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926BA4;
    }
L_08926BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926C3C;
      }
      goto L_08926BB8;
    }
L_08926BB8:
    ctx.gpr[31] = (0x08926BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08926BC0u) goto L_08926BC0;
    return;
L_08926BC0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20240)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08926BD4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08926BD4u) goto L_08926BD4;
    return;
L_08926BD4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08926BF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08926BF8u) goto L_08926BF8;
    return;
L_08926BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926C28;
      }
      goto L_08926C1C;
    }
L_08926C1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926C28u);
    ctx.gpr[5] = (0u | 30000u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1084u, 0x08AC7F30u>(ctx, &aot_mem) && ctx.pc == 0x08926C28u) goto L_08926C28;
    return;
L_08926C28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926C34u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem) && ctx.pc == 0x08926C34u) goto L_08926C34;
    return;
L_08926C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926C3C;
    }
L_08926C3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[19] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926E84;
      }
      goto L_08926C50;
    }
L_08926C50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x08926C7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08926C7Cu) goto L_08926C7C;
    return;
L_08926C7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926CF8;
      }
      goto L_08926C84;
    }
L_08926C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926CF8;
      }
      goto L_08926C94;
    }
L_08926C94:
    ctx.gpr[31] = (0x08926C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08926C9Cu) goto L_08926C9C;
    return;
L_08926C9C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
          goto L_08926CF8;
      }
      goto L_08926CE4;
    }
L_08926CE4:
    ctx.gpr[31] = (0x08926CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08926CECu) goto L_08926CEC;
    return;
L_08926CEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926CF8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 840u, 0x0890FC94u>(ctx, &aot_mem) && ctx.pc == 0x08926CF8u) goto L_08926CF8;
    return;
L_08926CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926D2C;
      }
      goto L_08926D04;
    }
L_08926D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926E50;
      }
      goto L_08926D14;
    }
L_08926D14:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926D24u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08926D24u) goto L_08926D24;
    return;
L_08926D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926E50;
      }
      goto L_08926D2C;
    }
L_08926D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D3C;
    }
L_08926D3C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D44;
    }
L_08926D44:
    ctx.gpr[31] = (0x08926D4Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08926D4Cu) goto L_08926D4C;
    return;
L_08926D4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926D6C;
      }
      goto L_08926D54;
    }
L_08926D54:
    ctx.gpr[31] = (0x08926D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem) && ctx.pc == 0x08926D5Cu) goto L_08926D5C;
    return;
L_08926D5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D64;
    }
L_08926D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D6C;
    }
L_08926D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D7C;
    }
L_08926D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 50u);
      if (branch_taken) {
          goto L_08926DA0;
      }
      goto L_08926D8C;
    }
L_08926D8C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926D98;
    }
L_08926D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926DA8;
      }
      goto L_08926DA0;
    }
L_08926DA0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926DA8;
    }
L_08926DA8:
    ctx.gpr[31] = (0x08926DB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08926DB0u) goto L_08926DB0;
    return;
L_08926DB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926DBC;
      }
      goto L_08926DB8;
    }
L_08926DB8:
    ctx.gpr[18] = (0u | 0u);
    goto L_08926DBC;
L_08926DBC:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
        goto L_08926DE4;
    }
    goto L_08926DC4;
L_08926DC4:
    ctx.gpr[31] = (0x08926DCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x08926DCCu) goto L_08926DCC;
    return;
L_08926DCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926DDCu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08926DDCu) goto L_08926DDC;
    return;
L_08926DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926E30;
      }
      goto L_08926DE4;
    }
L_08926DE4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926E30u);
    ctx.gpr[6] = (0u | 14000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 779u, 0x0890B0A8u>(ctx, &aot_mem) && ctx.pc == 0x08926E30u) goto L_08926E30;
    return;
L_08926E30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    ctx.gpr[31] = (0x08926E44u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem) && ctx.pc == 0x08926E44u) goto L_08926E44;
    return;
L_08926E44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926E50u);
    ctx.gpr[5] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem) && ctx.pc == 0x08926E50u) goto L_08926E50;
    return;
L_08926E50:
    ctx.gpr[4] = (0u | 1500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08926E70u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x08926E70u) goto L_08926E70;
    return;
L_08926E70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926E7Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08926E7Cu) goto L_08926E7C;
    return;
L_08926E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926E84;
    }
L_08926E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926E90;
    }
L_08926E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926EA0;
    }
L_08926EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926EB0;
    }
L_08926EB0:
    ctx.gpr[31] = (0x08926EB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08926EB8u) goto L_08926EB8;
    return;
L_08926EB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926EC0;
    }
L_08926EC0:
    ctx.gpr[31] = (0x08926EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08926EC8u) goto L_08926EC8;
    return;
L_08926EC8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20240)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08926EDCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08926EDCu) goto L_08926EDC;
    return;
L_08926EDC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08926F00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x08926F00u) goto L_08926F00;
    return;
L_08926F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926F08;
    }
L_08926F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08926F24;
      }
      goto L_08926F18;
    }
L_08926F18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926F24u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08926F24u) goto L_08926F24;
    return;
L_08926F24:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08926F38;
      }
      goto L_08926F2C;
    }
L_08926F2C:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08926F38;
L_08926F38:
    ctx.gpr[31] = (0x08926F40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem) && ctx.pc == 0x08926F40u) goto L_08926F40;
    return;
L_08926F40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08926F4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08926F4Cu) goto L_08926F4C;
    return;
L_08926F4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08926F64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem) && ctx.pc == 0x08926F64u) goto L_08926F64;
    return;
L_08926F64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927260;
      }
      goto L_08926F70;
    }
L_08926F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892706C;
      }
      goto L_08926F80;
    }
L_08926F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892706C;
      }
      goto L_08926F90;
    }
L_08926F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x08926F9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08926F9Cu) goto L_08926F9C;
    return;
L_08926F9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892706C;
      }
      goto L_08926FA4;
    }
L_08926FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892706C;
      }
      goto L_08926FB4;
    }
L_08926FB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(196), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_0892701C;
    }
    goto L_08926FEC;
L_08926FEC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(1918)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(1918), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_0892701C;
L_0892701C:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(172)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(204), 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-100));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 0u);
        goto L_0892704C;
    }
    goto L_0892704C;
L_0892704C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    goto L_0892706C;
L_0892706C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[31] = (0x0892707Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x0892707Cu) goto L_0892707C;
    return;
L_0892707C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(564));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089271BC;
      }
      goto L_089270A8;
    }
L_089270A8:
    ctx.gpr[31] = (0x089270B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 78u, 0x08B00578u>(ctx, &aot_mem) && ctx.pc == 0x089270B0u) goto L_089270B0;
    return;
L_089270B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 6u);
      if (branch_taken) {
          goto L_089270E8;
      }
      goto L_089270DC;
    }
L_089270DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(680), ctx.gpr[5]);
    goto L_089270E8;
L_089270E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08927110;
      }
      goto L_089270F4;
    }
L_089270F4:
    ctx.gpr[31] = (0x089270FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 456u, 0x08B01BA4u>(ctx, &aot_mem) && ctx.pc == 0x089270FCu) goto L_089270FC;
    return;
L_089270FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927110;
      }
      goto L_08927104;
    }
L_08927104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x08927110u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08927110u) goto L_08927110;
    return;
L_08927110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[4] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
        goto L_08927138;
    }
    goto L_08927120;
L_08927120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089271C8;
      }
      goto L_08927134;
    }
L_08927134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    goto L_08927138;
L_08927138:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[31] = (0x0892714Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x0892714Cu) goto L_0892714C;
    return;
L_0892714C:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20004)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20008)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08927168u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x08927168u) goto L_08927168;
    return;
L_08927168:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089271C8;
      }
      goto L_08927170;
    }
L_08927170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[31] = (0x08927188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x08927188u) goto L_08927188;
    return;
L_08927188:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0892719Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem) && ctx.pc == 0x0892719Cu) goto L_0892719C;
    return;
L_0892719C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089271C8;
      }
      goto L_089271A4;
    }
L_089271A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1280));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089271C8;
      }
      goto L_089271BC;
    }
L_089271BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[31] = (0x089271C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 40u, 0x08B00384u>(ctx, &aot_mem) && ctx.pc == 0x089271C8u) goto L_089271C8;
    return;
L_089271C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927228;
      }
      goto L_089271DC;
    }
L_089271DC:
    ctx.gpr[31] = (0x089271E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem) && ctx.pc == 0x089271E4u) goto L_089271E4;
    return;
L_089271E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927228;
      }
      goto L_089271EC;
    }
L_089271EC:
    ctx.gpr[31] = (0x089271F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 233u, 0x08B00DBCu>(ctx, &aot_mem) && ctx.pc == 0x089271F4u) goto L_089271F4;
    return;
L_089271F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927228;
      }
      goto L_089271FC;
    }
L_089271FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927228;
      }
      goto L_0892721C;
    }
L_0892721C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927228u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08927228u) goto L_08927228;
    return;
L_08927228:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08927240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 465u, 0x0896DCA0u>(ctx, &aot_mem) && ctx.pc == 0x08927240u) goto L_08927240;
    return;
L_08927240:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927260;
      }
      goto L_08927248;
    }
L_08927248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(613));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08927260;
L_08927260:
    ctx.gpr[31] = (0x08927268u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08927268u) goto L_08927268;
    return;
L_08927268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927294;
      }
      goto L_08927270;
    }
L_08927270:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x0892727Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 615u, 0x088C6FC0u>(ctx, &aot_mem) && ctx.pc == 0x0892727Cu) goto L_0892727C;
    return;
L_0892727C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (51200u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    goto L_08927294;
L_08927294:
    ctx.gpr[31] = (0x0892729Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 107u, 0x08908630u>(ctx, &aot_mem) && ctx.pc == 0x0892729Cu) goto L_0892729C;
    return;
L_0892729C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089272E4;
      }
      goto L_089272BC;
    }
L_089272BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1500u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x089272D0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x089272D0u) goto L_089272D0;
    return;
L_089272D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_089272E4;
L_089272E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089272F4;
      }
      goto L_089272F0;
    }
L_089272F0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2116), 0u);
    goto L_089272F4;
L_089272F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927300u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 304u, 0x08911138u>(ctx, &aot_mem) && ctx.pc == 0x08927300u) goto L_08927300;
    return;
L_08927300:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892730Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x0892730Cu) goto L_0892730C;
    return;
L_0892730C:
    ctx.gpr[31] = (0x08927314u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08927314u) goto L_08927314;
    return;
L_08927314:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927340;
      }
      goto L_0892731C;
    }
L_0892731C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927340;
      }
      goto L_0892732C;
    }
L_0892732C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927340;
      }
      goto L_08927334;
    }
L_08927334:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08927340u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x08927340u) goto L_08927340;
    return;
L_08927340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892738C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927410;
      }
      goto L_089273CC;
    }
L_089273CC:
    ctx.gpr[31] = (0x089273D4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 697u, 0x0890EF9Cu>(ctx, &aot_mem) && ctx.pc == 0x089273D4u) goto L_089273D4;
    return;
L_089273D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
        goto L_08927424;
    }
    goto L_08927408;
L_08927408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_08927410;
    }
L_08927410:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0892741Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x0892741Cu) goto L_0892741C;
    return;
L_0892741C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927FF0;
      }
      goto L_08927424;
    }
L_08927424:
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_08927438;
    }
L_08927438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_0892744C;
    }
L_0892744C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892746C;
      }
      goto L_0892745C;
    }
L_0892745C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_0892746C;
    }
L_0892746C:
    ctx.gpr[31] = (0x08927474u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08927474u) goto L_08927474;
    return;
L_08927474:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_08927498;
      }
      goto L_0892747C;
    }
L_0892747C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08927540;
      }
      goto L_08927488;
    }
L_08927488:
    ctx.gpr[31] = (0x08927490u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08927490u) goto L_08927490;
    return;
L_08927490:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927540;
      }
      goto L_08927498;
    }
L_08927498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089274E0;
      }
      goto L_089274A8;
    }
L_089274A8:
    ctx.gpr[31] = (0x089274B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 854u, 0x0890B608u>(ctx, &aot_mem) && ctx.pc == 0x089274B0u) goto L_089274B0;
    return;
L_089274B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089274CCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089274CCu) goto L_089274CC;
    return;
L_089274CC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089274D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem) && ctx.pc == 0x089274D8u) goto L_089274D8;
    return;
L_089274D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_089274E0;
    }
L_089274E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089274F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089266D8;
L_089274F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892750C;
      }
      goto L_089274FC;
    }
L_089274FC:
    ctx.gpr[31] = (0x08927504u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem) && ctx.pc == 0x08927504u) goto L_08927504;
    return;
L_08927504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892752C;
      }
      goto L_0892750C;
    }
L_0892750C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08927518u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08927518u) goto L_08927518;
    return;
L_08927518:
    ctx.gpr[31] = (0x08927520u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 138u, 0x08A0CDECu>(ctx, &aot_mem) && ctx.pc == 0x08927520u) goto L_08927520;
    return;
L_08927520:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892752Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x0892752Cu) goto L_0892752C;
    return;
L_0892752C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08927538u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 30u, 0x08B04218u>(ctx, &aot_mem) && ctx.pc == 0x08927538u) goto L_08927538;
    return;
L_08927538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927568;
      }
      goto L_08927540;
    }
L_08927540:
    ctx.gpr[31] = (0x08927548u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08927548u) goto L_08927548;
    return;
L_08927548:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927554u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08927554u) goto L_08927554;
    return;
L_08927554:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927560u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08927560u) goto L_08927560;
    return;
L_08927560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927FF0;
      }
      goto L_08927568;
    }
L_08927568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927594;
      }
      goto L_08927578;
    }
L_08927578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08927594;
L_08927594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089275D0;
      }
      goto L_089275A4;
    }
L_089275A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x089275B8u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089275B8u) goto L_089275B8;
    return;
L_089275B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089275D0;
      }
      goto L_089275C4;
    }
L_089275C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3280)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3280), ctx.gpr[5]);
    goto L_089275D0;
L_089275D0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892762C;
      }
      goto L_089275D8;
    }
L_089275D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892762C;
      }
      goto L_089275EC;
    }
L_089275EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892762C;
      }
      goto L_089275FC;
    }
L_089275FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892762C;
      }
      goto L_0892760C;
    }
L_0892760C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[22] = (0u | 18u);
    ctx.gpr[30] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08927634;
      }
      goto L_08927624;
    }
L_08927624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089276A0;
      }
      goto L_0892762C;
    }
L_0892762C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927FF0;
      }
      goto L_08927634;
    }
L_08927634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089276A0;
      }
      goto L_08927640;
    }
L_08927640:
    ctx.gpr[31] = (0x08927648u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08927648u) goto L_08927648;
    return;
L_08927648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089276A0;
      }
      goto L_08927650;
    }
L_08927650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_089276A0;
      }
      goto L_0892765C;
    }
L_0892765C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    goto L_089276A0;
L_089276A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089276BC;
      }
      goto L_089276AC;
    }
L_089276AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089276CC;
      }
      goto L_089276BC;
    }
L_089276BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089276CC;
L_089276CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(562)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089276E4;
      }
      goto L_089276D8;
    }
L_089276D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(562)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(562), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089276E4;
L_089276E4:
    ctx.gpr[31] = (0x089276ECu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x089276ECu) goto L_089276EC;
    return;
L_089276EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892770C;
      }
      goto L_089276F4;
    }
L_089276F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892770C;
      }
      goto L_08927704;
    }
L_08927704:
    ctx.gpr[31] = (0x0892770Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 676u, 0x08947574u>(ctx, &aot_mem) && ctx.pc == 0x0892770Cu) goto L_0892770C;
    return;
L_0892770C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08927724;
      }
      goto L_08927718;
    }
L_08927718:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08927724u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 30u, 0x08B04218u>(ctx, &aot_mem) && ctx.pc == 0x08927724u) goto L_08927724;
    return;
L_08927724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08927840;
      }
      goto L_08927730;
    }
L_08927730:
    ctx.gpr[31] = (0x08927738u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08927738u) goto L_08927738;
    return;
L_08927738:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089277E8;
      }
      goto L_08927740;
    }
L_08927740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08927778;
      }
      goto L_0892775C;
    }
L_0892775C:
    ctx.gpr[7] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.gpr[31] = (0x08927778u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08927778u) goto L_08927778;
    return;
L_08927778:
    ctx.gpr[31] = (0x08927780u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 488u, 0x08B4214Cu>(ctx, &aot_mem) && ctx.pc == 0x08927780u) goto L_08927780;
    return;
L_08927780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089277D0;
      }
      goto L_08927794;
    }
L_08927794:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (46887u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 50604u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089277B4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x089277B4u) goto L_089277B4;
    return;
L_089277B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089277D0;
L_089277D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x089277E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 612u, 0x088C6FA4u>(ctx, &aot_mem) && ctx.pc == 0x089277E8u) goto L_089277E8;
    return;
L_089277E8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089277F4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 30u, 0x08B04218u>(ctx, &aot_mem) && ctx.pc == 0x089277F4u) goto L_089277F4;
    return;
L_089277F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927810;
      }
      goto L_08927804;
    }
L_08927804:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08927810;
L_08927810:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0892781Cu);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x0892781Cu) goto L_0892781C;
    return;
L_0892781C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927828u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08927828u) goto L_08927828;
    return;
L_08927828:
    ctx.gpr[31] = (0x08927830u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 970u, 0x0890BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08927830u) goto L_08927830;
    return;
L_08927830:
    ctx.gpr[31] = (0x08927838u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 84u, 0x0890850Cu>(ctx, &aot_mem) && ctx.pc == 0x08927838u) goto L_08927838;
    return;
L_08927838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927FF0;
      }
      goto L_08927840;
    }
L_08927840:
    ctx.gpr[31] = (0x08927848u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08927848u) goto L_08927848;
    return;
L_08927848:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927864;
      }
      goto L_08927850;
    }
L_08927850:
    ctx.gpr[31] = (0x08927858u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08927858u) goto L_08927858;
    return;
L_08927858:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08927864;
L_08927864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(472)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-12289));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(472), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(558)));
    ctx.gpr[5] = (0u | 65535u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892788C;
      }
      goto L_08927884;
    }
L_08927884:
    ctx.gpr[4] = (0u | 15000u);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(558), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0892788C;
L_0892788C:
    ctx.gpr[31] = (0x08927894u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08927894u) goto L_08927894;
    return;
L_08927894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927930;
      }
      goto L_0892789C;
    }
L_0892789C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_089278C8;
      }
      goto L_089278AC;
    }
L_089278AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089278C8;
      }
      goto L_089278BC;
    }
L_089278BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08927920;
      }
      goto L_089278C8;
    }
L_089278C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927910;
      }
      goto L_089278DC;
    }
L_089278DC:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089278F4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x089278F4u) goto L_089278F4;
    return;
L_089278F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08927910;
L_08927910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08927920;
L_08927920:
    ctx.gpr[31] = (0x08927928u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 612u, 0x088C6FA4u>(ctx, &aot_mem) && ctx.pc == 0x08927928u) goto L_08927928;
    return;
L_08927928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927998;
      }
      goto L_08927930;
    }
L_08927930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08927998;
      }
      goto L_0892793C;
    }
L_0892793C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927984;
      }
      goto L_08927950;
    }
L_08927950:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08927968u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem) && ctx.pc == 0x08927968u) goto L_08927968;
    return;
L_08927968:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08927984;
L_08927984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08927998;
L_08927998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08927A78;
      }
      goto L_089279A4;
    }
L_089279A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (32768u << 16u);
      if (branch_taken) {
          goto L_08927A78;
      }
      goto L_089279B8;
    }
L_089279B8:
    ctx.gpr[18] = (1024u << 16u);
    ctx.gpr[17] = (2u << 16u);
    goto L_089279C0;
L_089279C0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089279CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089279CCu) goto L_089279CC;
    return;
L_089279CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08927A64;
      }
      goto L_089279D4;
    }
L_089279D4:
    ctx.gpr[31] = (0x089279DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089279DCu) goto L_089279DC;
    return;
L_089279DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08927A64;
      }
      goto L_089279EC;
    }
L_089279EC:
    ctx.gpr[31] = (0x089279F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x089279F4u) goto L_089279F4;
    return;
L_089279F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927A64;
      }
      goto L_08927A04;
    }
L_08927A04:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08927A10u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08927A10u) goto L_08927A10;
    return;
L_08927A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08927A2C;
      }
      goto L_08927A1C;
    }
L_08927A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927A64;
      }
      goto L_08927A2C;
    }
L_08927A2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08927A3Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08927A3Cu) goto L_08927A3C;
    return;
L_08927A3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08927A4Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08927A4Cu) goto L_08927A4C;
    return;
L_08927A4C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08927A5Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08927A5Cu) goto L_08927A5C;
    return;
L_08927A5C:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1728), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08927A64;
L_08927A64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089279C0;
      }
      goto L_08927A78;
    }
L_08927A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08927A94;
      }
      goto L_08927A84;
    }
L_08927A84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[4] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08927C5C;
      }
      goto L_08927A94;
    }
L_08927A94:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08927AA0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 30u, 0x08B04218u>(ctx, &aot_mem) && ctx.pc == 0x08927AA0u) goto L_08927AA0;
    return;
L_08927AA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08927ACC;
      }
      goto L_08927AB0;
    }
L_08927AB0:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5448)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5436), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5448), ctx.gpr[4]);
    goto L_08927ACC;
L_08927ACC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927AF8;
      }
      goto L_08927ADC;
    }
L_08927ADC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5452), ctx.gpr[4]);
    goto L_08927AF8;
L_08927AF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927B24;
      }
      goto L_08927B08;
    }
L_08927B08:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5456), ctx.gpr[4]);
    goto L_08927B24;
L_08927B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927B50;
      }
      goto L_08927B34;
    }
L_08927B34:
    ctx.gpr[31] = (0x08927B3Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 456u, 0x08B01BA4u>(ctx, &aot_mem) && ctx.pc == 0x08927B3Cu) goto L_08927B3C;
    return;
L_08927B3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927B50;
      }
      goto L_08927B44;
    }
L_08927B44:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08927B50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08927B50u) goto L_08927B50;
    return;
L_08927B50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927B88;
      }
      goto L_08927B60;
    }
L_08927B60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08927B88u);
    ctx.gpr[6] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem) && ctx.pc == 0x08927B88u) goto L_08927B88;
    return;
L_08927B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08927BE4;
      }
      goto L_08927B94;
    }
L_08927B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08927BE4;
      }
      goto L_08927BA0;
    }
L_08927BA0:
    ctx.gpr[31] = (0x08927BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08927BA8u) goto L_08927BA8;
    return;
L_08927BA8:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08927BE4;
      }
      goto L_08927BB0;
    }
L_08927BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927BE4;
      }
      goto L_08927BC0;
    }
L_08927BC0:
    ctx.gpr[31] = (0x08927BC8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem) && ctx.pc == 0x08927BC8u) goto L_08927BC8;
    return;
L_08927BC8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (0u | 25u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08927BE4;
L_08927BE4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927BF0u);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08927BF0u) goto L_08927BF0;
    return;
L_08927BF0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927BFCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08927BFCu) goto L_08927BFC;
    return;
L_08927BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08927E78;
      }
      goto L_08927C08;
    }
L_08927C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927C48;
      }
      goto L_08927C18;
    }
L_08927C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927C48;
      }
      goto L_08927C28;
    }
L_08927C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927C48;
      }
      goto L_08927C38;
    }
L_08927C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927C4C;
      }
      goto L_08927C48;
    }
L_08927C48:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(640), 0u);
    goto L_08927C4C;
L_08927C4C:
    ctx.gpr[31] = (0x08927C54u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08927C54u) goto L_08927C54;
    return;
L_08927C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927E78;
      }
      goto L_08927C5C;
    }
L_08927C5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08927C8C;
      }
      goto L_08927C70;
    }
L_08927C70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927C8C;
      }
      goto L_08927C7C;
    }
L_08927C7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08927C8C;
      }
      goto L_08927C88;
    }
L_08927C88:
    ctx.gpr[17] = (0u | 1u);
    goto L_08927C8C;
L_08927C8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08927CE8;
      }
      goto L_08927C98;
    }
L_08927C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08927CE8;
      }
      goto L_08927CA4;
    }
L_08927CA4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08927CB0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08927CB0u) goto L_08927CB0;
    return;
L_08927CB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927CD0;
      }
      goto L_08927CB8;
    }
L_08927CB8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927CC8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem) && ctx.pc == 0x08927CC8u) goto L_08927CC8;
    return;
L_08927CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927CDC;
      }
      goto L_08927CD0;
    }
L_08927CD0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08927CDCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 10u, 0x08B000ACu>(ctx, &aot_mem) && ctx.pc == 0x08927CDCu) goto L_08927CDC;
    return;
L_08927CDC:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927CE8;
    }
L_08927CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927D08;
      }
      goto L_08927CF8;
    }
L_08927CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927D20;
      }
      goto L_08927D08;
    }
L_08927D08:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927D18u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem) && ctx.pc == 0x08927D18u) goto L_08927D18;
    return;
L_08927D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927D20;
    }
L_08927D20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927D44;
      }
      goto L_08927D30;
    }
L_08927D30:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08927D3Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 10u, 0x08B000ACu>(ctx, &aot_mem) && ctx.pc == 0x08927D3Cu) goto L_08927D3C;
    return;
L_08927D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927D44;
    }
L_08927D44:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08927D80;
      }
      goto L_08927D54;
    }
L_08927D54:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
      if (branch_taken) {
          goto L_08927DB8;
      }
      goto L_08927D60;
    }
L_08927D60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DA0;
      }
      goto L_08927D68;
    }
L_08927D68:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927D78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem) && ctx.pc == 0x08927D78u) goto L_08927D78;
    return;
L_08927D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927D80;
    }
L_08927D80:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927DB8;
      }
      goto L_08927D88;
    }
L_08927D88:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927D98u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem) && ctx.pc == 0x08927D98u) goto L_08927D98;
    return;
L_08927D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927DA0;
    }
L_08927DA0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927DB0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 24u, 0x08B00214u>(ctx, &aot_mem) && ctx.pc == 0x08927DB0u) goto L_08927DB0;
    return;
L_08927DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927DC4;
      }
      goto L_08927DB8;
    }
L_08927DB8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08927DC4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 10u, 0x08B000ACu>(ctx, &aot_mem) && ctx.pc == 0x08927DC4u) goto L_08927DC4;
    return;
L_08927DC4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927DD0u);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08927DD0u) goto L_08927DD0;
    return;
L_08927DD0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927DDCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08927DDCu) goto L_08927DDC;
    return;
L_08927DDC:
    ctx.gpr[31] = (0x08927DE4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08927DE4u) goto L_08927DE4;
    return;
L_08927DE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927E04;
      }
      goto L_08927DEC;
    }
L_08927DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08927E04;
      }
      goto L_08927DF8;
    }
L_08927DF8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927E04u);
    ctx.gpr[5] = (0u | 51u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08927E04u) goto L_08927E04;
    return;
L_08927E04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927E44;
      }
      goto L_08927E14;
    }
L_08927E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927E44;
      }
      goto L_08927E24;
    }
L_08927E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927E44;
      }
      goto L_08927E34;
    }
L_08927E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08927E48;
      }
      goto L_08927E44;
    }
L_08927E44:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(640), 0u);
    goto L_08927E48;
L_08927E48:
    ctx.gpr[31] = (0x08927E50u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1089u, 0x08AC7F64u>(ctx, &aot_mem) && ctx.pc == 0x08927E50u) goto L_08927E50;
    return;
L_08927E50:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927E68;
      }
      goto L_08927E58;
    }
L_08927E58:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08927E68u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08927E68u) goto L_08927E68;
    return;
L_08927E68:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927E78;
      }
      goto L_08927E70;
    }
L_08927E70:
    ctx.gpr[4] = (0u | 17u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08927E78;
L_08927E78:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08927E88u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x08927E88u) goto L_08927E88;
    return;
L_08927E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(614))))));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(563), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927EC8;
      }
      goto L_08927EAC;
    }
L_08927EAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(563)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927EC8;
      }
      goto L_08927EB8;
    }
L_08927EB8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x08927EC8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 623u, 0x08832ADCu>(ctx, &aot_mem) && ctx.pc == 0x08927EC8u) goto L_08927EC8;
    return;
L_08927EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927EFC;
      }
      goto L_08927EDC;
    }
L_08927EDC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-12032)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08927EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08927F08;
      }
      goto L_08927EFC;
    }
L_08927EFC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927F08u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x08927F08u) goto L_08927F08;
    return;
L_08927F08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[21]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x08927F24u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 307u, 0x089B56FCu>(ctx, &aot_mem) && ctx.pc == 0x08927F24u) goto L_08927F24;
    return;
L_08927F24:
    ctx.gpr[31] = (0x08927F2Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08927F2Cu) goto L_08927F2C;
    return;
L_08927F2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927F48;
      }
      goto L_08927F34;
    }
L_08927F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08927F48;
      }
      goto L_08927F40;
    }
L_08927F40:
    ctx.gpr[31] = (0x08927F48u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 84u, 0x0890850Cu>(ctx, &aot_mem) && ctx.pc == 0x08927F48u) goto L_08927F48;
    return;
L_08927F48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927F6C;
      }
      goto L_08927F58;
    }
L_08927F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08927F6C;
L_08927F6C:
    ctx.gpr[31] = (0x08927F74u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08927F74u) goto L_08927F74;
    return;
L_08927F74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08927FE0;
      }
      goto L_08927F7C;
    }
L_08927F7C:
    ctx.gpr[31] = (0x08927F84u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 505u, 0x08B4223Cu>(ctx, &aot_mem) && ctx.pc == 0x08927F84u) goto L_08927F84;
    return;
L_08927F84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927FE0;
      }
      goto L_08927F8C;
    }
L_08927F8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08927FE0;
      }
      goto L_08927F98;
    }
L_08927F98:
    ctx.gpr[31] = (0x08927FA0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 488u, 0x08B4214Cu>(ctx, &aot_mem) && ctx.pc == 0x08927FA0u) goto L_08927FA0;
    return;
L_08927FA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08927FD4;
      }
      goto L_08927FB0;
    }
L_08927FB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08927FD4;
      }
      goto L_08927FBC;
    }
L_08927FBC:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08927FD4u);
    ctx.gpr[8] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem) && ctx.pc == 0x08927FD4u) goto L_08927FD4;
    return;
L_08927FD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08927FE0;
L_08927FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    goto L_08927FF0;
L_08927FF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.pc = 0x08928000u; return;
}

void recomp_unit_0072(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0072_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_72(Runtime &runtime) {
    runtime.register_generated_unit(72u, 0x08924000u, 16384u, &recomp_unit_0072, &recomp_unit_0072_entry);
    runtime.register_function(0x08924000u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924008u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924010u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924018u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924020u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924028u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924030u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924038u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924044u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924054u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892405Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924068u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924070u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924078u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924080u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924088u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924090u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924098u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089240FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924104u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892410Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924114u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892411Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924124u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892412Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924134u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892413Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924144u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892414Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924154u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892415Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924164u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892416Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924174u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892417Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924184u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892418Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924194u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892419Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089241F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924200u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924208u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924210u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924218u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924220u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892422Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924234u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924240u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924264u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892426Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892427Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089242E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924304u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924318u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924324u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924328u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924330u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892433Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924348u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924358u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924360u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924370u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924380u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924388u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089243E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924410u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924458u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924498u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089244FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924510u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924518u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924520u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924528u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924530u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924538u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924540u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924548u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924550u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924558u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924560u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924568u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924570u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924584u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089245FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924608u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924610u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892461Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924624u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892462Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924634u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892463Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924648u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924650u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924660u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924668u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924670u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892468Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924694u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089246E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924728u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924760u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892476Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924774u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892477Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924784u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892478Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924794u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089247D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924820u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924828u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892483Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892484Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892485Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924864u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924870u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924878u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924888u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892489Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089248FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924904u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924914u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892491Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924924u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924930u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924938u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924940u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924948u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924954u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924968u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924980u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924990u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089249F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924A94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924ACCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924AF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B0Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924B9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924BF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924C90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924CECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924D90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924DF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924E98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924ED4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924EF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924F94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FD8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08924FF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925000u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925004u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892500Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925014u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925020u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925028u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892503Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925044u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925054u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925060u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925070u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925074u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925080u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892508Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925090u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892509Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089250F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925104u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892510Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925114u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925118u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925128u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925138u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925140u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925148u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925154u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925168u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925178u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925184u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925194u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925198u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089251F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925204u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892520Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892521Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892522Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892523Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892524Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892525Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925260u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925268u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925270u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892527Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925290u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925298u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089252ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925300u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925308u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925318u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925320u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925328u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925334u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925348u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925350u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925364u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892536Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925374u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925388u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925390u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892539Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089253F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925448u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925450u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925458u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925460u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925468u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925478u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892547Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089254E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925500u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925508u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925510u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925518u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892551Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892552Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925538u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892554Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925550u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892555Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925564u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089255A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089255D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089255DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925600u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925618u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925630u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925654u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925678u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925690u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892569Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089256E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925704u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925728u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925740u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892574Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925758u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892576Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925774u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925780u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892578Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089257E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892580Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925830u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925848u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925854u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925860u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925874u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892587Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925888u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925894u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089258E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925908u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892591Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892592Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925934u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925940u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892594Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925958u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892597Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925988u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925994u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089259FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925A94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925AD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925B44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925BACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925C9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925CF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925D9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925DF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925E9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925ED0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925ED8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925EF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925F48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08925FE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926014u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926040u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926050u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926088u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089260F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926108u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926110u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926118u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892612Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892613Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926144u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892614Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926190u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089261E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926200u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926208u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892620Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089262F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892630Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926314u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926328u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926334u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089263FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926404u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892640Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926414u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892641Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926428u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089264FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926510u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926520u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926528u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892652Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926540u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926560u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089265FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892660Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926618u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926620u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926628u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926630u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926640u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926654u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926660u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926668u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926670u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926680u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892668Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926694u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926698u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089266D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926768u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892677Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926794u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089267E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892680Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926818u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926820u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926828u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926838u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926848u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926858u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926860u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892686Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926878u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926888u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892689Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089268B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926928u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926930u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926980u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926988u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089269F8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926A9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926AB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926B9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926BF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926C9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926CF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926D98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DCCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926DE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926E90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926EDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F00u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F90u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926F9Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FB4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08926FECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892701Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892704Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892706Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892707Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089270FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927104u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927110u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927120u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927134u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927138u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892714Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927168u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927170u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927188u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892719Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089271FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892721Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927228u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927240u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927248u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927260u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927268u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927270u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892727Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927294u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892729Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089272F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927300u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892730Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927314u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892731Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892732Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927334u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927340u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892738Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089273D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927408u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927410u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892741Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927424u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927438u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892744Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892745Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892746Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927474u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892747Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927488u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927490u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927498u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274A8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274B0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274E0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274F0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089274FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927504u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892750Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927518u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927520u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892752Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927538u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927540u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927548u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927554u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927560u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927568u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927578u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927594u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275C4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089275FCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892760Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927624u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892762Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927634u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927640u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927648u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927650u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892765Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276A0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276D8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276E4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089276F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927704u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892770Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927718u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927724u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927730u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927738u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927740u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892775Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927778u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927780u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927794u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277B4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277D0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277E8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089277F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927804u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927810u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892781Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927828u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927830u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927838u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927840u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927848u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927850u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927858u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927864u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927884u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892788Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927894u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892789Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278ACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278BCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278C8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089278F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927910u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927920u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927928u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927930u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x0892793Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927950u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927968u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927984u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927998u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279A4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279B8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279C0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279CCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279D4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279DCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279ECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x089279F4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A10u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A1Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A64u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927A94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927ACCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927ADCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927AF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927B94u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BA8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BC0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BF0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927BFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C28u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C38u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C4Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C5Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927C98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CA4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CE8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927CF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D18u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D20u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D30u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D3Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D54u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D60u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D80u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927D98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DC4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DD0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DE4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DECu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927DF8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E04u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E14u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E44u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E50u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E68u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E70u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E78u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927E88u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EACu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EB8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EC8u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EDCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EF4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927EFCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F08u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F24u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F2Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F34u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F40u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F48u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F58u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F6Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F74u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F7Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F84u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F8Cu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927F98u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FA0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FB0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FBCu, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FD4u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FE0u, &recomp_unit_0072, "recomp_unit_0072");
    runtime.register_function(0x08927FF0u, &recomp_unit_0072, "recomp_unit_0072");
}
} // namespace psprecomp
