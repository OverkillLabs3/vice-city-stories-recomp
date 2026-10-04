#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0020[4093] = {
    1, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 5, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    9, 0, 0, 0, 0, 0, 10, 11, 0, 12, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 17,
    0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25,
    0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0,
    34, 0, 0, 0, 0, 0, 35, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42,
    0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 49, 0,
    50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57, 0,
    58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 65, 0,
    66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 73, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0,
    81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 88, 0,
    89, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 0, 0, 100, 101, 0, 102, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0,
    106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0,
    0, 0, 0, 0, 115, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123,
    0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 129, 130, 0,
    131, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 146,
    0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 154,
    0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 162,
    0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 168, 0, 169,
    0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 176, 0, 177,
    0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 184, 0, 185,
    0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 191, 0, 192,
    0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200,
    0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208,
    0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0,
    0, 0, 0, 0, 215, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 223,
    0, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 231,
    0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0,
    238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 241, 0, 242, 0, 0, 0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 246,
    0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 254,
    0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269,
    0, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 276, 0, 277,
    0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 284, 0, 285,
    0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 291, 0, 292,
    0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 300,
    0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 308,
    0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 0, 0, 315, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 322, 0, 323,
    0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331,
    0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 341, 0, 342, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 345, 0, 346,
    0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 0, 354,
    0, 0, 0, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 361, 0, 0, 362,
    0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 366, 0, 367, 0, 0, 0, 0, 0, 368, 0, 369,
    0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 376, 0, 377,
    0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0, 385,
    0, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 391, 0, 392,
    0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 399, 0, 400,
    0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 407, 0, 408,
    0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 0, 415, 416, 0, 417, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 422, 0, 423,
    0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 430, 0, 431,
    0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0,
    438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 446,
    0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 453, 0, 454,
    0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461,
    0, 0, 462, 0, 463, 0, 464, 0, 0, 0, 0, 0, 465, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 470, 0, 471,
    0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 478, 0, 479, 0, 0,
    0, 0, 0, 480, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 487, 0, 488, 0,
    0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 495, 496, 0, 497, 0, 0,
    0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0,
    0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 509, 0, 510, 0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0,
    0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0,
    0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 527, 0, 528, 0, 0, 0,
    0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 534, 0, 535, 0, 0, 0,
    0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0,
    0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0,
    0, 0, 552, 0, 553, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0,
    0, 558, 559, 0, 560, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0,
    0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0,
    0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0,
    0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0,
    0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0,
    0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0,
    0, 0, 0, 605, 0, 0, 0, 0, 0, 606, 607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0,
    0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0,
    0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 627, 0, 0, 628, 0, 0, 0,
    0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 632, 0, 633, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0,
    0, 0, 636, 0, 637, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0,
    0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0,
    0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 657, 0, 658, 0, 0, 0,
    0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0,
    0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0,
    0, 0, 675, 0, 676, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0,
    0, 681, 682, 0, 683, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0,
    0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 696, 0, 697, 0, 0, 0,
    0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0,
    0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 707, 0, 708, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0,
    0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0,
    0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0,
    0, 0, 0, 0, 729, 0, 0, 730, 0, 731, 0, 732, 0, 0, 0, 0, 0, 733, 734, 0, 735, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0,
    0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0,
    746, 0, 747, 0, 0, 0, 0, 0, 748, 749, 0, 750, 0, 0, 0, 0, 0, 751, 0, 752, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0,
    0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 0, 763,
    764, 0, 765, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 768, 0, 769, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 772, 0,
    0, 773, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 775, 0, 776, 0, 777, 0, 0, 0, 0, 0, 778, 779, 0, 780, 0, 0, 0, 0, 0, 781,
    0, 782, 0, 0, 0, 0, 0, 783, 0, 784, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0,
    0, 789, 0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 791, 792, 0, 793, 0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0, 796, 0,
    797, 0, 0, 0, 0, 0, 798, 0, 799, 0, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 0, 804, 0,
    805, 0, 0, 0, 0, 0, 806, 0, 807, 0, 0, 0, 0, 0, 808, 0, 809, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 812, 0, 0,
    813, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816, 817, 0, 818, 0, 0, 0, 0, 0, 819, 0,
    820, 0, 0, 0, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0, 825, 0, 826, 0, 0, 0, 0, 0, 827, 0,
    828, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 0, 0, 0, 831, 0, 832, 0, 0, 0, 0, 0, 833, 0, 834, 0, 0, 0, 0, 0, 835, 0,
    836, 0, 0, 0, 0, 837, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 840, 0, 841, 0, 842, 0, 0, 0, 0, 0, 843, 844, 0,
    845, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 0, 0, 848, 0, 849, 0, 0, 0, 0, 0, 850, 0, 851, 0, 0, 0, 852, 0, 0, 853,
    0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 856, 857, 0, 858, 0, 0, 0, 0, 0, 859, 0, 860,
    0, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 0, 867, 0, 868,
    0, 0, 0, 0, 0, 869, 0, 870, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 0, 0, 873, 0, 874, 0, 0, 0, 0, 0, 875, 0, 876,
    0, 0, 0, 0, 877, 0, 0, 878, 0, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 881, 882, 0, 883,
    0, 0, 0, 0, 0, 884, 0, 885, 0, 0, 0, 0, 0, 886, 0, 887, 0, 0, 0, 0, 0, 888, 0, 889, 0, 0, 0, 0, 0, 890, 0, 891,
    0, 0, 0, 0, 0, 892, 0, 893, 0, 0, 0, 0, 0, 894, 0, 895, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0, 0, 0, 0, 898, 0, 899,
    0, 0, 0, 0, 0, 900, 0, 901, 0, 0, 0, 0, 902, 0, 0, 903, 0, 0, 0, 0, 0, 0, 0, 904, 0, 0, 905, 0, 906, 0, 907, 0,
    0, 0, 0, 0, 908, 909, 0, 910, 0, 0, 0, 0, 0, 911, 0, 912, 0, 0, 0, 0, 0, 913, 0, 914, 0, 0, 0, 0, 0, 915, 0, 916,
    0, 0, 0, 917, 0, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 919, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 921, 922, 0, 923, 0,
    0, 0, 0, 0, 924, 0, 925, 0, 0, 0, 0, 0, 926, 0, 927, 0, 0, 0, 0, 0, 928, 0, 929, 0, 0, 0, 0, 0, 930, 0, 931, 0,
    0, 0, 0, 0, 932, 0, 933, 0, 0, 0, 0, 0, 934, 0, 935, 0, 0, 0, 0, 0, 936, 0, 937, 0, 0, 0, 0, 0, 938, 0, 939, 0,
    0, 0, 0, 0, 940, 0, 941, 0, 0, 0, 0, 942, 0, 0, 943, 0, 0, 0, 0, 0, 0, 0, 0, 944, 0, 0, 0, 0, 0, 945, 0, 0,
    0, 0, 0, 946, 947, 0, 948, 0, 0, 0, 0, 0, 949, 0, 950, 0, 0, 0, 0, 0, 951, 0, 952, 0, 0, 0, 0, 0, 953, 0, 954, 0,
    0, 0, 0, 0, 955, 0, 956, 0, 0, 0, 0, 0, 957, 0, 958, 0, 0, 0, 0, 0, 959, 0, 960, 0, 0, 0, 0, 0, 961, 0, 962, 0,
    0, 0, 0, 0, 963, 0, 964, 0, 0, 0, 0, 965, 0, 0, 966, 0, 0, 0, 0, 0, 0, 0, 967, 0, 0, 968, 0, 969, 0, 970, 0, 0,
    0, 0, 0, 971, 972, 0, 973, 0, 0, 0, 0, 0, 974, 0, 975, 0, 0, 0, 0, 0, 976, 0, 977, 0, 0, 0, 0, 0, 978, 0, 979, 0,
    0, 0, 980, 0, 0, 981, 0, 0, 0, 0, 0, 0, 0, 0, 982, 0, 0, 0, 0, 0, 983, 0, 0, 0, 0, 0, 984, 985, 0, 986, 0, 0,
    0, 0, 0, 987, 0, 988, 0, 0, 0, 0, 0, 989, 0, 990, 0, 0, 0, 0, 0, 991, 0, 992, 0, 0, 0, 0, 0, 993, 0, 994, 0, 0,
    0, 0, 0, 995, 0, 996, 0, 0, 0, 0, 0, 997, 0, 998, 0, 0, 0, 0, 0, 999, 0, 1000, 0, 0, 0, 0, 0, 1001, 0, 1002, 0, 0,
    0, 0, 0, 1003, 0, 1004, 0, 0, 0, 0, 1005, 0, 0, 1006, 0, 0, 0, 0, 0, 0, 0, 0, 1007, 0, 0, 0, 0, 0, 1008,
};
void recomp_unit_0020_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08854000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0020[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08854000;
    case 2u: goto L_08854008;
    case 3u: goto L_08854010;
    case 4u: goto L_0885401C;
    case 5u: goto L_08854034;
    case 6u: goto L_08854038;
    case 7u: goto L_08854044;
    case 8u: goto L_08854068;
    case 9u: goto L_08854080;
    case 10u: goto L_08854098;
    case 11u: goto L_0885409C;
    case 12u: goto L_088540A4;
    case 13u: goto L_088540BC;
    case 14u: goto L_088540C4;
    case 15u: goto L_088540DC;
    case 16u: goto L_088540E4;
    case 17u: goto L_088540FC;
    case 18u: goto L_08854104;
    case 19u: goto L_0885411C;
    case 20u: goto L_08854124;
    case 21u: goto L_0885413C;
    case 22u: goto L_08854144;
    case 23u: goto L_0885415C;
    case 24u: goto L_08854164;
    case 25u: goto L_0885417C;
    case 26u: goto L_08854184;
    case 27u: goto L_0885419C;
    case 28u: goto L_088541A4;
    case 29u: goto L_088541B8;
    case 30u: goto L_088541C4;
    case 31u: goto L_088541E4;
    case 32u: goto L_088541F0;
    case 33u: goto L_088541F8;
    case 34u: goto L_08854200;
    case 35u: goto L_08854218;
    case 36u: goto L_0885421C;
    case 37u: goto L_08854224;
    case 38u: goto L_0885423C;
    case 39u: goto L_08854244;
    case 40u: goto L_0885425C;
    case 41u: goto L_08854264;
    case 42u: goto L_0885427C;
    case 43u: goto L_08854284;
    case 44u: goto L_08854294;
    case 45u: goto L_088542A0;
    case 46u: goto L_088542C4;
    case 47u: goto L_088542DC;
    case 48u: goto L_088542F4;
    case 49u: goto L_088542F8;
    case 50u: goto L_08854300;
    case 51u: goto L_08854318;
    case 52u: goto L_08854320;
    case 53u: goto L_08854338;
    case 54u: goto L_08854340;
    case 55u: goto L_08854358;
    case 56u: goto L_08854360;
    case 57u: goto L_08854378;
    case 58u: goto L_08854380;
    case 59u: goto L_08854398;
    case 60u: goto L_088543A0;
    case 61u: goto L_088543B8;
    case 62u: goto L_088543C0;
    case 63u: goto L_088543D8;
    case 64u: goto L_088543E0;
    case 65u: goto L_088543F8;
    case 66u: goto L_08854400;
    case 67u: goto L_08854418;
    case 68u: goto L_08854420;
    case 69u: goto L_08854434;
    case 70u: goto L_08854440;
    case 71u: goto L_08854464;
    case 72u: goto L_0885447C;
    case 73u: goto L_08854494;
    case 74u: goto L_08854498;
    case 75u: goto L_088544A0;
    case 76u: goto L_088544B8;
    case 77u: goto L_088544C0;
    case 78u: goto L_088544D8;
    case 79u: goto L_088544E0;
    case 80u: goto L_088544F8;
    case 81u: goto L_08854500;
    case 82u: goto L_08854518;
    case 83u: goto L_08854520;
    case 84u: goto L_08854538;
    case 85u: goto L_08854540;
    case 86u: goto L_08854558;
    case 87u: goto L_08854560;
    case 88u: goto L_08854578;
    case 89u: goto L_08854580;
    case 90u: goto L_08854598;
    case 91u: goto L_088545A0;
    case 92u: goto L_088545B8;
    case 93u: goto L_088545C0;
    case 94u: goto L_088545D4;
    case 95u: goto L_088545E0;
    case 96u: goto L_08854600;
    case 97u: goto L_0885460C;
    case 98u: goto L_08854614;
    case 99u: goto L_0885461C;
    case 100u: goto L_08854634;
    case 101u: goto L_08854638;
    case 102u: goto L_08854640;
    case 103u: goto L_08854658;
    case 104u: goto L_08854660;
    case 105u: goto L_08854678;
    case 106u: goto L_08854680;
    case 107u: goto L_08854698;
    case 108u: goto L_088546A0;
    case 109u: goto L_088546B0;
    case 110u: goto L_088546BC;
    case 111u: goto L_088546DC;
    case 112u: goto L_088546E8;
    case 113u: goto L_088546F0;
    case 114u: goto L_088546F8;
    case 115u: goto L_08854710;
    case 116u: goto L_08854714;
    case 117u: goto L_0885471C;
    case 118u: goto L_08854734;
    case 119u: goto L_0885473C;
    case 120u: goto L_08854754;
    case 121u: goto L_0885475C;
    case 122u: goto L_08854774;
    case 123u: goto L_0885477C;
    case 124u: goto L_0885478C;
    case 125u: goto L_08854798;
    case 126u: goto L_088547B8;
    case 127u: goto L_088547C4;
    case 128u: goto L_088547DC;
    case 129u: goto L_088547F4;
    case 130u: goto L_088547F8;
    case 131u: goto L_08854800;
    case 132u: goto L_08854818;
    case 133u: goto L_08854820;
    case 134u: goto L_08854838;
    case 135u: goto L_08854840;
    case 136u: goto L_08854858;
    case 137u: goto L_08854860;
    case 138u: goto L_08854870;
    case 139u: goto L_0885487C;
    case 140u: goto L_088548A0;
    case 141u: goto L_088548B8;
    case 142u: goto L_088548D0;
    case 143u: goto L_088548D4;
    case 144u: goto L_088548DC;
    case 145u: goto L_088548F4;
    case 146u: goto L_088548FC;
    case 147u: goto L_08854914;
    case 148u: goto L_0885491C;
    case 149u: goto L_08854934;
    case 150u: goto L_0885493C;
    case 151u: goto L_08854954;
    case 152u: goto L_0885495C;
    case 153u: goto L_08854974;
    case 154u: goto L_0885497C;
    case 155u: goto L_08854994;
    case 156u: goto L_0885499C;
    case 157u: goto L_088549B4;
    case 158u: goto L_088549BC;
    case 159u: goto L_088549D4;
    case 160u: goto L_088549DC;
    case 161u: goto L_088549F4;
    case 162u: goto L_088549FC;
    case 163u: goto L_08854A10;
    case 164u: goto L_08854A1C;
    case 165u: goto L_08854A40;
    case 166u: goto L_08854A58;
    case 167u: goto L_08854A70;
    case 168u: goto L_08854A74;
    case 169u: goto L_08854A7C;
    case 170u: goto L_08854A94;
    case 171u: goto L_08854A9C;
    case 172u: goto L_08854AB4;
    case 173u: goto L_08854ABC;
    case 174u: goto L_08854AD4;
    case 175u: goto L_08854ADC;
    case 176u: goto L_08854AF4;
    case 177u: goto L_08854AFC;
    case 178u: goto L_08854B14;
    case 179u: goto L_08854B1C;
    case 180u: goto L_08854B34;
    case 181u: goto L_08854B3C;
    case 182u: goto L_08854B54;
    case 183u: goto L_08854B5C;
    case 184u: goto L_08854B74;
    case 185u: goto L_08854B7C;
    case 186u: goto L_08854B90;
    case 187u: goto L_08854B9C;
    case 188u: goto L_08854BC0;
    case 189u: goto L_08854BD8;
    case 190u: goto L_08854BF0;
    case 191u: goto L_08854BF4;
    case 192u: goto L_08854BFC;
    case 193u: goto L_08854C14;
    case 194u: goto L_08854C1C;
    case 195u: goto L_08854C34;
    case 196u: goto L_08854C3C;
    case 197u: goto L_08854C54;
    case 198u: goto L_08854C5C;
    case 199u: goto L_08854C74;
    case 200u: goto L_08854C7C;
    case 201u: goto L_08854C94;
    case 202u: goto L_08854C9C;
    case 203u: goto L_08854CB4;
    case 204u: goto L_08854CBC;
    case 205u: goto L_08854CD4;
    case 206u: goto L_08854CDC;
    case 207u: goto L_08854CF4;
    case 208u: goto L_08854CFC;
    case 209u: goto L_08854D14;
    case 210u: goto L_08854D1C;
    case 211u: goto L_08854D30;
    case 212u: goto L_08854D3C;
    case 213u: goto L_08854D60;
    case 214u: goto L_08854D78;
    case 215u: goto L_08854D90;
    case 216u: goto L_08854D94;
    case 217u: goto L_08854D9C;
    case 218u: goto L_08854DB4;
    case 219u: goto L_08854DBC;
    case 220u: goto L_08854DD4;
    case 221u: goto L_08854DDC;
    case 222u: goto L_08854DF4;
    case 223u: goto L_08854DFC;
    case 224u: goto L_08854E14;
    case 225u: goto L_08854E1C;
    case 226u: goto L_08854E34;
    case 227u: goto L_08854E3C;
    case 228u: goto L_08854E54;
    case 229u: goto L_08854E5C;
    case 230u: goto L_08854E74;
    case 231u: goto L_08854E7C;
    case 232u: goto L_08854E94;
    case 233u: goto L_08854E9C;
    case 234u: goto L_08854EB4;
    case 235u: goto L_08854EBC;
    case 236u: goto L_08854ED0;
    case 237u: goto L_08854EDC;
    case 238u: goto L_08854F00;
    case 239u: goto L_08854F18;
    case 240u: goto L_08854F30;
    case 241u: goto L_08854F34;
    case 242u: goto L_08854F3C;
    case 243u: goto L_08854F54;
    case 244u: goto L_08854F5C;
    case 245u: goto L_08854F74;
    case 246u: goto L_08854F7C;
    case 247u: goto L_08854F94;
    case 248u: goto L_08854F9C;
    case 249u: goto L_08854FB4;
    case 250u: goto L_08854FBC;
    case 251u: goto L_08854FD4;
    case 252u: goto L_08854FDC;
    case 253u: goto L_08854FF4;
    case 254u: goto L_08854FFC;
    case 255u: goto L_08855014;
    case 256u: goto L_0885501C;
    case 257u: goto L_08855034;
    case 258u: goto L_0885503C;
    case 259u: goto L_08855054;
    case 260u: goto L_0885505C;
    case 261u: goto L_08855070;
    case 262u: goto L_0885507C;
    case 263u: goto L_088550A0;
    case 264u: goto L_088550B8;
    case 265u: goto L_088550D0;
    case 266u: goto L_088550D4;
    case 267u: goto L_088550DC;
    case 268u: goto L_088550F4;
    case 269u: goto L_088550FC;
    case 270u: goto L_08855114;
    case 271u: goto L_0885511C;
    case 272u: goto L_08855134;
    case 273u: goto L_0885513C;
    case 274u: goto L_08855154;
    case 275u: goto L_0885515C;
    case 276u: goto L_08855174;
    case 277u: goto L_0885517C;
    case 278u: goto L_08855194;
    case 279u: goto L_0885519C;
    case 280u: goto L_088551B4;
    case 281u: goto L_088551BC;
    case 282u: goto L_088551D4;
    case 283u: goto L_088551DC;
    case 284u: goto L_088551F4;
    case 285u: goto L_088551FC;
    case 286u: goto L_08855210;
    case 287u: goto L_0885521C;
    case 288u: goto L_08855240;
    case 289u: goto L_08855258;
    case 290u: goto L_08855270;
    case 291u: goto L_08855274;
    case 292u: goto L_0885527C;
    case 293u: goto L_08855294;
    case 294u: goto L_0885529C;
    case 295u: goto L_088552B4;
    case 296u: goto L_088552BC;
    case 297u: goto L_088552D4;
    case 298u: goto L_088552DC;
    case 299u: goto L_088552F4;
    case 300u: goto L_088552FC;
    case 301u: goto L_08855314;
    case 302u: goto L_0885531C;
    case 303u: goto L_08855334;
    case 304u: goto L_0885533C;
    case 305u: goto L_08855354;
    case 306u: goto L_0885535C;
    case 307u: goto L_08855374;
    case 308u: goto L_0885537C;
    case 309u: goto L_08855394;
    case 310u: goto L_0885539C;
    case 311u: goto L_088553B0;
    case 312u: goto L_088553BC;
    case 313u: goto L_088553E0;
    case 314u: goto L_088553F8;
    case 315u: goto L_08855410;
    case 316u: goto L_08855414;
    case 317u: goto L_0885541C;
    case 318u: goto L_08855434;
    case 319u: goto L_0885543C;
    case 320u: goto L_08855454;
    case 321u: goto L_0885545C;
    case 322u: goto L_08855474;
    case 323u: goto L_0885547C;
    case 324u: goto L_08855494;
    case 325u: goto L_0885549C;
    case 326u: goto L_088554B4;
    case 327u: goto L_088554BC;
    case 328u: goto L_088554D4;
    case 329u: goto L_088554DC;
    case 330u: goto L_088554F4;
    case 331u: goto L_088554FC;
    case 332u: goto L_08855514;
    case 333u: goto L_0885551C;
    case 334u: goto L_08855534;
    case 335u: goto L_0885553C;
    case 336u: goto L_08855550;
    case 337u: goto L_0885555C;
    case 338u: goto L_08855580;
    case 339u: goto L_08855598;
    case 340u: goto L_088555B0;
    case 341u: goto L_088555B4;
    case 342u: goto L_088555BC;
    case 343u: goto L_088555D4;
    case 344u: goto L_088555DC;
    case 345u: goto L_088555F4;
    case 346u: goto L_088555FC;
    case 347u: goto L_08855614;
    case 348u: goto L_0885561C;
    case 349u: goto L_08855634;
    case 350u: goto L_0885563C;
    case 351u: goto L_08855654;
    case 352u: goto L_0885565C;
    case 353u: goto L_08855674;
    case 354u: goto L_0885567C;
    case 355u: goto L_08855694;
    case 356u: goto L_0885569C;
    case 357u: goto L_088556B4;
    case 358u: goto L_088556BC;
    case 359u: goto L_088556D4;
    case 360u: goto L_088556DC;
    case 361u: goto L_088556F0;
    case 362u: goto L_088556FC;
    case 363u: goto L_08855720;
    case 364u: goto L_08855738;
    case 365u: goto L_08855750;
    case 366u: goto L_08855754;
    case 367u: goto L_0885575C;
    case 368u: goto L_08855774;
    case 369u: goto L_0885577C;
    case 370u: goto L_08855794;
    case 371u: goto L_0885579C;
    case 372u: goto L_088557B4;
    case 373u: goto L_088557BC;
    case 374u: goto L_088557D4;
    case 375u: goto L_088557DC;
    case 376u: goto L_088557F4;
    case 377u: goto L_088557FC;
    case 378u: goto L_08855814;
    case 379u: goto L_0885581C;
    case 380u: goto L_08855834;
    case 381u: goto L_0885583C;
    case 382u: goto L_08855854;
    case 383u: goto L_0885585C;
    case 384u: goto L_08855874;
    case 385u: goto L_0885587C;
    case 386u: goto L_08855890;
    case 387u: goto L_0885589C;
    case 388u: goto L_088558C0;
    case 389u: goto L_088558D8;
    case 390u: goto L_088558F0;
    case 391u: goto L_088558F4;
    case 392u: goto L_088558FC;
    case 393u: goto L_08855914;
    case 394u: goto L_0885591C;
    case 395u: goto L_08855934;
    case 396u: goto L_0885593C;
    case 397u: goto L_08855954;
    case 398u: goto L_0885595C;
    case 399u: goto L_08855974;
    case 400u: goto L_0885597C;
    case 401u: goto L_08855994;
    case 402u: goto L_0885599C;
    case 403u: goto L_088559B4;
    case 404u: goto L_088559BC;
    case 405u: goto L_088559D4;
    case 406u: goto L_088559DC;
    case 407u: goto L_088559F4;
    case 408u: goto L_088559FC;
    case 409u: goto L_08855A14;
    case 410u: goto L_08855A1C;
    case 411u: goto L_08855A30;
    case 412u: goto L_08855A3C;
    case 413u: goto L_08855A60;
    case 414u: goto L_08855A78;
    case 415u: goto L_08855A90;
    case 416u: goto L_08855A94;
    case 417u: goto L_08855A9C;
    case 418u: goto L_08855AB4;
    case 419u: goto L_08855ABC;
    case 420u: goto L_08855AD4;
    case 421u: goto L_08855ADC;
    case 422u: goto L_08855AF4;
    case 423u: goto L_08855AFC;
    case 424u: goto L_08855B14;
    case 425u: goto L_08855B1C;
    case 426u: goto L_08855B34;
    case 427u: goto L_08855B3C;
    case 428u: goto L_08855B54;
    case 429u: goto L_08855B5C;
    case 430u: goto L_08855B74;
    case 431u: goto L_08855B7C;
    case 432u: goto L_08855B94;
    case 433u: goto L_08855B9C;
    case 434u: goto L_08855BB4;
    case 435u: goto L_08855BBC;
    case 436u: goto L_08855BD0;
    case 437u: goto L_08855BDC;
    case 438u: goto L_08855C00;
    case 439u: goto L_08855C18;
    case 440u: goto L_08855C30;
    case 441u: goto L_08855C34;
    case 442u: goto L_08855C3C;
    case 443u: goto L_08855C54;
    case 444u: goto L_08855C5C;
    case 445u: goto L_08855C74;
    case 446u: goto L_08855C7C;
    case 447u: goto L_08855C94;
    case 448u: goto L_08855C9C;
    case 449u: goto L_08855CB4;
    case 450u: goto L_08855CBC;
    case 451u: goto L_08855CD4;
    case 452u: goto L_08855CDC;
    case 453u: goto L_08855CF4;
    case 454u: goto L_08855CFC;
    case 455u: goto L_08855D14;
    case 456u: goto L_08855D1C;
    case 457u: goto L_08855D34;
    case 458u: goto L_08855D3C;
    case 459u: goto L_08855D50;
    case 460u: goto L_08855D5C;
    case 461u: goto L_08855D7C;
    case 462u: goto L_08855D88;
    case 463u: goto L_08855D90;
    case 464u: goto L_08855D98;
    case 465u: goto L_08855DB0;
    case 466u: goto L_08855DB4;
    case 467u: goto L_08855DBC;
    case 468u: goto L_08855DD4;
    case 469u: goto L_08855DDC;
    case 470u: goto L_08855DF4;
    case 471u: goto L_08855DFC;
    case 472u: goto L_08855E14;
    case 473u: goto L_08855E1C;
    case 474u: goto L_08855E2C;
    case 475u: goto L_08855E38;
    case 476u: goto L_08855E58;
    case 477u: goto L_08855E64;
    case 478u: goto L_08855E6C;
    case 479u: goto L_08855E74;
    case 480u: goto L_08855E8C;
    case 481u: goto L_08855E90;
    case 482u: goto L_08855E98;
    case 483u: goto L_08855EB0;
    case 484u: goto L_08855EB8;
    case 485u: goto L_08855ED0;
    case 486u: goto L_08855ED8;
    case 487u: goto L_08855EF0;
    case 488u: goto L_08855EF8;
    case 489u: goto L_08855F08;
    case 490u: goto L_08855F14;
    case 491u: goto L_08855F34;
    case 492u: goto L_08855F40;
    case 493u: goto L_08855F48;
    case 494u: goto L_08855F50;
    case 495u: goto L_08855F68;
    case 496u: goto L_08855F6C;
    case 497u: goto L_08855F74;
    case 498u: goto L_08855F8C;
    case 499u: goto L_08855F94;
    case 500u: goto L_08855FAC;
    case 501u: goto L_08855FB4;
    case 502u: goto L_08855FCC;
    case 503u: goto L_08855FD4;
    case 504u: goto L_08855FE4;
    case 505u: goto L_08855FF0;
    case 506u: goto L_08856014;
    case 507u: goto L_0885602C;
    case 508u: goto L_08856044;
    case 509u: goto L_08856048;
    case 510u: goto L_08856050;
    case 511u: goto L_08856068;
    case 512u: goto L_08856070;
    case 513u: goto L_08856088;
    case 514u: goto L_08856090;
    case 515u: goto L_088560A8;
    case 516u: goto L_088560B0;
    case 517u: goto L_088560C8;
    case 518u: goto L_088560D0;
    case 519u: goto L_088560E8;
    case 520u: goto L_088560F0;
    case 521u: goto L_08856108;
    case 522u: goto L_08856110;
    case 523u: goto L_08856128;
    case 524u: goto L_08856130;
    case 525u: goto L_08856148;
    case 526u: goto L_08856150;
    case 527u: goto L_08856168;
    case 528u: goto L_08856170;
    case 529u: goto L_08856184;
    case 530u: goto L_08856190;
    case 531u: goto L_088561B4;
    case 532u: goto L_088561CC;
    case 533u: goto L_088561E4;
    case 534u: goto L_088561E8;
    case 535u: goto L_088561F0;
    case 536u: goto L_08856208;
    case 537u: goto L_08856210;
    case 538u: goto L_08856228;
    case 539u: goto L_08856230;
    case 540u: goto L_08856248;
    case 541u: goto L_08856250;
    case 542u: goto L_08856268;
    case 543u: goto L_08856270;
    case 544u: goto L_08856288;
    case 545u: goto L_08856290;
    case 546u: goto L_088562A8;
    case 547u: goto L_088562B0;
    case 548u: goto L_088562C8;
    case 549u: goto L_088562D0;
    case 550u: goto L_088562E8;
    case 551u: goto L_088562F0;
    case 552u: goto L_08856308;
    case 553u: goto L_08856310;
    case 554u: goto L_08856324;
    case 555u: goto L_08856330;
    case 556u: goto L_08856354;
    case 557u: goto L_0885636C;
    case 558u: goto L_08856384;
    case 559u: goto L_08856388;
    case 560u: goto L_08856390;
    case 561u: goto L_088563A8;
    case 562u: goto L_088563B0;
    case 563u: goto L_088563C8;
    case 564u: goto L_088563D0;
    case 565u: goto L_088563E8;
    case 566u: goto L_088563F0;
    case 567u: goto L_08856408;
    case 568u: goto L_08856410;
    case 569u: goto L_08856428;
    case 570u: goto L_08856430;
    case 571u: goto L_08856448;
    case 572u: goto L_08856450;
    case 573u: goto L_08856468;
    case 574u: goto L_08856470;
    case 575u: goto L_08856488;
    case 576u: goto L_08856490;
    case 577u: goto L_088564A8;
    case 578u: goto L_088564B0;
    case 579u: goto L_088564C4;
    case 580u: goto L_088564D0;
    case 581u: goto L_088564F4;
    case 582u: goto L_0885650C;
    case 583u: goto L_08856524;
    case 584u: goto L_08856528;
    case 585u: goto L_08856530;
    case 586u: goto L_08856548;
    case 587u: goto L_08856550;
    case 588u: goto L_08856568;
    case 589u: goto L_08856570;
    case 590u: goto L_08856588;
    case 591u: goto L_08856590;
    case 592u: goto L_088565A8;
    case 593u: goto L_088565B0;
    case 594u: goto L_088565C8;
    case 595u: goto L_088565D0;
    case 596u: goto L_088565E8;
    case 597u: goto L_088565F0;
    case 598u: goto L_08856608;
    case 599u: goto L_08856610;
    case 600u: goto L_08856628;
    case 601u: goto L_08856630;
    case 602u: goto L_08856644;
    case 603u: goto L_08856650;
    case 604u: goto L_08856674;
    case 605u: goto L_0885668C;
    case 606u: goto L_088566A4;
    case 607u: goto L_088566A8;
    case 608u: goto L_088566B0;
    case 609u: goto L_088566C8;
    case 610u: goto L_088566D0;
    case 611u: goto L_088566E8;
    case 612u: goto L_088566F0;
    case 613u: goto L_08856708;
    case 614u: goto L_08856710;
    case 615u: goto L_08856728;
    case 616u: goto L_08856730;
    case 617u: goto L_08856748;
    case 618u: goto L_08856750;
    case 619u: goto L_08856768;
    case 620u: goto L_08856770;
    case 621u: goto L_08856788;
    case 622u: goto L_08856790;
    case 623u: goto L_088567A8;
    case 624u: goto L_088567B0;
    case 625u: goto L_088567C8;
    case 626u: goto L_088567D0;
    case 627u: goto L_088567E4;
    case 628u: goto L_088567F0;
    case 629u: goto L_08856814;
    case 630u: goto L_0885682C;
    case 631u: goto L_08856844;
    case 632u: goto L_08856848;
    case 633u: goto L_08856850;
    case 634u: goto L_08856868;
    case 635u: goto L_08856870;
    case 636u: goto L_08856888;
    case 637u: goto L_08856890;
    case 638u: goto L_088568A8;
    case 639u: goto L_088568B0;
    case 640u: goto L_088568C8;
    case 641u: goto L_088568D0;
    case 642u: goto L_088568E8;
    case 643u: goto L_088568F0;
    case 644u: goto L_08856908;
    case 645u: goto L_08856910;
    case 646u: goto L_08856928;
    case 647u: goto L_08856930;
    case 648u: goto L_08856948;
    case 649u: goto L_08856950;
    case 650u: goto L_08856968;
    case 651u: goto L_08856970;
    case 652u: goto L_08856984;
    case 653u: goto L_08856990;
    case 654u: goto L_088569B4;
    case 655u: goto L_088569CC;
    case 656u: goto L_088569E4;
    case 657u: goto L_088569E8;
    case 658u: goto L_088569F0;
    case 659u: goto L_08856A08;
    case 660u: goto L_08856A10;
    case 661u: goto L_08856A28;
    case 662u: goto L_08856A30;
    case 663u: goto L_08856A48;
    case 664u: goto L_08856A50;
    case 665u: goto L_08856A68;
    case 666u: goto L_08856A70;
    case 667u: goto L_08856A88;
    case 668u: goto L_08856A90;
    case 669u: goto L_08856AA8;
    case 670u: goto L_08856AB0;
    case 671u: goto L_08856AC8;
    case 672u: goto L_08856AD0;
    case 673u: goto L_08856AE8;
    case 674u: goto L_08856AF0;
    case 675u: goto L_08856B08;
    case 676u: goto L_08856B10;
    case 677u: goto L_08856B24;
    case 678u: goto L_08856B30;
    case 679u: goto L_08856B54;
    case 680u: goto L_08856B6C;
    case 681u: goto L_08856B84;
    case 682u: goto L_08856B88;
    case 683u: goto L_08856B90;
    case 684u: goto L_08856BA8;
    case 685u: goto L_08856BB0;
    case 686u: goto L_08856BC8;
    case 687u: goto L_08856BD0;
    case 688u: goto L_08856BE8;
    case 689u: goto L_08856BF0;
    case 690u: goto L_08856C08;
    case 691u: goto L_08856C10;
    case 692u: goto L_08856C28;
    case 693u: goto L_08856C30;
    case 694u: goto L_08856C48;
    case 695u: goto L_08856C50;
    case 696u: goto L_08856C68;
    case 697u: goto L_08856C70;
    case 698u: goto L_08856C88;
    case 699u: goto L_08856C90;
    case 700u: goto L_08856CA8;
    case 701u: goto L_08856CB0;
    case 702u: goto L_08856CC4;
    case 703u: goto L_08856CD0;
    case 704u: goto L_08856CF4;
    case 705u: goto L_08856D0C;
    case 706u: goto L_08856D24;
    case 707u: goto L_08856D28;
    case 708u: goto L_08856D30;
    case 709u: goto L_08856D48;
    case 710u: goto L_08856D50;
    case 711u: goto L_08856D68;
    case 712u: goto L_08856D70;
    case 713u: goto L_08856D88;
    case 714u: goto L_08856D90;
    case 715u: goto L_08856DA8;
    case 716u: goto L_08856DB0;
    case 717u: goto L_08856DC8;
    case 718u: goto L_08856DD0;
    case 719u: goto L_08856DE8;
    case 720u: goto L_08856DF0;
    case 721u: goto L_08856E08;
    case 722u: goto L_08856E10;
    case 723u: goto L_08856E28;
    case 724u: goto L_08856E30;
    case 725u: goto L_08856E48;
    case 726u: goto L_08856E50;
    case 727u: goto L_08856E64;
    case 728u: goto L_08856E70;
    case 729u: goto L_08856E90;
    case 730u: goto L_08856E9C;
    case 731u: goto L_08856EA4;
    case 732u: goto L_08856EAC;
    case 733u: goto L_08856EC4;
    case 734u: goto L_08856EC8;
    case 735u: goto L_08856ED0;
    case 736u: goto L_08856EE8;
    case 737u: goto L_08856EF0;
    case 738u: goto L_08856F08;
    case 739u: goto L_08856F10;
    case 740u: goto L_08856F28;
    case 741u: goto L_08856F30;
    case 742u: goto L_08856F40;
    case 743u: goto L_08856F4C;
    case 744u: goto L_08856F6C;
    case 745u: goto L_08856F78;
    case 746u: goto L_08856F80;
    case 747u: goto L_08856F88;
    case 748u: goto L_08856FA0;
    case 749u: goto L_08856FA4;
    case 750u: goto L_08856FAC;
    case 751u: goto L_08856FC4;
    case 752u: goto L_08856FCC;
    case 753u: goto L_08856FE4;
    case 754u: goto L_08856FEC;
    case 755u: goto L_08857004;
    case 756u: goto L_0885700C;
    case 757u: goto L_0885701C;
    case 758u: goto L_08857028;
    case 759u: goto L_08857048;
    case 760u: goto L_08857054;
    case 761u: goto L_0885705C;
    case 762u: goto L_08857064;
    case 763u: goto L_0885707C;
    case 764u: goto L_08857080;
    case 765u: goto L_08857088;
    case 766u: goto L_088570A0;
    case 767u: goto L_088570A8;
    case 768u: goto L_088570C0;
    case 769u: goto L_088570C8;
    case 770u: goto L_088570E0;
    case 771u: goto L_088570E8;
    case 772u: goto L_088570F8;
    case 773u: goto L_08857104;
    case 774u: goto L_08857124;
    case 775u: goto L_08857130;
    case 776u: goto L_08857138;
    case 777u: goto L_08857140;
    case 778u: goto L_08857158;
    case 779u: goto L_0885715C;
    case 780u: goto L_08857164;
    case 781u: goto L_0885717C;
    case 782u: goto L_08857184;
    case 783u: goto L_0885719C;
    case 784u: goto L_088571A4;
    case 785u: goto L_088571BC;
    case 786u: goto L_088571C4;
    case 787u: goto L_088571D4;
    case 788u: goto L_088571E0;
    case 789u: goto L_08857204;
    case 790u: goto L_0885721C;
    case 791u: goto L_08857234;
    case 792u: goto L_08857238;
    case 793u: goto L_08857240;
    case 794u: goto L_08857258;
    case 795u: goto L_08857260;
    case 796u: goto L_08857278;
    case 797u: goto L_08857280;
    case 798u: goto L_08857298;
    case 799u: goto L_088572A0;
    case 800u: goto L_088572B8;
    case 801u: goto L_088572C0;
    case 802u: goto L_088572D8;
    case 803u: goto L_088572E0;
    case 804u: goto L_088572F8;
    case 805u: goto L_08857300;
    case 806u: goto L_08857318;
    case 807u: goto L_08857320;
    case 808u: goto L_08857338;
    case 809u: goto L_08857340;
    case 810u: goto L_08857358;
    case 811u: goto L_08857360;
    case 812u: goto L_08857374;
    case 813u: goto L_08857380;
    case 814u: goto L_088573A4;
    case 815u: goto L_088573BC;
    case 816u: goto L_088573D4;
    case 817u: goto L_088573D8;
    case 818u: goto L_088573E0;
    case 819u: goto L_088573F8;
    case 820u: goto L_08857400;
    case 821u: goto L_08857418;
    case 822u: goto L_08857420;
    case 823u: goto L_08857438;
    case 824u: goto L_08857440;
    case 825u: goto L_08857458;
    case 826u: goto L_08857460;
    case 827u: goto L_08857478;
    case 828u: goto L_08857480;
    case 829u: goto L_08857498;
    case 830u: goto L_088574A0;
    case 831u: goto L_088574B8;
    case 832u: goto L_088574C0;
    case 833u: goto L_088574D8;
    case 834u: goto L_088574E0;
    case 835u: goto L_088574F8;
    case 836u: goto L_08857500;
    case 837u: goto L_08857514;
    case 838u: goto L_08857520;
    case 839u: goto L_08857540;
    case 840u: goto L_0885754C;
    case 841u: goto L_08857554;
    case 842u: goto L_0885755C;
    case 843u: goto L_08857574;
    case 844u: goto L_08857578;
    case 845u: goto L_08857580;
    case 846u: goto L_08857598;
    case 847u: goto L_088575A0;
    case 848u: goto L_088575B8;
    case 849u: goto L_088575C0;
    case 850u: goto L_088575D8;
    case 851u: goto L_088575E0;
    case 852u: goto L_088575F0;
    case 853u: goto L_088575FC;
    case 854u: goto L_08857620;
    case 855u: goto L_08857638;
    case 856u: goto L_08857650;
    case 857u: goto L_08857654;
    case 858u: goto L_0885765C;
    case 859u: goto L_08857674;
    case 860u: goto L_0885767C;
    case 861u: goto L_08857694;
    case 862u: goto L_0885769C;
    case 863u: goto L_088576B4;
    case 864u: goto L_088576BC;
    case 865u: goto L_088576D4;
    case 866u: goto L_088576DC;
    case 867u: goto L_088576F4;
    case 868u: goto L_088576FC;
    case 869u: goto L_08857714;
    case 870u: goto L_0885771C;
    case 871u: goto L_08857734;
    case 872u: goto L_0885773C;
    case 873u: goto L_08857754;
    case 874u: goto L_0885775C;
    case 875u: goto L_08857774;
    case 876u: goto L_0885777C;
    case 877u: goto L_08857790;
    case 878u: goto L_0885779C;
    case 879u: goto L_088577C0;
    case 880u: goto L_088577D8;
    case 881u: goto L_088577F0;
    case 882u: goto L_088577F4;
    case 883u: goto L_088577FC;
    case 884u: goto L_08857814;
    case 885u: goto L_0885781C;
    case 886u: goto L_08857834;
    case 887u: goto L_0885783C;
    case 888u: goto L_08857854;
    case 889u: goto L_0885785C;
    case 890u: goto L_08857874;
    case 891u: goto L_0885787C;
    case 892u: goto L_08857894;
    case 893u: goto L_0885789C;
    case 894u: goto L_088578B4;
    case 895u: goto L_088578BC;
    case 896u: goto L_088578D4;
    case 897u: goto L_088578DC;
    case 898u: goto L_088578F4;
    case 899u: goto L_088578FC;
    case 900u: goto L_08857914;
    case 901u: goto L_0885791C;
    case 902u: goto L_08857930;
    case 903u: goto L_0885793C;
    case 904u: goto L_0885795C;
    case 905u: goto L_08857968;
    case 906u: goto L_08857970;
    case 907u: goto L_08857978;
    case 908u: goto L_08857990;
    case 909u: goto L_08857994;
    case 910u: goto L_0885799C;
    case 911u: goto L_088579B4;
    case 912u: goto L_088579BC;
    case 913u: goto L_088579D4;
    case 914u: goto L_088579DC;
    case 915u: goto L_088579F4;
    case 916u: goto L_088579FC;
    case 917u: goto L_08857A0C;
    case 918u: goto L_08857A18;
    case 919u: goto L_08857A3C;
    case 920u: goto L_08857A54;
    case 921u: goto L_08857A6C;
    case 922u: goto L_08857A70;
    case 923u: goto L_08857A78;
    case 924u: goto L_08857A90;
    case 925u: goto L_08857A98;
    case 926u: goto L_08857AB0;
    case 927u: goto L_08857AB8;
    case 928u: goto L_08857AD0;
    case 929u: goto L_08857AD8;
    case 930u: goto L_08857AF0;
    case 931u: goto L_08857AF8;
    case 932u: goto L_08857B10;
    case 933u: goto L_08857B18;
    case 934u: goto L_08857B30;
    case 935u: goto L_08857B38;
    case 936u: goto L_08857B50;
    case 937u: goto L_08857B58;
    case 938u: goto L_08857B70;
    case 939u: goto L_08857B78;
    case 940u: goto L_08857B90;
    case 941u: goto L_08857B98;
    case 942u: goto L_08857BAC;
    case 943u: goto L_08857BB8;
    case 944u: goto L_08857BDC;
    case 945u: goto L_08857BF4;
    case 946u: goto L_08857C0C;
    case 947u: goto L_08857C10;
    case 948u: goto L_08857C18;
    case 949u: goto L_08857C30;
    case 950u: goto L_08857C38;
    case 951u: goto L_08857C50;
    case 952u: goto L_08857C58;
    case 953u: goto L_08857C70;
    case 954u: goto L_08857C78;
    case 955u: goto L_08857C90;
    case 956u: goto L_08857C98;
    case 957u: goto L_08857CB0;
    case 958u: goto L_08857CB8;
    case 959u: goto L_08857CD0;
    case 960u: goto L_08857CD8;
    case 961u: goto L_08857CF0;
    case 962u: goto L_08857CF8;
    case 963u: goto L_08857D10;
    case 964u: goto L_08857D18;
    case 965u: goto L_08857D2C;
    case 966u: goto L_08857D38;
    case 967u: goto L_08857D58;
    case 968u: goto L_08857D64;
    case 969u: goto L_08857D6C;
    case 970u: goto L_08857D74;
    case 971u: goto L_08857D8C;
    case 972u: goto L_08857D90;
    case 973u: goto L_08857D98;
    case 974u: goto L_08857DB0;
    case 975u: goto L_08857DB8;
    case 976u: goto L_08857DD0;
    case 977u: goto L_08857DD8;
    case 978u: goto L_08857DF0;
    case 979u: goto L_08857DF8;
    case 980u: goto L_08857E08;
    case 981u: goto L_08857E14;
    case 982u: goto L_08857E38;
    case 983u: goto L_08857E50;
    case 984u: goto L_08857E68;
    case 985u: goto L_08857E6C;
    case 986u: goto L_08857E74;
    case 987u: goto L_08857E8C;
    case 988u: goto L_08857E94;
    case 989u: goto L_08857EAC;
    case 990u: goto L_08857EB4;
    case 991u: goto L_08857ECC;
    case 992u: goto L_08857ED4;
    case 993u: goto L_08857EEC;
    case 994u: goto L_08857EF4;
    case 995u: goto L_08857F0C;
    case 996u: goto L_08857F14;
    case 997u: goto L_08857F2C;
    case 998u: goto L_08857F34;
    case 999u: goto L_08857F4C;
    case 1000u: goto L_08857F54;
    case 1001u: goto L_08857F6C;
    case 1002u: goto L_08857F74;
    case 1003u: goto L_08857F8C;
    case 1004u: goto L_08857F94;
    case 1005u: goto L_08857FA8;
    case 1006u: goto L_08857FB4;
    case 1007u: goto L_08857FD8;
    case 1008u: goto L_08857FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08854000:
    ctx.gpr[31] = (0x08854008u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08854008u) goto L_08854008;
    return;
L_08854008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854038;
      }
      goto L_08854010;
    }
L_08854010:
    ctx.gpr[7] = (0u | 140u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 1016u, 0x08853FF8u>(ctx, &aot_mem); return;
      }
      goto L_0885401C;
    }
L_0885401C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1556u);
    ctx.gpr[31] = (0x08854034u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854034u) goto L_08854034;
    return;
L_08854034:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08854038;
L_08854038:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854044:
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
          goto L_088541A4;
      }
      goto L_08854068;
    }
L_08854068:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25048)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854080:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1659u);
    ctx.gpr[31] = (0x08854098u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854098u) goto L_08854098;
    return;
L_08854098:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885409C;
L_0885409C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088541B8;
      }
      goto L_088540A4;
    }
L_088540A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1661u);
    ctx.gpr[31] = (0x088540BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088540BCu) goto L_088540BC;
    return;
L_088540BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885409C;
      }
      goto L_088540C4;
    }
L_088540C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1653u);
    ctx.gpr[31] = (0x088540DCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088540DCu) goto L_088540DC;
    return;
L_088540DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885409C;
      }
      goto L_088540E4;
    }
L_088540E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1648u);
    ctx.gpr[31] = (0x088540FCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088540FCu) goto L_088540FC;
    return;
L_088540FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885409C;
      }
      goto L_08854104;
    }
L_08854104:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1646u);
    ctx.gpr[31] = (0x0885411Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885411Cu) goto L_0885411C;
    return;
L_0885411C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885409C;
      }
      goto L_08854124;
    }
L_08854124:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1650u);
    ctx.gpr[31] = (0x0885413Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885413Cu) goto L_0885413C;
    return;
L_0885413C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885409C;
      }
      goto L_08854144;
    }
L_08854144:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1664u);
    ctx.gpr[31] = (0x0885415Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885415Cu) goto L_0885415C;
    return;
L_0885415C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885409C;
      }
      goto L_08854164;
    }
L_08854164:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1643u);
    ctx.gpr[31] = (0x0885417Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885417Cu) goto L_0885417C;
    return;
L_0885417C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885409C;
      }
      goto L_08854184;
    }
L_08854184:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1656u);
    ctx.gpr[31] = (0x0885419Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885419Cu) goto L_0885419C;
    return;
L_0885419C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885409C;
      }
      goto L_088541A4;
    }
L_088541A4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088541B8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088541B8u) goto L_088541B8;
    return;
L_088541B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088541C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08854264;
      }
      goto L_088541E4;
    }
L_088541E4:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08854244;
      }
      goto L_088541F0;
    }
L_088541F0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08854224;
      }
      goto L_088541F8;
    }
L_088541F8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08854284;
      }
      goto L_08854200;
    }
L_08854200:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1669u);
    ctx.gpr[31] = (0x08854218u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854218u) goto L_08854218;
    return;
L_08854218:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885421C;
L_0885421C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854294;
      }
      goto L_08854224;
    }
L_08854224:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1667u);
    ctx.gpr[31] = (0x0885423Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885423Cu) goto L_0885423C;
    return;
L_0885423C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885421C;
      }
      goto L_08854244;
    }
L_08854244:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1665u);
    ctx.gpr[31] = (0x0885425Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885425Cu) goto L_0885425C;
    return;
L_0885425C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885421C;
      }
      goto L_08854264;
    }
L_08854264:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1671u);
    ctx.gpr[31] = (0x0885427Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885427Cu) goto L_0885427C;
    return;
L_0885427C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885421C;
      }
      goto L_08854284;
    }
L_08854284:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08854294u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08854294u) goto L_08854294;
    return;
L_08854294:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088542A0:
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
          goto L_08854420;
      }
      goto L_088542C4;
    }
L_088542C4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25216)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088542DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1692u);
    ctx.gpr[31] = (0x088542F4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088542F4u) goto L_088542F4;
    return;
L_088542F4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088542F8;
L_088542F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854434;
      }
      goto L_08854300;
    }
L_08854300:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1694u);
    ctx.gpr[31] = (0x08854318u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854318u) goto L_08854318;
    return;
L_08854318:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088542F8;
      }
      goto L_08854320;
    }
L_08854320:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1686u);
    ctx.gpr[31] = (0x08854338u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854338u) goto L_08854338;
    return;
L_08854338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088542F8;
      }
      goto L_08854340;
    }
L_08854340:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1682u);
    ctx.gpr[31] = (0x08854358u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854358u) goto L_08854358;
    return;
L_08854358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088542F8;
      }
      goto L_08854360;
    }
L_08854360:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1680u);
    ctx.gpr[31] = (0x08854378u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854378u) goto L_08854378;
    return;
L_08854378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088542F8;
      }
      goto L_08854380;
    }
L_08854380:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1684u);
    ctx.gpr[31] = (0x08854398u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854398u) goto L_08854398;
    return;
L_08854398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088542F8;
      }
      goto L_088543A0;
    }
L_088543A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1697u);
    ctx.gpr[31] = (0x088543B8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088543B8u) goto L_088543B8;
    return;
L_088543B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088542F8;
      }
      goto L_088543C0;
    }
L_088543C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1673u);
    ctx.gpr[31] = (0x088543D8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088543D8u) goto L_088543D8;
    return;
L_088543D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088542F8;
      }
      goto L_088543E0;
    }
L_088543E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1676u);
    ctx.gpr[31] = (0x088543F8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088543F8u) goto L_088543F8;
    return;
L_088543F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088542F8;
      }
      goto L_08854400;
    }
L_08854400:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1689u);
    ctx.gpr[31] = (0x08854418u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854418u) goto L_08854418;
    return;
L_08854418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088542F8;
      }
      goto L_08854420;
    }
L_08854420:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08854434u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08854434u) goto L_08854434;
    return;
L_08854434:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854440:
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
          goto L_088545C0;
      }
      goto L_08854464;
    }
L_08854464:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25384)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885447C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1719u);
    ctx.gpr[31] = (0x08854494u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854494u) goto L_08854494;
    return;
L_08854494:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08854498;
L_08854498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088545D4;
      }
      goto L_088544A0;
    }
L_088544A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1721u);
    ctx.gpr[31] = (0x088544B8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088544B8u) goto L_088544B8;
    return;
L_088544B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854498;
      }
      goto L_088544C0;
    }
L_088544C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1713u);
    ctx.gpr[31] = (0x088544D8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088544D8u) goto L_088544D8;
    return;
L_088544D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854498;
      }
      goto L_088544E0;
    }
L_088544E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1709u);
    ctx.gpr[31] = (0x088544F8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088544F8u) goto L_088544F8;
    return;
L_088544F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854498;
      }
      goto L_08854500;
    }
L_08854500:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1706u);
    ctx.gpr[31] = (0x08854518u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854518u) goto L_08854518;
    return;
L_08854518:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854498;
      }
      goto L_08854520;
    }
L_08854520:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1711u);
    ctx.gpr[31] = (0x08854538u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854538u) goto L_08854538;
    return;
L_08854538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854498;
      }
      goto L_08854540;
    }
L_08854540:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1724u);
    ctx.gpr[31] = (0x08854558u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854558u) goto L_08854558;
    return;
L_08854558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854498;
      }
      goto L_08854560;
    }
L_08854560:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1698u);
    ctx.gpr[31] = (0x08854578u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854578u) goto L_08854578;
    return;
L_08854578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854498;
      }
      goto L_08854580;
    }
L_08854580:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1702u);
    ctx.gpr[31] = (0x08854598u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854598u) goto L_08854598;
    return;
L_08854598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854498;
      }
      goto L_088545A0;
    }
L_088545A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1716u);
    ctx.gpr[31] = (0x088545B8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088545B8u) goto L_088545B8;
    return;
L_088545B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854498;
      }
      goto L_088545C0;
    }
L_088545C0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088545D4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088545D4u) goto L_088545D4;
    return;
L_088545D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088545E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08854680;
      }
      goto L_08854600;
    }
L_08854600:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08854660;
      }
      goto L_0885460C;
    }
L_0885460C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08854640;
      }
      goto L_08854614;
    }
L_08854614:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088546A0;
      }
      goto L_0885461C;
    }
L_0885461C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1755u);
    ctx.gpr[31] = (0x08854634u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854634u) goto L_08854634;
    return;
L_08854634:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08854638;
L_08854638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088546B0;
      }
      goto L_08854640;
    }
L_08854640:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1752u);
    ctx.gpr[31] = (0x08854658u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854658u) goto L_08854658;
    return;
L_08854658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854638;
      }
      goto L_08854660;
    }
L_08854660:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1749u);
    ctx.gpr[31] = (0x08854678u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854678u) goto L_08854678;
    return;
L_08854678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854638;
      }
      goto L_08854680;
    }
L_08854680:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1758u);
    ctx.gpr[31] = (0x08854698u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854698u) goto L_08854698;
    return;
L_08854698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854638;
      }
      goto L_088546A0;
    }
L_088546A0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088546B0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088546B0u) goto L_088546B0;
    return;
L_088546B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088546BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_0885475C;
      }
      goto L_088546DC;
    }
L_088546DC:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_0885473C;
      }
      goto L_088546E8;
    }
L_088546E8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_0885471C;
      }
      goto L_088546F0;
    }
L_088546F0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0885477C;
      }
      goto L_088546F8;
    }
L_088546F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1767u);
    ctx.gpr[31] = (0x08854710u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854710u) goto L_08854710;
    return;
L_08854710:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08854714;
L_08854714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885478C;
      }
      goto L_0885471C;
    }
L_0885471C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1764u);
    ctx.gpr[31] = (0x08854734u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854734u) goto L_08854734;
    return;
L_08854734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854714;
      }
      goto L_0885473C;
    }
L_0885473C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1761u);
    ctx.gpr[31] = (0x08854754u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854754u) goto L_08854754;
    return;
L_08854754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854714;
      }
      goto L_0885475C;
    }
L_0885475C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1770u);
    ctx.gpr[31] = (0x08854774u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854774u) goto L_08854774;
    return;
L_08854774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854714;
      }
      goto L_0885477C;
    }
L_0885477C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0885478Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x0885478Cu) goto L_0885478C;
    return;
L_0885478C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 115 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08854860;
      }
      goto L_088547B8;
    }
L_088547B8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 155 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-115));
      if (branch_taken) {
          goto L_08854860;
      }
      goto L_088547C4;
    }
L_088547C4:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088547DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1792u);
    ctx.gpr[31] = (0x088547F4u);
    ctx.gpr[8] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088547F4u) goto L_088547F4;
    return;
L_088547F4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088547F8;
L_088547F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854870;
      }
      goto L_08854800;
    }
L_08854800:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1787u);
    ctx.gpr[31] = (0x08854818u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854818u) goto L_08854818;
    return;
L_08854818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088547F8;
      }
      goto L_08854820;
    }
L_08854820:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1784u);
    ctx.gpr[31] = (0x08854838u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854838u) goto L_08854838;
    return;
L_08854838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088547F8;
      }
      goto L_08854840;
    }
L_08854840:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1790u);
    ctx.gpr[31] = (0x08854858u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854858u) goto L_08854858;
    return;
L_08854858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088547F8;
      }
      goto L_08854860;
    }
L_08854860:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08854870u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08854870u) goto L_08854870;
    return;
L_08854870:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885487C:
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
          goto L_088549FC;
      }
      goto L_088548A0;
    }
L_088548A0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088548B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1817u);
    ctx.gpr[31] = (0x088548D0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088548D0u) goto L_088548D0;
    return;
L_088548D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088548D4;
L_088548D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854A10;
      }
      goto L_088548DC;
    }
L_088548DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1819u);
    ctx.gpr[31] = (0x088548F4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088548F4u) goto L_088548F4;
    return;
L_088548F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088548D4;
      }
      goto L_088548FC;
    }
L_088548FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1811u);
    ctx.gpr[31] = (0x08854914u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854914u) goto L_08854914;
    return;
L_08854914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088548D4;
      }
      goto L_0885491C;
    }
L_0885491C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1807u);
    ctx.gpr[31] = (0x08854934u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854934u) goto L_08854934;
    return;
L_08854934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088548D4;
      }
      goto L_0885493C;
    }
L_0885493C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1805u);
    ctx.gpr[31] = (0x08854954u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854954u) goto L_08854954;
    return;
L_08854954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088548D4;
      }
      goto L_0885495C;
    }
L_0885495C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1809u);
    ctx.gpr[31] = (0x08854974u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854974u) goto L_08854974;
    return;
L_08854974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088548D4;
      }
      goto L_0885497C;
    }
L_0885497C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1822u);
    ctx.gpr[31] = (0x08854994u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854994u) goto L_08854994;
    return;
L_08854994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088548D4;
      }
      goto L_0885499C;
    }
L_0885499C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1798u);
    ctx.gpr[31] = (0x088549B4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088549B4u) goto L_088549B4;
    return;
L_088549B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088548D4;
      }
      goto L_088549BC;
    }
L_088549BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1801u);
    ctx.gpr[31] = (0x088549D4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088549D4u) goto L_088549D4;
    return;
L_088549D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088548D4;
      }
      goto L_088549DC;
    }
L_088549DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1814u);
    ctx.gpr[31] = (0x088549F4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088549F4u) goto L_088549F4;
    return;
L_088549F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088548D4;
      }
      goto L_088549FC;
    }
L_088549FC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08854A10u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08854A10u) goto L_08854A10;
    return;
L_08854A10:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854A1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08854B7C;
      }
      goto L_08854A40;
    }
L_08854A40:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25888)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854A58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1839u);
    ctx.gpr[31] = (0x08854A70u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854A70u) goto L_08854A70;
    return;
L_08854A70:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08854A74;
L_08854A74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854B90;
      }
      goto L_08854A7C;
    }
L_08854A7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1841u);
    ctx.gpr[31] = (0x08854A94u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854A94u) goto L_08854A94;
    return;
L_08854A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854A74;
      }
      goto L_08854A9C;
    }
L_08854A9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1836u);
    ctx.gpr[31] = (0x08854AB4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854AB4u) goto L_08854AB4;
    return;
L_08854AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854A74;
      }
      goto L_08854ABC;
    }
L_08854ABC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1832u);
    ctx.gpr[31] = (0x08854AD4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854AD4u) goto L_08854AD4;
    return;
L_08854AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854A74;
      }
      goto L_08854ADC;
    }
L_08854ADC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1830u);
    ctx.gpr[31] = (0x08854AF4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854AF4u) goto L_08854AF4;
    return;
L_08854AF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854A74;
      }
      goto L_08854AFC;
    }
L_08854AFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1834u);
    ctx.gpr[31] = (0x08854B14u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854B14u) goto L_08854B14;
    return;
L_08854B14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854A74;
      }
      goto L_08854B1C;
    }
L_08854B1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1844u);
    ctx.gpr[31] = (0x08854B34u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854B34u) goto L_08854B34;
    return;
L_08854B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854A74;
      }
      goto L_08854B3C;
    }
L_08854B3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1823u);
    ctx.gpr[31] = (0x08854B54u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854B54u) goto L_08854B54;
    return;
L_08854B54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854A74;
      }
      goto L_08854B5C;
    }
L_08854B5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1826u);
    ctx.gpr[31] = (0x08854B74u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854B74u) goto L_08854B74;
    return;
L_08854B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854A74;
      }
      goto L_08854B7C;
    }
L_08854B7C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08854B90u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08854B90u) goto L_08854B90;
    return;
L_08854B90:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854B9C:
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
          goto L_08854D1C;
      }
      goto L_08854BC0;
    }
L_08854BC0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26048)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854BD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1863u);
    ctx.gpr[31] = (0x08854BF0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854BF0u) goto L_08854BF0;
    return;
L_08854BF0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08854BF4;
L_08854BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854D30;
      }
      goto L_08854BFC;
    }
L_08854BFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1865u);
    ctx.gpr[31] = (0x08854C14u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854C14u) goto L_08854C14;
    return;
L_08854C14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854BF4;
      }
      goto L_08854C1C;
    }
L_08854C1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1858u);
    ctx.gpr[31] = (0x08854C34u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854C34u) goto L_08854C34;
    return;
L_08854C34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854BF4;
      }
      goto L_08854C3C;
    }
L_08854C3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1854u);
    ctx.gpr[31] = (0x08854C54u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854C54u) goto L_08854C54;
    return;
L_08854C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854BF4;
      }
      goto L_08854C5C;
    }
L_08854C5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1852u);
    ctx.gpr[31] = (0x08854C74u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854C74u) goto L_08854C74;
    return;
L_08854C74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854BF4;
      }
      goto L_08854C7C;
    }
L_08854C7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1856u);
    ctx.gpr[31] = (0x08854C94u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854C94u) goto L_08854C94;
    return;
L_08854C94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854BF4;
      }
      goto L_08854C9C;
    }
L_08854C9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1868u);
    ctx.gpr[31] = (0x08854CB4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854CB4u) goto L_08854CB4;
    return;
L_08854CB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854BF4;
      }
      goto L_08854CBC;
    }
L_08854CBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1845u);
    ctx.gpr[31] = (0x08854CD4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854CD4u) goto L_08854CD4;
    return;
L_08854CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854BF4;
      }
      goto L_08854CDC;
    }
L_08854CDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1848u);
    ctx.gpr[31] = (0x08854CF4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854CF4u) goto L_08854CF4;
    return;
L_08854CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854BF4;
      }
      goto L_08854CFC;
    }
L_08854CFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1860u);
    ctx.gpr[31] = (0x08854D14u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854D14u) goto L_08854D14;
    return;
L_08854D14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854BF4;
      }
      goto L_08854D1C;
    }
L_08854D1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08854D30u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08854D30u) goto L_08854D30;
    return;
L_08854D30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854D3C:
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
          goto L_08854EBC;
      }
      goto L_08854D60;
    }
L_08854D60:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26216)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854D78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1888u);
    ctx.gpr[31] = (0x08854D90u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854D90u) goto L_08854D90;
    return;
L_08854D90:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08854D94;
L_08854D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08854ED0;
      }
      goto L_08854D9C;
    }
L_08854D9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1890u);
    ctx.gpr[31] = (0x08854DB4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854DB4u) goto L_08854DB4;
    return;
L_08854DB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854D94;
      }
      goto L_08854DBC;
    }
L_08854DBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1882u);
    ctx.gpr[31] = (0x08854DD4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854DD4u) goto L_08854DD4;
    return;
L_08854DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854D94;
      }
      goto L_08854DDC;
    }
L_08854DDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1878u);
    ctx.gpr[31] = (0x08854DF4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854DF4u) goto L_08854DF4;
    return;
L_08854DF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854D94;
      }
      goto L_08854DFC;
    }
L_08854DFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1876u);
    ctx.gpr[31] = (0x08854E14u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854E14u) goto L_08854E14;
    return;
L_08854E14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854D94;
      }
      goto L_08854E1C;
    }
L_08854E1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1880u);
    ctx.gpr[31] = (0x08854E34u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854E34u) goto L_08854E34;
    return;
L_08854E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854D94;
      }
      goto L_08854E3C;
    }
L_08854E3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1893u);
    ctx.gpr[31] = (0x08854E54u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854E54u) goto L_08854E54;
    return;
L_08854E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854D94;
      }
      goto L_08854E5C;
    }
L_08854E5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1869u);
    ctx.gpr[31] = (0x08854E74u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854E74u) goto L_08854E74;
    return;
L_08854E74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854D94;
      }
      goto L_08854E7C;
    }
L_08854E7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1872u);
    ctx.gpr[31] = (0x08854E94u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854E94u) goto L_08854E94;
    return;
L_08854E94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854D94;
      }
      goto L_08854E9C;
    }
L_08854E9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1885u);
    ctx.gpr[31] = (0x08854EB4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854EB4u) goto L_08854EB4;
    return;
L_08854EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854D94;
      }
      goto L_08854EBC;
    }
L_08854EBC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08854ED0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08854ED0u) goto L_08854ED0;
    return;
L_08854ED0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854EDC:
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
          goto L_0885505C;
      }
      goto L_08854F00;
    }
L_08854F00:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26384)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08854F18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1913u);
    ctx.gpr[31] = (0x08854F30u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854F30u) goto L_08854F30;
    return;
L_08854F30:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08854F34;
L_08854F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855070;
      }
      goto L_08854F3C;
    }
L_08854F3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1915u);
    ctx.gpr[31] = (0x08854F54u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854F54u) goto L_08854F54;
    return;
L_08854F54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854F34;
      }
      goto L_08854F5C;
    }
L_08854F5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1907u);
    ctx.gpr[31] = (0x08854F74u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854F74u) goto L_08854F74;
    return;
L_08854F74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854F34;
      }
      goto L_08854F7C;
    }
L_08854F7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1903u);
    ctx.gpr[31] = (0x08854F94u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854F94u) goto L_08854F94;
    return;
L_08854F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854F34;
      }
      goto L_08854F9C;
    }
L_08854F9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1901u);
    ctx.gpr[31] = (0x08854FB4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854FB4u) goto L_08854FB4;
    return;
L_08854FB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854F34;
      }
      goto L_08854FBC;
    }
L_08854FBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1905u);
    ctx.gpr[31] = (0x08854FD4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854FD4u) goto L_08854FD4;
    return;
L_08854FD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854F34;
      }
      goto L_08854FDC;
    }
L_08854FDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1918u);
    ctx.gpr[31] = (0x08854FF4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08854FF4u) goto L_08854FF4;
    return;
L_08854FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854F34;
      }
      goto L_08854FFC;
    }
L_08854FFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1894u);
    ctx.gpr[31] = (0x08855014u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855014u) goto L_08855014;
    return;
L_08855014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854F34;
      }
      goto L_0885501C;
    }
L_0885501C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1897u);
    ctx.gpr[31] = (0x08855034u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855034u) goto L_08855034;
    return;
L_08855034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854F34;
      }
      goto L_0885503C;
    }
L_0885503C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1910u);
    ctx.gpr[31] = (0x08855054u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855054u) goto L_08855054;
    return;
L_08855054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08854F34;
      }
      goto L_0885505C;
    }
L_0885505C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08855070u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08855070u) goto L_08855070;
    return;
L_08855070:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885507C:
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
          goto L_088551FC;
      }
      goto L_088550A0;
    }
L_088550A0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26552)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088550B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1938u);
    ctx.gpr[31] = (0x088550D0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088550D0u) goto L_088550D0;
    return;
L_088550D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088550D4;
L_088550D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855210;
      }
      goto L_088550DC;
    }
L_088550DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1940u);
    ctx.gpr[31] = (0x088550F4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088550F4u) goto L_088550F4;
    return;
L_088550F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088550D4;
      }
      goto L_088550FC;
    }
L_088550FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1932u);
    ctx.gpr[31] = (0x08855114u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855114u) goto L_08855114;
    return;
L_08855114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088550D4;
      }
      goto L_0885511C;
    }
L_0885511C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1928u);
    ctx.gpr[31] = (0x08855134u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855134u) goto L_08855134;
    return;
L_08855134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088550D4;
      }
      goto L_0885513C;
    }
L_0885513C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1926u);
    ctx.gpr[31] = (0x08855154u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855154u) goto L_08855154;
    return;
L_08855154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088550D4;
      }
      goto L_0885515C;
    }
L_0885515C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1930u);
    ctx.gpr[31] = (0x08855174u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855174u) goto L_08855174;
    return;
L_08855174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088550D4;
      }
      goto L_0885517C;
    }
L_0885517C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1943u);
    ctx.gpr[31] = (0x08855194u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855194u) goto L_08855194;
    return;
L_08855194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088550D4;
      }
      goto L_0885519C;
    }
L_0885519C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1919u);
    ctx.gpr[31] = (0x088551B4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088551B4u) goto L_088551B4;
    return;
L_088551B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088550D4;
      }
      goto L_088551BC;
    }
L_088551BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1922u);
    ctx.gpr[31] = (0x088551D4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088551D4u) goto L_088551D4;
    return;
L_088551D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088550D4;
      }
      goto L_088551DC;
    }
L_088551DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1935u);
    ctx.gpr[31] = (0x088551F4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088551F4u) goto L_088551F4;
    return;
L_088551F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088550D4;
      }
      goto L_088551FC;
    }
L_088551FC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08855210u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08855210u) goto L_08855210;
    return;
L_08855210:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885521C:
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
          goto L_0885539C;
      }
      goto L_08855240;
    }
L_08855240:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855258:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1964u);
    ctx.gpr[31] = (0x08855270u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855270u) goto L_08855270;
    return;
L_08855270:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08855274;
L_08855274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088553B0;
      }
      goto L_0885527C;
    }
L_0885527C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1966u);
    ctx.gpr[31] = (0x08855294u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855294u) goto L_08855294;
    return;
L_08855294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855274;
      }
      goto L_0885529C;
    }
L_0885529C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1958u);
    ctx.gpr[31] = (0x088552B4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088552B4u) goto L_088552B4;
    return;
L_088552B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855274;
      }
      goto L_088552BC;
    }
L_088552BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1954u);
    ctx.gpr[31] = (0x088552D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088552D4u) goto L_088552D4;
    return;
L_088552D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855274;
      }
      goto L_088552DC;
    }
L_088552DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1951u);
    ctx.gpr[31] = (0x088552F4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088552F4u) goto L_088552F4;
    return;
L_088552F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855274;
      }
      goto L_088552FC;
    }
L_088552FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1956u);
    ctx.gpr[31] = (0x08855314u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855314u) goto L_08855314;
    return;
L_08855314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855274;
      }
      goto L_0885531C;
    }
L_0885531C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1969u);
    ctx.gpr[31] = (0x08855334u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855334u) goto L_08855334;
    return;
L_08855334:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855274;
      }
      goto L_0885533C;
    }
L_0885533C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1944u);
    ctx.gpr[31] = (0x08855354u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855354u) goto L_08855354;
    return;
L_08855354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855274;
      }
      goto L_0885535C;
    }
L_0885535C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1947u);
    ctx.gpr[31] = (0x08855374u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855374u) goto L_08855374;
    return;
L_08855374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855274;
      }
      goto L_0885537C;
    }
L_0885537C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1961u);
    ctx.gpr[31] = (0x08855394u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855394u) goto L_08855394;
    return;
L_08855394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855274;
      }
      goto L_0885539C;
    }
L_0885539C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088553B0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x088553B0u) goto L_088553B0;
    return;
L_088553B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088553BC:
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
          goto L_0885553C;
      }
      goto L_088553E0;
    }
L_088553E0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26888)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088553F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1988u);
    ctx.gpr[31] = (0x08855410u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855410u) goto L_08855410;
    return;
L_08855410:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08855414;
L_08855414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855550;
      }
      goto L_0885541C;
    }
L_0885541C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1990u);
    ctx.gpr[31] = (0x08855434u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855434u) goto L_08855434;
    return;
L_08855434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855414;
      }
      goto L_0885543C;
    }
L_0885543C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1983u);
    ctx.gpr[31] = (0x08855454u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855454u) goto L_08855454;
    return;
L_08855454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855414;
      }
      goto L_0885545C;
    }
L_0885545C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1979u);
    ctx.gpr[31] = (0x08855474u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855474u) goto L_08855474;
    return;
L_08855474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855414;
      }
      goto L_0885547C;
    }
L_0885547C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1977u);
    ctx.gpr[31] = (0x08855494u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855494u) goto L_08855494;
    return;
L_08855494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855414;
      }
      goto L_0885549C;
    }
L_0885549C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1981u);
    ctx.gpr[31] = (0x088554B4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088554B4u) goto L_088554B4;
    return;
L_088554B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855414;
      }
      goto L_088554BC;
    }
L_088554BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1993u);
    ctx.gpr[31] = (0x088554D4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088554D4u) goto L_088554D4;
    return;
L_088554D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855414;
      }
      goto L_088554DC;
    }
L_088554DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1970u);
    ctx.gpr[31] = (0x088554F4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088554F4u) goto L_088554F4;
    return;
L_088554F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855414;
      }
      goto L_088554FC;
    }
L_088554FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1973u);
    ctx.gpr[31] = (0x08855514u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855514u) goto L_08855514;
    return;
L_08855514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855414;
      }
      goto L_0885551C;
    }
L_0885551C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1985u);
    ctx.gpr[31] = (0x08855534u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855534u) goto L_08855534;
    return;
L_08855534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855414;
      }
      goto L_0885553C;
    }
L_0885553C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08855550u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08855550u) goto L_08855550;
    return;
L_08855550:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885555C:
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
          goto L_088556DC;
      }
      goto L_08855580;
    }
L_08855580:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27056)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855598:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2013u);
    ctx.gpr[31] = (0x088555B0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088555B0u) goto L_088555B0;
    return;
L_088555B0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088555B4;
L_088555B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088556F0;
      }
      goto L_088555BC;
    }
L_088555BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2015u);
    ctx.gpr[31] = (0x088555D4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088555D4u) goto L_088555D4;
    return;
L_088555D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088555B4;
      }
      goto L_088555DC;
    }
L_088555DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2007u);
    ctx.gpr[31] = (0x088555F4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088555F4u) goto L_088555F4;
    return;
L_088555F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088555B4;
      }
      goto L_088555FC;
    }
L_088555FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2003u);
    ctx.gpr[31] = (0x08855614u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855614u) goto L_08855614;
    return;
L_08855614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088555B4;
      }
      goto L_0885561C;
    }
L_0885561C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2001u);
    ctx.gpr[31] = (0x08855634u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855634u) goto L_08855634;
    return;
L_08855634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088555B4;
      }
      goto L_0885563C;
    }
L_0885563C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2005u);
    ctx.gpr[31] = (0x08855654u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855654u) goto L_08855654;
    return;
L_08855654:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088555B4;
      }
      goto L_0885565C;
    }
L_0885565C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2018u);
    ctx.gpr[31] = (0x08855674u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855674u) goto L_08855674;
    return;
L_08855674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088555B4;
      }
      goto L_0885567C;
    }
L_0885567C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1994u);
    ctx.gpr[31] = (0x08855694u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855694u) goto L_08855694;
    return;
L_08855694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088555B4;
      }
      goto L_0885569C;
    }
L_0885569C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 1997u);
    ctx.gpr[31] = (0x088556B4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088556B4u) goto L_088556B4;
    return;
L_088556B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088555B4;
      }
      goto L_088556BC;
    }
L_088556BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2010u);
    ctx.gpr[31] = (0x088556D4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088556D4u) goto L_088556D4;
    return;
L_088556D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088555B4;
      }
      goto L_088556DC;
    }
L_088556DC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088556F0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x088556F0u) goto L_088556F0;
    return;
L_088556F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088556FC:
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
          goto L_0885587C;
      }
      goto L_08855720;
    }
L_08855720:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27224)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855738:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2038u);
    ctx.gpr[31] = (0x08855750u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855750u) goto L_08855750;
    return;
L_08855750:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08855754;
L_08855754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855890;
      }
      goto L_0885575C;
    }
L_0885575C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2040u);
    ctx.gpr[31] = (0x08855774u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855774u) goto L_08855774;
    return;
L_08855774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855754;
      }
      goto L_0885577C;
    }
L_0885577C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2032u);
    ctx.gpr[31] = (0x08855794u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855794u) goto L_08855794;
    return;
L_08855794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855754;
      }
      goto L_0885579C;
    }
L_0885579C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2028u);
    ctx.gpr[31] = (0x088557B4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088557B4u) goto L_088557B4;
    return;
L_088557B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855754;
      }
      goto L_088557BC;
    }
L_088557BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2026u);
    ctx.gpr[31] = (0x088557D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088557D4u) goto L_088557D4;
    return;
L_088557D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855754;
      }
      goto L_088557DC;
    }
L_088557DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2030u);
    ctx.gpr[31] = (0x088557F4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088557F4u) goto L_088557F4;
    return;
L_088557F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855754;
      }
      goto L_088557FC;
    }
L_088557FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2043u);
    ctx.gpr[31] = (0x08855814u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855814u) goto L_08855814;
    return;
L_08855814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855754;
      }
      goto L_0885581C;
    }
L_0885581C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2019u);
    ctx.gpr[31] = (0x08855834u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855834u) goto L_08855834;
    return;
L_08855834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855754;
      }
      goto L_0885583C;
    }
L_0885583C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2022u);
    ctx.gpr[31] = (0x08855854u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855854u) goto L_08855854;
    return;
L_08855854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855754;
      }
      goto L_0885585C;
    }
L_0885585C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2035u);
    ctx.gpr[31] = (0x08855874u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855874u) goto L_08855874;
    return;
L_08855874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855754;
      }
      goto L_0885587C;
    }
L_0885587C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08855890u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08855890u) goto L_08855890;
    return;
L_08855890:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885589C:
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
          goto L_08855A1C;
      }
      goto L_088558C0;
    }
L_088558C0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27392)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088558D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2063u);
    ctx.gpr[31] = (0x088558F0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088558F0u) goto L_088558F0;
    return;
L_088558F0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088558F4;
L_088558F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855A30;
      }
      goto L_088558FC;
    }
L_088558FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2065u);
    ctx.gpr[31] = (0x08855914u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855914u) goto L_08855914;
    return;
L_08855914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088558F4;
      }
      goto L_0885591C;
    }
L_0885591C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2057u);
    ctx.gpr[31] = (0x08855934u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855934u) goto L_08855934;
    return;
L_08855934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088558F4;
      }
      goto L_0885593C;
    }
L_0885593C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2053u);
    ctx.gpr[31] = (0x08855954u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855954u) goto L_08855954;
    return;
L_08855954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088558F4;
      }
      goto L_0885595C;
    }
L_0885595C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2051u);
    ctx.gpr[31] = (0x08855974u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855974u) goto L_08855974;
    return;
L_08855974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088558F4;
      }
      goto L_0885597C;
    }
L_0885597C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2055u);
    ctx.gpr[31] = (0x08855994u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855994u) goto L_08855994;
    return;
L_08855994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088558F4;
      }
      goto L_0885599C;
    }
L_0885599C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2068u);
    ctx.gpr[31] = (0x088559B4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088559B4u) goto L_088559B4;
    return;
L_088559B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088558F4;
      }
      goto L_088559BC;
    }
L_088559BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2044u);
    ctx.gpr[31] = (0x088559D4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088559D4u) goto L_088559D4;
    return;
L_088559D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088558F4;
      }
      goto L_088559DC;
    }
L_088559DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2047u);
    ctx.gpr[31] = (0x088559F4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088559F4u) goto L_088559F4;
    return;
L_088559F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088558F4;
      }
      goto L_088559FC;
    }
L_088559FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2060u);
    ctx.gpr[31] = (0x08855A14u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855A14u) goto L_08855A14;
    return;
L_08855A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088558F4;
      }
      goto L_08855A1C;
    }
L_08855A1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08855A30u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08855A30u) goto L_08855A30;
    return;
L_08855A30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855A3C:
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
          goto L_08855BBC;
      }
      goto L_08855A60;
    }
L_08855A60:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855A78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2088u);
    ctx.gpr[31] = (0x08855A90u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855A90u) goto L_08855A90;
    return;
L_08855A90:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08855A94;
L_08855A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855BD0;
      }
      goto L_08855A9C;
    }
L_08855A9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2090u);
    ctx.gpr[31] = (0x08855AB4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855AB4u) goto L_08855AB4;
    return;
L_08855AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855A94;
      }
      goto L_08855ABC;
    }
L_08855ABC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2082u);
    ctx.gpr[31] = (0x08855AD4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855AD4u) goto L_08855AD4;
    return;
L_08855AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855A94;
      }
      goto L_08855ADC;
    }
L_08855ADC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2078u);
    ctx.gpr[31] = (0x08855AF4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855AF4u) goto L_08855AF4;
    return;
L_08855AF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855A94;
      }
      goto L_08855AFC;
    }
L_08855AFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2076u);
    ctx.gpr[31] = (0x08855B14u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855B14u) goto L_08855B14;
    return;
L_08855B14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855A94;
      }
      goto L_08855B1C;
    }
L_08855B1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2080u);
    ctx.gpr[31] = (0x08855B34u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855B34u) goto L_08855B34;
    return;
L_08855B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855A94;
      }
      goto L_08855B3C;
    }
L_08855B3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2093u);
    ctx.gpr[31] = (0x08855B54u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855B54u) goto L_08855B54;
    return;
L_08855B54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855A94;
      }
      goto L_08855B5C;
    }
L_08855B5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2069u);
    ctx.gpr[31] = (0x08855B74u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855B74u) goto L_08855B74;
    return;
L_08855B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855A94;
      }
      goto L_08855B7C;
    }
L_08855B7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2072u);
    ctx.gpr[31] = (0x08855B94u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855B94u) goto L_08855B94;
    return;
L_08855B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855A94;
      }
      goto L_08855B9C;
    }
L_08855B9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2085u);
    ctx.gpr[31] = (0x08855BB4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855BB4u) goto L_08855BB4;
    return;
L_08855BB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855A94;
      }
      goto L_08855BBC;
    }
L_08855BBC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08855BD0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08855BD0u) goto L_08855BD0;
    return;
L_08855BD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855BDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08855D3C;
      }
      goto L_08855C00;
    }
L_08855C00:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855C18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2110u);
    ctx.gpr[31] = (0x08855C30u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855C30u) goto L_08855C30;
    return;
L_08855C30:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08855C34;
L_08855C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855D50;
      }
      goto L_08855C3C;
    }
L_08855C3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2112u);
    ctx.gpr[31] = (0x08855C54u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855C54u) goto L_08855C54;
    return;
L_08855C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855C34;
      }
      goto L_08855C5C;
    }
L_08855C5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2107u);
    ctx.gpr[31] = (0x08855C74u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855C74u) goto L_08855C74;
    return;
L_08855C74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855C34;
      }
      goto L_08855C7C;
    }
L_08855C7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2103u);
    ctx.gpr[31] = (0x08855C94u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855C94u) goto L_08855C94;
    return;
L_08855C94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855C34;
      }
      goto L_08855C9C;
    }
L_08855C9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2101u);
    ctx.gpr[31] = (0x08855CB4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855CB4u) goto L_08855CB4;
    return;
L_08855CB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855C34;
      }
      goto L_08855CBC;
    }
L_08855CBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2105u);
    ctx.gpr[31] = (0x08855CD4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855CD4u) goto L_08855CD4;
    return;
L_08855CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855C34;
      }
      goto L_08855CDC;
    }
L_08855CDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2115u);
    ctx.gpr[31] = (0x08855CF4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855CF4u) goto L_08855CF4;
    return;
L_08855CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855C34;
      }
      goto L_08855CFC;
    }
L_08855CFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2094u);
    ctx.gpr[31] = (0x08855D14u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855D14u) goto L_08855D14;
    return;
L_08855D14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855C34;
      }
      goto L_08855D1C;
    }
L_08855D1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2097u);
    ctx.gpr[31] = (0x08855D34u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855D34u) goto L_08855D34;
    return;
L_08855D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855C34;
      }
      goto L_08855D3C;
    }
L_08855D3C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08855D50u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08855D50u) goto L_08855D50;
    return;
L_08855D50:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855D5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08855DFC;
      }
      goto L_08855D7C;
    }
L_08855D7C:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08855DDC;
      }
      goto L_08855D88;
    }
L_08855D88:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08855DBC;
      }
      goto L_08855D90;
    }
L_08855D90:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08855E1C;
      }
      goto L_08855D98;
    }
L_08855D98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2122u);
    ctx.gpr[31] = (0x08855DB0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855DB0u) goto L_08855DB0;
    return;
L_08855DB0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08855DB4;
L_08855DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855E2C;
      }
      goto L_08855DBC;
    }
L_08855DBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2119u);
    ctx.gpr[31] = (0x08855DD4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855DD4u) goto L_08855DD4;
    return;
L_08855DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855DB4;
      }
      goto L_08855DDC;
    }
L_08855DDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2116u);
    ctx.gpr[31] = (0x08855DF4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855DF4u) goto L_08855DF4;
    return;
L_08855DF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855DB4;
      }
      goto L_08855DFC;
    }
L_08855DFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2125u);
    ctx.gpr[31] = (0x08855E14u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855E14u) goto L_08855E14;
    return;
L_08855E14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855DB4;
      }
      goto L_08855E1C;
    }
L_08855E1C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08855E2Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08855E2Cu) goto L_08855E2C;
    return;
L_08855E2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08855ED8;
      }
      goto L_08855E58;
    }
L_08855E58:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08855EB8;
      }
      goto L_08855E64;
    }
L_08855E64:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08855E98;
      }
      goto L_08855E6C;
    }
L_08855E6C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08855EF8;
      }
      goto L_08855E74;
    }
L_08855E74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2134u);
    ctx.gpr[31] = (0x08855E8Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855E8Cu) goto L_08855E8C;
    return;
L_08855E8C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08855E90;
L_08855E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855F08;
      }
      goto L_08855E98;
    }
L_08855E98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2131u);
    ctx.gpr[31] = (0x08855EB0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855EB0u) goto L_08855EB0;
    return;
L_08855EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855E90;
      }
      goto L_08855EB8;
    }
L_08855EB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2128u);
    ctx.gpr[31] = (0x08855ED0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855ED0u) goto L_08855ED0;
    return;
L_08855ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855E90;
      }
      goto L_08855ED8;
    }
L_08855ED8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2137u);
    ctx.gpr[31] = (0x08855EF0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855EF0u) goto L_08855EF0;
    return;
L_08855EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855E90;
      }
      goto L_08855EF8;
    }
L_08855EF8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08855F08u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08855F08u) goto L_08855F08;
    return;
L_08855F08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855F14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08855FB4;
      }
      goto L_08855F34;
    }
L_08855F34:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08855F94;
      }
      goto L_08855F40;
    }
L_08855F40:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08855F74;
      }
      goto L_08855F48;
    }
L_08855F48:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08855FD4;
      }
      goto L_08855F50;
    }
L_08855F50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2146u);
    ctx.gpr[31] = (0x08855F68u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855F68u) goto L_08855F68;
    return;
L_08855F68:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08855F6C;
L_08855F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08855FE4;
      }
      goto L_08855F74;
    }
L_08855F74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2143u);
    ctx.gpr[31] = (0x08855F8Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855F8Cu) goto L_08855F8C;
    return;
L_08855F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855F6C;
      }
      goto L_08855F94;
    }
L_08855F94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2140u);
    ctx.gpr[31] = (0x08855FACu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855FACu) goto L_08855FAC;
    return;
L_08855FAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855F6C;
      }
      goto L_08855FB4;
    }
L_08855FB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2148u);
    ctx.gpr[31] = (0x08855FCCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08855FCCu) goto L_08855FCC;
    return;
L_08855FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08855F6C;
      }
      goto L_08855FD4;
    }
L_08855FD4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08855FE4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08855FE4u) goto L_08855FE4;
    return;
L_08855FE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08855FF0:
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
          goto L_08856170;
      }
      goto L_08856014;
    }
L_08856014:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27888)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885602C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2170u);
    ctx.gpr[31] = (0x08856044u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856044u) goto L_08856044;
    return;
L_08856044:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08856048;
L_08856048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856184;
      }
      goto L_08856050;
    }
L_08856050:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2173u);
    ctx.gpr[31] = (0x08856068u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856068u) goto L_08856068;
    return;
L_08856068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856048;
      }
      goto L_08856070;
    }
L_08856070:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2164u);
    ctx.gpr[31] = (0x08856088u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856088u) goto L_08856088;
    return;
L_08856088:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856048;
      }
      goto L_08856090;
    }
L_08856090:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2160u);
    ctx.gpr[31] = (0x088560A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088560A8u) goto L_088560A8;
    return;
L_088560A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856048;
      }
      goto L_088560B0;
    }
L_088560B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2158u);
    ctx.gpr[31] = (0x088560C8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088560C8u) goto L_088560C8;
    return;
L_088560C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856048;
      }
      goto L_088560D0;
    }
L_088560D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2162u);
    ctx.gpr[31] = (0x088560E8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088560E8u) goto L_088560E8;
    return;
L_088560E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856048;
      }
      goto L_088560F0;
    }
L_088560F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2176u);
    ctx.gpr[31] = (0x08856108u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856108u) goto L_08856108;
    return;
L_08856108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856048;
      }
      goto L_08856110;
    }
L_08856110:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2151u);
    ctx.gpr[31] = (0x08856128u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856128u) goto L_08856128;
    return;
L_08856128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856048;
      }
      goto L_08856130;
    }
L_08856130:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2154u);
    ctx.gpr[31] = (0x08856148u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856148u) goto L_08856148;
    return;
L_08856148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856048;
      }
      goto L_08856150;
    }
L_08856150:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2167u);
    ctx.gpr[31] = (0x08856168u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856168u) goto L_08856168;
    return;
L_08856168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856048;
      }
      goto L_08856170;
    }
L_08856170:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08856184u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08856184u) goto L_08856184;
    return;
L_08856184:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856190:
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
          goto L_08856310;
      }
      goto L_088561B4;
    }
L_088561B4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28056)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088561CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2196u);
    ctx.gpr[31] = (0x088561E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088561E4u) goto L_088561E4;
    return;
L_088561E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088561E8;
L_088561E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856324;
      }
      goto L_088561F0;
    }
L_088561F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2198u);
    ctx.gpr[31] = (0x08856208u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856208u) goto L_08856208;
    return;
L_08856208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088561E8;
      }
      goto L_08856210;
    }
L_08856210:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2190u);
    ctx.gpr[31] = (0x08856228u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856228u) goto L_08856228;
    return;
L_08856228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088561E8;
      }
      goto L_08856230;
    }
L_08856230:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2186u);
    ctx.gpr[31] = (0x08856248u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856248u) goto L_08856248;
    return;
L_08856248:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088561E8;
      }
      goto L_08856250;
    }
L_08856250:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2184u);
    ctx.gpr[31] = (0x08856268u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856268u) goto L_08856268;
    return;
L_08856268:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088561E8;
      }
      goto L_08856270;
    }
L_08856270:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2188u);
    ctx.gpr[31] = (0x08856288u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856288u) goto L_08856288;
    return;
L_08856288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088561E8;
      }
      goto L_08856290;
    }
L_08856290:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2201u);
    ctx.gpr[31] = (0x088562A8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088562A8u) goto L_088562A8;
    return;
L_088562A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088561E8;
      }
      goto L_088562B0;
    }
L_088562B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2177u);
    ctx.gpr[31] = (0x088562C8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088562C8u) goto L_088562C8;
    return;
L_088562C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088561E8;
      }
      goto L_088562D0;
    }
L_088562D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2180u);
    ctx.gpr[31] = (0x088562E8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088562E8u) goto L_088562E8;
    return;
L_088562E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088561E8;
      }
      goto L_088562F0;
    }
L_088562F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2193u);
    ctx.gpr[31] = (0x08856308u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856308u) goto L_08856308;
    return;
L_08856308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088561E8;
      }
      goto L_08856310;
    }
L_08856310:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08856324u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08856324u) goto L_08856324;
    return;
L_08856324:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856330:
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
          goto L_088564B0;
      }
      goto L_08856354;
    }
L_08856354:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28224)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885636C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2222u);
    ctx.gpr[31] = (0x08856384u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856384u) goto L_08856384;
    return;
L_08856384:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08856388;
L_08856388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088564C4;
      }
      goto L_08856390;
    }
L_08856390:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2224u);
    ctx.gpr[31] = (0x088563A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088563A8u) goto L_088563A8;
    return;
L_088563A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856388;
      }
      goto L_088563B0;
    }
L_088563B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2215u);
    ctx.gpr[31] = (0x088563C8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088563C8u) goto L_088563C8;
    return;
L_088563C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856388;
      }
      goto L_088563D0;
    }
L_088563D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2211u);
    ctx.gpr[31] = (0x088563E8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088563E8u) goto L_088563E8;
    return;
L_088563E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856388;
      }
      goto L_088563F0;
    }
L_088563F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2209u);
    ctx.gpr[31] = (0x08856408u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856408u) goto L_08856408;
    return;
L_08856408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856388;
      }
      goto L_08856410;
    }
L_08856410:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2213u);
    ctx.gpr[31] = (0x08856428u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856428u) goto L_08856428;
    return;
L_08856428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856388;
      }
      goto L_08856430;
    }
L_08856430:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2226u);
    ctx.gpr[31] = (0x08856448u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856448u) goto L_08856448;
    return;
L_08856448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856388;
      }
      goto L_08856450;
    }
L_08856450:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2202u);
    ctx.gpr[31] = (0x08856468u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856468u) goto L_08856468;
    return;
L_08856468:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856388;
      }
      goto L_08856470;
    }
L_08856470:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2205u);
    ctx.gpr[31] = (0x08856488u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856488u) goto L_08856488;
    return;
L_08856488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856388;
      }
      goto L_08856490;
    }
L_08856490:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2219u);
    ctx.gpr[31] = (0x088564A8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088564A8u) goto L_088564A8;
    return;
L_088564A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856388;
      }
      goto L_088564B0;
    }
L_088564B0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088564C4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088564C4u) goto L_088564C4;
    return;
L_088564C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088564D0:
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
          goto L_08856630;
      }
      goto L_088564F4;
    }
L_088564F4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28392)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885650C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2246u);
    ctx.gpr[31] = (0x08856524u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856524u) goto L_08856524;
    return;
L_08856524:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08856528;
L_08856528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856644;
      }
      goto L_08856530;
    }
L_08856530:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2249u);
    ctx.gpr[31] = (0x08856548u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856548u) goto L_08856548;
    return;
L_08856548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856528;
      }
      goto L_08856550;
    }
L_08856550:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2240u);
    ctx.gpr[31] = (0x08856568u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856568u) goto L_08856568;
    return;
L_08856568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856528;
      }
      goto L_08856570;
    }
L_08856570:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2236u);
    ctx.gpr[31] = (0x08856588u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856588u) goto L_08856588;
    return;
L_08856588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856528;
      }
      goto L_08856590;
    }
L_08856590:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2234u);
    ctx.gpr[31] = (0x088565A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088565A8u) goto L_088565A8;
    return;
L_088565A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856528;
      }
      goto L_088565B0;
    }
L_088565B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2238u);
    ctx.gpr[31] = (0x088565C8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088565C8u) goto L_088565C8;
    return;
L_088565C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856528;
      }
      goto L_088565D0;
    }
L_088565D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2227u);
    ctx.gpr[31] = (0x088565E8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088565E8u) goto L_088565E8;
    return;
L_088565E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856528;
      }
      goto L_088565F0;
    }
L_088565F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2230u);
    ctx.gpr[31] = (0x08856608u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856608u) goto L_08856608;
    return;
L_08856608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856528;
      }
      goto L_08856610;
    }
L_08856610:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2243u);
    ctx.gpr[31] = (0x08856628u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856628u) goto L_08856628;
    return;
L_08856628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856528;
      }
      goto L_08856630;
    }
L_08856630:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08856644u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08856644u) goto L_08856644;
    return;
L_08856644:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856650:
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
          goto L_088567D0;
      }
      goto L_08856674;
    }
L_08856674:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885668C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2271u);
    ctx.gpr[31] = (0x088566A4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088566A4u) goto L_088566A4;
    return;
L_088566A4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088566A8;
L_088566A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088567E4;
      }
      goto L_088566B0;
    }
L_088566B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2273u);
    ctx.gpr[31] = (0x088566C8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088566C8u) goto L_088566C8;
    return;
L_088566C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088566A8;
      }
      goto L_088566D0;
    }
L_088566D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2265u);
    ctx.gpr[31] = (0x088566E8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088566E8u) goto L_088566E8;
    return;
L_088566E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088566A8;
      }
      goto L_088566F0;
    }
L_088566F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2261u);
    ctx.gpr[31] = (0x08856708u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856708u) goto L_08856708;
    return;
L_08856708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088566A8;
      }
      goto L_08856710;
    }
L_08856710:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2259u);
    ctx.gpr[31] = (0x08856728u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856728u) goto L_08856728;
    return;
L_08856728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088566A8;
      }
      goto L_08856730;
    }
L_08856730:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2263u);
    ctx.gpr[31] = (0x08856748u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856748u) goto L_08856748;
    return;
L_08856748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088566A8;
      }
      goto L_08856750;
    }
L_08856750:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2275u);
    ctx.gpr[31] = (0x08856768u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856768u) goto L_08856768;
    return;
L_08856768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088566A8;
      }
      goto L_08856770;
    }
L_08856770:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2252u);
    ctx.gpr[31] = (0x08856788u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856788u) goto L_08856788;
    return;
L_08856788:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088566A8;
      }
      goto L_08856790;
    }
L_08856790:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2255u);
    ctx.gpr[31] = (0x088567A8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088567A8u) goto L_088567A8;
    return;
L_088567A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088566A8;
      }
      goto L_088567B0;
    }
L_088567B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2268u);
    ctx.gpr[31] = (0x088567C8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088567C8u) goto L_088567C8;
    return;
L_088567C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088566A8;
      }
      goto L_088567D0;
    }
L_088567D0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088567E4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088567E4u) goto L_088567E4;
    return;
L_088567E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088567F0:
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
          goto L_08856970;
      }
      goto L_08856814;
    }
L_08856814:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885682C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2295u);
    ctx.gpr[31] = (0x08856844u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856844u) goto L_08856844;
    return;
L_08856844:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08856848;
L_08856848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856984;
      }
      goto L_08856850;
    }
L_08856850:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2297u);
    ctx.gpr[31] = (0x08856868u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856868u) goto L_08856868;
    return;
L_08856868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_08856870;
    }
L_08856870:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2289u);
    ctx.gpr[31] = (0x08856888u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856888u) goto L_08856888;
    return;
L_08856888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_08856890;
    }
L_08856890:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2285u);
    ctx.gpr[31] = (0x088568A8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088568A8u) goto L_088568A8;
    return;
L_088568A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_088568B0;
    }
L_088568B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2283u);
    ctx.gpr[31] = (0x088568C8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088568C8u) goto L_088568C8;
    return;
L_088568C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_088568D0;
    }
L_088568D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2287u);
    ctx.gpr[31] = (0x088568E8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088568E8u) goto L_088568E8;
    return;
L_088568E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_088568F0;
    }
L_088568F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2300u);
    ctx.gpr[31] = (0x08856908u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856908u) goto L_08856908;
    return;
L_08856908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_08856910;
    }
L_08856910:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2276u);
    ctx.gpr[31] = (0x08856928u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856928u) goto L_08856928;
    return;
L_08856928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_08856930;
    }
L_08856930:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2279u);
    ctx.gpr[31] = (0x08856948u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856948u) goto L_08856948;
    return;
L_08856948:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_08856950;
    }
L_08856950:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2292u);
    ctx.gpr[31] = (0x08856968u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856968u) goto L_08856968;
    return;
L_08856968:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856848;
      }
      goto L_08856970;
    }
L_08856970:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08856984u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08856984u) goto L_08856984;
    return;
L_08856984:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856990:
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
          goto L_08856B10;
      }
      goto L_088569B4;
    }
L_088569B4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088569CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2320u);
    ctx.gpr[31] = (0x088569E4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088569E4u) goto L_088569E4;
    return;
L_088569E4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088569E8;
L_088569E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856B24;
      }
      goto L_088569F0;
    }
L_088569F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2322u);
    ctx.gpr[31] = (0x08856A08u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856A08u) goto L_08856A08;
    return;
L_08856A08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088569E8;
      }
      goto L_08856A10;
    }
L_08856A10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2314u);
    ctx.gpr[31] = (0x08856A28u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856A28u) goto L_08856A28;
    return;
L_08856A28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088569E8;
      }
      goto L_08856A30;
    }
L_08856A30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2310u);
    ctx.gpr[31] = (0x08856A48u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856A48u) goto L_08856A48;
    return;
L_08856A48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088569E8;
      }
      goto L_08856A50;
    }
L_08856A50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2308u);
    ctx.gpr[31] = (0x08856A68u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856A68u) goto L_08856A68;
    return;
L_08856A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088569E8;
      }
      goto L_08856A70;
    }
L_08856A70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2312u);
    ctx.gpr[31] = (0x08856A88u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856A88u) goto L_08856A88;
    return;
L_08856A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088569E8;
      }
      goto L_08856A90;
    }
L_08856A90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2325u);
    ctx.gpr[31] = (0x08856AA8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856AA8u) goto L_08856AA8;
    return;
L_08856AA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088569E8;
      }
      goto L_08856AB0;
    }
L_08856AB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2301u);
    ctx.gpr[31] = (0x08856AC8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856AC8u) goto L_08856AC8;
    return;
L_08856AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088569E8;
      }
      goto L_08856AD0;
    }
L_08856AD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2304u);
    ctx.gpr[31] = (0x08856AE8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856AE8u) goto L_08856AE8;
    return;
L_08856AE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088569E8;
      }
      goto L_08856AF0;
    }
L_08856AF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2317u);
    ctx.gpr[31] = (0x08856B08u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856B08u) goto L_08856B08;
    return;
L_08856B08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088569E8;
      }
      goto L_08856B10;
    }
L_08856B10:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08856B24u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08856B24u) goto L_08856B24;
    return;
L_08856B24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856B30:
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
          goto L_08856CB0;
      }
      goto L_08856B54;
    }
L_08856B54:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29064)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856B6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2346u);
    ctx.gpr[31] = (0x08856B84u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856B84u) goto L_08856B84;
    return;
L_08856B84:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08856B88;
L_08856B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856CC4;
      }
      goto L_08856B90;
    }
L_08856B90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2348u);
    ctx.gpr[31] = (0x08856BA8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856BA8u) goto L_08856BA8;
    return;
L_08856BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856B88;
      }
      goto L_08856BB0;
    }
L_08856BB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2340u);
    ctx.gpr[31] = (0x08856BC8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856BC8u) goto L_08856BC8;
    return;
L_08856BC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856B88;
      }
      goto L_08856BD0;
    }
L_08856BD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2335u);
    ctx.gpr[31] = (0x08856BE8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856BE8u) goto L_08856BE8;
    return;
L_08856BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856B88;
      }
      goto L_08856BF0;
    }
L_08856BF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2333u);
    ctx.gpr[31] = (0x08856C08u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856C08u) goto L_08856C08;
    return;
L_08856C08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856B88;
      }
      goto L_08856C10;
    }
L_08856C10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2338u);
    ctx.gpr[31] = (0x08856C28u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856C28u) goto L_08856C28;
    return;
L_08856C28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856B88;
      }
      goto L_08856C30;
    }
L_08856C30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2351u);
    ctx.gpr[31] = (0x08856C48u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856C48u) goto L_08856C48;
    return;
L_08856C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856B88;
      }
      goto L_08856C50;
    }
L_08856C50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2326u);
    ctx.gpr[31] = (0x08856C68u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856C68u) goto L_08856C68;
    return;
L_08856C68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856B88;
      }
      goto L_08856C70;
    }
L_08856C70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2329u);
    ctx.gpr[31] = (0x08856C88u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856C88u) goto L_08856C88;
    return;
L_08856C88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856B88;
      }
      goto L_08856C90;
    }
L_08856C90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2343u);
    ctx.gpr[31] = (0x08856CA8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856CA8u) goto L_08856CA8;
    return;
L_08856CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856B88;
      }
      goto L_08856CB0;
    }
L_08856CB0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08856CC4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08856CC4u) goto L_08856CC4;
    return;
L_08856CC4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856CD0:
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
          goto L_08856E50;
      }
      goto L_08856CF4;
    }
L_08856CF4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29232)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856D0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2371u);
    ctx.gpr[31] = (0x08856D24u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856D24u) goto L_08856D24;
    return;
L_08856D24:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08856D28;
L_08856D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856E64;
      }
      goto L_08856D30;
    }
L_08856D30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2373u);
    ctx.gpr[31] = (0x08856D48u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856D48u) goto L_08856D48;
    return;
L_08856D48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856D28;
      }
      goto L_08856D50;
    }
L_08856D50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2365u);
    ctx.gpr[31] = (0x08856D68u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856D68u) goto L_08856D68;
    return;
L_08856D68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856D28;
      }
      goto L_08856D70;
    }
L_08856D70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2361u);
    ctx.gpr[31] = (0x08856D88u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856D88u) goto L_08856D88;
    return;
L_08856D88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856D28;
      }
      goto L_08856D90;
    }
L_08856D90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2359u);
    ctx.gpr[31] = (0x08856DA8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856DA8u) goto L_08856DA8;
    return;
L_08856DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856D28;
      }
      goto L_08856DB0;
    }
L_08856DB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2363u);
    ctx.gpr[31] = (0x08856DC8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856DC8u) goto L_08856DC8;
    return;
L_08856DC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856D28;
      }
      goto L_08856DD0;
    }
L_08856DD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2376u);
    ctx.gpr[31] = (0x08856DE8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856DE8u) goto L_08856DE8;
    return;
L_08856DE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856D28;
      }
      goto L_08856DF0;
    }
L_08856DF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2352u);
    ctx.gpr[31] = (0x08856E08u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856E08u) goto L_08856E08;
    return;
L_08856E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856D28;
      }
      goto L_08856E10;
    }
L_08856E10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2355u);
    ctx.gpr[31] = (0x08856E28u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856E28u) goto L_08856E28;
    return;
L_08856E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856D28;
      }
      goto L_08856E30;
    }
L_08856E30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2368u);
    ctx.gpr[31] = (0x08856E48u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856E48u) goto L_08856E48;
    return;
L_08856E48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856D28;
      }
      goto L_08856E50;
    }
L_08856E50:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08856E64u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08856E64u) goto L_08856E64;
    return;
L_08856E64:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856E70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08856F10;
      }
      goto L_08856E90;
    }
L_08856E90:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08856EF0;
      }
      goto L_08856E9C;
    }
L_08856E9C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08856ED0;
      }
      goto L_08856EA4;
    }
L_08856EA4:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08856F30;
      }
      goto L_08856EAC;
    }
L_08856EAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2383u);
    ctx.gpr[31] = (0x08856EC4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856EC4u) goto L_08856EC4;
    return;
L_08856EC4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08856EC8;
L_08856EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08856F40;
      }
      goto L_08856ED0;
    }
L_08856ED0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2380u);
    ctx.gpr[31] = (0x08856EE8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856EE8u) goto L_08856EE8;
    return;
L_08856EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856EC8;
      }
      goto L_08856EF0;
    }
L_08856EF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2377u);
    ctx.gpr[31] = (0x08856F08u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856F08u) goto L_08856F08;
    return;
L_08856F08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856EC8;
      }
      goto L_08856F10;
    }
L_08856F10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2386u);
    ctx.gpr[31] = (0x08856F28u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856F28u) goto L_08856F28;
    return;
L_08856F28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856EC8;
      }
      goto L_08856F30;
    }
L_08856F30:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08856F40u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08856F40u) goto L_08856F40;
    return;
L_08856F40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08856F4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08856FEC;
      }
      goto L_08856F6C;
    }
L_08856F6C:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08856FCC;
      }
      goto L_08856F78;
    }
L_08856F78:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08856FAC;
      }
      goto L_08856F80;
    }
L_08856F80:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0885700C;
      }
      goto L_08856F88;
    }
L_08856F88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2429u);
    ctx.gpr[31] = (0x08856FA0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856FA0u) goto L_08856FA0;
    return;
L_08856FA0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08856FA4;
L_08856FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0885701C;
      }
      goto L_08856FAC;
    }
L_08856FAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2427u);
    ctx.gpr[31] = (0x08856FC4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856FC4u) goto L_08856FC4;
    return;
L_08856FC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856FA4;
      }
      goto L_08856FCC;
    }
L_08856FCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2425u);
    ctx.gpr[31] = (0x08856FE4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08856FE4u) goto L_08856FE4;
    return;
L_08856FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856FA4;
      }
      goto L_08856FEC;
    }
L_08856FEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2431u);
    ctx.gpr[31] = (0x08857004u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857004u) goto L_08857004;
    return;
L_08857004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08856FA4;
      }
      goto L_0885700C;
    }
L_0885700C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0885701Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x0885701Cu) goto L_0885701C;
    return;
L_0885701C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088570C8;
      }
      goto L_08857048;
    }
L_08857048:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_088570A8;
      }
      goto L_08857054;
    }
L_08857054:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08857088;
      }
      goto L_0885705C;
    }
L_0885705C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088570E8;
      }
      goto L_08857064;
    }
L_08857064:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2438u);
    ctx.gpr[31] = (0x0885707Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885707Cu) goto L_0885707C;
    return;
L_0885707C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08857080;
L_08857080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088570F8;
      }
      goto L_08857088;
    }
L_08857088:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2435u);
    ctx.gpr[31] = (0x088570A0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088570A0u) goto L_088570A0;
    return;
L_088570A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857080;
      }
      goto L_088570A8;
    }
L_088570A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2432u);
    ctx.gpr[31] = (0x088570C0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088570C0u) goto L_088570C0;
    return;
L_088570C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857080;
      }
      goto L_088570C8;
    }
L_088570C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2441u);
    ctx.gpr[31] = (0x088570E0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088570E0u) goto L_088570E0;
    return;
L_088570E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857080;
      }
      goto L_088570E8;
    }
L_088570E8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088570F8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088570F8u) goto L_088570F8;
    return;
L_088570F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088571A4;
      }
      goto L_08857124;
    }
L_08857124:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08857184;
      }
      goto L_08857130;
    }
L_08857130:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08857164;
      }
      goto L_08857138;
    }
L_08857138:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088571C4;
      }
      goto L_08857140;
    }
L_08857140:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2450u);
    ctx.gpr[31] = (0x08857158u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857158u) goto L_08857158;
    return;
L_08857158:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0885715C;
L_0885715C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088571D4;
      }
      goto L_08857164;
    }
L_08857164:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2447u);
    ctx.gpr[31] = (0x0885717Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885717Cu) goto L_0885717C;
    return;
L_0885717C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885715C;
      }
      goto L_08857184;
    }
L_08857184:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2444u);
    ctx.gpr[31] = (0x0885719Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x0885719Cu) goto L_0885719C;
    return;
L_0885719C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885715C;
      }
      goto L_088571A4;
    }
L_088571A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2453u);
    ctx.gpr[31] = (0x088571BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088571BCu) goto L_088571BC;
    return;
L_088571BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0885715C;
      }
      goto L_088571C4;
    }
L_088571C4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088571D4u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x088571D4u) goto L_088571D4;
    return;
L_088571D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088571E0:
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
          goto L_08857360;
      }
      goto L_08857204;
    }
L_08857204:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29400)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885721C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2475u);
    ctx.gpr[31] = (0x08857234u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857234u) goto L_08857234;
    return;
L_08857234:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08857238;
L_08857238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857374;
      }
      goto L_08857240;
    }
L_08857240:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2477u);
    ctx.gpr[31] = (0x08857258u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857258u) goto L_08857258;
    return;
L_08857258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857238;
      }
      goto L_08857260;
    }
L_08857260:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2469u);
    ctx.gpr[31] = (0x08857278u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857278u) goto L_08857278;
    return;
L_08857278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857238;
      }
      goto L_08857280;
    }
L_08857280:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2465u);
    ctx.gpr[31] = (0x08857298u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857298u) goto L_08857298;
    return;
L_08857298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857238;
      }
      goto L_088572A0;
    }
L_088572A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2463u);
    ctx.gpr[31] = (0x088572B8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088572B8u) goto L_088572B8;
    return;
L_088572B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857238;
      }
      goto L_088572C0;
    }
L_088572C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2467u);
    ctx.gpr[31] = (0x088572D8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088572D8u) goto L_088572D8;
    return;
L_088572D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857238;
      }
      goto L_088572E0;
    }
L_088572E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2479u);
    ctx.gpr[31] = (0x088572F8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088572F8u) goto L_088572F8;
    return;
L_088572F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857238;
      }
      goto L_08857300;
    }
L_08857300:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2456u);
    ctx.gpr[31] = (0x08857318u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857318u) goto L_08857318;
    return;
L_08857318:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857238;
      }
      goto L_08857320;
    }
L_08857320:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2459u);
    ctx.gpr[31] = (0x08857338u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857338u) goto L_08857338;
    return;
L_08857338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857238;
      }
      goto L_08857340;
    }
L_08857340:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2472u);
    ctx.gpr[31] = (0x08857358u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857358u) goto L_08857358;
    return;
L_08857358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857238;
      }
      goto L_08857360;
    }
L_08857360:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08857374u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08857374u) goto L_08857374;
    return;
L_08857374:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857380:
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
          goto L_08857500;
      }
      goto L_088573A4;
    }
L_088573A4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29568)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088573BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2499u);
    ctx.gpr[31] = (0x088573D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088573D4u) goto L_088573D4;
    return;
L_088573D4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088573D8;
L_088573D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857514;
      }
      goto L_088573E0;
    }
L_088573E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2501u);
    ctx.gpr[31] = (0x088573F8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088573F8u) goto L_088573F8;
    return;
L_088573F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_08857400;
    }
L_08857400:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2493u);
    ctx.gpr[31] = (0x08857418u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857418u) goto L_08857418;
    return;
L_08857418:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_08857420;
    }
L_08857420:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2489u);
    ctx.gpr[31] = (0x08857438u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857438u) goto L_08857438;
    return;
L_08857438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_08857440;
    }
L_08857440:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2487u);
    ctx.gpr[31] = (0x08857458u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857458u) goto L_08857458;
    return;
L_08857458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_08857460;
    }
L_08857460:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2491u);
    ctx.gpr[31] = (0x08857478u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857478u) goto L_08857478;
    return;
L_08857478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_08857480;
    }
L_08857480:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2505u);
    ctx.gpr[31] = (0x08857498u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857498u) goto L_08857498;
    return;
L_08857498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_088574A0;
    }
L_088574A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2480u);
    ctx.gpr[31] = (0x088574B8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088574B8u) goto L_088574B8;
    return;
L_088574B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_088574C0;
    }
L_088574C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2483u);
    ctx.gpr[31] = (0x088574D8u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088574D8u) goto L_088574D8;
    return;
L_088574D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_088574E0;
    }
L_088574E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2496u);
    ctx.gpr[31] = (0x088574F8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088574F8u) goto L_088574F8;
    return;
L_088574F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088573D8;
      }
      goto L_08857500;
    }
L_08857500:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08857514u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08857514u) goto L_08857514;
    return;
L_08857514:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088575C0;
      }
      goto L_08857540;
    }
L_08857540:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_088575A0;
      }
      goto L_0885754C;
    }
L_0885754C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08857580;
      }
      goto L_08857554;
    }
L_08857554:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088575E0;
      }
      goto L_0885755C;
    }
L_0885755C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2519u);
    ctx.gpr[31] = (0x08857574u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857574u) goto L_08857574;
    return;
L_08857574:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08857578;
L_08857578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088575F0;
      }
      goto L_08857580;
    }
L_08857580:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2517u);
    ctx.gpr[31] = (0x08857598u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857598u) goto L_08857598;
    return;
L_08857598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857578;
      }
      goto L_088575A0;
    }
L_088575A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2515u);
    ctx.gpr[31] = (0x088575B8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088575B8u) goto L_088575B8;
    return;
L_088575B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857578;
      }
      goto L_088575C0;
    }
L_088575C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2521u);
    ctx.gpr[31] = (0x088575D8u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088575D8u) goto L_088575D8;
    return;
L_088575D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857578;
      }
      goto L_088575E0;
    }
L_088575E0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088575F0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x088575F0u) goto L_088575F0;
    return;
L_088575F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088575FC:
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
          goto L_0885777C;
      }
      goto L_08857620;
    }
L_08857620:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29736)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857638:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2542u);
    ctx.gpr[31] = (0x08857650u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857650u) goto L_08857650;
    return;
L_08857650:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08857654;
L_08857654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857790;
      }
      goto L_0885765C;
    }
L_0885765C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2544u);
    ctx.gpr[31] = (0x08857674u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857674u) goto L_08857674;
    return;
L_08857674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857654;
      }
      goto L_0885767C;
    }
L_0885767C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2536u);
    ctx.gpr[31] = (0x08857694u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857694u) goto L_08857694;
    return;
L_08857694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857654;
      }
      goto L_0885769C;
    }
L_0885769C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2532u);
    ctx.gpr[31] = (0x088576B4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088576B4u) goto L_088576B4;
    return;
L_088576B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857654;
      }
      goto L_088576BC;
    }
L_088576BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2530u);
    ctx.gpr[31] = (0x088576D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088576D4u) goto L_088576D4;
    return;
L_088576D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857654;
      }
      goto L_088576DC;
    }
L_088576DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2534u);
    ctx.gpr[31] = (0x088576F4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088576F4u) goto L_088576F4;
    return;
L_088576F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857654;
      }
      goto L_088576FC;
    }
L_088576FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2547u);
    ctx.gpr[31] = (0x08857714u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857714u) goto L_08857714;
    return;
L_08857714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857654;
      }
      goto L_0885771C;
    }
L_0885771C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2523u);
    ctx.gpr[31] = (0x08857734u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857734u) goto L_08857734;
    return;
L_08857734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857654;
      }
      goto L_0885773C;
    }
L_0885773C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2526u);
    ctx.gpr[31] = (0x08857754u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857754u) goto L_08857754;
    return;
L_08857754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857654;
      }
      goto L_0885775C;
    }
L_0885775C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2539u);
    ctx.gpr[31] = (0x08857774u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857774u) goto L_08857774;
    return;
L_08857774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857654;
      }
      goto L_0885777C;
    }
L_0885777C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08857790u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08857790u) goto L_08857790;
    return;
L_08857790:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885779C:
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
          goto L_0885791C;
      }
      goto L_088577C0;
    }
L_088577C0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29904)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088577D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2567u);
    ctx.gpr[31] = (0x088577F0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088577F0u) goto L_088577F0;
    return;
L_088577F0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088577F4;
L_088577F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857930;
      }
      goto L_088577FC;
    }
L_088577FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2569u);
    ctx.gpr[31] = (0x08857814u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857814u) goto L_08857814;
    return;
L_08857814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088577F4;
      }
      goto L_0885781C;
    }
L_0885781C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2561u);
    ctx.gpr[31] = (0x08857834u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857834u) goto L_08857834;
    return;
L_08857834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088577F4;
      }
      goto L_0885783C;
    }
L_0885783C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2557u);
    ctx.gpr[31] = (0x08857854u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857854u) goto L_08857854;
    return;
L_08857854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088577F4;
      }
      goto L_0885785C;
    }
L_0885785C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2555u);
    ctx.gpr[31] = (0x08857874u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857874u) goto L_08857874;
    return;
L_08857874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088577F4;
      }
      goto L_0885787C;
    }
L_0885787C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2559u);
    ctx.gpr[31] = (0x08857894u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857894u) goto L_08857894;
    return;
L_08857894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088577F4;
      }
      goto L_0885789C;
    }
L_0885789C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2572u);
    ctx.gpr[31] = (0x088578B4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088578B4u) goto L_088578B4;
    return;
L_088578B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088577F4;
      }
      goto L_088578BC;
    }
L_088578BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2548u);
    ctx.gpr[31] = (0x088578D4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088578D4u) goto L_088578D4;
    return;
L_088578D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088577F4;
      }
      goto L_088578DC;
    }
L_088578DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2551u);
    ctx.gpr[31] = (0x088578F4u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088578F4u) goto L_088578F4;
    return;
L_088578F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088577F4;
      }
      goto L_088578FC;
    }
L_088578FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2564u);
    ctx.gpr[31] = (0x08857914u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857914u) goto L_08857914;
    return;
L_08857914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088577F4;
      }
      goto L_0885791C;
    }
L_0885791C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08857930u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08857930u) goto L_08857930;
    return;
L_08857930:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0885793C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_088579DC;
      }
      goto L_0885795C;
    }
L_0885795C:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_088579BC;
      }
      goto L_08857968;
    }
L_08857968:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_0885799C;
      }
      goto L_08857970;
    }
L_08857970:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088579FC;
      }
      goto L_08857978;
    }
L_08857978:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2749u);
    ctx.gpr[31] = (0x08857990u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857990u) goto L_08857990;
    return;
L_08857990:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08857994;
L_08857994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857A0C;
      }
      goto L_0885799C;
    }
L_0885799C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2747u);
    ctx.gpr[31] = (0x088579B4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088579B4u) goto L_088579B4;
    return;
L_088579B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857994;
      }
      goto L_088579BC;
    }
L_088579BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2745u);
    ctx.gpr[31] = (0x088579D4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088579D4u) goto L_088579D4;
    return;
L_088579D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857994;
      }
      goto L_088579DC;
    }
L_088579DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2751u);
    ctx.gpr[31] = (0x088579F4u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x088579F4u) goto L_088579F4;
    return;
L_088579F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857994;
      }
      goto L_088579FC;
    }
L_088579FC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08857A0Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08857A0Cu) goto L_08857A0C;
    return;
L_08857A0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857A18:
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
          goto L_08857B98;
      }
      goto L_08857A3C;
    }
L_08857A3C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30072)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857A54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2715u);
    ctx.gpr[31] = (0x08857A6Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857A6Cu) goto L_08857A6C;
    return;
L_08857A6C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08857A70;
L_08857A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857BAC;
      }
      goto L_08857A78;
    }
L_08857A78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2718u);
    ctx.gpr[31] = (0x08857A90u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857A90u) goto L_08857A90;
    return;
L_08857A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857A70;
      }
      goto L_08857A98;
    }
L_08857A98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2709u);
    ctx.gpr[31] = (0x08857AB0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857AB0u) goto L_08857AB0;
    return;
L_08857AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857A70;
      }
      goto L_08857AB8;
    }
L_08857AB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2705u);
    ctx.gpr[31] = (0x08857AD0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857AD0u) goto L_08857AD0;
    return;
L_08857AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857A70;
      }
      goto L_08857AD8;
    }
L_08857AD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2703u);
    ctx.gpr[31] = (0x08857AF0u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857AF0u) goto L_08857AF0;
    return;
L_08857AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857A70;
      }
      goto L_08857AF8;
    }
L_08857AF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2707u);
    ctx.gpr[31] = (0x08857B10u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857B10u) goto L_08857B10;
    return;
L_08857B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857A70;
      }
      goto L_08857B18;
    }
L_08857B18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2721u);
    ctx.gpr[31] = (0x08857B30u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857B30u) goto L_08857B30;
    return;
L_08857B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857A70;
      }
      goto L_08857B38;
    }
L_08857B38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2696u);
    ctx.gpr[31] = (0x08857B50u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857B50u) goto L_08857B50;
    return;
L_08857B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857A70;
      }
      goto L_08857B58;
    }
L_08857B58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2699u);
    ctx.gpr[31] = (0x08857B70u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857B70u) goto L_08857B70;
    return;
L_08857B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857A70;
      }
      goto L_08857B78;
    }
L_08857B78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2712u);
    ctx.gpr[31] = (0x08857B90u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857B90u) goto L_08857B90;
    return;
L_08857B90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857A70;
      }
      goto L_08857B98;
    }
L_08857B98:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08857BACu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08857BACu) goto L_08857BAC;
    return;
L_08857BAC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857BB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-122));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] < static_cast<std::uint32_t>(37) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08857D18;
      }
      goto L_08857BDC;
    }
L_08857BDC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857BF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2741u);
    ctx.gpr[31] = (0x08857C0Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857C0Cu) goto L_08857C0C;
    return;
L_08857C0C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08857C10;
L_08857C10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857D2C;
      }
      goto L_08857C18;
    }
L_08857C18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2735u);
    ctx.gpr[31] = (0x08857C30u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857C30u) goto L_08857C30;
    return;
L_08857C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857C10;
      }
      goto L_08857C38;
    }
L_08857C38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2731u);
    ctx.gpr[31] = (0x08857C50u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857C50u) goto L_08857C50;
    return;
L_08857C50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857C10;
      }
      goto L_08857C58;
    }
L_08857C58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2729u);
    ctx.gpr[31] = (0x08857C70u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857C70u) goto L_08857C70;
    return;
L_08857C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857C10;
      }
      goto L_08857C78;
    }
L_08857C78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2733u);
    ctx.gpr[31] = (0x08857C90u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857C90u) goto L_08857C90;
    return;
L_08857C90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857C10;
      }
      goto L_08857C98;
    }
L_08857C98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2744u);
    ctx.gpr[31] = (0x08857CB0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857CB0u) goto L_08857CB0;
    return;
L_08857CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857C10;
      }
      goto L_08857CB8;
    }
L_08857CB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2722u);
    ctx.gpr[31] = (0x08857CD0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857CD0u) goto L_08857CD0;
    return;
L_08857CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857C10;
      }
      goto L_08857CD8;
    }
L_08857CD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2725u);
    ctx.gpr[31] = (0x08857CF0u);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857CF0u) goto L_08857CF0;
    return;
L_08857CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857C10;
      }
      goto L_08857CF8;
    }
L_08857CF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2738u);
    ctx.gpr[31] = (0x08857D10u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857D10u) goto L_08857D10;
    return;
L_08857D10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857C10;
      }
      goto L_08857D18;
    }
L_08857D18:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08857D2Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08857D2Cu) goto L_08857D2C;
    return;
L_08857D2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857D38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28320));
      if (branch_taken) {
          goto L_08857DD8;
      }
      goto L_08857D58;
    }
L_08857D58:
    ctx.gpr[7] = (0u | 143u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 137u);
      if (branch_taken) {
          goto L_08857DB8;
      }
      goto L_08857D64;
    }
L_08857D64:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 119u);
      if (branch_taken) {
          goto L_08857D98;
      }
      goto L_08857D6C;
    }
L_08857D6C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08857DF8;
      }
      goto L_08857D74;
    }
L_08857D74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2759u);
    ctx.gpr[31] = (0x08857D8Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857D8Cu) goto L_08857D8C;
    return;
L_08857D8C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08857D90;
L_08857D90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857E08;
      }
      goto L_08857D98;
    }
L_08857D98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2756u);
    ctx.gpr[31] = (0x08857DB0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857DB0u) goto L_08857DB0;
    return;
L_08857DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857D90;
      }
      goto L_08857DB8;
    }
L_08857DB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2753u);
    ctx.gpr[31] = (0x08857DD0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857DD0u) goto L_08857DD0;
    return;
L_08857DD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857D90;
      }
      goto L_08857DD8;
    }
L_08857DD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2762u);
    ctx.gpr[31] = (0x08857DF0u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857DF0u) goto L_08857DF0;
    return;
L_08857DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857D90;
      }
      goto L_08857DF8;
    }
L_08857DF8:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08857E08u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 302u, 0x088C971Cu>(ctx, &aot_mem) && ctx.pc == 0x08857E08u) goto L_08857E08;
    return;
L_08857E08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857E14:
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
          goto L_08857F94;
      }
      goto L_08857E38;
    }
L_08857E38:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30392)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857E50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2784u);
    ctx.gpr[31] = (0x08857E68u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857E68u) goto L_08857E68;
    return;
L_08857E68:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08857E6C;
L_08857E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08857FA8;
      }
      goto L_08857E74;
    }
L_08857E74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2786u);
    ctx.gpr[31] = (0x08857E8Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857E8Cu) goto L_08857E8C;
    return;
L_08857E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857E6C;
      }
      goto L_08857E94;
    }
L_08857E94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2778u);
    ctx.gpr[31] = (0x08857EACu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857EACu) goto L_08857EAC;
    return;
L_08857EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857E6C;
      }
      goto L_08857EB4;
    }
L_08857EB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2774u);
    ctx.gpr[31] = (0x08857ECCu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857ECCu) goto L_08857ECC;
    return;
L_08857ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857E6C;
      }
      goto L_08857ED4;
    }
L_08857ED4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2772u);
    ctx.gpr[31] = (0x08857EECu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857EECu) goto L_08857EEC;
    return;
L_08857EEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857E6C;
      }
      goto L_08857EF4;
    }
L_08857EF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2776u);
    ctx.gpr[31] = (0x08857F0Cu);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857F0Cu) goto L_08857F0C;
    return;
L_08857F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857E6C;
      }
      goto L_08857F14;
    }
L_08857F14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2789u);
    ctx.gpr[31] = (0x08857F2Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857F2Cu) goto L_08857F2C;
    return;
L_08857F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857E6C;
      }
      goto L_08857F34;
    }
L_08857F34:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2765u);
    ctx.gpr[31] = (0x08857F4Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857F4Cu) goto L_08857F4C;
    return;
L_08857F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857E6C;
      }
      goto L_08857F54;
    }
L_08857F54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2768u);
    ctx.gpr[31] = (0x08857F6Cu);
    ctx.gpr[8] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857F6Cu) goto L_08857F6C;
    return;
L_08857F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857E6C;
      }
      goto L_08857F74;
    }
L_08857F74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2781u);
    ctx.gpr[31] = (0x08857F8Cu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 283u, 0x088C95D8u>(ctx, &aot_mem) && ctx.pc == 0x08857F8Cu) goto L_08857F8C;
    return;
L_08857F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08857E6C;
      }
      goto L_08857F94;
    }
L_08857F94:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08857FA8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 289u, 0x088C9640u>(ctx, &aot_mem) && ctx.pc == 0x08857FA8u) goto L_08857FA8;
    return;
L_08857FA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857FB4:
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
          (void)rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 22u, 0x08858134u>(ctx, &aot_mem); return;
      }
      goto L_08857FD8;
    }
L_08857FD8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2231u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08857FF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1724));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[7] = (0u | 2809u);
    ctx.pc = 0x08858000u; return;
}

void recomp_unit_0020(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0020_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_20(Runtime &runtime) {
    runtime.register_generated_unit(20u, 0x08854000u, 16384u, &recomp_unit_0020, &recomp_unit_0020_entry);
    runtime.register_function(0x08854000u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854008u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854010u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885401Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854034u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854038u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854044u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854068u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854080u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854098u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885409Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088540FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854104u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885411Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854124u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885413Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854144u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885415Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854164u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885417Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854184u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885419Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088541F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854200u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854218u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885421Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854224u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885423Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854244u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885425Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854264u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885427Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854284u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854294u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088542F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854300u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854318u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854320u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854338u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854340u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854358u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854360u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854378u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854380u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854398u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088543F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854400u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854418u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854420u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854434u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854440u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854464u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885447Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854494u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854498u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088544F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854500u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854518u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854520u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854538u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854540u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854558u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854560u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854578u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854580u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854598u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088545E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854600u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885460Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854614u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885461Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854634u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854638u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854640u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854658u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854660u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854678u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854680u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854698u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088546F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854710u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854714u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885471Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854734u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885473Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854754u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885475Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854774u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885477Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885478Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854798u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088547F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854800u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854818u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854820u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854838u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854840u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854858u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854860u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854870u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885487Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088548FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854914u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885491Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854934u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885493Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854954u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885495Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854974u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885497Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854994u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885499Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088549FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854A9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854ABCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854ADCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854AFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854B9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BC0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854BFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854C9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854CFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854D9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854DFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854E9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854ED0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854EDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854F9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08854FFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855014u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885501Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855034u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885503Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855054u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885505Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855070u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885507Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088550FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855114u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885511Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855134u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885513Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855154u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885515Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855174u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885517Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855194u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885519Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088551FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855210u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885521Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855240u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855258u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855270u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855274u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885527Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855294u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885529Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088552FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855314u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885531Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855334u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885533Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855354u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885535Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855374u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885537Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855394u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885539Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088553F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855410u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855414u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885541Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855434u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885543Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855454u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885545Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855474u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885547Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855494u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885549Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088554FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855514u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885551Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855534u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885553Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855550u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885555Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855580u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855598u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088555FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855614u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885561Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855634u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885563Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855654u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885565Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855674u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885567Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855694u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885569Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088556FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855720u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855738u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855750u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855754u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885575Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855774u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885577Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855794u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885579Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088557FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855814u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885581Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855834u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885583Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855854u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885585Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855874u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885587Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855890u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885589Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088558FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855914u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885591Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855934u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885593Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855954u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885595Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855974u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885597Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855994u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885599Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088559FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A60u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855A9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855ABCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855ADCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855AFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855B9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855BDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C00u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855C9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855CFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D5Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D7Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855D98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DBCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855DFCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E1Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855E98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855EB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855EB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855ED0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855ED8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855EF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855EF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855F94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FD4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08855FF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856014u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885602Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856044u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856048u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856050u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856068u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856070u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856088u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856090u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088560F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856108u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856110u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856128u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856130u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856148u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856150u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856168u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856170u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856184u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856190u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088561F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856208u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856210u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856228u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856230u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856248u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856250u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856268u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856270u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856288u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856290u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088562F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856308u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856310u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856324u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856330u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856354u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885636Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856384u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856388u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856390u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088563F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856408u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856410u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856428u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856430u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856448u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856450u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856468u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856470u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856488u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856490u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088564F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885650Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856524u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856528u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856530u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856548u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856550u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856568u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856570u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856588u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856590u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088565F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856608u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856610u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856628u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856630u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856644u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856650u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856674u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885668Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088566F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856708u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856710u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856728u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856730u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856748u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856750u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856768u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856770u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856788u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856790u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088567F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856814u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885682Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856844u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856848u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856850u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856868u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856870u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856888u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856890u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568B0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568D0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088568F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856908u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856910u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856928u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856930u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856948u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856950u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856968u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856970u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856984u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856990u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569CCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569E4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088569F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856A90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856AF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B84u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856B90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856BF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856C90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856CF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D24u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856D90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856DF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E48u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856E9Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EC8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856ED0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EE8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856EF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F28u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F40u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F80u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856F88u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FA0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FA4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FC4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FCCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FE4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08856FECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857004u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885700Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885701Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857028u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857048u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857054u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885705Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857064u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885707Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857080u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857088u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570A8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570C8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570E8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088570F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857104u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857124u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857130u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857138u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857140u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857158u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885715Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857164u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885717Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857184u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885719Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571C4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088571E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857204u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885721Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857234u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857238u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857240u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857258u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857260u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857278u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857280u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857298u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088572F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857300u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857318u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857320u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857338u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857340u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857358u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857360u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857374u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857380u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573A4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088573F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857400u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857418u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857420u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857438u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857440u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857458u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857460u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857478u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857480u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857498u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088574F8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857500u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857514u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857520u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857540u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885754Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857554u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885755Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857574u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857578u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857580u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857598u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575A0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575B8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575E0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088575FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857620u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857638u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857650u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857654u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885765Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857674u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885767Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857694u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885769Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088576FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857714u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885771Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857734u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885773Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857754u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885775Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857774u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885777Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857790u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885779Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577C0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577D8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577F0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088577FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857814u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885781Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857834u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885783Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857854u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885785Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857874u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885787Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857894u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885789Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088578FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857914u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885791Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857930u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885793Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885795Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857968u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857970u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857978u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857990u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857994u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x0885799Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579B4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579BCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579D4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579DCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579F4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x088579FCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A3Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857A98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857AF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857B98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BDCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857BF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C30u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C70u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C78u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857C98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857CF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D10u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D18u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D58u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D64u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D90u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857D98u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DB0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DB8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DD0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DF0u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857DF8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E08u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E38u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E50u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E68u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857E94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EACu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857ECCu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857ED4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EECu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857EF4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F0Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F14u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F2Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F34u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F4Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F54u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F6Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F74u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F8Cu, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857F94u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FA8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FB4u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FD8u, &recomp_unit_0020, "recomp_unit_0020");
    runtime.register_function(0x08857FF0u, &recomp_unit_0020, "recomp_unit_0020");
}
} // namespace psprecomp
