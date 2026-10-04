#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0175[4095] = {
    1, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 0,
    0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0,
    0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0,
    0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 62, 63, 0, 64, 0, 0, 65, 0,
    66, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 74, 75, 0, 76, 0, 0,
    77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 86, 87, 0, 88,
    0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97,
    0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0,
    0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 114,
    0, 115, 0, 116, 117, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0,
    124, 0, 0, 125, 0, 126, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 0,
    0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0,
    0, 141, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 0, 168,
    0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183,
    0, 0, 184, 0, 0, 185, 0, 186, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 200, 201, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 210, 0,
    0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 0, 0, 221, 0, 222,
    0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0,
    0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 238, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0,
    0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 247, 0, 248, 0,
    249, 0, 0, 250, 0, 0, 251, 0, 252, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0,
    258, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 262, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 277, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 281, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 285, 0, 286, 0,
    0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 291, 0, 292, 0,
    293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 299, 0,
    300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306,
    0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0, 335, 336, 0, 0, 0, 0, 0,
    337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 342, 343, 0, 0, 0, 0, 0, 344, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 347, 348, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 353, 0, 354, 0, 355, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 0, 0, 0, 359, 360, 361, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0, 0, 372, 0, 0,
    0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 0, 377, 378, 0, 0, 0, 0, 379, 0, 0, 0,
    380, 0, 381, 0, 382, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 389, 0,
    0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395,
    0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0,
    0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0,
    0, 0, 415, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0,
    0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0,
    0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431,
    0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 0, 0,
    0, 0, 444, 0, 0, 445, 0, 446, 447, 0, 448, 0, 449, 0, 0, 0, 450, 0, 451, 0, 452, 453, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    459, 0, 0, 0, 0, 460, 0, 461, 0, 462, 0, 0, 463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 467, 0, 468, 0,
    0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 474, 0, 475, 476, 0, 477, 0, 478, 0, 0, 0, 0,
    479, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 482, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0,
    487, 0, 488, 0, 489, 0, 490, 491, 0, 492, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 497, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 500, 0, 501, 0, 502, 503, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0,
    0, 509, 0, 510, 511, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 516,
    0, 517, 0, 0, 518, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0,
    531, 0, 532, 0, 0, 533, 0, 0, 0, 534, 0, 535, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0,
    540, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0,
    546, 0, 0, 547, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 550, 0, 551, 0, 0, 552, 0, 553, 0, 554, 0, 555, 0, 0, 556, 0, 557, 0,
    558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 563,
    0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0,
    0, 0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 577, 0, 578, 579, 580, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 0, 597, 0,
    0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0,
    604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 611, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 617, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 621, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0,
    0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0,
    0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0,
    0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640, 0,
    0, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 648,
    0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 651, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 657, 0,
    0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 661, 662, 0, 663, 0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 667,
    0, 668, 669, 0, 0, 0, 670, 0, 671, 0, 672, 0, 0, 673, 0, 0, 0, 674, 0, 675, 676, 0, 677, 678, 0, 679, 0, 680, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 684, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 687, 0, 688, 0, 0, 689, 0, 0, 0, 690, 0, 691, 0, 692, 0, 0, 693, 0, 694, 0, 0, 0, 695, 0, 0, 0, 0, 0,
    0, 0, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 699, 700, 0, 701, 0, 0, 0, 702, 0, 703, 0, 0, 0, 704, 0, 705, 0,
    0, 0, 0, 0, 0, 706, 0, 707, 0, 708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 713, 0, 0, 714,
    0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 717, 0, 718, 0, 719, 0, 0, 0, 0, 720, 0, 721, 0, 722, 0, 723, 0,
    0, 724, 0, 725, 0, 726, 0, 727, 728, 0, 729, 730, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 734, 0, 735,
    736, 737, 0, 738, 0, 0, 739, 0, 0, 740, 0, 741, 0, 742, 0, 743, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0,
    747, 0, 748, 0, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 752, 0, 753, 0, 754, 0, 755, 0, 756, 0, 757, 0,
    758, 0, 759, 0, 0, 760, 0, 761, 762, 0, 763, 0, 764, 0, 765, 0, 766, 0, 767, 0, 768, 0, 769, 0, 770, 0, 771, 0, 0, 0, 0, 772,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0,
    777, 0, 778, 0, 779, 0, 0, 780, 0, 781, 0, 0, 782, 0, 0, 783, 0, 784, 0, 785, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 788, 0,
    789, 0, 790, 0, 791, 0, 792, 0, 793, 0, 0, 0, 0, 794, 0, 795, 0, 796, 0, 797, 0, 798, 0, 799, 0, 0, 800, 0, 0, 801, 0, 0,
    0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 805, 0, 0, 806, 0, 807, 0, 808, 0, 809, 0,
    810, 0, 0, 811, 0, 812, 0, 813, 0, 814, 0, 0, 0, 815, 0, 816, 0, 817, 0, 0, 818, 0, 819, 0, 820, 0, 821, 0, 0, 822, 0, 0,
    0, 0, 823, 0, 824, 0, 825, 0, 826, 0, 827, 0, 828, 0, 829, 0, 830, 0, 831, 0, 832, 0, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0,
    0, 0, 0, 0, 835, 0, 836, 0, 837, 0, 0, 838, 0, 839, 0, 0, 840, 0, 0, 841, 0, 842, 843, 0, 844, 0, 845, 0, 846, 0, 847, 0,
    848, 0, 849, 0, 850, 0, 851, 0, 852, 0, 853, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858, 0, 859, 0, 860, 0, 861, 0, 0, 862, 0, 863,
    0, 0, 864, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 867,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 871, 872,
    873, 0, 874, 0, 875, 0, 876, 0, 877, 0, 0, 0, 0, 878, 0, 879, 0, 880, 0, 881, 0, 882, 0, 0, 883, 0, 0, 884, 0, 0, 885, 0,
    886, 0, 887, 0, 0, 0, 888, 0, 0, 0, 889, 0, 890, 891, 0, 892, 0, 0, 893, 0, 0, 0, 894, 0, 895, 896, 0, 0, 897, 0, 0, 898,
    0, 0, 899, 0, 900, 0, 901, 0, 902, 0, 0, 903, 0, 0, 904, 0, 905, 0, 0, 906, 0, 0, 907, 0, 0, 908, 0, 909, 910, 0, 0, 911,
    0, 0, 0, 912, 0, 913, 914, 0, 915, 0, 916, 0, 917, 0, 0, 918, 0, 0, 0, 919, 0, 920, 921, 0, 0, 922, 0, 923, 0, 0, 924, 0,
    925, 926, 0, 0, 927, 0, 0, 928, 0, 929, 0, 930, 0, 931, 0, 0, 932, 0, 0, 0, 933, 0, 934, 935, 0, 0, 936, 0, 0, 937, 0, 938,
    0, 939, 0, 940, 0, 0, 941, 0, 942, 0, 943, 0, 944, 0, 0, 945, 0, 0, 0, 946, 0, 947, 948, 0, 0, 949, 0, 0, 950, 0, 951, 0,
    952, 0, 953, 0, 0, 954, 0, 955, 956, 0, 0, 0, 957, 0, 0, 0, 958, 0, 959, 0, 960, 0, 0, 961, 0, 962, 963, 0, 0, 964, 0, 0,
    965, 0, 0, 0, 966, 0, 967, 968, 0, 0, 969, 0, 0, 970, 0, 971, 0, 972, 0, 973, 0, 974, 0, 0, 975, 0, 0, 0, 976, 0, 977, 978,
    0, 0, 979, 0, 0, 980, 0, 981, 0, 982, 0, 983, 0, 0, 984, 0, 0, 0, 985, 0, 986, 987, 0, 988, 0, 0, 989, 0, 0, 990, 0, 991,
    0, 992, 0, 0, 993, 0, 994, 0, 995, 0, 0, 996, 0, 997, 0, 998, 0, 999, 0, 0, 1000, 0, 0, 0, 1001, 0, 1002, 1003, 0, 1004, 0, 0,
    0, 0, 0, 0, 0, 1005, 0, 0, 0, 0, 0, 0, 0, 0, 1006, 0, 0, 1007, 0, 0, 1008, 0, 0, 0, 0, 1009, 0, 0, 1010, 0, 0, 1011,
    0, 0, 0, 1012, 0, 1013, 1014, 0, 1015, 0, 0, 1016, 0, 0, 1017, 0, 1018, 0, 1019, 0, 0, 1020, 0, 0, 1021, 0, 1022, 0, 0, 0, 0, 1023,
    0, 0, 1024, 0, 0, 1025, 0, 1026, 0, 1027, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1028, 0, 1029, 1030, 0, 1031, 0, 0, 1032, 0, 1033, 1034, 0,
    1035, 0, 0, 1036, 0, 1037, 1038, 0, 1039, 0, 0, 1040, 0, 1041, 1042, 0, 1043, 0, 0, 0, 0, 0, 0, 1044, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1045, 0, 0, 0, 1046, 0, 1047, 0, 0, 0, 0, 0, 0, 0, 1048, 0, 0, 0, 0, 1049, 0, 1050, 0, 1051, 0, 0, 0, 1052, 0, 0,
    1053, 0, 1054, 0, 1055, 0, 1056, 0, 1057, 0, 1058, 0, 1059, 0, 1060, 0, 0, 0, 1061, 0, 1062, 0, 1063, 0, 1064, 0, 1065, 0, 1066, 0, 1067, 0,
    1068, 0, 1069, 0, 1070, 0, 1071, 0, 1072, 0, 1073, 0, 0, 1074, 0, 1075, 0, 0, 0, 1076, 0, 0, 1077, 0, 0, 0, 0, 0, 0, 0, 1078,
};
void recomp_unit_0175_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AC0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0175[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AC0000;
    case 2u: goto L_08AC0004;
    case 3u: goto L_08AC0014;
    case 4u: goto L_08AC001C;
    case 5u: goto L_08AC002C;
    case 6u: goto L_08AC0034;
    case 7u: goto L_08AC0044;
    case 8u: goto L_08AC004C;
    case 9u: goto L_08AC005C;
    case 10u: goto L_08AC0064;
    case 11u: goto L_08AC0074;
    case 12u: goto L_08AC0088;
    case 13u: goto L_08AC0094;
    case 14u: goto L_08AC00A8;
    case 15u: goto L_08AC00B4;
    case 16u: goto L_08AC00D4;
    case 17u: goto L_08AC00D8;
    case 18u: goto L_08AC00E4;
    case 19u: goto L_08AC0110;
    case 20u: goto L_08AC0118;
    case 21u: goto L_08AC0120;
    case 22u: goto L_08AC0130;
    case 23u: goto L_08AC0140;
    case 24u: goto L_08AC0150;
    case 25u: goto L_08AC016C;
    case 26u: goto L_08AC0180;
    case 27u: goto L_08AC0190;
    case 28u: goto L_08AC01A8;
    case 29u: goto L_08AC01B4;
    case 30u: goto L_08AC01BC;
    case 31u: goto L_08AC01CC;
    case 32u: goto L_08AC01DC;
    case 33u: goto L_08AC01E8;
    case 34u: goto L_08AC01F4;
    case 35u: goto L_08AC0218;
    case 36u: goto L_08AC022C;
    case 37u: goto L_08AC0238;
    case 38u: goto L_08AC0254;
    case 39u: goto L_08AC0260;
    case 40u: goto L_08AC02A0;
    case 41u: goto L_08AC02AC;
    case 42u: goto L_08AC02B4;
    case 43u: goto L_08AC02C0;
    case 44u: goto L_08AC02C8;
    case 45u: goto L_08AC02D0;
    case 46u: goto L_08AC02D8;
    case 47u: goto L_08AC02F8;
    case 48u: goto L_08AC0318;
    case 49u: goto L_08AC032C;
    case 50u: goto L_08AC033C;
    case 51u: goto L_08AC034C;
    case 52u: goto L_08AC035C;
    case 53u: goto L_08AC0364;
    case 54u: goto L_08AC0370;
    case 55u: goto L_08AC0378;
    case 56u: goto L_08AC0384;
    case 57u: goto L_08AC0388;
    case 58u: goto L_08AC03A8;
    case 59u: goto L_08AC03C4;
    case 60u: goto L_08AC03D0;
    case 61u: goto L_08AC03D8;
    case 62u: goto L_08AC03E0;
    case 63u: goto L_08AC03E4;
    case 64u: goto L_08AC03EC;
    case 65u: goto L_08AC03F8;
    case 66u: goto L_08AC0400;
    case 67u: goto L_08AC0408;
    case 68u: goto L_08AC0410;
    case 69u: goto L_08AC0418;
    case 70u: goto L_08AC0430;
    case 71u: goto L_08AC044C;
    case 72u: goto L_08AC0458;
    case 73u: goto L_08AC0460;
    case 74u: goto L_08AC0468;
    case 75u: goto L_08AC046C;
    case 76u: goto L_08AC0474;
    case 77u: goto L_08AC0480;
    case 78u: goto L_08AC0488;
    case 79u: goto L_08AC0490;
    case 80u: goto L_08AC0498;
    case 81u: goto L_08AC04A0;
    case 82u: goto L_08AC04B8;
    case 83u: goto L_08AC04D4;
    case 84u: goto L_08AC04E0;
    case 85u: goto L_08AC04E8;
    case 86u: goto L_08AC04F0;
    case 87u: goto L_08AC04F4;
    case 88u: goto L_08AC04FC;
    case 89u: goto L_08AC0508;
    case 90u: goto L_08AC0510;
    case 91u: goto L_08AC0518;
    case 92u: goto L_08AC0520;
    case 93u: goto L_08AC0528;
    case 94u: goto L_08AC0540;
    case 95u: goto L_08AC0560;
    case 96u: goto L_08AC0570;
    case 97u: goto L_08AC057C;
    case 98u: goto L_08AC0588;
    case 99u: goto L_08AC059C;
    case 100u: goto L_08AC05B8;
    case 101u: goto L_08AC05D4;
    case 102u: goto L_08AC05DC;
    case 103u: goto L_08AC05E8;
    case 104u: goto L_08AC05F0;
    case 105u: goto L_08AC05F8;
    case 106u: goto L_08AC0608;
    case 107u: goto L_08AC0614;
    case 108u: goto L_08AC0624;
    case 109u: goto L_08AC0630;
    case 110u: goto L_08AC0648;
    case 111u: goto L_08AC0664;
    case 112u: goto L_08AC0670;
    case 113u: goto L_08AC0678;
    case 114u: goto L_08AC067C;
    case 115u: goto L_08AC0684;
    case 116u: goto L_08AC068C;
    case 117u: goto L_08AC0690;
    case 118u: goto L_08AC0698;
    case 119u: goto L_08AC06A8;
    case 120u: goto L_08AC06B4;
    case 121u: goto L_08AC06C4;
    case 122u: goto L_08AC06D0;
    case 123u: goto L_08AC06E8;
    case 124u: goto L_08AC0700;
    case 125u: goto L_08AC070C;
    case 126u: goto L_08AC0714;
    case 127u: goto L_08AC0718;
    case 128u: goto L_08AC0730;
    case 129u: goto L_08AC0744;
    case 130u: goto L_08AC075C;
    case 131u: goto L_08AC0764;
    case 132u: goto L_08AC0774;
    case 133u: goto L_08AC0788;
    case 134u: goto L_08AC0790;
    case 135u: goto L_08AC07B4;
    case 136u: goto L_08AC07C0;
    case 137u: goto L_08AC07CC;
    case 138u: goto L_08AC07E4;
    case 139u: goto L_08AC07EC;
    case 140u: goto L_08AC07F4;
    case 141u: goto L_08AC0804;
    case 142u: goto L_08AC0808;
    case 143u: goto L_08AC0820;
    case 144u: goto L_08AC083C;
    case 145u: goto L_08AC0848;
    case 146u: goto L_08AC085C;
    case 147u: goto L_08AC0874;
    case 148u: goto L_08AC0898;
    case 149u: goto L_08AC08B4;
    case 150u: goto L_08AC08C0;
    case 151u: goto L_08AC08CC;
    case 152u: goto L_08AC08D4;
    case 153u: goto L_08AC08E8;
    case 154u: goto L_08AC0904;
    case 155u: goto L_08AC0910;
    case 156u: goto L_08AC091C;
    case 157u: goto L_08AC0924;
    case 158u: goto L_08AC0938;
    case 159u: goto L_08AC0960;
    case 160u: goto L_08AC097C;
    case 161u: goto L_08AC0988;
    case 162u: goto L_08AC099C;
    case 163u: goto L_08AC09B4;
    case 164u: goto L_08AC09C8;
    case 165u: goto L_08AC09D4;
    case 166u: goto L_08AC09E4;
    case 167u: goto L_08AC09F0;
    case 168u: goto L_08AC09FC;
    case 169u: goto L_08AC0A1C;
    case 170u: goto L_08AC0A38;
    case 171u: goto L_08AC0A44;
    case 172u: goto L_08AC0A50;
    case 173u: goto L_08AC0A58;
    case 174u: goto L_08AC0A6C;
    case 175u: goto L_08AC0A90;
    case 176u: goto L_08AC0A9C;
    case 177u: goto L_08AC0AA8;
    case 178u: goto L_08AC0AC4;
    case 179u: goto L_08AC0AD0;
    case 180u: goto L_08AC0AE0;
    case 181u: goto L_08AC0AEC;
    case 182u: goto L_08AC0AF4;
    case 183u: goto L_08AC0AFC;
    case 184u: goto L_08AC0B08;
    case 185u: goto L_08AC0B14;
    case 186u: goto L_08AC0B1C;
    case 187u: goto L_08AC0B20;
    case 188u: goto L_08AC0B38;
    case 189u: goto L_08AC0B5C;
    case 190u: goto L_08AC0B68;
    case 191u: goto L_08AC0B74;
    case 192u: goto L_08AC0B90;
    case 193u: goto L_08AC0B9C;
    case 194u: goto L_08AC0BAC;
    case 195u: goto L_08AC0BB8;
    case 196u: goto L_08AC0BC0;
    case 197u: goto L_08AC0BC8;
    case 198u: goto L_08AC0BD4;
    case 199u: goto L_08AC0BE0;
    case 200u: goto L_08AC0BE8;
    case 201u: goto L_08AC0BEC;
    case 202u: goto L_08AC0C04;
    case 203u: goto L_08AC0C2C;
    case 204u: goto L_08AC0C3C;
    case 205u: goto L_08AC0C44;
    case 206u: goto L_08AC0C4C;
    case 207u: goto L_08AC0C58;
    case 208u: goto L_08AC0C68;
    case 209u: goto L_08AC0C70;
    case 210u: goto L_08AC0C78;
    case 211u: goto L_08AC0C84;
    case 212u: goto L_08AC0C90;
    case 213u: goto L_08AC0CA0;
    case 214u: goto L_08AC0CA8;
    case 215u: goto L_08AC0CB4;
    case 216u: goto L_08AC0CC4;
    case 217u: goto L_08AC0CCC;
    case 218u: goto L_08AC0CD4;
    case 219u: goto L_08AC0CDC;
    case 220u: goto L_08AC0CE4;
    case 221u: goto L_08AC0CF4;
    case 222u: goto L_08AC0CFC;
    case 223u: goto L_08AC0D04;
    case 224u: goto L_08AC0D10;
    case 225u: goto L_08AC0D18;
    case 226u: goto L_08AC0D28;
    case 227u: goto L_08AC0D30;
    case 228u: goto L_08AC0D38;
    case 229u: goto L_08AC0D48;
    case 230u: goto L_08AC0D4C;
    case 231u: goto L_08AC0D68;
    case 232u: goto L_08AC0D8C;
    case 233u: goto L_08AC0D98;
    case 234u: goto L_08AC0DA4;
    case 235u: goto L_08AC0DB4;
    case 236u: goto L_08AC0DBC;
    case 237u: goto L_08AC0DC4;
    case 238u: goto L_08AC0DD4;
    case 239u: goto L_08AC0DD8;
    case 240u: goto L_08AC0DF0;
    case 241u: goto L_08AC0E14;
    case 242u: goto L_08AC0E20;
    case 243u: goto L_08AC0E2C;
    case 244u: goto L_08AC0E48;
    case 245u: goto L_08AC0E54;
    case 246u: goto L_08AC0E64;
    case 247u: goto L_08AC0E70;
    case 248u: goto L_08AC0E78;
    case 249u: goto L_08AC0E80;
    case 250u: goto L_08AC0E8C;
    case 251u: goto L_08AC0E98;
    case 252u: goto L_08AC0EA0;
    case 253u: goto L_08AC0EA4;
    case 254u: goto L_08AC0EBC;
    case 255u: goto L_08AC0EE0;
    case 256u: goto L_08AC0EEC;
    case 257u: goto L_08AC0EF8;
    case 258u: goto L_08AC0F00;
    case 259u: goto L_08AC0F0C;
    case 260u: goto L_08AC0F18;
    case 261u: goto L_08AC0F20;
    case 262u: goto L_08AC0F38;
    case 263u: goto L_08AC0F3C;
    case 264u: goto L_08AC0F54;
    case 265u: goto L_08AC0F6C;
    case 266u: goto L_08AC0F88;
    case 267u: goto L_08AC0F98;
    case 268u: goto L_08AC0FBC;
    case 269u: goto L_08AC0FCC;
    case 270u: goto L_08AC0FF0;
    case 271u: goto L_08AC1000;
    case 272u: goto L_08AC1024;
    case 273u: goto L_08AC1030;
    case 274u: goto L_08AC103C;
    case 275u: goto L_08AC1050;
    case 276u: goto L_08AC1064;
    case 277u: goto L_08AC1068;
    case 278u: goto L_08AC1080;
    case 279u: goto L_08AC10B0;
    case 280u: goto L_08AC10BC;
    case 281u: goto L_08AC10C4;
    case 282u: goto L_08AC10D0;
    case 283u: goto L_08AC10D8;
    case 284u: goto L_08AC10E0;
    case 285u: goto L_08AC10F0;
    case 286u: goto L_08AC10F8;
    case 287u: goto L_08AC110C;
    case 288u: goto L_08AC112C;
    case 289u: goto L_08AC115C;
    case 290u: goto L_08AC1168;
    case 291u: goto L_08AC1170;
    case 292u: goto L_08AC1178;
    case 293u: goto L_08AC1180;
    case 294u: goto L_08AC1188;
    case 295u: goto L_08AC11A8;
    case 296u: goto L_08AC11D8;
    case 297u: goto L_08AC11E4;
    case 298u: goto L_08AC11EC;
    case 299u: goto L_08AC11F8;
    case 300u: goto L_08AC1200;
    case 301u: goto L_08AC1208;
    case 302u: goto L_08AC1228;
    case 303u: goto L_08AC123C;
    case 304u: goto L_08AC124C;
    case 305u: goto L_08AC126C;
    case 306u: goto L_08AC127C;
    case 307u: goto L_08AC1294;
    case 308u: goto L_08AC12A4;
    case 309u: goto L_08AC12C0;
    case 310u: goto L_08AC12CC;
    case 311u: goto L_08AC12E0;
    case 312u: goto L_08AC1310;
    case 313u: goto L_08AC1324;
    case 314u: goto L_08AC134C;
    case 315u: goto L_08AC1358;
    case 316u: goto L_08AC1360;
    case 317u: goto L_08AC137C;
    case 318u: goto L_08AC13AC;
    case 319u: goto L_08AC13C0;
    case 320u: goto L_08AC13CC;
    case 321u: goto L_08AC13E8;
    case 322u: goto L_08AC1414;
    case 323u: goto L_08AC1424;
    case 324u: goto L_08AC143C;
    case 325u: goto L_08AC1444;
    case 326u: goto L_08AC144C;
    case 327u: goto L_08AC145C;
    case 328u: goto L_08AC1474;
    case 329u: goto L_08AC1498;
    case 330u: goto L_08AC14A4;
    case 331u: goto L_08AC14B0;
    case 332u: goto L_08AC14C4;
    case 333u: goto L_08AC14CC;
    case 334u: goto L_08AC14D4;
    case 335u: goto L_08AC14E4;
    case 336u: goto L_08AC14E8;
    case 337u: goto L_08AC1500;
    case 338u: goto L_08AC1524;
    case 339u: goto L_08AC1530;
    case 340u: goto L_08AC153C;
    case 341u: goto L_08AC1550;
    case 342u: goto L_08AC155C;
    case 343u: goto L_08AC1560;
    case 344u: goto L_08AC1578;
    case 345u: goto L_08AC15A0;
    case 346u: goto L_08AC15B8;
    case 347u: goto L_08AC15BC;
    case 348u: goto L_08AC15C0;
    case 349u: goto L_08AC15C8;
    case 350u: goto L_08AC15D4;
    case 351u: goto L_08AC1614;
    case 352u: goto L_08AC1620;
    case 353u: goto L_08AC1630;
    case 354u: goto L_08AC1638;
    case 355u: goto L_08AC1640;
    case 356u: goto L_08AC1644;
    case 357u: goto L_08AC1658;
    case 358u: goto L_08AC167C;
    case 359u: goto L_08AC1694;
    case 360u: goto L_08AC1698;
    case 361u: goto L_08AC169C;
    case 362u: goto L_08AC16A4;
    case 363u: goto L_08AC16AC;
    case 364u: goto L_08AC16C4;
    case 365u: goto L_08AC1714;
    case 366u: goto L_08AC1728;
    case 367u: goto L_08AC172C;
    case 368u: goto L_08AC173C;
    case 369u: goto L_08AC1754;
    case 370u: goto L_08AC1760;
    case 371u: goto L_08AC1768;
    case 372u: goto L_08AC1774;
    case 373u: goto L_08AC1784;
    case 374u: goto L_08AC17B4;
    case 375u: goto L_08AC17C4;
    case 376u: goto L_08AC17CC;
    case 377u: goto L_08AC17D8;
    case 378u: goto L_08AC17DC;
    case 379u: goto L_08AC17F0;
    case 380u: goto L_08AC1800;
    case 381u: goto L_08AC1808;
    case 382u: goto L_08AC1810;
    case 383u: goto L_08AC181C;
    case 384u: goto L_08AC1824;
    case 385u: goto L_08AC1840;
    case 386u: goto L_08AC1860;
    case 387u: goto L_08AC1868;
    case 388u: goto L_08AC1870;
    case 389u: goto L_08AC1878;
    case 390u: goto L_08AC188C;
    case 391u: goto L_08AC189C;
    case 392u: goto L_08AC18B4;
    case 393u: goto L_08AC18CC;
    case 394u: goto L_08AC18E0;
    case 395u: goto L_08AC18FC;
    case 396u: goto L_08AC190C;
    case 397u: goto L_08AC1924;
    case 398u: goto L_08AC1934;
    case 399u: goto L_08AC194C;
    case 400u: goto L_08AC195C;
    case 401u: goto L_08AC1978;
    case 402u: goto L_08AC1988;
    case 403u: goto L_08AC19A0;
    case 404u: goto L_08AC19B8;
    case 405u: goto L_08AC19C0;
    case 406u: goto L_08AC19C8;
    case 407u: goto L_08AC19D8;
    case 408u: goto L_08AC19EC;
    case 409u: goto L_08AC1A0C;
    case 410u: goto L_08AC1A24;
    case 411u: goto L_08AC1A30;
    case 412u: goto L_08AC1A48;
    case 413u: goto L_08AC1A58;
    case 414u: goto L_08AC1A70;
    case 415u: goto L_08AC1A88;
    case 416u: goto L_08AC1A90;
    case 417u: goto L_08AC1AB0;
    case 418u: goto L_08AC1AC4;
    case 419u: goto L_08AC1ADC;
    case 420u: goto L_08AC1AE4;
    case 421u: goto L_08AC1B04;
    case 422u: goto L_08AC1B18;
    case 423u: goto L_08AC1B30;
    case 424u: goto L_08AC1B38;
    case 425u: goto L_08AC1B48;
    case 426u: goto L_08AC1B5C;
    case 427u: goto L_08AC1B74;
    case 428u: goto L_08AC1B84;
    case 429u: goto L_08AC1BA0;
    case 430u: goto L_08AC1BB4;
    case 431u: goto L_08AC1BFC;
    case 432u: goto L_08AC1C0C;
    case 433u: goto L_08AC1C24;
    case 434u: goto L_08AC1C68;
    case 435u: goto L_08AC1C90;
    case 436u: goto L_08AC1C98;
    case 437u: goto L_08AC1CA0;
    case 438u: goto L_08AC1CA8;
    case 439u: goto L_08AC1CD0;
    case 440u: goto L_08AC1CD8;
    case 441u: goto L_08AC1CE0;
    case 442u: goto L_08AC1CE8;
    case 443u: goto L_08AC1CF0;
    case 444u: goto L_08AC1D08;
    case 445u: goto L_08AC1D14;
    case 446u: goto L_08AC1D1C;
    case 447u: goto L_08AC1D20;
    case 448u: goto L_08AC1D28;
    case 449u: goto L_08AC1D30;
    case 450u: goto L_08AC1D40;
    case 451u: goto L_08AC1D48;
    case 452u: goto L_08AC1D50;
    case 453u: goto L_08AC1D54;
    case 454u: goto L_08AC1D68;
    case 455u: goto L_08AC1D74;
    case 456u: goto L_08AC1DB0;
    case 457u: goto L_08AC1DC0;
    case 458u: goto L_08AC1DD0;
    case 459u: goto L_08AC1E00;
    case 460u: goto L_08AC1E14;
    case 461u: goto L_08AC1E1C;
    case 462u: goto L_08AC1E24;
    case 463u: goto L_08AC1E30;
    case 464u: goto L_08AC1E40;
    case 465u: goto L_08AC1E5C;
    case 466u: goto L_08AC1E64;
    case 467u: goto L_08AC1E70;
    case 468u: goto L_08AC1E78;
    case 469u: goto L_08AC1E84;
    case 470u: goto L_08AC1EA4;
    case 471u: goto L_08AC1EB8;
    case 472u: goto L_08AC1EC0;
    case 473u: goto L_08AC1EC8;
    case 474u: goto L_08AC1ED0;
    case 475u: goto L_08AC1ED8;
    case 476u: goto L_08AC1EDC;
    case 477u: goto L_08AC1EE4;
    case 478u: goto L_08AC1EEC;
    case 479u: goto L_08AC1F00;
    case 480u: goto L_08AC1F1C;
    case 481u: goto L_08AC1F24;
    case 482u: goto L_08AC1F30;
    case 483u: goto L_08AC1F38;
    case 484u: goto L_08AC1F44;
    case 485u: goto L_08AC1F64;
    case 486u: goto L_08AC1F78;
    case 487u: goto L_08AC1F80;
    case 488u: goto L_08AC1F88;
    case 489u: goto L_08AC1F90;
    case 490u: goto L_08AC1F98;
    case 491u: goto L_08AC1F9C;
    case 492u: goto L_08AC1FA4;
    case 493u: goto L_08AC1FAC;
    case 494u: goto L_08AC1FC0;
    case 495u: goto L_08AC1FDC;
    case 496u: goto L_08AC1FE4;
    case 497u: goto L_08AC1FF0;
    case 498u: goto L_08AC2018;
    case 499u: goto L_08AC2024;
    case 500u: goto L_08AC202C;
    case 501u: goto L_08AC2034;
    case 502u: goto L_08AC203C;
    case 503u: goto L_08AC2040;
    case 504u: goto L_08AC204C;
    case 505u: goto L_08AC2064;
    case 506u: goto L_08AC20D4;
    case 507u: goto L_08AC20D8;
    case 508u: goto L_08AC20EC;
    case 509u: goto L_08AC2104;
    case 510u: goto L_08AC210C;
    case 511u: goto L_08AC2110;
    case 512u: goto L_08AC211C;
    case 513u: goto L_08AC212C;
    case 514u: goto L_08AC2158;
    case 515u: goto L_08AC216C;
    case 516u: goto L_08AC217C;
    case 517u: goto L_08AC2184;
    case 518u: goto L_08AC2190;
    case 519u: goto L_08AC2198;
    case 520u: goto L_08AC21A8;
    case 521u: goto L_08AC21B8;
    case 522u: goto L_08AC21C0;
    case 523u: goto L_08AC21CC;
    case 524u: goto L_08AC21D4;
    case 525u: goto L_08AC21E4;
    case 526u: goto L_08AC21F4;
    case 527u: goto L_08AC221C;
    case 528u: goto L_08AC2234;
    case 529u: goto L_08AC2248;
    case 530u: goto L_08AC2260;
    case 531u: goto L_08AC2280;
    case 532u: goto L_08AC2288;
    case 533u: goto L_08AC2294;
    case 534u: goto L_08AC22A4;
    case 535u: goto L_08AC22AC;
    case 536u: goto L_08AC22B0;
    case 537u: goto L_08AC22BC;
    case 538u: goto L_08AC22E4;
    case 539u: goto L_08AC22EC;
    case 540u: goto L_08AC2300;
    case 541u: goto L_08AC2304;
    case 542u: goto L_08AC2318;
    case 543u: goto L_08AC2344;
    case 544u: goto L_08AC2350;
    case 545u: goto L_08AC2378;
    case 546u: goto L_08AC2380;
    case 547u: goto L_08AC238C;
    case 548u: goto L_08AC239C;
    case 549u: goto L_08AC23A8;
    case 550u: goto L_08AC23B8;
    case 551u: goto L_08AC23C0;
    case 552u: goto L_08AC23CC;
    case 553u: goto L_08AC23D4;
    case 554u: goto L_08AC23DC;
    case 555u: goto L_08AC23E4;
    case 556u: goto L_08AC23F0;
    case 557u: goto L_08AC23F8;
    case 558u: goto L_08AC2400;
    case 559u: goto L_08AC2414;
    case 560u: goto L_08AC242C;
    case 561u: goto L_08AC2458;
    case 562u: goto L_08AC2470;
    case 563u: goto L_08AC247C;
    case 564u: goto L_08AC2488;
    case 565u: goto L_08AC2494;
    case 566u: goto L_08AC249C;
    case 567u: goto L_08AC24AC;
    case 568u: goto L_08AC24B8;
    case 569u: goto L_08AC24C0;
    case 570u: goto L_08AC24D4;
    case 571u: goto L_08AC24E0;
    case 572u: goto L_08AC24F0;
    case 573u: goto L_08AC250C;
    case 574u: goto L_08AC2514;
    case 575u: goto L_08AC2520;
    case 576u: goto L_08AC252C;
    case 577u: goto L_08AC2538;
    case 578u: goto L_08AC2540;
    case 579u: goto L_08AC2544;
    case 580u: goto L_08AC2548;
    case 581u: goto L_08AC2554;
    case 582u: goto L_08AC2564;
    case 583u: goto L_08AC2590;
    case 584u: goto L_08AC25B8;
    case 585u: goto L_08AC25C0;
    case 586u: goto L_08AC25D8;
    case 587u: goto L_08AC25E0;
    case 588u: goto L_08AC2690;
    case 589u: goto L_08AC269C;
    case 590u: goto L_08AC26B8;
    case 591u: goto L_08AC26C4;
    case 592u: goto L_08AC2718;
    case 593u: goto L_08AC2734;
    case 594u: goto L_08AC2744;
    case 595u: goto L_08AC2750;
    case 596u: goto L_08AC2758;
    case 597u: goto L_08AC2778;
    case 598u: goto L_08AC2784;
    case 599u: goto L_08AC278C;
    case 600u: goto L_08AC27C4;
    case 601u: goto L_08AC27D0;
    case 602u: goto L_08AC27D8;
    case 603u: goto L_08AC27F4;
    case 604u: goto L_08AC2800;
    case 605u: goto L_08AC2808;
    case 606u: goto L_08AC2824;
    case 607u: goto L_08AC2830;
    case 608u: goto L_08AC2838;
    case 609u: goto L_08AC285C;
    case 610u: goto L_08AC2868;
    case 611u: goto L_08AC2870;
    case 612u: goto L_08AC28A4;
    case 613u: goto L_08AC28B0;
    case 614u: goto L_08AC28B8;
    case 615u: goto L_08AC28DC;
    case 616u: goto L_08AC28E8;
    case 617u: goto L_08AC28F0;
    case 618u: goto L_08AC2924;
    case 619u: goto L_08AC2958;
    case 620u: goto L_08AC2968;
    case 621u: goto L_08AC2974;
    case 622u: goto L_08AC29B8;
    case 623u: goto L_08AC29D4;
    case 624u: goto L_08AC29E4;
    case 625u: goto L_08AC29F8;
    case 626u: goto L_08AC2A54;
    case 627u: goto L_08AC2A74;
    case 628u: goto L_08AC2A84;
    case 629u: goto L_08AC2AA8;
    case 630u: goto L_08AC2AC4;
    case 631u: goto L_08AC2AD4;
    case 632u: goto L_08AC2AF8;
    case 633u: goto L_08AC2B14;
    case 634u: goto L_08AC2B24;
    case 635u: goto L_08AC2B48;
    case 636u: goto L_08AC2B64;
    case 637u: goto L_08AC2B74;
    case 638u: goto L_08AC2B98;
    case 639u: goto L_08AC2BEC;
    case 640u: goto L_08AC2BF8;
    case 641u: goto L_08AC2C04;
    case 642u: goto L_08AC2C0C;
    case 643u: goto L_08AC2C24;
    case 644u: goto L_08AC2C3C;
    case 645u: goto L_08AC2C50;
    case 646u: goto L_08AC2C60;
    case 647u: goto L_08AC2C70;
    case 648u: goto L_08AC2C7C;
    case 649u: goto L_08AC2C90;
    case 650u: goto L_08AC2CA0;
    case 651u: goto L_08AC2CA8;
    case 652u: goto L_08AC2CB8;
    case 653u: goto L_08AC2CC4;
    case 654u: goto L_08AC2CD8;
    case 655u: goto L_08AC2CE4;
    case 656u: goto L_08AC2CF0;
    case 657u: goto L_08AC2CF8;
    case 658u: goto L_08AC2D04;
    case 659u: goto L_08AC2D18;
    case 660u: goto L_08AC2D28;
    case 661u: goto L_08AC2D30;
    case 662u: goto L_08AC2D34;
    case 663u: goto L_08AC2D3C;
    case 664u: goto L_08AC2D4C;
    case 665u: goto L_08AC2D58;
    case 666u: goto L_08AC2D6C;
    case 667u: goto L_08AC2D7C;
    case 668u: goto L_08AC2D84;
    case 669u: goto L_08AC2D88;
    case 670u: goto L_08AC2D98;
    case 671u: goto L_08AC2DA0;
    case 672u: goto L_08AC2DA8;
    case 673u: goto L_08AC2DB4;
    case 674u: goto L_08AC2DC4;
    case 675u: goto L_08AC2DCC;
    case 676u: goto L_08AC2DD0;
    case 677u: goto L_08AC2DD8;
    case 678u: goto L_08AC2DDC;
    case 679u: goto L_08AC2DE4;
    case 680u: goto L_08AC2DEC;
    case 681u: goto L_08AC2E24;
    case 682u: goto L_08AC2E38;
    case 683u: goto L_08AC2E40;
    case 684u: goto L_08AC2E48;
    case 685u: goto L_08AC2E54;
    case 686u: goto L_08AC2E64;
    case 687u: goto L_08AC2E90;
    case 688u: goto L_08AC2E98;
    case 689u: goto L_08AC2EA4;
    case 690u: goto L_08AC2EB4;
    case 691u: goto L_08AC2EBC;
    case 692u: goto L_08AC2EC4;
    case 693u: goto L_08AC2ED0;
    case 694u: goto L_08AC2ED8;
    case 695u: goto L_08AC2EE8;
    case 696u: goto L_08AC2F0C;
    case 697u: goto L_08AC2F18;
    case 698u: goto L_08AC2F20;
    case 699u: goto L_08AC2F3C;
    case 700u: goto L_08AC2F40;
    case 701u: goto L_08AC2F48;
    case 702u: goto L_08AC2F58;
    case 703u: goto L_08AC2F60;
    case 704u: goto L_08AC2F70;
    case 705u: goto L_08AC2F78;
    case 706u: goto L_08AC2F94;
    case 707u: goto L_08AC2F9C;
    case 708u: goto L_08AC2FA4;
    case 709u: goto L_08AC2FB4;
    case 710u: goto L_08AC2FC4;
    case 711u: goto L_08AC2FD4;
    case 712u: goto L_08AC2FE4;
    case 713u: goto L_08AC2FF0;
    case 714u: goto L_08AC2FFC;
    case 715u: goto L_08AC3010;
    case 716u: goto L_08AC3034;
    case 717u: goto L_08AC303C;
    case 718u: goto L_08AC3044;
    case 719u: goto L_08AC304C;
    case 720u: goto L_08AC3060;
    case 721u: goto L_08AC3068;
    case 722u: goto L_08AC3070;
    case 723u: goto L_08AC3078;
    case 724u: goto L_08AC3084;
    case 725u: goto L_08AC308C;
    case 726u: goto L_08AC3094;
    case 727u: goto L_08AC309C;
    case 728u: goto L_08AC30A0;
    case 729u: goto L_08AC30A8;
    case 730u: goto L_08AC30AC;
    case 731u: goto L_08AC30B8;
    case 732u: goto L_08AC30DC;
    case 733u: goto L_08AC30E8;
    case 734u: goto L_08AC30F4;
    case 735u: goto L_08AC30FC;
    case 736u: goto L_08AC3100;
    case 737u: goto L_08AC3104;
    case 738u: goto L_08AC310C;
    case 739u: goto L_08AC3118;
    case 740u: goto L_08AC3124;
    case 741u: goto L_08AC312C;
    case 742u: goto L_08AC3134;
    case 743u: goto L_08AC313C;
    case 744u: goto L_08AC3144;
    case 745u: goto L_08AC314C;
    case 746u: goto L_08AC3168;
    case 747u: goto L_08AC3180;
    case 748u: goto L_08AC3188;
    case 749u: goto L_08AC3194;
    case 750u: goto L_08AC31B0;
    case 751u: goto L_08AC31C8;
    case 752u: goto L_08AC31D0;
    case 753u: goto L_08AC31D8;
    case 754u: goto L_08AC31E0;
    case 755u: goto L_08AC31E8;
    case 756u: goto L_08AC31F0;
    case 757u: goto L_08AC31F8;
    case 758u: goto L_08AC3200;
    case 759u: goto L_08AC3208;
    case 760u: goto L_08AC3214;
    case 761u: goto L_08AC321C;
    case 762u: goto L_08AC3220;
    case 763u: goto L_08AC3228;
    case 764u: goto L_08AC3230;
    case 765u: goto L_08AC3238;
    case 766u: goto L_08AC3240;
    case 767u: goto L_08AC3248;
    case 768u: goto L_08AC3250;
    case 769u: goto L_08AC3258;
    case 770u: goto L_08AC3260;
    case 771u: goto L_08AC3268;
    case 772u: goto L_08AC327C;
    case 773u: goto L_08AC32B8;
    case 774u: goto L_08AC32D0;
    case 775u: goto L_08AC32E0;
    case 776u: goto L_08AC32F4;
    case 777u: goto L_08AC3300;
    case 778u: goto L_08AC3308;
    case 779u: goto L_08AC3310;
    case 780u: goto L_08AC331C;
    case 781u: goto L_08AC3324;
    case 782u: goto L_08AC3330;
    case 783u: goto L_08AC333C;
    case 784u: goto L_08AC3344;
    case 785u: goto L_08AC334C;
    case 786u: goto L_08AC3358;
    case 787u: goto L_08AC3370;
    case 788u: goto L_08AC3378;
    case 789u: goto L_08AC3380;
    case 790u: goto L_08AC3388;
    case 791u: goto L_08AC3390;
    case 792u: goto L_08AC3398;
    case 793u: goto L_08AC33A0;
    case 794u: goto L_08AC33B4;
    case 795u: goto L_08AC33BC;
    case 796u: goto L_08AC33C4;
    case 797u: goto L_08AC33CC;
    case 798u: goto L_08AC33D4;
    case 799u: goto L_08AC33DC;
    case 800u: goto L_08AC33E8;
    case 801u: goto L_08AC33F4;
    case 802u: goto L_08AC3418;
    case 803u: goto L_08AC343C;
    case 804u: goto L_08AC3444;
    case 805u: goto L_08AC3454;
    case 806u: goto L_08AC3460;
    case 807u: goto L_08AC3468;
    case 808u: goto L_08AC3470;
    case 809u: goto L_08AC3478;
    case 810u: goto L_08AC3480;
    case 811u: goto L_08AC348C;
    case 812u: goto L_08AC3494;
    case 813u: goto L_08AC349C;
    case 814u: goto L_08AC34A4;
    case 815u: goto L_08AC34B4;
    case 816u: goto L_08AC34BC;
    case 817u: goto L_08AC34C4;
    case 818u: goto L_08AC34D0;
    case 819u: goto L_08AC34D8;
    case 820u: goto L_08AC34E0;
    case 821u: goto L_08AC34E8;
    case 822u: goto L_08AC34F4;
    case 823u: goto L_08AC3508;
    case 824u: goto L_08AC3510;
    case 825u: goto L_08AC3518;
    case 826u: goto L_08AC3520;
    case 827u: goto L_08AC3528;
    case 828u: goto L_08AC3530;
    case 829u: goto L_08AC3538;
    case 830u: goto L_08AC3540;
    case 831u: goto L_08AC3548;
    case 832u: goto L_08AC3550;
    case 833u: goto L_08AC355C;
    case 834u: goto L_08AC3578;
    case 835u: goto L_08AC3590;
    case 836u: goto L_08AC3598;
    case 837u: goto L_08AC35A0;
    case 838u: goto L_08AC35AC;
    case 839u: goto L_08AC35B4;
    case 840u: goto L_08AC35C0;
    case 841u: goto L_08AC35CC;
    case 842u: goto L_08AC35D4;
    case 843u: goto L_08AC35D8;
    case 844u: goto L_08AC35E0;
    case 845u: goto L_08AC35E8;
    case 846u: goto L_08AC35F0;
    case 847u: goto L_08AC35F8;
    case 848u: goto L_08AC3600;
    case 849u: goto L_08AC3608;
    case 850u: goto L_08AC3610;
    case 851u: goto L_08AC3618;
    case 852u: goto L_08AC3620;
    case 853u: goto L_08AC3628;
    case 854u: goto L_08AC3630;
    case 855u: goto L_08AC3638;
    case 856u: goto L_08AC3640;
    case 857u: goto L_08AC3648;
    case 858u: goto L_08AC3650;
    case 859u: goto L_08AC3658;
    case 860u: goto L_08AC3660;
    case 861u: goto L_08AC3668;
    case 862u: goto L_08AC3674;
    case 863u: goto L_08AC367C;
    case 864u: goto L_08AC3688;
    case 865u: goto L_08AC36A8;
    case 866u: goto L_08AC36D8;
    case 867u: goto L_08AC36FC;
    case 868u: goto L_08AC3740;
    case 869u: goto L_08AC3748;
    case 870u: goto L_08AC375C;
    case 871u: goto L_08AC3778;
    case 872u: goto L_08AC377C;
    case 873u: goto L_08AC3780;
    case 874u: goto L_08AC3788;
    case 875u: goto L_08AC3790;
    case 876u: goto L_08AC3798;
    case 877u: goto L_08AC37A0;
    case 878u: goto L_08AC37B4;
    case 879u: goto L_08AC37BC;
    case 880u: goto L_08AC37C4;
    case 881u: goto L_08AC37CC;
    case 882u: goto L_08AC37D4;
    case 883u: goto L_08AC37E0;
    case 884u: goto L_08AC37EC;
    case 885u: goto L_08AC37F8;
    case 886u: goto L_08AC3800;
    case 887u: goto L_08AC3808;
    case 888u: goto L_08AC3818;
    case 889u: goto L_08AC3828;
    case 890u: goto L_08AC3830;
    case 891u: goto L_08AC3834;
    case 892u: goto L_08AC383C;
    case 893u: goto L_08AC3848;
    case 894u: goto L_08AC3858;
    case 895u: goto L_08AC3860;
    case 896u: goto L_08AC3864;
    case 897u: goto L_08AC3870;
    case 898u: goto L_08AC387C;
    case 899u: goto L_08AC3888;
    case 900u: goto L_08AC3890;
    case 901u: goto L_08AC3898;
    case 902u: goto L_08AC38A0;
    case 903u: goto L_08AC38AC;
    case 904u: goto L_08AC38B8;
    case 905u: goto L_08AC38C0;
    case 906u: goto L_08AC38CC;
    case 907u: goto L_08AC38D8;
    case 908u: goto L_08AC38E4;
    case 909u: goto L_08AC38EC;
    case 910u: goto L_08AC38F0;
    case 911u: goto L_08AC38FC;
    case 912u: goto L_08AC390C;
    case 913u: goto L_08AC3914;
    case 914u: goto L_08AC3918;
    case 915u: goto L_08AC3920;
    case 916u: goto L_08AC3928;
    case 917u: goto L_08AC3930;
    case 918u: goto L_08AC393C;
    case 919u: goto L_08AC394C;
    case 920u: goto L_08AC3954;
    case 921u: goto L_08AC3958;
    case 922u: goto L_08AC3964;
    case 923u: goto L_08AC396C;
    case 924u: goto L_08AC3978;
    case 925u: goto L_08AC3980;
    case 926u: goto L_08AC3984;
    case 927u: goto L_08AC3990;
    case 928u: goto L_08AC399C;
    case 929u: goto L_08AC39A4;
    case 930u: goto L_08AC39AC;
    case 931u: goto L_08AC39B4;
    case 932u: goto L_08AC39C0;
    case 933u: goto L_08AC39D0;
    case 934u: goto L_08AC39D8;
    case 935u: goto L_08AC39DC;
    case 936u: goto L_08AC39E8;
    case 937u: goto L_08AC39F4;
    case 938u: goto L_08AC39FC;
    case 939u: goto L_08AC3A04;
    case 940u: goto L_08AC3A0C;
    case 941u: goto L_08AC3A18;
    case 942u: goto L_08AC3A20;
    case 943u: goto L_08AC3A28;
    case 944u: goto L_08AC3A30;
    case 945u: goto L_08AC3A3C;
    case 946u: goto L_08AC3A4C;
    case 947u: goto L_08AC3A54;
    case 948u: goto L_08AC3A58;
    case 949u: goto L_08AC3A64;
    case 950u: goto L_08AC3A70;
    case 951u: goto L_08AC3A78;
    case 952u: goto L_08AC3A80;
    case 953u: goto L_08AC3A88;
    case 954u: goto L_08AC3A94;
    case 955u: goto L_08AC3A9C;
    case 956u: goto L_08AC3AA0;
    case 957u: goto L_08AC3AB0;
    case 958u: goto L_08AC3AC0;
    case 959u: goto L_08AC3AC8;
    case 960u: goto L_08AC3AD0;
    case 961u: goto L_08AC3ADC;
    case 962u: goto L_08AC3AE4;
    case 963u: goto L_08AC3AE8;
    case 964u: goto L_08AC3AF4;
    case 965u: goto L_08AC3B00;
    case 966u: goto L_08AC3B10;
    case 967u: goto L_08AC3B18;
    case 968u: goto L_08AC3B1C;
    case 969u: goto L_08AC3B28;
    case 970u: goto L_08AC3B34;
    case 971u: goto L_08AC3B3C;
    case 972u: goto L_08AC3B44;
    case 973u: goto L_08AC3B4C;
    case 974u: goto L_08AC3B54;
    case 975u: goto L_08AC3B60;
    case 976u: goto L_08AC3B70;
    case 977u: goto L_08AC3B78;
    case 978u: goto L_08AC3B7C;
    case 979u: goto L_08AC3B88;
    case 980u: goto L_08AC3B94;
    case 981u: goto L_08AC3B9C;
    case 982u: goto L_08AC3BA4;
    case 983u: goto L_08AC3BAC;
    case 984u: goto L_08AC3BB8;
    case 985u: goto L_08AC3BC8;
    case 986u: goto L_08AC3BD0;
    case 987u: goto L_08AC3BD4;
    case 988u: goto L_08AC3BDC;
    case 989u: goto L_08AC3BE8;
    case 990u: goto L_08AC3BF4;
    case 991u: goto L_08AC3BFC;
    case 992u: goto L_08AC3C04;
    case 993u: goto L_08AC3C10;
    case 994u: goto L_08AC3C18;
    case 995u: goto L_08AC3C20;
    case 996u: goto L_08AC3C2C;
    case 997u: goto L_08AC3C34;
    case 998u: goto L_08AC3C3C;
    case 999u: goto L_08AC3C44;
    case 1000u: goto L_08AC3C50;
    case 1001u: goto L_08AC3C60;
    case 1002u: goto L_08AC3C68;
    case 1003u: goto L_08AC3C6C;
    case 1004u: goto L_08AC3C74;
    case 1005u: goto L_08AC3C94;
    case 1006u: goto L_08AC3CB8;
    case 1007u: goto L_08AC3CC4;
    case 1008u: goto L_08AC3CD0;
    case 1009u: goto L_08AC3CE4;
    case 1010u: goto L_08AC3CF0;
    case 1011u: goto L_08AC3CFC;
    case 1012u: goto L_08AC3D0C;
    case 1013u: goto L_08AC3D14;
    case 1014u: goto L_08AC3D18;
    case 1015u: goto L_08AC3D20;
    case 1016u: goto L_08AC3D2C;
    case 1017u: goto L_08AC3D38;
    case 1018u: goto L_08AC3D40;
    case 1019u: goto L_08AC3D48;
    case 1020u: goto L_08AC3D54;
    case 1021u: goto L_08AC3D60;
    case 1022u: goto L_08AC3D68;
    case 1023u: goto L_08AC3D7C;
    case 1024u: goto L_08AC3D88;
    case 1025u: goto L_08AC3D94;
    case 1026u: goto L_08AC3D9C;
    case 1027u: goto L_08AC3DA4;
    case 1028u: goto L_08AC3DCC;
    case 1029u: goto L_08AC3DD4;
    case 1030u: goto L_08AC3DD8;
    case 1031u: goto L_08AC3DE0;
    case 1032u: goto L_08AC3DEC;
    case 1033u: goto L_08AC3DF4;
    case 1034u: goto L_08AC3DF8;
    case 1035u: goto L_08AC3E00;
    case 1036u: goto L_08AC3E0C;
    case 1037u: goto L_08AC3E14;
    case 1038u: goto L_08AC3E18;
    case 1039u: goto L_08AC3E20;
    case 1040u: goto L_08AC3E2C;
    case 1041u: goto L_08AC3E34;
    case 1042u: goto L_08AC3E38;
    case 1043u: goto L_08AC3E40;
    case 1044u: goto L_08AC3E5C;
    case 1045u: goto L_08AC3E88;
    case 1046u: goto L_08AC3E98;
    case 1047u: goto L_08AC3EA0;
    case 1048u: goto L_08AC3EC0;
    case 1049u: goto L_08AC3ED4;
    case 1050u: goto L_08AC3EDC;
    case 1051u: goto L_08AC3EE4;
    case 1052u: goto L_08AC3EF4;
    case 1053u: goto L_08AC3F00;
    case 1054u: goto L_08AC3F08;
    case 1055u: goto L_08AC3F10;
    case 1056u: goto L_08AC3F18;
    case 1057u: goto L_08AC3F20;
    case 1058u: goto L_08AC3F28;
    case 1059u: goto L_08AC3F30;
    case 1060u: goto L_08AC3F38;
    case 1061u: goto L_08AC3F48;
    case 1062u: goto L_08AC3F50;
    case 1063u: goto L_08AC3F58;
    case 1064u: goto L_08AC3F60;
    case 1065u: goto L_08AC3F68;
    case 1066u: goto L_08AC3F70;
    case 1067u: goto L_08AC3F78;
    case 1068u: goto L_08AC3F80;
    case 1069u: goto L_08AC3F88;
    case 1070u: goto L_08AC3F90;
    case 1071u: goto L_08AC3F98;
    case 1072u: goto L_08AC3FA0;
    case 1073u: goto L_08AC3FA8;
    case 1074u: goto L_08AC3FB4;
    case 1075u: goto L_08AC3FBC;
    case 1076u: goto L_08AC3FCC;
    case 1077u: goto L_08AC3FD8;
    case 1078u: goto L_08AC3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AC0000:
    // nop
    goto L_08AC0004;
L_08AC0004:
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (0u | 67u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[10] = (0u | 99u);
        goto L_08AC0014;
    }
    goto L_08AC0014;
L_08AC0014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0074;
      }
      goto L_08AC001C;
    }
L_08AC001C:
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (0u | 84u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[10] = (0u | 116u);
        goto L_08AC002C;
    }
    goto L_08AC002C;
L_08AC002C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0074;
      }
      goto L_08AC0034;
    }
L_08AC0034:
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (0u | 77u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[10] = (0u | 109u);
        goto L_08AC0044;
    }
    goto L_08AC0044;
L_08AC0044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0074;
      }
      goto L_08AC004C;
    }
L_08AC004C:
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (0u | 88u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[10] = (0u | 120u);
        goto L_08AC005C;
    }
    goto L_08AC005C;
L_08AC005C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0074;
      }
      goto L_08AC0064;
    }
L_08AC0064:
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[10] = (0u | 35u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[10] = (0u | 42u);
        goto L_08AC0074;
    }
    goto L_08AC0074;
L_08AC0074:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1023));
    ctx.gpr[3] = (ctx.gpr[3] >> 10u);
    ctx.gpr[3] = (ctx.gpr[3] < static_cast<std::uint32_t>(0) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC00D8;
      }
      goto L_08AC0088;
    }
L_08AC0088:
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (0u | 124u);
        goto L_08AC0094;
    }
    goto L_08AC0094;
L_08AC0094:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AC00B4;
      }
      goto L_08AC00A8;
    }
L_08AC00A8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AC00B4;
L_08AC00B4:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[11] - ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1023));
    ctx.gpr[7] = (ctx.gpr[7] >> 10u);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0088;
      }
      goto L_08AC00D4;
    }
L_08AC00D4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08AC00D8;
L_08AC00D8:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 847u, 0x08ABFF78u>(ctx, &aot_mem); return;
      }
      goto L_08AC00E4;
    }
L_08AC00E4:
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(12508));
    ctx.gpr[31] = (0x08AC0110u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 176u, 0x08AB4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC0110u) goto L_08AC0110;
    return;
L_08AC0110:
    ctx.gpr[31] = (0x08AC0118u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1832));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 176u, 0x08AB4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC0118u) goto L_08AC0118;
    return;
L_08AC0118:
    ctx.gpr[31] = (0x08AC0120u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 176u, 0x08AB4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC0120u) goto L_08AC0120;
    return;
L_08AC0120:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC0130u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12584));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 176u, 0x08AB4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC0130u) goto L_08AC0130;
    return;
L_08AC0130:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC0140u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12604));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 176u, 0x08AB4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC0140u) goto L_08AC0140;
    return;
L_08AC0140:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC0150u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12624));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 176u, 0x08AB4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC0150u) goto L_08AC0150;
    return;
L_08AC0150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(12644));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08AC016Cu);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 176u, 0x08AB4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC016Cu) goto L_08AC016C;
    return;
L_08AC016C:
    ctx.gpr[21] = (2232u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(12664));
    goto L_08AC0180;
L_08AC0180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AC01CC;
      }
      goto L_08AC0190;
    }
L_08AC0190:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AC01B4;
      }
      goto L_08AC01A8;
    }
L_08AC01A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC01A8;
      }
      goto L_08AC01B4;
    }
L_08AC01B4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC01CC;
      }
      goto L_08AC01BC;
    }
L_08AC01BC:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC01CCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 176u, 0x08AB4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC01CCu) goto L_08AC01CC;
    return;
L_08AC01CC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC0180;
      }
      goto L_08AC01DC;
    }
L_08AC01DC:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1820));
    ctx.gpr[31] = (0x08AC01E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 176u, 0x08AB4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC01E8u) goto L_08AC01E8;
    return;
L_08AC01E8:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1804));
    ctx.gpr[31] = (0x08AC01F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 176u, 0x08AB4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC01F4u) goto L_08AC01F4;
    return;
L_08AC01F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4096)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(4128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC022Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 833u, 0x08ABFE80u>(ctx, &aot_mem) && ctx.pc == 0x08AC022Cu) goto L_08AC022C;
    return;
L_08AC022C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0238:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC0254u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 412u, 0x08ADD834u>(ctx, &aot_mem) && ctx.pc == 0x08AC0254u) goto L_08AC0254;
    return;
L_08AC0254:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[20] = (2237u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(136)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC02B4;
      }
      goto L_08AC02A0;
    }
L_08AC02A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC02C8;
      }
      goto L_08AC02AC;
    }
L_08AC02AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC02D0;
      }
      goto L_08AC02B4;
    }
L_08AC02B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC02C0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC02C0u) goto L_08AC02C0;
    return;
L_08AC02C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AC0388;
      }
      goto L_08AC02C8;
    }
L_08AC02C8:
    ctx.gpr[31] = (0x08AC02D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC02D0u) goto L_08AC02D0;
    return;
L_08AC02D0:
    ctx.gpr[31] = (0x08AC02D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 256u, 0x08A54FECu>(ctx, &aot_mem) && ctx.pc == 0x08AC02D8u) goto L_08AC02D8;
    return;
L_08AC02D8:
    ctx.gpr[18] = (ctx.gpr[2] & 255u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(277)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[19] << (ctx.gpr[4] & 31u));
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC032C;
      }
      goto L_08AC02F8;
    }
L_08AC02F8:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10292)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AC0318u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC0318u) goto L_08AC0318;
    return;
L_08AC0318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08AC032Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 412u, 0x08ADD834u>(ctx, &aot_mem) && ctx.pc == 0x08AC032Cu) goto L_08AC032C;
    return;
L_08AC032C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0378;
      }
      goto L_08AC033C;
    }
L_08AC033C:
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[4] & 31u));
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0364;
      }
      goto L_08AC034C;
    }
L_08AC034C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC033C;
      }
      goto L_08AC035C;
    }
L_08AC035C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0378;
      }
      goto L_08AC0364;
    }
L_08AC0364:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC0370u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC0370u) goto L_08AC0370;
    return;
L_08AC0370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AC0388;
      }
      goto L_08AC0378;
    }
L_08AC0378:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC0384u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC0384u) goto L_08AC0384;
    return;
L_08AC0384:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08AC0388;
L_08AC0388:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC03A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC03C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08AC03C4u) goto L_08AC03C4;
    return;
L_08AC03C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC03F8;
      }
      goto L_08AC03D0;
    }
L_08AC03D0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC03E4;
      }
      goto L_08AC03D8;
    }
L_08AC03D8:
    ctx.gpr[31] = (0x08AC03E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 406u, 0x08B65AB0u>(ctx, &aot_mem) && ctx.pc == 0x08AC03E0u) goto L_08AC03E0;
    return;
L_08AC03E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC03E4;
L_08AC03E4:
    ctx.gpr[31] = (0x08AC03ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AC03ECu) goto L_08AC03EC;
    return;
L_08AC03EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    goto L_08AC03F8;
L_08AC03F8:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08AC0410;
    }
    goto L_08AC0400;
L_08AC0400:
    ctx.gpr[31] = (0x08AC0408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 406u, 0x08B65AB0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0408u) goto L_08AC0408;
    return;
L_08AC0408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08AC0410;
L_08AC0410:
    ctx.gpr[31] = (0x08AC0418u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0418u) goto L_08AC0418;
    return;
L_08AC0418:
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
L_08AC0430:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC044Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08AC044Cu) goto L_08AC044C;
    return;
L_08AC044C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC0480;
      }
      goto L_08AC0458;
    }
L_08AC0458:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC046C;
      }
      goto L_08AC0460;
    }
L_08AC0460:
    ctx.gpr[31] = (0x08AC0468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 406u, 0x08B65AB0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0468u) goto L_08AC0468;
    return;
L_08AC0468:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC046C;
L_08AC046C:
    ctx.gpr[31] = (0x08AC0474u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AC0474u) goto L_08AC0474;
    return;
L_08AC0474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    goto L_08AC0480;
L_08AC0480:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08AC0498;
    }
    goto L_08AC0488;
L_08AC0488:
    ctx.gpr[31] = (0x08AC0490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 406u, 0x08B65AB0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0490u) goto L_08AC0490;
    return;
L_08AC0490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08AC0498;
L_08AC0498:
    ctx.gpr[31] = (0x08AC04A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC04A0u) goto L_08AC04A0;
    return;
L_08AC04A0:
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
L_08AC04B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC04D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08AC04D4u) goto L_08AC04D4;
    return;
L_08AC04D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC0508;
      }
      goto L_08AC04E0;
    }
L_08AC04E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC04F4;
      }
      goto L_08AC04E8;
    }
L_08AC04E8:
    ctx.gpr[31] = (0x08AC04F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 406u, 0x08B65AB0u>(ctx, &aot_mem) && ctx.pc == 0x08AC04F0u) goto L_08AC04F0;
    return;
L_08AC04F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC04F4;
L_08AC04F4:
    ctx.gpr[31] = (0x08AC04FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AC04FCu) goto L_08AC04FC;
    return;
L_08AC04FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    goto L_08AC0508;
L_08AC0508:
    if (ctx.gpr[4] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08AC0520;
    }
    goto L_08AC0510;
L_08AC0510:
    ctx.gpr[31] = (0x08AC0518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 406u, 0x08B65AB0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0518u) goto L_08AC0518;
    return;
L_08AC0518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08AC0520;
L_08AC0520:
    ctx.gpr[31] = (0x08AC0528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0528u) goto L_08AC0528;
    return;
L_08AC0528:
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
L_08AC0540:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC0560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08AC0560u) goto L_08AC0560;
    return;
L_08AC0560:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08AC0588;
      }
      goto L_08AC0570;
    }
L_08AC0570:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC057Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem) && ctx.pc == 0x08AC057Cu) goto L_08AC057C;
    return;
L_08AC057C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    goto L_08AC0588;
L_08AC0588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC059Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC059Cu) goto L_08AC059C;
    return;
L_08AC059C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08AC05B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC05DC;
      }
      goto L_08AC05D4;
    }
L_08AC05D4:
    ctx.gpr[31] = (0x08AC05DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC05DCu) goto L_08AC05DC;
    return;
L_08AC05DC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC05F0;
      }
      goto L_08AC05E8;
    }
L_08AC05E8:
    ctx.gpr[31] = (0x08AC05F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC05F0u) goto L_08AC05F0;
    return;
L_08AC05F0:
    ctx.gpr[31] = (0x08AC05F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 247u, 0x08A54F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC05F8u) goto L_08AC05F8;
    return;
L_08AC05F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AC0608u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 180u, 0x08A54B14u>(ctx, &aot_mem) && ctx.pc == 0x08AC0608u) goto L_08AC0608;
    return;
L_08AC0608:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AC0614u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08AC0614u) goto L_08AC0614;
    return;
L_08AC0614:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AC0630;
      }
      goto L_08AC0624;
    }
L_08AC0624:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    ctx.gpr[31] = (0x08AC0630u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0630u) goto L_08AC0630;
    return;
L_08AC0630:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0648:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC0664u);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_08AC0664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC067C;
    }
    goto L_08AC0670;
L_08AC0670:
    ctx.gpr[31] = (0x08AC0678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0678u) goto L_08AC0678;
    return;
L_08AC0678:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC067C;
L_08AC067C:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC0690;
    }
    goto L_08AC0684;
L_08AC0684:
    ctx.gpr[31] = (0x08AC068Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC068Cu) goto L_08AC068C;
    return;
L_08AC068C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC0690;
L_08AC0690:
    ctx.gpr[31] = (0x08AC0698u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 80u, 0x08A545ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC0698u) goto L_08AC0698;
    return;
L_08AC0698:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AC06A8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 180u, 0x08A54B14u>(ctx, &aot_mem) && ctx.pc == 0x08AC06A8u) goto L_08AC06A8;
    return;
L_08AC06A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AC06B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08AC06B4u) goto L_08AC06B4;
    return;
L_08AC06B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AC06D0;
      }
      goto L_08AC06C4;
    }
L_08AC06C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    ctx.gpr[31] = (0x08AC06D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08AC06D0u) goto L_08AC06D0;
    return;
L_08AC06D0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC06E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC0700u);
    // nop
    ctx.pc = 0x08B73224u;
    return;
L_08AC0700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC0718;
    }
    goto L_08AC070C;
L_08AC070C:
    ctx.gpr[31] = (0x08AC0714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0714u) goto L_08AC0714;
    return;
L_08AC0714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC0718;
L_08AC0718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08AC0730u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC0730u) goto L_08AC0730;
    return;
L_08AC0730:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC0764;
      }
      goto L_08AC075C;
    }
L_08AC075C:
    ctx.gpr[31] = (0x08AC0764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0764u) goto L_08AC0764;
    return;
L_08AC0764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AC0774u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC0774u) goto L_08AC0774;
    return;
L_08AC0774:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0788:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08AC07B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC07B4u) goto L_08AC07B4;
    return;
L_08AC07B4:
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08AC07EC;
      }
      goto L_08AC07C0;
    }
L_08AC07C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC07CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC07CCu) goto L_08AC07CC;
    return;
L_08AC07CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC07E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 392u, 0x08ADD720u>(ctx, &aot_mem) && ctx.pc == 0x08AC07E4u) goto L_08AC07E4;
    return;
L_08AC07E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC0808;
      }
      goto L_08AC07EC;
    }
L_08AC07EC:
    ctx.gpr[31] = (0x08AC07F4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 395u, 0x08ADD768u>(ctx, &aot_mem) && ctx.pc == 0x08AC07F4u) goto L_08AC07F4;
    return;
L_08AC07F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC0804u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0804u) goto L_08AC0804;
    return;
L_08AC0804:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AC0808;
L_08AC0808:
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
L_08AC0820:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08AC083Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 382u, 0x08ADD6B4u>(ctx, &aot_mem) && ctx.pc == 0x08AC083Cu) goto L_08AC083C;
    return;
L_08AC083C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC0848u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC0848u) goto L_08AC0848;
    return;
L_08AC0848:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC085C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08AC0874u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0874u) goto L_08AC0874;
    return;
L_08AC0874:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08AC08B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 376u, 0x08ADD684u>(ctx, &aot_mem) && ctx.pc == 0x08AC08B4u) goto L_08AC08B4;
    return;
L_08AC08B4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AC08CC;
      }
      goto L_08AC08C0;
    }
L_08AC08C0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AC08CC;
L_08AC08CC:
    ctx.gpr[31] = (0x08AC08D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC08D4u) goto L_08AC08D4;
    return;
L_08AC08D4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC08E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08AC0904u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 377u, 0x08ADD68Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0904u) goto L_08AC0904;
    return;
L_08AC0904:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AC091C;
      }
      goto L_08AC0910;
    }
L_08AC0910:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AC091C;
L_08AC091C:
    ctx.gpr[31] = (0x08AC0924u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0924u) goto L_08AC0924;
    return;
L_08AC0924:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08AC0960u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC0960u) goto L_08AC0960;
    return;
L_08AC0960:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (2237u << 16u);
      if (branch_taken) {
          goto L_08AC0988;
      }
      goto L_08AC097C;
    }
L_08AC097C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AC099C;
      }
      goto L_08AC0988;
    }
L_08AC0988:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08AC099C;
L_08AC099C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AC09B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC09B4u) goto L_08AC09B4;
    return;
L_08AC09B4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
        goto L_08AC09D4;
    }
    goto L_08AC09C8;
L_08AC09C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AC09E4;
      }
      goto L_08AC09D4;
    }
L_08AC09D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08AC09E4;
L_08AC09E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC09F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 378u, 0x08ADD694u>(ctx, &aot_mem) && ctx.pc == 0x08AC09F0u) goto L_08AC09F0;
    return;
L_08AC09F0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08AC09FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 379u, 0x08ADD69Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC09FCu) goto L_08AC09FC;
    return;
L_08AC09FC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
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
L_08AC0A1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08AC0A38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 377u, 0x08ADD68Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0A38u) goto L_08AC0A38;
    return;
L_08AC0A38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AC0A50;
      }
      goto L_08AC0A44;
    }
L_08AC0A44:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AC0A50;
L_08AC0A50:
    ctx.gpr[31] = (0x08AC0A58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0A58u) goto L_08AC0A58;
    return;
L_08AC0A58:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08AC0A90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0A90u) goto L_08AC0A90;
    return;
L_08AC0A90:
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08AC0AF4;
      }
      goto L_08AC0A9C;
    }
L_08AC0A9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC0AA8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC0AA8u) goto L_08AC0AA8;
    return;
L_08AC0AA8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08AC0AD0;
    }
    goto L_08AC0AC4;
L_08AC0AC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AC0AE0;
      }
      goto L_08AC0AD0;
    }
L_08AC0AD0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08AC0AE0;
L_08AC0AE0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC0AECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 136u, 0x08ADC72Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0AECu) goto L_08AC0AEC;
    return;
L_08AC0AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC0B20;
      }
      goto L_08AC0AF4;
    }
L_08AC0AF4:
    ctx.gpr[31] = (0x08AC0AFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08AC0AFCu) goto L_08AC0AFC;
    return;
L_08AC0AFC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AC0B14;
      }
      goto L_08AC0B08;
    }
L_08AC0B08:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AC0B14;
L_08AC0B14:
    ctx.gpr[31] = (0x08AC0B1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0B1Cu) goto L_08AC0B1C;
    return;
L_08AC0B1C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AC0B20;
L_08AC0B20:
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
L_08AC0B38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08AC0B5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0B5Cu) goto L_08AC0B5C;
    return;
L_08AC0B5C:
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08AC0BC0;
      }
      goto L_08AC0B68;
    }
L_08AC0B68:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC0B74u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC0B74u) goto L_08AC0B74;
    return;
L_08AC0B74:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08AC0B9C;
    }
    goto L_08AC0B90;
L_08AC0B90:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AC0BAC;
      }
      goto L_08AC0B9C;
    }
L_08AC0B9C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08AC0BAC;
L_08AC0BAC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC0BB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 138u, 0x08ADC73Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0BB8u) goto L_08AC0BB8;
    return;
L_08AC0BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC0BEC;
      }
      goto L_08AC0BC0;
    }
L_08AC0BC0:
    ctx.gpr[31] = (0x08AC0BC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 141u, 0x08ADC754u>(ctx, &aot_mem) && ctx.pc == 0x08AC0BC8u) goto L_08AC0BC8;
    return;
L_08AC0BC8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AC0BE0;
      }
      goto L_08AC0BD4;
    }
L_08AC0BD4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AC0BE0;
L_08AC0BE0:
    ctx.gpr[31] = (0x08AC0BE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0BE8u) goto L_08AC0BE8;
    return;
L_08AC0BE8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AC0BEC;
L_08AC0BEC:
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
L_08AC0C04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[31] = (0x08AC0C2Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0C2Cu) goto L_08AC0C2C;
    return;
L_08AC0C2C:
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_08AC0CCC;
      }
      goto L_08AC0C3C;
    }
L_08AC0C3C:
    ctx.gpr[31] = (0x08AC0C44u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08AC0C44u) goto L_08AC0C44;
    return;
L_08AC0C44:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AC0C70;
      }
      goto L_08AC0C4C;
    }
L_08AC0C4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC0C58u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC0C58u) goto L_08AC0C58;
    return;
L_08AC0C58:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AC0C68u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 146u, 0x08ADC77Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0C68u) goto L_08AC0C68;
    return;
L_08AC0C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0CC4;
      }
      goto L_08AC0C70;
    }
L_08AC0C70:
    ctx.gpr[31] = (0x08AC0C78u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08AC0C78u) goto L_08AC0C78;
    return;
L_08AC0C78:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC0CA8;
      }
      goto L_08AC0C84;
    }
L_08AC0C84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC0C90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC0C90u) goto L_08AC0C90;
    return;
L_08AC0C90:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AC0CA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 148u, 0x08ADC78Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0CA0u) goto L_08AC0CA0;
    return;
L_08AC0CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0CC4;
      }
      goto L_08AC0CA8;
    }
L_08AC0CA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC0CB4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC0CB4u) goto L_08AC0CB4;
    return;
L_08AC0CB4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AC0CC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 142u, 0x08ADC75Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0CC4u) goto L_08AC0CC4;
    return;
L_08AC0CC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC0D4C;
      }
      goto L_08AC0CCC;
    }
L_08AC0CCC:
    ctx.gpr[31] = (0x08AC0CD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08AC0CD4u) goto L_08AC0CD4;
    return;
L_08AC0CD4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AC0CFC;
      }
      goto L_08AC0CDC;
    }
L_08AC0CDC:
    ctx.gpr[31] = (0x08AC0CE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem) && ctx.pc == 0x08AC0CE4u) goto L_08AC0CE4;
    return;
L_08AC0CE4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC0CF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0CF4u) goto L_08AC0CF4;
    return;
L_08AC0CF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0D48;
      }
      goto L_08AC0CFC;
    }
L_08AC0CFC:
    ctx.gpr[31] = (0x08AC0D04u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08AC0D04u) goto L_08AC0D04;
    return;
L_08AC0D04:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC0D30;
      }
      goto L_08AC0D10;
    }
L_08AC0D10:
    ctx.gpr[31] = (0x08AC0D18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 149u, 0x08ADC794u>(ctx, &aot_mem) && ctx.pc == 0x08AC0D18u) goto L_08AC0D18;
    return;
L_08AC0D18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC0D28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0D28u) goto L_08AC0D28;
    return;
L_08AC0D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC0D48;
      }
      goto L_08AC0D30;
    }
L_08AC0D30:
    ctx.gpr[31] = (0x08AC0D38u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 143u, 0x08ADC764u>(ctx, &aot_mem) && ctx.pc == 0x08AC0D38u) goto L_08AC0D38;
    return;
L_08AC0D38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC0D48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0D48u) goto L_08AC0D48;
    return;
L_08AC0D48:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08AC0D4C;
L_08AC0D4C:
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
L_08AC0D68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08AC0D8Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0D8Cu) goto L_08AC0D8C;
    return;
L_08AC0D8C:
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08AC0DBC;
      }
      goto L_08AC0D98;
    }
L_08AC0D98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC0DA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC0DA4u) goto L_08AC0DA4;
    return;
L_08AC0DA4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AC0DB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 144u, 0x08ADC76Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0DB4u) goto L_08AC0DB4;
    return;
L_08AC0DB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC0DD8;
      }
      goto L_08AC0DBC;
    }
L_08AC0DBC:
    ctx.gpr[31] = (0x08AC0DC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem) && ctx.pc == 0x08AC0DC4u) goto L_08AC0DC4;
    return;
L_08AC0DC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC0DD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0DD4u) goto L_08AC0DD4;
    return;
L_08AC0DD4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AC0DD8;
L_08AC0DD8:
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
L_08AC0DF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08AC0E14u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC0E14u) goto L_08AC0E14;
    return;
L_08AC0E14:
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08AC0E78;
      }
      goto L_08AC0E20;
    }
L_08AC0E20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC0E2Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC0E2Cu) goto L_08AC0E2C;
    return;
L_08AC0E2C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08AC0E54;
    }
    goto L_08AC0E48;
L_08AC0E48:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AC0E64;
      }
      goto L_08AC0E54;
    }
L_08AC0E54:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08AC0E64;
L_08AC0E64:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC0E70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 380u, 0x08ADD6A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC0E70u) goto L_08AC0E70;
    return;
L_08AC0E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC0EA4;
      }
      goto L_08AC0E78;
    }
L_08AC0E78:
    ctx.gpr[31] = (0x08AC0E80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 381u, 0x08ADD6ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC0E80u) goto L_08AC0E80;
    return;
L_08AC0E80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AC0E98;
      }
      goto L_08AC0E8C;
    }
L_08AC0E8C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AC0E98;
L_08AC0E98:
    ctx.gpr[31] = (0x08AC0EA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0EA0u) goto L_08AC0EA0;
    return;
L_08AC0EA0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AC0EA4;
L_08AC0EA4:
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
L_08AC0EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08AC0EE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08AC0EE0u) goto L_08AC0EE0;
    return;
L_08AC0EE0:
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08AC0F20;
      }
      goto L_08AC0EEC;
    }
L_08AC0EEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC0EF8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC0EF8u) goto L_08AC0EF8;
    return;
L_08AC0EF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08AC0F0C;
      }
      goto L_08AC0F00;
    }
L_08AC0F00:
    ctx.gpr[4] = (ctx.gpr[16] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC0F18;
      }
      goto L_08AC0F0C;
    }
L_08AC0F0C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[16] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08AC0F18;
L_08AC0F18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC0F3C;
      }
      goto L_08AC0F20;
    }
L_08AC0F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08AC0F38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC0F38u) goto L_08AC0F38;
    return;
L_08AC0F38:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AC0F3C;
L_08AC0F3C:
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
L_08AC0F54:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0F6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08AC0F88u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC0F88u) goto L_08AC0F88;
    return;
L_08AC0F88:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0F98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[31] = (0x08AC0FBCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC0FBCu) goto L_08AC0FBC;
    return;
L_08AC0FBC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC0FCC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[31] = (0x08AC0FF0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC0FF0u) goto L_08AC0FF0;
    return;
L_08AC0FF0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08AC1024u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1024u) goto L_08AC1024;
    return;
L_08AC1024:
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08AC1050;
      }
      goto L_08AC1030;
    }
L_08AC1030:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC103Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC103Cu) goto L_08AC103C;
    return;
L_08AC103C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC1068;
      }
      goto L_08AC1050;
    }
L_08AC1050:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC1064u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1064u) goto L_08AC1064;
    return;
L_08AC1064:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AC1068;
L_08AC1068:
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
L_08AC1080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08AC10B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08AC10B0u) goto L_08AC10B0;
    return;
L_08AC10B0:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08AC10D8;
      }
      goto L_08AC10BC;
    }
L_08AC10BC:
    ctx.gpr[31] = (0x08AC10C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem) && ctx.pc == 0x08AC10C4u) goto L_08AC10C4;
    return;
L_08AC10C4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08AC10D8;
      }
      goto L_08AC10D0;
    }
L_08AC10D0:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    goto L_08AC10D8;
L_08AC10D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC10F8;
      }
      goto L_08AC10E0;
    }
L_08AC10E0:
    ctx.gpr[4] = (17257u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC10F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC10F0u) goto L_08AC10F0;
    return;
L_08AC10F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC110C;
      }
      goto L_08AC10F8;
    }
L_08AC10F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(54)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC110Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC110Cu) goto L_08AC110C;
    return;
L_08AC110C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AC112C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08AC115Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08AC115Cu) goto L_08AC115C;
    return;
L_08AC115C:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08AC1180;
      }
      goto L_08AC1168;
    }
L_08AC1168:
    ctx.gpr[31] = (0x08AC1170u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem) && ctx.pc == 0x08AC1170u) goto L_08AC1170;
    return;
L_08AC1170:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08AC1180;
      }
      goto L_08AC1178;
    }
L_08AC1178:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    goto L_08AC1180;
L_08AC1180:
    ctx.gpr[31] = (0x08AC1188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC1188u) goto L_08AC1188;
    return;
L_08AC1188:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AC11A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08AC11D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem) && ctx.pc == 0x08AC11D8u) goto L_08AC11D8;
    return;
L_08AC11D8:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08AC1200;
      }
      goto L_08AC11E4;
    }
L_08AC11E4:
    ctx.gpr[31] = (0x08AC11ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 147u, 0x08ADC784u>(ctx, &aot_mem) && ctx.pc == 0x08AC11ECu) goto L_08AC11EC;
    return;
L_08AC11EC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_08AC1200;
      }
      goto L_08AC11F8;
    }
L_08AC11F8:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] & 255u);
    goto L_08AC1200;
L_08AC1200:
    ctx.gpr[31] = (0x08AC1208u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC1208u) goto L_08AC1208;
    return;
L_08AC1208:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AC1228:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[31] = (0x08AC123Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC123Cu) goto L_08AC123C;
    return;
L_08AC123C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC124C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC126Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC126Cu) goto L_08AC126C;
    return;
L_08AC126C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC127C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (17289u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[31] = (0x08AC1294u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1294u) goto L_08AC1294;
    return;
L_08AC1294:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC12A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08AC12C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 135u, 0x08ADC724u>(ctx, &aot_mem) && ctx.pc == 0x08AC12C0u) goto L_08AC12C0;
    return;
L_08AC12C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC12CCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC12CCu) goto L_08AC12CC;
    return;
L_08AC12CC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC12E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1310u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC1310u) goto L_08AC1310;
    return;
L_08AC1310:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x08AC1324u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 154u, 0x08ADC7BCu>(ctx, &aot_mem) && ctx.pc == 0x08AC1324u) goto L_08AC1324;
    return;
L_08AC1324:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AC1358;
      }
      goto L_08AC134C;
    }
L_08AC134C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AC1358;
L_08AC1358:
    ctx.gpr[31] = (0x08AC1360u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1360u) goto L_08AC1360;
    return;
L_08AC1360:
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
L_08AC137C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC13ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC13ACu) goto L_08AC13AC;
    return;
L_08AC13AC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[31] = (0x08AC13C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 72u, 0x08ADC3C4u>(ctx, &aot_mem) && ctx.pc == 0x08AC13C0u) goto L_08AC13C0;
    return;
L_08AC13C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC13CCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08AC13CCu) goto L_08AC13CC;
    return;
L_08AC13CC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08AC13E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC1414u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1414u) goto L_08AC1414;
    return;
L_08AC1414:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1444;
      }
      goto L_08AC143C;
    }
L_08AC143C:
    ctx.gpr[31] = (0x08AC1444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1444u) goto L_08AC1444;
    return;
L_08AC1444:
    ctx.gpr[31] = (0x08AC144Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 64u, 0x08A544B4u>(ctx, &aot_mem) && ctx.pc == 0x08AC144Cu) goto L_08AC144C;
    return;
L_08AC144C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC145C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08AC1498u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1498u) goto L_08AC1498;
    return;
L_08AC1498:
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08AC14CC;
      }
      goto L_08AC14A4;
    }
L_08AC14A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC14B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC14B0u) goto L_08AC14B0;
    return;
L_08AC14B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08AC14C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 400u, 0x08ADD798u>(ctx, &aot_mem) && ctx.pc == 0x08AC14C4u) goto L_08AC14C4;
    return;
L_08AC14C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC14E8;
      }
      goto L_08AC14CC;
    }
L_08AC14CC:
    ctx.gpr[31] = (0x08AC14D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 401u, 0x08ADD7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC14D4u) goto L_08AC14D4;
    return;
L_08AC14D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC14E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC14E4u) goto L_08AC14E4;
    return;
L_08AC14E4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AC14E8;
L_08AC14E8:
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
L_08AC1500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[31] = (0x08AC1524u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08AC1524u) goto L_08AC1524;
    return;
L_08AC1524:
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08AC1550;
      }
      goto L_08AC1530;
    }
L_08AC1530:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC153Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC153Cu) goto L_08AC153C;
    return;
L_08AC153C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC1560;
      }
      goto L_08AC1550;
    }
L_08AC1550:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AC155Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC155Cu) goto L_08AC155C;
    return;
L_08AC155C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AC1560;
L_08AC1560:
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
L_08AC1578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC15BC;
      }
      goto L_08AC15A0;
    }
L_08AC15A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AC15C0;
      }
      goto L_08AC15B8;
    }
L_08AC15B8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AC15BC;
L_08AC15BC:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08AC15C0;
L_08AC15C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1638;
      }
      goto L_08AC15C8;
    }
L_08AC15C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC15D4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC15D4u) goto L_08AC15D4;
    return;
L_08AC15D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AC1640;
      }
      goto L_08AC1614;
    }
L_08AC1614:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1620u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC1620u) goto L_08AC1620;
    return;
L_08AC1620:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC1630u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1630u) goto L_08AC1630;
    return;
L_08AC1630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08AC1644;
      }
      goto L_08AC1638;
    }
L_08AC1638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC1644;
      }
      goto L_08AC1640;
    }
L_08AC1640:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AC1644;
L_08AC1644:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC1698;
      }
      goto L_08AC167C;
    }
L_08AC167C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 0 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] ^ 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AC169C;
      }
      goto L_08AC1694;
    }
L_08AC1694:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AC1698;
L_08AC1698:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AC169C;
L_08AC169C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC16AC;
      }
      goto L_08AC16A4;
    }
L_08AC16A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC172C;
      }
      goto L_08AC16AC;
    }
L_08AC16AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC16C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC16C4u) goto L_08AC16C4;
    return;
L_08AC16C4:
    ctx.gpr[4] = (15733u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(10))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC1714u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1714u) goto L_08AC1714;
    return;
L_08AC1714:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5496));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1728u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1728u) goto L_08AC1728;
    return;
L_08AC1728:
    ctx.gpr[2] = (0u | 2u);
    goto L_08AC172C;
L_08AC172C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC173C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC1754u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08AC1754u) goto L_08AC1754;
    return;
L_08AC1754:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC1768;
      }
      goto L_08AC1760;
    }
L_08AC1760:
    ctx.gpr[31] = (0x08AC1768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC1658;
L_08AC1768:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1774u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 607u, 0x08872848u>(ctx, &aot_mem) && ctx.pc == 0x08AC1774u) goto L_08AC1774;
    return;
L_08AC1774:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1784:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AC17B4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC17B4u) goto L_08AC17B4;
    return;
L_08AC17B4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC17C4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08AC17C4u) goto L_08AC17C4;
    return;
L_08AC17C4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AC17DC;
      }
      goto L_08AC17CC;
    }
L_08AC17CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC17D8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC17D8u) goto L_08AC17D8;
    return;
L_08AC17D8:
    ctx.gpr[17] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08AC17DC;
L_08AC17DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AC17F0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem) && ctx.pc == 0x08AC17F0u) goto L_08AC17F0;
    return;
L_08AC17F0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC181C;
      }
      goto L_08AC1800;
    }
L_08AC1800:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1810;
      }
      goto L_08AC1808;
    }
L_08AC1808:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AC181C;
      }
      goto L_08AC1810;
    }
L_08AC1810:
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08AC181C;
L_08AC181C:
    ctx.gpr[31] = (0x08AC1824u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1824u) goto L_08AC1824;
    return;
L_08AC1824:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08AC1840:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC1870;
      }
      goto L_08AC1860;
    }
L_08AC1860:
    ctx.gpr[31] = (0x08AC1868u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC1868u) goto L_08AC1868;
    return;
L_08AC1868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1878;
      }
      goto L_08AC1870;
    }
L_08AC1870:
    ctx.gpr[31] = (0x08AC1878u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC1878u) goto L_08AC1878;
    return;
L_08AC1878:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC188C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC189Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC189Cu) goto L_08AC189C;
    return;
L_08AC189C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4203), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC18B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC18CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC18CCu) goto L_08AC18CC;
    return;
L_08AC18CC:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4203), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC18E0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC18E0u) goto L_08AC18E0;
    return;
L_08AC18E0:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4204), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC18FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC190Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC190Cu) goto L_08AC190C;
    return;
L_08AC190C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4204), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC1934u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1934u) goto L_08AC1934;
    return;
L_08AC1934:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4206), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC194C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC195Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC195Cu) goto L_08AC195C;
    return;
L_08AC195C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4205), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1978:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC1988u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1988u) goto L_08AC1988;
    return;
L_08AC1988:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4208), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC19A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC19C0;
      }
      goto L_08AC19B8;
    }
L_08AC19B8:
    ctx.gpr[31] = (0x08AC19C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC19C0u) goto L_08AC19C0;
    return;
L_08AC19C0:
    ctx.gpr[31] = (0x08AC19C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 256u, 0x08A54FECu>(ctx, &aot_mem) && ctx.pc == 0x08AC19C8u) goto L_08AC19C8;
    return;
L_08AC19C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC19D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC19D8u) goto L_08AC19D8;
    return;
L_08AC19D8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC19EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08AC1A0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC1A0Cu) goto L_08AC1A0C;
    return;
L_08AC1A0C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08AC1A24u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 402u, 0x08ADD7A8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1A24u) goto L_08AC1A24;
    return;
L_08AC1A24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1A30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC1A30u) goto L_08AC1A30;
    return;
L_08AC1A30:
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
L_08AC1A48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC1A58u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1A58u) goto L_08AC1A58;
    return;
L_08AC1A58:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4209), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1A70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC1A90;
      }
      goto L_08AC1A88;
    }
L_08AC1A88:
    ctx.gpr[31] = (0x08AC1A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1A90u) goto L_08AC1A90;
    return;
L_08AC1A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC1AB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1AB0u) goto L_08AC1AB0;
    return;
L_08AC1AB0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1AC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC1AE4;
      }
      goto L_08AC1ADC;
    }
L_08AC1ADC:
    ctx.gpr[31] = (0x08AC1AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1AE4u) goto L_08AC1AE4;
    return;
L_08AC1AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC1B04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1B04u) goto L_08AC1B04;
    return;
L_08AC1B04:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1B18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AC1B38;
      }
      goto L_08AC1B30;
    }
L_08AC1B30:
    ctx.gpr[31] = (0x08AC1B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1B38u) goto L_08AC1B38;
    return;
L_08AC1B38:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC1B48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1B48u) goto L_08AC1B48;
    return;
L_08AC1B48:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08AC1B74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 371u, 0x08A89ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC1B74u) goto L_08AC1B74;
    return;
L_08AC1B74:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1B84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC1BA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC1BA0u) goto L_08AC1BA0;
    return;
L_08AC1BA0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1BB4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC1BB4u) goto L_08AC1BB4;
    return;
L_08AC1BB4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9943)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1BFCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 737u, 0x08A36D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC1BFCu) goto L_08AC1BFC;
    return;
L_08AC1BFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1C0Cu);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC1C0Cu) goto L_08AC1C0C;
    return;
L_08AC1C0C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1C24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[22] = (2237u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1C68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC1C68u) goto L_08AC1C68;
    return;
L_08AC1C68:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1120));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08AC1C90;
L_08AC1C90:
    if (ctx.gpr[21] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
        goto L_08AC1CA8;
    }
    goto L_08AC1C98;
L_08AC1C98:
    ctx.gpr[31] = (0x08AC1CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1CA0u) goto L_08AC1CA0;
    return;
L_08AC1CA0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_08AC1CA8;
L_08AC1CA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1D74;
      }
      goto L_08AC1CD0;
    }
L_08AC1CD0:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[5] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_08AC1CE8;
      }
      goto L_08AC1CD8;
    }
L_08AC1CD8:
    ctx.gpr[31] = (0x08AC1CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1CE0u) goto L_08AC1CE0;
    return;
L_08AC1CE0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[5] = (ctx.gpr[20] & 255u);
    goto L_08AC1CE8;
L_08AC1CE8:
    ctx.gpr[31] = (0x08AC1CF0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem) && ctx.pc == 0x08AC1CF0u) goto L_08AC1CF0;
    return;
L_08AC1CF0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC1D30;
      }
      goto L_08AC1D08;
    }
L_08AC1D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1D20;
      }
      goto L_08AC1D14;
    }
L_08AC1D14:
    ctx.gpr[31] = (0x08AC1D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC1D1Cu) goto L_08AC1D1C;
    return;
L_08AC1D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08AC1D20;
L_08AC1D20:
    ctx.gpr[31] = (0x08AC1D28u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem) && ctx.pc == 0x08AC1D28u) goto L_08AC1D28;
    return;
L_08AC1D28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1D68;
      }
      goto L_08AC1D30;
    }
L_08AC1D30:
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[21] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_08AC1D54;
    }
    goto L_08AC1D40;
L_08AC1D40:
    ctx.gpr[31] = (0x08AC1D48u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1D48u) goto L_08AC1D48;
    return;
L_08AC1D48:
    ctx.gpr[31] = (0x08AC1D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1D50u) goto L_08AC1D50;
    return;
L_08AC1D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_08AC1D54;
L_08AC1D54:
    ctx.gpr[5] = (ctx.gpr[21] & 31u);
    ctx.gpr[5] = (ctx.gpr[17] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (~(ctx.gpr[5] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AC1D68;
L_08AC1D68:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
      if (branch_taken) {
          goto L_08AC1C90;
      }
      goto L_08AC1D74;
    }
L_08AC1D74:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9943)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC1DB0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 737u, 0x08A36D90u>(ctx, &aot_mem) && ctx.pc == 0x08AC1DB0u) goto L_08AC1DB0;
    return;
L_08AC1DB0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC1DC0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC1DC0u) goto L_08AC1DC0;
    return;
L_08AC1DC0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08AC1DD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x08AC1DD0u) goto L_08AC1DD0;
    return;
L_08AC1DD0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1E00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1E24;
      }
      goto L_08AC1E14;
    }
L_08AC1E14:
    ctx.gpr[31] = (0x08AC1E1Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1112));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08AC1E1Cu) goto L_08AC1E1C;
    return;
L_08AC1E1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1E30;
      }
      goto L_08AC1E24;
    }
L_08AC1E24:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[31] = (0x08AC1E30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13936));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08AC1E30u) goto L_08AC1E30;
    return;
L_08AC1E30:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1E40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC1E5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1E5Cu) goto L_08AC1E5C;
    return;
L_08AC1E5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1EC8;
      }
      goto L_08AC1E64;
    }
L_08AC1E64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1E70u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1E70u) goto L_08AC1E70;
    return;
L_08AC1E70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1EC0;
      }
      goto L_08AC1E78;
    }
L_08AC1E78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1E84u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC1E84u) goto L_08AC1E84;
    return;
L_08AC1E84:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1EA4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC1EA4u) goto L_08AC1EA4;
    return;
L_08AC1EA4:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1ED0;
      }
      goto L_08AC1EB8;
    }
L_08AC1EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
      if (branch_taken) {
          goto L_08AC1EDC;
      }
      goto L_08AC1EC0;
    }
L_08AC1EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC1EEC;
      }
      goto L_08AC1EC8;
    }
L_08AC1EC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC1EEC;
      }
      goto L_08AC1ED0;
    }
L_08AC1ED0:
    ctx.gpr[31] = (0x08AC1ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1ED8u) goto L_08AC1ED8;
    return;
L_08AC1ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08AC1EDC;
L_08AC1EDC:
    ctx.gpr[31] = (0x08AC1EE4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x08AC1EE4u) goto L_08AC1EE4;
    return;
L_08AC1EE4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[2] = (0u | 0u);
    goto L_08AC1EEC;
L_08AC1EEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC1F1Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1F1Cu) goto L_08AC1F1C;
    return;
L_08AC1F1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1F88;
      }
      goto L_08AC1F24;
    }
L_08AC1F24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1F30u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1F30u) goto L_08AC1F30;
    return;
L_08AC1F30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1F80;
      }
      goto L_08AC1F38;
    }
L_08AC1F38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1F44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC1F44u) goto L_08AC1F44;
    return;
L_08AC1F44:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC1F64u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC1F64u) goto L_08AC1F64;
    return;
L_08AC1F64:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC1F90;
      }
      goto L_08AC1F78;
    }
L_08AC1F78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
      if (branch_taken) {
          goto L_08AC1F9C;
      }
      goto L_08AC1F80;
    }
L_08AC1F80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC1FAC;
      }
      goto L_08AC1F88;
    }
L_08AC1F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC1FAC;
      }
      goto L_08AC1F90;
    }
L_08AC1F90:
    ctx.gpr[31] = (0x08AC1F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1F98u) goto L_08AC1F98;
    return;
L_08AC1F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08AC1F9C;
L_08AC1F9C:
    ctx.gpr[31] = (0x08AC1FA4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem) && ctx.pc == 0x08AC1FA4u) goto L_08AC1FA4;
    return;
L_08AC1FA4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[2] = (0u | 0u);
    goto L_08AC1FAC;
L_08AC1FAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC1FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC1FDCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC1FDCu) goto L_08AC1FDC;
    return;
L_08AC1FDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC202C;
      }
      goto L_08AC1FE4;
    }
L_08AC1FE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC1FF0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC1FF0u) goto L_08AC1FF0;
    return;
L_08AC1FF0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AC2018u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC2018u) goto L_08AC2018;
    return;
L_08AC2018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2034;
      }
      goto L_08AC2024;
    }
L_08AC2024:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
      if (branch_taken) {
          goto L_08AC2040;
      }
      goto L_08AC202C;
    }
L_08AC202C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC20D8;
      }
      goto L_08AC2034;
    }
L_08AC2034:
    ctx.gpr[31] = (0x08AC203Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC203Cu) goto L_08AC203C;
    return;
L_08AC203C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC2040;
L_08AC2040:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC20D4;
      }
      goto L_08AC204C;
    }
L_08AC204C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC2064u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 492u, 0x08ADDD28u>(ctx, &aot_mem) && ctx.pc == 0x08AC2064u) goto L_08AC2064;
    return;
L_08AC2064:
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9958)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(21));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(33), ctx.gpr[16]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[8]);
    rt.memory().aot_store_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC20D4u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC20D4u) goto L_08AC20D4;
    return;
L_08AC20D4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AC20D8;
L_08AC20D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC20EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC2110;
    }
    goto L_08AC2104;
L_08AC2104:
    ctx.gpr[31] = (0x08AC210Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC210Cu) goto L_08AC210C;
    return;
L_08AC210C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC2110;
L_08AC2110:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2158;
      }
      goto L_08AC211C;
    }
L_08AC211C:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[31] = (0x08AC212Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 508u, 0x08ADDEE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC212Cu) goto L_08AC212C;
    return;
L_08AC212C:
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9958)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AC2158u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC2158u) goto L_08AC2158;
    return;
L_08AC2158:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC216C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC217Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AC217Cu) goto L_08AC217C;
    return;
L_08AC217C:
    ctx.gpr[31] = (0x08AC2184u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 519u, 0x08946B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2184u) goto L_08AC2184;
    return;
L_08AC2184:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2198;
      }
      goto L_08AC2190;
    }
L_08AC2190:
    ctx.gpr[31] = (0x08AC2198u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 761u, 0x0898E288u>(ctx, &aot_mem) && ctx.pc == 0x08AC2198u) goto L_08AC2198;
    return;
L_08AC2198:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC21A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC21B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AC21B8u) goto L_08AC21B8;
    return;
L_08AC21B8:
    ctx.gpr[31] = (0x08AC21C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 519u, 0x08946B3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC21C0u) goto L_08AC21C0;
    return;
L_08AC21C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC21D4;
      }
      goto L_08AC21CC;
    }
L_08AC21CC:
    ctx.gpr[31] = (0x08AC21D4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 941u, 0x0898BA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC21D4u) goto L_08AC21D4;
    return;
L_08AC21D4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC21E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC21F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC21F4u) goto L_08AC21F4;
    return;
L_08AC21F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC221C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AC2234u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x08AC2234u) goto L_08AC2234;
    return;
L_08AC2234:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08AC2248;
    }
    goto L_08AC2248;
L_08AC2248:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4207), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08AC2280u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08AC2280u) goto L_08AC2280;
    return;
L_08AC2280:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AC22EC;
      }
      goto L_08AC2288;
    }
L_08AC2288:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC2294u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC2294u) goto L_08AC2294;
    return;
L_08AC2294:
    ctx.gpr[16] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC22B0;
    }
    goto L_08AC22A4;
L_08AC22A4:
    ctx.gpr[31] = (0x08AC22ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC22ACu) goto L_08AC22AC;
    return;
L_08AC22AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC22B0;
L_08AC22B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC22E4;
      }
      goto L_08AC22BC;
    }
L_08AC22BC:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9959)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08AC22E4u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC22E4u) goto L_08AC22E4;
    return;
L_08AC22E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC2304;
      }
      goto L_08AC22EC;
    }
L_08AC22EC:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(142)));
    ctx.gpr[31] = (0x08AC2300u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08AC2300u) goto L_08AC2300;
    return;
L_08AC2300:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AC2304;
L_08AC2304:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[18] = (2237u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10292))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AC2344u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AC2344u) goto L_08AC2344;
    return;
L_08AC2344:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08AC2378;
      }
      goto L_08AC2350;
    }
L_08AC2350:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(568));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AC2378;
L_08AC2378:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AC238C;
      }
      goto L_08AC2380;
    }
L_08AC2380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AC238C;
L_08AC238C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC239Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem) && ctx.pc == 0x08AC239Cu) goto L_08AC239C;
    return;
L_08AC239C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC23C0;
      }
      goto L_08AC23A8;
    }
L_08AC23A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC23C0;
      }
      goto L_08AC23B8;
    }
L_08AC23B8:
    ctx.gpr[31] = (0x08AC23C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC23C0u) goto L_08AC23C0;
    return;
L_08AC23C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08AC23DC;
    }
    goto L_08AC23CC;
L_08AC23CC:
    ctx.gpr[31] = (0x08AC23D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08AC23D4u) goto L_08AC23D4;
    return;
L_08AC23D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08AC23DC;
L_08AC23DC:
    ctx.gpr[31] = (0x08AC23E4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC23E4u) goto L_08AC23E4;
    return;
L_08AC23E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08AC2400;
    }
    goto L_08AC23F0;
L_08AC23F0:
    ctx.gpr[31] = (0x08AC23F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08AC23F8u) goto L_08AC23F8;
    return;
L_08AC23F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08AC2400;
L_08AC2400:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(13352));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AC2414u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2414u) goto L_08AC2414;
    return;
L_08AC2414:
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
L_08AC242C:
    ctx.gpr[4] = (0u | 59u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10292), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13960));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10292)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC2470u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1092));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem) && ctx.pc == 0x08AC2470u) goto L_08AC2470;
    return;
L_08AC2470:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC2488;
      }
      goto L_08AC247C;
    }
L_08AC247C:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC249C;
      }
      goto L_08AC2488;
    }
L_08AC2488:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AC2494u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 610u, 0x08AAEE00u>(ctx, &aot_mem) && ctx.pc == 0x08AC2494u) goto L_08AC2494;
    return;
L_08AC2494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC24E0;
      }
      goto L_08AC249C;
    }
L_08AC249C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08AC24ACu);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 87u, 0x08B0C648u>(ctx, &aot_mem) && ctx.pc == 0x08AC24ACu) goto L_08AC24AC;
    return;
L_08AC24AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC24B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC24B8u) goto L_08AC24B8;
    return;
L_08AC24B8:
    ctx.gpr[31] = (0x08AC24C0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 89u, 0x08B0C658u>(ctx, &aot_mem) && ctx.pc == 0x08AC24C0u) goto L_08AC24C0;
    return;
L_08AC24C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC24D4u);
    ctx.gpr[6] = (16u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 694u, 0x0893681Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC24D4u) goto L_08AC24D4;
    return;
L_08AC24D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC24E0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 721u, 0x08AAF460u>(ctx, &aot_mem) && ctx.pc == 0x08AC24E0u) goto L_08AC24E0;
    return;
L_08AC24E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC24F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC250Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 743u, 0x08973864u>(ctx, &aot_mem) && ctx.pc == 0x08AC250Cu) goto L_08AC250C;
    return;
L_08AC250C:
    ctx.gpr[31] = (0x08AC2514u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2514u) goto L_08AC2514;
    return;
L_08AC2514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1096)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2548;
      }
      goto L_08AC2520;
    }
L_08AC2520:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AC252Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AC252Cu) goto L_08AC252C;
    return;
L_08AC252C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2544;
      }
      goto L_08AC2538;
    }
L_08AC2538:
    ctx.gpr[31] = (0x08AC2540u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem) && ctx.pc == 0x08AC2540u) goto L_08AC2540;
    return;
L_08AC2540:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AC2544;
L_08AC2544:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-1096), ctx.gpr[18]);
    goto L_08AC2548;
L_08AC2548:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1096)));
    ctx.gpr[31] = (0x08AC2554u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 129u, 0x089748D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC2554u) goto L_08AC2554;
    return;
L_08AC2554:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1084));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC2564u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 58u, 0x08AF4530u>(ctx, &aot_mem) && ctx.pc == 0x08AC2564u) goto L_08AC2564;
    return;
L_08AC2564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1096)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    ctx.gpr[4] = (ctx.gpr[17] << (ctx.gpr[4] & 31u));
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[31] = (0x08AC2590u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 744u, 0x0897386Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2590u) goto L_08AC2590;
    return;
L_08AC2590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1096)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 63u);
    ctx.gpr[5] = (ctx.gpr[17] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[31] = (0x08AC25B8u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 746u, 0x0897387Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC25B8u) goto L_08AC25B8;
    return;
L_08AC25B8:
    ctx.gpr[31] = (0x08AC25C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1096)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 102u, 0x08AF50F0u>(ctx, &aot_mem) && ctx.pc == 0x08AC25C0u) goto L_08AC25C0;
    return;
L_08AC25C0:
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
L_08AC25D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC25E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[6] = (17392u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[7] = (17288u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = ctx.fpr[18] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[13]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08AC2690u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 230u, 0x08861824u>(ctx, &aot_mem) && ctx.pc == 0x08AC2690u) goto L_08AC2690;
    return;
L_08AC2690:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC269C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC26B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 230u, 0x08861824u>(ctx, &aot_mem) && ctx.pc == 0x08AC26B8u) goto L_08AC26B8;
    return;
L_08AC26B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC26C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC2718u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2718u) goto L_08AC2718;
    return;
L_08AC2718:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AC2734u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2734u) goto L_08AC2734;
    return;
L_08AC2734:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AC2750;
      }
      goto L_08AC2744;
    }
L_08AC2744:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_08AC2750;
L_08AC2750:
    ctx.gpr[31] = (0x08AC2758u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 745u, 0x08973874u>(ctx, &aot_mem) && ctx.pc == 0x08AC2758u) goto L_08AC2758;
    return;
L_08AC2758:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[30] / ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AC2784;
      }
      goto L_08AC2778;
    }
L_08AC2778:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_08AC2784;
L_08AC2784:
    ctx.gpr[31] = (0x08AC278Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 747u, 0x08973884u>(ctx, &aot_mem) && ctx.pc == 0x08AC278Cu) goto L_08AC278C;
    return;
L_08AC278C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[30] / ctx.fpr[12];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08AC27D0;
      }
      goto L_08AC27C4;
    }
L_08AC27C4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_08AC27D0;
L_08AC27D0:
    ctx.gpr[31] = (0x08AC27D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 745u, 0x08973874u>(ctx, &aot_mem) && ctx.pc == 0x08AC27D8u) goto L_08AC27D8;
    return;
L_08AC27D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[30] / ctx.fpr[12];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
      if (branch_taken) {
          goto L_08AC2800;
      }
      goto L_08AC27F4;
    }
L_08AC27F4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[12];
    goto L_08AC2800;
L_08AC2800:
    ctx.gpr[31] = (0x08AC2808u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 747u, 0x08973884u>(ctx, &aot_mem) && ctx.pc == 0x08AC2808u) goto L_08AC2808;
    return;
L_08AC2808:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = ctx.fpr[28] / ctx.fpr[12];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AC2830;
      }
      goto L_08AC2824;
    }
L_08AC2824:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08AC2830;
L_08AC2830:
    ctx.gpr[31] = (0x08AC2838u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 745u, 0x08973874u>(ctx, &aot_mem) && ctx.pc == 0x08AC2838u) goto L_08AC2838;
    return;
L_08AC2838:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[26] = ctx.fpr[20] / ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AC2868;
      }
      goto L_08AC285C;
    }
L_08AC285C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08AC2868;
L_08AC2868:
    ctx.gpr[31] = (0x08AC2870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 747u, 0x08973884u>(ctx, &aot_mem) && ctx.pc == 0x08AC2870u) goto L_08AC2870;
    return;
L_08AC2870:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[24] = ctx.fpr[20] / ctx.fpr[24];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AC28B0;
      }
      goto L_08AC28A4;
    }
L_08AC28A4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08AC28B0;
L_08AC28B0:
    ctx.gpr[31] = (0x08AC28B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 745u, 0x08973874u>(ctx, &aot_mem) && ctx.pc == 0x08AC28B8u) goto L_08AC28B8;
    return;
L_08AC28B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = ctx.fpr[20] / ctx.fpr[22];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AC28E8;
      }
      goto L_08AC28DC;
    }
L_08AC28DC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08AC28E8;
L_08AC28E8:
    ctx.gpr[31] = (0x08AC28F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 747u, 0x08973884u>(ctx, &aot_mem) && ctx.pc == 0x08AC28F0u) goto L_08AC28F0;
    return;
L_08AC28F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.fpr[19] = ctx.fpr[20] / ctx.fpr[19];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AC2924u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 39u, 0x08AF43ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC2924u) goto L_08AC2924;
    return;
L_08AC2924:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC2968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 45u, 0x08AF447Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2968u) goto L_08AC2968;
    return;
L_08AC2968:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2974:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC29B8u);
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC29B8u) goto L_08AC29B8;
    return;
L_08AC29B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08AC29D4u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC29D4u) goto L_08AC29D4;
    return;
L_08AC29D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC29E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08AC29E4u) goto L_08AC29E4;
    return;
L_08AC29E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC29F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC2A54u);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2A54u) goto L_08AC2A54;
    return;
L_08AC2A54:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.gpr[31] = (0x08AC2A74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2A74u) goto L_08AC2A74;
    return;
L_08AC2A74:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC2A84u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08AC2A84u) goto L_08AC2A84;
    return;
L_08AC2A84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08AC2AA8u);
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2AA8u) goto L_08AC2AA8;
    return;
L_08AC2AA8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.gpr[31] = (0x08AC2AC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2AC4u) goto L_08AC2AC4;
    return;
L_08AC2AC4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC2AD4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08AC2AD4u) goto L_08AC2AD4;
    return;
L_08AC2AD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[15] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08AC2AF8u);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2AF8u) goto L_08AC2AF8;
    return;
L_08AC2AF8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.gpr[31] = (0x08AC2B14u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2B14u) goto L_08AC2B14;
    return;
L_08AC2B14:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC2B24u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08AC2B24u) goto L_08AC2B24;
    return;
L_08AC2B24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[20];
    ctx.gpr[31] = (0x08AC2B48u);
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2B48u) goto L_08AC2B48;
    return;
L_08AC2B48:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.gpr[31] = (0x08AC2B64u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2B64u) goto L_08AC2B64;
    return;
L_08AC2B64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC2B74u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x08AC2B74u) goto L_08AC2B74;
    return;
L_08AC2B74:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[9] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[10]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AC2BF8;
      }
      goto L_08AC2BEC;
    }
L_08AC2BEC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AC2C04;
      }
      goto L_08AC2BF8;
    }
L_08AC2BF8:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08AC2C04;
L_08AC2C04:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC2C60;
      }
      goto L_08AC2C0C;
    }
L_08AC2C0C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC2C24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08AC2C24u) goto L_08AC2C24;
    return;
L_08AC2C24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AC2C60;
      }
      goto L_08AC2C3C;
    }
L_08AC2C3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC2C50u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem) && ctx.pc == 0x08AC2C50u) goto L_08AC2C50;
    return;
L_08AC2C50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08AC2C60;
L_08AC2C60:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC2CA8;
      }
      goto L_08AC2C70;
    }
L_08AC2C70:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08AC2CA0;
    }
    goto L_08AC2C7C;
L_08AC2C7C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
        goto L_08AC2CA0;
    }
    goto L_08AC2C90;
L_08AC2C90:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    goto L_08AC2CA0;
L_08AC2CA0:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC2C70;
      }
      goto L_08AC2CA8;
    }
L_08AC2CA8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AC2CF0;
      }
      goto L_08AC2CB8;
    }
L_08AC2CB8:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2CE4;
      }
      goto L_08AC2CC4;
    }
L_08AC2CC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2CE4;
      }
      goto L_08AC2CD8;
    }
L_08AC2CD8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08AC2CE4;
L_08AC2CE4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AC2D34;
      }
      goto L_08AC2CF0;
    }
L_08AC2CF0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC2D30;
      }
      goto L_08AC2CF8;
    }
L_08AC2CF8:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08AC2D28;
    }
    goto L_08AC2D04;
L_08AC2D04:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08AC2D28;
    }
    goto L_08AC2D18;
L_08AC2D18:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08AC2D28;
L_08AC2D28:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC2CF8;
      }
      goto L_08AC2D30;
    }
L_08AC2D30:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AC2D34;
L_08AC2D34:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2D88;
      }
      goto L_08AC2D3C;
    }
L_08AC2D3C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC2D88;
      }
      goto L_08AC2D4C;
    }
L_08AC2D4C:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08AC2D7C;
    }
    goto L_08AC2D58;
L_08AC2D58:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08AC2D7C;
    }
    goto L_08AC2D6C;
L_08AC2D6C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08AC2D7C;
L_08AC2D7C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC2D4C;
      }
      goto L_08AC2D84;
    }
L_08AC2D84:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AC2D88;
L_08AC2D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AC2DDC;
      }
      goto L_08AC2D98;
    }
L_08AC2D98:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08AC2DD0;
    }
    goto L_08AC2DA0;
L_08AC2DA0:
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08AC2DD0;
    }
    goto L_08AC2DA8;
L_08AC2DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
        goto L_08AC2DD0;
    }
    goto L_08AC2DB4;
L_08AC2DB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC2DCC;
      }
      goto L_08AC2DC4;
    }
L_08AC2DC4:
    ctx.gpr[31] = (0x08AC2DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC2DCCu) goto L_08AC2DCC;
    return;
L_08AC2DCC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08AC2DD0;
L_08AC2DD0:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AC2D98;
      }
      goto L_08AC2DD8;
    }
L_08AC2DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AC2DDC;
L_08AC2DDC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2DEC;
      }
      goto L_08AC2DE4;
    }
L_08AC2DE4:
    ctx.gpr[31] = (0x08AC2DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08AC2DECu) goto L_08AC2DEC;
    return;
L_08AC2DEC:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
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
L_08AC2E24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC2E38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC2E38u) goto L_08AC2E38;
    return;
L_08AC2E38:
    ctx.gpr[31] = (0x08AC2E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 89u, 0x08B0C658u>(ctx, &aot_mem) && ctx.pc == 0x08AC2E40u) goto L_08AC2E40;
    return;
L_08AC2E40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2F60;
      }
      goto L_08AC2E48;
    }
L_08AC2E48:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AC2E54u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AC2E54u) goto L_08AC2E54;
    return;
L_08AC2E54:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29232));
      if (branch_taken) {
          goto L_08AC2E90;
      }
      goto L_08AC2E64;
    }
L_08AC2E64:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27964));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27932));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2220u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9304));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08AC2E90;
L_08AC2E90:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AC2EA4;
      }
      goto L_08AC2E98;
    }
L_08AC2E98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AC2EA4;
L_08AC2EA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AC2EE8;
      }
      goto L_08AC2EB4;
    }
L_08AC2EB4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AC2ED8;
      }
      goto L_08AC2EBC;
    }
L_08AC2EBC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AC2ED0;
      }
      goto L_08AC2EC4;
    }
L_08AC2EC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08AC2ED0;
L_08AC2ED0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    goto L_08AC2ED8;
L_08AC2ED8:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(308), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(301)));
      if (branch_taken) {
          goto L_08AC2F18;
      }
      goto L_08AC2EE8;
    }
L_08AC2EE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08AC2F0Cu);
    ctx.gpr[9] = (0u | 1u);
    goto L_08AC2B98;
L_08AC2F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(301)));
    goto L_08AC2F18;
L_08AC2F18:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2F40;
      }
      goto L_08AC2F20;
    }
L_08AC2F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AC2F3Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC2F3Cu) goto L_08AC2F3C;
    return;
L_08AC2F3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08AC2F40;
L_08AC2F40:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC2F60;
      }
      goto L_08AC2F48;
    }
L_08AC2F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC2F60;
      }
      goto L_08AC2F58;
    }
L_08AC2F58:
    ctx.gpr[31] = (0x08AC2F60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08AC2F60u) goto L_08AC2F60;
    return;
L_08AC2F60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2F70:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AC2F78;
L_08AC2F78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 90 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(132));
      if (branch_taken) {
          goto L_08AC2F78;
      }
      goto L_08AC2F94;
    }
L_08AC2F94:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2F9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2FA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC2FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 349u, 0x08871308u>(ctx, &aot_mem) && ctx.pc == 0x08AC2FB4u) goto L_08AC2FB4;
    return;
L_08AC2FB4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC2FC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC2FD4u);
    // nop
    goto L_08AC2F9C;
L_08AC2FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[31] = (0x08AC2FE4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 592u, 0x0893A824u>(ctx, &aot_mem) && ctx.pc == 0x08AC2FE4u) goto L_08AC2FE4;
    return;
L_08AC2FE4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8896), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AC308C;
      }
      goto L_08AC2FF0;
    }
L_08AC2FF0:
    ctx.gpr[5] = (17658u << 16u);
    ctx.gpr[31] = (0x08AC2FFCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 117u, 0x088907E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC2FFCu) goto L_08AC2FFC;
    return;
L_08AC2FFC:
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    ctx.gpr[31] = (0x08AC3010u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 111u, 0x08890798u>(ctx, &aot_mem) && ctx.pc == 0x08AC3010u) goto L_08AC3010;
    return;
L_08AC3010:
    ctx.gpr[6] = (16179u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    ctx.gpr[6] = (16298u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 43691u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AC3034u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 586u, 0x0893A7A4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3034u) goto L_08AC3034;
    return;
L_08AC3034:
    ctx.gpr[31] = (0x08AC303Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 624u, 0x088B74ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC303Cu) goto L_08AC303C;
    return;
L_08AC303C:
    ctx.gpr[31] = (0x08AC3044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 101u, 0x08944D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3044u) goto L_08AC3044;
    return;
L_08AC3044:
    ctx.gpr[31] = (0x08AC304Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 549u, 0x08AAEAA0u>(ctx, &aot_mem) && ctx.pc == 0x08AC304Cu) goto L_08AC304C;
    return;
L_08AC304C:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1004));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AC3060u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3060u) goto L_08AC3060;
    return;
L_08AC3060:
    ctx.gpr[31] = (0x08AC3068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 315u, 0x089352E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3068u) goto L_08AC3068;
    return;
L_08AC3068:
    ctx.gpr[31] = (0x08AC3070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 645u, 0x08A536F0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3070u) goto L_08AC3070;
    return;
L_08AC3070:
    ctx.gpr[31] = (0x08AC3078u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 703u, 0x08B0BFA4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3078u) goto L_08AC3078;
    return;
L_08AC3078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3094;
      }
      goto L_08AC3084;
    }
L_08AC3084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08AC30A0;
      }
      goto L_08AC308C;
    }
L_08AC308C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC30AC;
      }
      goto L_08AC3094;
    }
L_08AC3094:
    ctx.gpr[31] = (0x08AC309Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC309Cu) goto L_08AC309C;
    return;
L_08AC309C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AC30A0;
L_08AC30A0:
    ctx.gpr[31] = (0x08AC30A8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 583u, 0x089BABC4u>(ctx, &aot_mem) && ctx.pc == 0x08AC30A8u) goto L_08AC30A8;
    return;
L_08AC30A8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AC30AC;
L_08AC30AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC30B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AC3104;
      }
      goto L_08AC30DC;
    }
L_08AC30DC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AC30E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08AC30E8u) goto L_08AC30E8;
    return;
L_08AC30E8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3100;
      }
      goto L_08AC30F4;
    }
L_08AC30F4:
    ctx.gpr[31] = (0x08AC30FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC30FCu) goto L_08AC30FC;
    return;
L_08AC30FC:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AC3100;
L_08AC3100:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08AC3104;
L_08AC3104:
    ctx.gpr[31] = (0x08AC310Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 447u, 0x089F656Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC310Cu) goto L_08AC310C;
    return;
L_08AC310C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC312C;
      }
      goto L_08AC3118;
    }
L_08AC3118:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3124u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC3124u) goto L_08AC3124;
    return;
L_08AC3124:
    ctx.gpr[31] = (0x08AC312Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC312Cu) goto L_08AC312C;
    return;
L_08AC312C:
    ctx.gpr[31] = (0x08AC3134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 378u, 0x0882DD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3134u) goto L_08AC3134;
    return;
L_08AC3134:
    ctx.gpr[31] = (0x08AC313Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 113u, 0x08A11120u>(ctx, &aot_mem) && ctx.pc == 0x08AC313Cu) goto L_08AC313C;
    return;
L_08AC313C:
    ctx.gpr[31] = (0x08AC3144u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24056)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 269u, 0x088C1830u>(ctx, &aot_mem) && ctx.pc == 0x08AC3144u) goto L_08AC3144;
    return;
L_08AC3144:
    ctx.gpr[31] = (0x08AC314Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 491u, 0x08A05EBCu>(ctx, &aot_mem) && ctx.pc == 0x08AC314Cu) goto L_08AC314C;
    return;
L_08AC314C:
    ctx.gpr[2] = (0u | 1u);
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
L_08AC3168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC3180u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 510u, 0x08A0603Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3180u) goto L_08AC3180;
    return;
L_08AC3180:
    ctx.gpr[31] = (0x08AC3188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 86u, 0x0895CC70u>(ctx, &aot_mem) && ctx.pc == 0x08AC3188u) goto L_08AC3188;
    return;
L_08AC3188:
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6992));
    goto L_08AC3194;
L_08AC3194:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC31B0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 87u, 0x089606D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC31B0u) goto L_08AC31B0;
    return;
L_08AC31B0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3194;
      }
      goto L_08AC31C8;
    }
L_08AC31C8:
    ctx.gpr[31] = (0x08AC31D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 627u, 0x0896EACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC31D0u) goto L_08AC31D0;
    return;
L_08AC31D0:
    ctx.gpr[31] = (0x08AC31D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 266u, 0x0896CEFCu>(ctx, &aot_mem) && ctx.pc == 0x08AC31D8u) goto L_08AC31D8;
    return;
L_08AC31D8:
    ctx.gpr[31] = (0x08AC31E0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 144u, 0x08864CE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC31E0u) goto L_08AC31E0;
    return;
L_08AC31E0:
    ctx.gpr[31] = (0x08AC31E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 150u, 0x08864D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC31E8u) goto L_08AC31E8;
    return;
L_08AC31E8:
    ctx.gpr[31] = (0x08AC31F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 469u, 0x08896478u>(ctx, &aot_mem) && ctx.pc == 0x08AC31F0u) goto L_08AC31F0;
    return;
L_08AC31F0:
    ctx.gpr[31] = (0x08AC31F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 484u, 0x08966FCCu>(ctx, &aot_mem) && ctx.pc == 0x08AC31F8u) goto L_08AC31F8;
    return;
L_08AC31F8:
    ctx.gpr[31] = (0x08AC3200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 126u, 0x08A11200u>(ctx, &aot_mem) && ctx.pc == 0x08AC3200u) goto L_08AC3200;
    return;
L_08AC3200:
    ctx.gpr[31] = (0x08AC3208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 526u, 0x08AD3110u>(ctx, &aot_mem) && ctx.pc == 0x08AC3208u) goto L_08AC3208;
    return;
L_08AC3208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3220;
      }
      goto L_08AC3214;
    }
L_08AC3214:
    ctx.gpr[31] = (0x08AC321Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AC321Cu) goto L_08AC321C;
    return;
L_08AC321C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08AC3220;
L_08AC3220:
    ctx.gpr[31] = (0x08AC3228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 566u, 0x0880EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3228u) goto L_08AC3228;
    return;
L_08AC3228:
    ctx.gpr[31] = (0x08AC3230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 311u, 0x08941F28u>(ctx, &aot_mem) && ctx.pc == 0x08AC3230u) goto L_08AC3230;
    return;
L_08AC3230:
    ctx.gpr[31] = (0x08AC3238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 526u, 0x08B3E27Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3238u) goto L_08AC3238;
    return;
L_08AC3238:
    ctx.gpr[31] = (0x08AC3240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 392u, 0x088B9D2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3240u) goto L_08AC3240;
    return;
L_08AC3240:
    ctx.gpr[31] = (0x08AC3248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 597u, 0x088ABD90u>(ctx, &aot_mem) && ctx.pc == 0x08AC3248u) goto L_08AC3248;
    return;
L_08AC3248:
    ctx.gpr[31] = (0x08AC3250u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 771u, 0x08B67310u>(ctx, &aot_mem) && ctx.pc == 0x08AC3250u) goto L_08AC3250;
    return;
L_08AC3250:
    ctx.gpr[31] = (0x08AC3258u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 124u, 0x08B70A94u>(ctx, &aot_mem) && ctx.pc == 0x08AC3258u) goto L_08AC3258;
    return;
L_08AC3258:
    ctx.gpr[31] = (0x08AC3260u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 128u, 0x08B70AECu>(ctx, &aot_mem) && ctx.pc == 0x08AC3260u) goto L_08AC3260;
    return;
L_08AC3260:
    ctx.gpr[31] = (0x08AC3268u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15956)));
    if (rt.invoke_chained_direct<&recomp_unit_0219_entry, 219u, 132u, 0x08B70B44u>(ctx, &aot_mem) && ctx.pc == 0x08AC3268u) goto L_08AC3268;
    return;
L_08AC3268:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC327C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC32B8u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC32B8u) goto L_08AC32B8;
    return;
L_08AC32B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08AC32D0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC32D0u) goto L_08AC32D0;
    return;
L_08AC32D0:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16968), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16967), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AC32E0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16966), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 113u, 0x08A11120u>(ctx, &aot_mem) && ctx.pc == 0x08AC32E0u) goto L_08AC32E0;
    return;
L_08AC32E0:
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-2240), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AC32F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 299u, 0x08A22268u>(ctx, &aot_mem) && ctx.pc == 0x08AC32F4u) goto L_08AC32F4;
    return;
L_08AC32F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08AC3308;
      }
      goto L_08AC3300;
    }
L_08AC3300:
    ctx.gpr[31] = (0x08AC3308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 301u, 0x08AB5460u>(ctx, &aot_mem) && ctx.pc == 0x08AC3308u) goto L_08AC3308;
    return;
L_08AC3308:
    ctx.gpr[31] = (0x08AC3310u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    goto L_08AC3418;
L_08AC3310:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4211)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AC33DC;
      }
      goto L_08AC331C;
    }
L_08AC331C:
    ctx.gpr[31] = (0x08AC3324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 219u, 0x08AB5110u>(ctx, &aot_mem) && ctx.pc == 0x08AC3324u) goto L_08AC3324;
    return;
L_08AC3324:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC334C;
      }
      goto L_08AC3330;
    }
L_08AC3330:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[31] = (0x08AC333Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 563u, 0x08A063ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC333Cu) goto L_08AC333C;
    return;
L_08AC333C:
    ctx.gpr[31] = (0x08AC3344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 374u, 0x089FD8A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3344u) goto L_08AC3344;
    return;
L_08AC3344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC33DC;
      }
      goto L_08AC334C;
    }
L_08AC334C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10293)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC33A0;
      }
      goto L_08AC3358;
    }
L_08AC3358:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10293), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC3370u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3370u) goto L_08AC3370;
    return;
L_08AC3370:
    ctx.gpr[31] = (0x08AC3378u);
    // nop
    goto L_08AC3168;
L_08AC3378:
    ctx.gpr[31] = (0x08AC3380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem) && ctx.pc == 0x08AC3380u) goto L_08AC3380;
    return;
L_08AC3380:
    ctx.gpr[31] = (0x08AC3388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 113u, 0x08A11120u>(ctx, &aot_mem) && ctx.pc == 0x08AC3388u) goto L_08AC3388;
    return;
L_08AC3388:
    ctx.gpr[31] = (0x08AC3390u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AC3418;
L_08AC3390:
    ctx.gpr[31] = (0x08AC3398u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7652), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 738u, 0x0897381Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3398u) goto L_08AC3398;
    return;
L_08AC3398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC33DC;
      }
      goto L_08AC33A0;
    }
L_08AC33A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC33B4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC33B4u) goto L_08AC33B4;
    return;
L_08AC33B4:
    ctx.gpr[31] = (0x08AC33BCu);
    // nop
    goto L_08AC3168;
L_08AC33BC:
    ctx.gpr[31] = (0x08AC33C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 127u, 0x08A11208u>(ctx, &aot_mem) && ctx.pc == 0x08AC33C4u) goto L_08AC33C4;
    return;
L_08AC33C4:
    ctx.gpr[31] = (0x08AC33CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 113u, 0x08A11120u>(ctx, &aot_mem) && ctx.pc == 0x08AC33CCu) goto L_08AC33CC;
    return;
L_08AC33CC:
    ctx.gpr[31] = (0x08AC33D4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08AC3418;
L_08AC33D4:
    ctx.gpr[31] = (0x08AC33DCu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7652), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 738u, 0x0897381Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC33DCu) goto L_08AC33DC;
    return;
L_08AC33DC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AC33E8u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4211), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem) && ctx.pc == 0x08AC33E8u) goto L_08AC33E8;
    return;
L_08AC33E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC33F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem) && ctx.pc == 0x08AC33F4u) goto L_08AC33F4;
    return;
L_08AC33F4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4203), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4204), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4208), static_cast<std::uint8_t>(0u));
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
L_08AC3418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC343Cu);
    ctx.gpr[4] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 224u, 0x08941918u>(ctx, &aot_mem) && ctx.pc == 0x08AC343Cu) goto L_08AC343C;
    return;
L_08AC343C:
    ctx.gpr[31] = (0x08AC3444u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 455u, 0x08966DC8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3444u) goto L_08AC3444;
    return;
L_08AC3444:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x08AC3454u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 299u, 0x08A22268u>(ctx, &aot_mem) && ctx.pc == 0x08AC3454u) goto L_08AC3454;
    return;
L_08AC3454:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    ctx.gpr[31] = (0x08AC3460u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 194u, 0x08A1D178u>(ctx, &aot_mem) && ctx.pc == 0x08AC3460u) goto L_08AC3460;
    return;
L_08AC3460:
    ctx.gpr[31] = (0x08AC3468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 589u, 0x08932C94u>(ctx, &aot_mem) && ctx.pc == 0x08AC3468u) goto L_08AC3468;
    return;
L_08AC3468:
    ctx.gpr[31] = (0x08AC3470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 469u, 0x08AFB424u>(ctx, &aot_mem) && ctx.pc == 0x08AC3470u) goto L_08AC3470;
    return;
L_08AC3470:
    ctx.gpr[31] = (0x08AC3478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 799u, 0x08953898u>(ctx, &aot_mem) && ctx.pc == 0x08AC3478u) goto L_08AC3478;
    return;
L_08AC3478:
    ctx.gpr[31] = (0x08AC3480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 136u, 0x08AB8970u>(ctx, &aot_mem) && ctx.pc == 0x08AC3480u) goto L_08AC3480;
    return;
L_08AC3480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3494;
      }
      goto L_08AC348C;
    }
L_08AC348C:
    ctx.gpr[31] = (0x08AC3494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 748u, 0x08B671D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3494u) goto L_08AC3494;
    return;
L_08AC3494:
    ctx.gpr[31] = (0x08AC349Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 284u, 0x0886DB9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC349Cu) goto L_08AC349C;
    return;
L_08AC349C:
    ctx.gpr[31] = (0x08AC34A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 34u, 0x08A94214u>(ctx, &aot_mem) && ctx.pc == 0x08AC34A4u) goto L_08AC34A4;
    return;
L_08AC34A4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8420), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC34BC;
      }
      goto L_08AC34B4;
    }
L_08AC34B4:
    ctx.gpr[31] = (0x08AC34BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC34BCu) goto L_08AC34BC;
    return;
L_08AC34BC:
    ctx.gpr[31] = (0x08AC34C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 608u, 0x089BACF0u>(ctx, &aot_mem) && ctx.pc == 0x08AC34C4u) goto L_08AC34C4;
    return;
L_08AC34C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC34D8;
      }
      goto L_08AC34D0;
    }
L_08AC34D0:
    ctx.gpr[31] = (0x08AC34D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08AC34D8u) goto L_08AC34D8;
    return;
L_08AC34D8:
    ctx.gpr[31] = (0x08AC34E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 284u, 0x0880CF70u>(ctx, &aot_mem) && ctx.pc == 0x08AC34E0u) goto L_08AC34E0;
    return;
L_08AC34E0:
    ctx.gpr[31] = (0x08AC34E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 293u, 0x08B41148u>(ctx, &aot_mem) && ctx.pc == 0x08AC34E8u) goto L_08AC34E8;
    return;
L_08AC34E8:
    ctx.gpr[4] = (17136u << 16u);
    ctx.gpr[31] = (0x08AC34F4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 437u, 0x08975D44u>(ctx, &aot_mem) && ctx.pc == 0x08AC34F4u) goto L_08AC34F4;
    return;
L_08AC34F4:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7804), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AC3510;
      }
      goto L_08AC3508;
    }
L_08AC3508:
    ctx.gpr[31] = (0x08AC3510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3510u) goto L_08AC3510;
    return;
L_08AC3510:
    ctx.gpr[31] = (0x08AC3518u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 881u, 0x08953F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3518u) goto L_08AC3518;
    return;
L_08AC3518:
    ctx.gpr[31] = (0x08AC3520u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 589u, 0x08AD3598u>(ctx, &aot_mem) && ctx.pc == 0x08AC3520u) goto L_08AC3520;
    return;
L_08AC3520:
    ctx.gpr[31] = (0x08AC3528u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 590u, 0x08AD35A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3528u) goto L_08AC3528;
    return;
L_08AC3528:
    ctx.gpr[31] = (0x08AC3530u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 590u, 0x08AD35A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3530u) goto L_08AC3530;
    return;
L_08AC3530:
    ctx.gpr[31] = (0x08AC3538u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08AC3538u) goto L_08AC3538;
    return;
L_08AC3538:
    ctx.gpr[31] = (0x08AC3540u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 969u, 0x0897FE60u>(ctx, &aot_mem) && ctx.pc == 0x08AC3540u) goto L_08AC3540;
    return;
L_08AC3540:
    ctx.gpr[31] = (0x08AC3548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 121u, 0x08A40AFCu>(ctx, &aot_mem) && ctx.pc == 0x08AC3548u) goto L_08AC3548;
    return;
L_08AC3548:
    ctx.gpr[31] = (0x08AC3550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 741u, 0x089C7248u>(ctx, &aot_mem) && ctx.pc == 0x08AC3550u) goto L_08AC3550;
    return;
L_08AC3550:
    ctx.gpr[16] = (2238u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6992));
    goto L_08AC355C;
L_08AC355C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3578u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 87u, 0x089606D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3578u) goto L_08AC3578;
    return;
L_08AC3578:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC355C;
      }
      goto L_08AC3590;
    }
L_08AC3590:
    ctx.gpr[31] = (0x08AC3598u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7800), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 558u, 0x089CF18Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3598u) goto L_08AC3598;
    return;
L_08AC3598:
    ctx.gpr[31] = (0x08AC35A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 503u, 0x0882766Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC35A0u) goto L_08AC35A0;
    return;
L_08AC35A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC35B4;
      }
      goto L_08AC35AC;
    }
L_08AC35AC:
    ctx.gpr[31] = (0x08AC35B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 358u, 0x08991788u>(ctx, &aot_mem) && ctx.pc == 0x08AC35B4u) goto L_08AC35B4;
    return;
L_08AC35B4:
    ctx.gpr[4] = (2246u << 16u);
    ctx.gpr[31] = (0x08AC35C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23472));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 160u, 0x089F4F70u>(ctx, &aot_mem) && ctx.pc == 0x08AC35C0u) goto L_08AC35C0;
    return;
L_08AC35C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC35D8;
      }
      goto L_08AC35CC;
    }
L_08AC35CC:
    ctx.gpr[31] = (0x08AC35D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 260u, 0x088690ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC35D4u) goto L_08AC35D4;
    return;
L_08AC35D4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08AC35D8;
L_08AC35D8:
    ctx.gpr[31] = (0x08AC35E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 495u, 0x08A87458u>(ctx, &aot_mem) && ctx.pc == 0x08AC35E0u) goto L_08AC35E0;
    return;
L_08AC35E0:
    ctx.gpr[31] = (0x08AC35E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 113u, 0x08A11120u>(ctx, &aot_mem) && ctx.pc == 0x08AC35E8u) goto L_08AC35E8;
    return;
L_08AC35E8:
    ctx.gpr[31] = (0x08AC35F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 319u, 0x08AED434u>(ctx, &aot_mem) && ctx.pc == 0x08AC35F0u) goto L_08AC35F0;
    return;
L_08AC35F0:
    ctx.gpr[31] = (0x08AC35F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 287u, 0x089EDEE8u>(ctx, &aot_mem) && ctx.pc == 0x08AC35F8u) goto L_08AC35F8;
    return;
L_08AC35F8:
    ctx.gpr[31] = (0x08AC3600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 64u, 0x0895CA94u>(ctx, &aot_mem) && ctx.pc == 0x08AC3600u) goto L_08AC3600;
    return;
L_08AC3600:
    ctx.gpr[31] = (0x08AC3608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 318u, 0x08A35524u>(ctx, &aot_mem) && ctx.pc == 0x08AC3608u) goto L_08AC3608;
    return;
L_08AC3608:
    ctx.gpr[31] = (0x08AC3610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 518u, 0x088F27E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3610u) goto L_08AC3610;
    return;
L_08AC3610:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3620;
      }
      goto L_08AC3618;
    }
L_08AC3618:
    ctx.gpr[31] = (0x08AC3620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 258u, 0x0896CE30u>(ctx, &aot_mem) && ctx.pc == 0x08AC3620u) goto L_08AC3620;
    return;
L_08AC3620:
    ctx.gpr[31] = (0x08AC3628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 582u, 0x088ABC44u>(ctx, &aot_mem) && ctx.pc == 0x08AC3628u) goto L_08AC3628;
    return;
L_08AC3628:
    ctx.gpr[31] = (0x08AC3630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 815u, 0x0893F9B8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3630u) goto L_08AC3630;
    return;
L_08AC3630:
    ctx.gpr[31] = (0x08AC3638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 308u, 0x08A8606Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3638u) goto L_08AC3638;
    return;
L_08AC3638:
    ctx.gpr[31] = (0x08AC3640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 159u, 0x0895D300u>(ctx, &aot_mem) && ctx.pc == 0x08AC3640u) goto L_08AC3640;
    return;
L_08AC3640:
    ctx.gpr[31] = (0x08AC3648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 718u, 0x088FF0A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3648u) goto L_08AC3648;
    return;
L_08AC3648:
    ctx.gpr[31] = (0x08AC3650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 858u, 0x0896FD74u>(ctx, &aot_mem) && ctx.pc == 0x08AC3650u) goto L_08AC3650;
    return;
L_08AC3650:
    ctx.gpr[31] = (0x08AC3658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 374u, 0x089FD8A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3658u) goto L_08AC3658;
    return;
L_08AC3658:
    ctx.gpr[31] = (0x08AC3660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 50u, 0x08AB043Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3660u) goto L_08AC3660;
    return;
L_08AC3660:
    ctx.gpr[31] = (0x08AC3668u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AC3668u) goto L_08AC3668;
    return;
L_08AC3668:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC3674u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 941u, 0x0898BA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC3674u) goto L_08AC3674;
    return;
L_08AC3674:
    ctx.gpr[31] = (0x08AC367Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08AC367Cu) goto L_08AC367C;
    return;
L_08AC367C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC3688u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 941u, 0x0898BA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC3688u) goto L_08AC3688;
    return;
L_08AC3688:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08AC36A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC36D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    ctx.gpr[5] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC36FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[19] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[16] = (2237u << 16u);
    ctx.gpr[20] = (ctx.gpr[5] & 255u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-29120));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08AC3748;
      }
      goto L_08AC3740;
    }
L_08AC3740:
    ctx.gpr[31] = (0x08AC3748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3748u) goto L_08AC3748;
    return;
L_08AC3748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC377C;
      }
      goto L_08AC375C;
    }
L_08AC375C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC3780;
      }
      goto L_08AC3778;
    }
L_08AC3778:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AC377C;
L_08AC377C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC3780;
L_08AC3780:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3798;
      }
      goto L_08AC3788;
    }
L_08AC3788:
    ctx.gpr[31] = (0x08AC3790u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 126u, 0x08AE0790u>(ctx, &aot_mem) && ctx.pc == 0x08AC3790u) goto L_08AC3790;
    return;
L_08AC3790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC37A0;
      }
      goto L_08AC3798;
    }
L_08AC3798:
    ctx.gpr[31] = (0x08AC37A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 517u, 0x08ADDF74u>(ctx, &aot_mem) && ctx.pc == 0x08AC37A0u) goto L_08AC37A0;
    return;
L_08AC37A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC37BC;
      }
      goto L_08AC37B4;
    }
L_08AC37B4:
    ctx.gpr[31] = (0x08AC37BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 396u, 0x08A39ACCu>(ctx, &aot_mem) && ctx.pc == 0x08AC37BCu) goto L_08AC37BC;
    return;
L_08AC37BC:
    ctx.gpr[31] = (0x08AC37C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 315u, 0x089352E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC37C4u) goto L_08AC37C4;
    return;
L_08AC37C4:
    ctx.gpr[31] = (0x08AC37CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AC37CCu) goto L_08AC37CC;
    return;
L_08AC37CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC37E0;
      }
      goto L_08AC37D4;
    }
L_08AC37D4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC37E0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 559u, 0x08946D60u>(ctx, &aot_mem) && ctx.pc == 0x08AC37E0u) goto L_08AC37E0;
    return;
L_08AC37E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC3800;
      }
      goto L_08AC37EC;
    }
L_08AC37EC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC37F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC37F8u) goto L_08AC37F8;
    return;
L_08AC37F8:
    ctx.gpr[31] = (0x08AC3800u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3800u) goto L_08AC3800;
    return;
L_08AC3800:
    ctx.gpr[31] = (0x08AC3808u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 378u, 0x0882DD8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3808u) goto L_08AC3808;
    return;
L_08AC3808:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4212), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC3834;
      }
      goto L_08AC3818;
    }
L_08AC3818:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3828u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC3828u) goto L_08AC3828;
    return;
L_08AC3828:
    ctx.gpr[31] = (0x08AC3830u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3830u) goto L_08AC3830;
    return;
L_08AC3830:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC3834;
L_08AC3834:
    ctx.gpr[31] = (0x08AC383Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC383Cu) goto L_08AC383C;
    return;
L_08AC383C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC3864;
      }
      goto L_08AC3848;
    }
L_08AC3848:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3858u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC3858u) goto L_08AC3858;
    return;
L_08AC3858:
    ctx.gpr[31] = (0x08AC3860u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3860u) goto L_08AC3860;
    return;
L_08AC3860:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC3864;
L_08AC3864:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AC3870u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3870u) goto L_08AC3870;
    return;
L_08AC3870:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC38A0;
      }
      goto L_08AC387C;
    }
L_08AC387C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3890;
      }
      goto L_08AC3888;
    }
L_08AC3888:
    ctx.gpr[31] = (0x08AC3890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3890u) goto L_08AC3890;
    return;
L_08AC3890:
    ctx.gpr[31] = (0x08AC3898u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 300u, 0x08A5532Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3898u) goto L_08AC3898;
    return;
L_08AC3898:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3928;
      }
      goto L_08AC38A0;
    }
L_08AC38A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC38C0;
      }
      goto L_08AC38AC;
    }
L_08AC38AC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[18]);
    ctx.gpr[31] = (0x08AC38B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC38B8u) goto L_08AC38B8;
    return;
L_08AC38B8:
    ctx.gpr[31] = (0x08AC38C0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC38C0u) goto L_08AC38C0;
    return;
L_08AC38C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC38CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 756u, 0x0882F210u>(ctx, &aot_mem) && ctx.pc == 0x08AC38CCu) goto L_08AC38CC;
    return;
L_08AC38CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC38F0;
      }
      goto L_08AC38D8;
    }
L_08AC38D8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[18]);
    ctx.gpr[31] = (0x08AC38E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC38E4u) goto L_08AC38E4;
    return;
L_08AC38E4:
    ctx.gpr[31] = (0x08AC38ECu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC38ECu) goto L_08AC38EC;
    return;
L_08AC38EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC38F0;
L_08AC38F0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AC38FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08AC38FCu) goto L_08AC38FC;
    return;
L_08AC38FC:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC3918;
    }
    goto L_08AC390C;
L_08AC390C:
    ctx.gpr[31] = (0x08AC3914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3914u) goto L_08AC3914;
    return;
L_08AC3914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC3918;
L_08AC3918:
    ctx.gpr[31] = (0x08AC3920u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 299u, 0x08A55324u>(ctx, &aot_mem) && ctx.pc == 0x08AC3920u) goto L_08AC3920;
    return;
L_08AC3920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3C20;
      }
      goto L_08AC3928;
    }
L_08AC3928:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC396C;
      }
      goto L_08AC3930;
    }
L_08AC3930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC3958;
      }
      goto L_08AC393C;
    }
L_08AC393C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC394Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC394Cu) goto L_08AC394C;
    return;
L_08AC394C:
    ctx.gpr[31] = (0x08AC3954u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3954u) goto L_08AC3954;
    return;
L_08AC3954:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC3958;
L_08AC3958:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08AC3964u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3964u) goto L_08AC3964;
    return;
L_08AC3964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3C20;
      }
      goto L_08AC396C;
    }
L_08AC396C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC3984;
    }
    goto L_08AC3978;
L_08AC3978:
    ctx.gpr[31] = (0x08AC3980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3980u) goto L_08AC3980;
    return;
L_08AC3980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC3984;
L_08AC3984:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3A0C;
      }
      goto L_08AC3990;
    }
L_08AC3990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC39A4;
      }
      goto L_08AC399C;
    }
L_08AC399C:
    ctx.gpr[31] = (0x08AC39A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC39A4u) goto L_08AC39A4;
    return;
L_08AC39A4:
    ctx.gpr[31] = (0x08AC39ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem) && ctx.pc == 0x08AC39ACu) goto L_08AC39AC;
    return;
L_08AC39AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3A0C;
      }
      goto L_08AC39B4;
    }
L_08AC39B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC39DC;
      }
      goto L_08AC39C0;
    }
L_08AC39C0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC39D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC39D0u) goto L_08AC39D0;
    return;
L_08AC39D0:
    ctx.gpr[31] = (0x08AC39D8u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC39D8u) goto L_08AC39D8;
    return;
L_08AC39D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC39DC;
L_08AC39DC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AC39E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08AC39E8u) goto L_08AC39E8;
    return;
L_08AC39E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC39FC;
      }
      goto L_08AC39F4;
    }
L_08AC39F4:
    ctx.gpr[31] = (0x08AC39FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x08AC39FCu) goto L_08AC39FC;
    return;
L_08AC39FC:
    ctx.gpr[31] = (0x08AC3A04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 838u, 0x088739E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A04u) goto L_08AC3A04;
    return;
L_08AC3A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3C20;
      }
      goto L_08AC3A0C;
    }
L_08AC3A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3A20;
      }
      goto L_08AC3A18;
    }
L_08AC3A18:
    ctx.gpr[31] = (0x08AC3A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3A20u) goto L_08AC3A20;
    return;
L_08AC3A20:
    ctx.gpr[31] = (0x08AC3A28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A28u) goto L_08AC3A28;
    return;
L_08AC3A28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3A88;
      }
      goto L_08AC3A30;
    }
L_08AC3A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC3A58;
      }
      goto L_08AC3A3C;
    }
L_08AC3A3C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3A4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A4Cu) goto L_08AC3A4C;
    return;
L_08AC3A4C:
    ctx.gpr[31] = (0x08AC3A54u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A54u) goto L_08AC3A54;
    return;
L_08AC3A54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC3A58;
L_08AC3A58:
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08AC3A64u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A64u) goto L_08AC3A64;
    return;
L_08AC3A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3A78;
      }
      goto L_08AC3A70;
    }
L_08AC3A70:
    ctx.gpr[31] = (0x08AC3A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A78u) goto L_08AC3A78;
    return;
L_08AC3A78:
    ctx.gpr[31] = (0x08AC3A80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 838u, 0x088739E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3A80u) goto L_08AC3A80;
    return;
L_08AC3A80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3C20;
      }
      goto L_08AC3A88;
    }
L_08AC3A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC3AA0;
    }
    goto L_08AC3A94;
L_08AC3A94:
    ctx.gpr[31] = (0x08AC3A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3A9Cu) goto L_08AC3A9C;
    return;
L_08AC3A9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC3AA0;
L_08AC3AA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC3AC0;
      }
      goto L_08AC3AB0;
    }
L_08AC3AB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08AC3AC8;
      }
      goto L_08AC3AC0;
    }
L_08AC3AC0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AC3AC8;
L_08AC3AC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3B4C;
      }
      goto L_08AC3AD0;
    }
L_08AC3AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08AC3AE8;
    }
    goto L_08AC3ADC;
L_08AC3ADC:
    ctx.gpr[31] = (0x08AC3AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3AE4u) goto L_08AC3AE4;
    return;
L_08AC3AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08AC3AE8;
L_08AC3AE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3B4C;
      }
      goto L_08AC3AF4;
    }
L_08AC3AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC3B1C;
      }
      goto L_08AC3B00;
    }
L_08AC3B00:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3B10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B10u) goto L_08AC3B10;
    return;
L_08AC3B10:
    ctx.gpr[31] = (0x08AC3B18u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B18u) goto L_08AC3B18;
    return;
L_08AC3B18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC3B1C;
L_08AC3B1C:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08AC3B28u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B28u) goto L_08AC3B28;
    return;
L_08AC3B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3B3C;
      }
      goto L_08AC3B34;
    }
L_08AC3B34:
    ctx.gpr[31] = (0x08AC3B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B3Cu) goto L_08AC3B3C;
    return;
L_08AC3B3C:
    ctx.gpr[31] = (0x08AC3B44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 838u, 0x088739E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B44u) goto L_08AC3B44;
    return;
L_08AC3B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3C20;
      }
      goto L_08AC3B4C;
    }
L_08AC3B4C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3BAC;
      }
      goto L_08AC3B54;
    }
L_08AC3B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC3B7C;
      }
      goto L_08AC3B60;
    }
L_08AC3B60:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3B70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B70u) goto L_08AC3B70;
    return;
L_08AC3B70:
    ctx.gpr[31] = (0x08AC3B78u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B78u) goto L_08AC3B78;
    return;
L_08AC3B78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC3B7C;
L_08AC3B7C:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08AC3B88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B88u) goto L_08AC3B88;
    return;
L_08AC3B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3B9C;
      }
      goto L_08AC3B94;
    }
L_08AC3B94:
    ctx.gpr[31] = (0x08AC3B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3B9Cu) goto L_08AC3B9C;
    return;
L_08AC3B9C:
    ctx.gpr[31] = (0x08AC3BA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 838u, 0x088739E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3BA4u) goto L_08AC3BA4;
    return;
L_08AC3BA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3C20;
      }
      goto L_08AC3BAC;
    }
L_08AC3BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-996));
      if (branch_taken) {
          goto L_08AC3BD4;
      }
      goto L_08AC3BB8;
    }
L_08AC3BB8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3BC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC3BC8u) goto L_08AC3BC8;
    return;
L_08AC3BC8:
    ctx.gpr[31] = (0x08AC3BD0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3BD0u) goto L_08AC3BD0;
    return;
L_08AC3BD0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-996));
    goto L_08AC3BD4;
L_08AC3BD4:
    ctx.gpr[31] = (0x08AC3BDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 832u, 0x0882F6E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3BDCu) goto L_08AC3BDC;
    return;
L_08AC3BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC3BFC;
      }
      goto L_08AC3BE8;
    }
L_08AC3BE8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3BF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC3BF4u) goto L_08AC3BF4;
    return;
L_08AC3BF4:
    ctx.gpr[31] = (0x08AC3BFCu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3BFCu) goto L_08AC3BFC;
    return;
L_08AC3BFC:
    ctx.gpr[31] = (0x08AC3C04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 605u, 0x0882E980u>(ctx, &aot_mem) && ctx.pc == 0x08AC3C04u) goto L_08AC3C04;
    return;
L_08AC3C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3C18;
      }
      goto L_08AC3C10;
    }
L_08AC3C10:
    ctx.gpr[31] = (0x08AC3C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3C18u) goto L_08AC3C18;
    return;
L_08AC3C18:
    ctx.gpr[31] = (0x08AC3C20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 838u, 0x088739E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3C20u) goto L_08AC3C20;
    return;
L_08AC3C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3C34;
      }
      goto L_08AC3C2C;
    }
L_08AC3C2C:
    ctx.gpr[31] = (0x08AC3C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem) && ctx.pc == 0x08AC3C34u) goto L_08AC3C34;
    return;
L_08AC3C34:
    ctx.gpr[31] = (0x08AC3C3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 832u, 0x088739A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3C3Cu) goto L_08AC3C3C;
    return;
L_08AC3C3C:
    ctx.gpr[31] = (0x08AC3C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 693u, 0x08936810u>(ctx, &aot_mem) && ctx.pc == 0x08AC3C44u) goto L_08AC3C44;
    return;
L_08AC3C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC3C6C;
      }
      goto L_08AC3C50;
    }
L_08AC3C50:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3C60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC3C60u) goto L_08AC3C60;
    return;
L_08AC3C60:
    ctx.gpr[31] = (0x08AC3C68u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3C68u) goto L_08AC3C68;
    return;
L_08AC3C68:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AC3C6C;
L_08AC3C6C:
    ctx.gpr[31] = (0x08AC3C74u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC3C74u) goto L_08AC3C74;
    return;
L_08AC3C74:
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
L_08AC3C94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9192), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC3CB8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 510u, 0x08A0603Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3CB8u) goto L_08AC3CB8;
    return;
L_08AC3CB8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7580), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08AC3CC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A05EFCu>(ctx, &aot_mem) && ctx.pc == 0x08AC3CC4u) goto L_08AC3CC4;
    return;
L_08AC3CC4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AC3CD0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4212), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08AC3CD0u) goto L_08AC3CD0;
    return;
L_08AC3CD0:
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[16] = (2279u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17584));
      if (branch_taken) {
          goto L_08AC3CF0;
      }
      goto L_08AC3CE4;
    }
L_08AC3CE4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC3CF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 559u, 0x08946D60u>(ctx, &aot_mem) && ctx.pc == 0x08AC3CF0u) goto L_08AC3CF0;
    return;
L_08AC3CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AC3D18;
      }
      goto L_08AC3CFC;
    }
L_08AC3CFC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3D0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC3D0Cu) goto L_08AC3D0C;
    return;
L_08AC3D0C:
    ctx.gpr[31] = (0x08AC3D14u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3D14u) goto L_08AC3D14;
    return;
L_08AC3D14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08AC3D18;
L_08AC3D18:
    ctx.gpr[31] = (0x08AC3D20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 610u, 0x0882E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC3D20u) goto L_08AC3D20;
    return;
L_08AC3D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC3D40;
      }
      goto L_08AC3D2C;
    }
L_08AC3D2C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC3D38u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x08AC3D38u) goto L_08AC3D38;
    return;
L_08AC3D38:
    ctx.gpr[31] = (0x08AC3D40u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-1032));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08AC3D40u) goto L_08AC3D40;
    return;
L_08AC3D40:
    ctx.gpr[31] = (0x08AC3D48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 328u, 0x0882DA4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3D48u) goto L_08AC3D48;
    return;
L_08AC3D48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC3D54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 528u, 0x08A0611Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3D54u) goto L_08AC3D54;
    return;
L_08AC3D54:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC3D60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 532u, 0x08A06154u>(ctx, &aot_mem) && ctx.pc == 0x08AC3D60u) goto L_08AC3D60;
    return;
L_08AC3D60:
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08AC3D68;
L_08AC3D68:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AC3D68;
      }
      goto L_08AC3D7C;
    }
L_08AC3D7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[31] = (0x08AC3D88u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 563u, 0x08A063ACu>(ctx, &aot_mem) && ctx.pc == 0x08AC3D88u) goto L_08AC3D88;
    return;
L_08AC3D88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2236u << 16u);
      if (branch_taken) {
          goto L_08AC3DA4;
      }
      goto L_08AC3D94;
    }
L_08AC3D94:
    ctx.gpr[31] = (0x08AC3D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 358u, 0x08991788u>(ctx, &aot_mem) && ctx.pc == 0x08AC3D9Cu) goto L_08AC3D9C;
    return;
L_08AC3D9C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2236u << 16u);
    goto L_08AC3DA4;
L_08AC3DA4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24904), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2856), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2864), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2860), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2896), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
        goto L_08AC3DD8;
    }
    goto L_08AC3DCC;
L_08AC3DCC:
    ctx.gpr[31] = (0x08AC3DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem) && ctx.pc == 0x08AC3DD4u) goto L_08AC3DD4;
    return;
L_08AC3DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08AC3DD8;
L_08AC3DD8:
    ctx.gpr[31] = (0x08AC3DE0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 645u, 0x089C6DF4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3DE0u) goto L_08AC3DE0;
    return;
L_08AC3DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3DF8;
      }
      goto L_08AC3DEC;
    }
L_08AC3DEC:
    ctx.gpr[31] = (0x08AC3DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3DF4u) goto L_08AC3DF4;
    return;
L_08AC3DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AC3DF8;
L_08AC3DF8:
    ctx.gpr[31] = (0x08AC3E00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 643u, 0x089BB010u>(ctx, &aot_mem) && ctx.pc == 0x08AC3E00u) goto L_08AC3E00;
    return;
L_08AC3E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3E18;
      }
      goto L_08AC3E0C;
    }
L_08AC3E0C:
    ctx.gpr[31] = (0x08AC3E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3E14u) goto L_08AC3E14;
    return;
L_08AC3E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AC3E18;
L_08AC3E18:
    ctx.gpr[31] = (0x08AC3E20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 640u, 0x089BAFF8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3E20u) goto L_08AC3E20;
    return;
L_08AC3E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC3E38;
      }
      goto L_08AC3E2C;
    }
L_08AC3E2C:
    ctx.gpr[31] = (0x08AC3E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3E34u) goto L_08AC3E34;
    return;
L_08AC3E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08AC3E38;
L_08AC3E38:
    ctx.gpr[31] = (0x08AC3E40u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 688u, 0x089BB290u>(ctx, &aot_mem) && ctx.pc == 0x08AC3E40u) goto L_08AC3E40;
    return;
L_08AC3E40:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-8140), 0u);
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
L_08AC3E5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC3E88u);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 340u, 0x08935484u>(ctx, &aot_mem) && ctx.pc == 0x08AC3E88u) goto L_08AC3E88;
    return;
L_08AC3E88:
    ctx.gpr[4] = (2280u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC3E98u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2320));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3E98u) goto L_08AC3E98;
    return;
L_08AC3E98:
    ctx.gpr[31] = (0x08AC3EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 28u, 0x08990190u>(ctx, &aot_mem) && ctx.pc == 0x08AC3EA0u) goto L_08AC3EA0;
    return;
L_08AC3EA0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7652), ctx.gpr[4]);
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(13984));
    ctx.gpr[31] = (0x08AC3EC0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14004));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 329u, 0x089353A0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3EC0u) goto L_08AC3EC0;
    return;
L_08AC3EC0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC3ED4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3ED4u) goto L_08AC3ED4;
    return;
L_08AC3ED4:
    ctx.gpr[31] = (0x08AC3EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 455u, 0x08966DC8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3EDCu) goto L_08AC3EDC;
    return;
L_08AC3EDC:
    ctx.gpr[31] = (0x08AC3EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 373u, 0x08A92D14u>(ctx, &aot_mem) && ctx.pc == 0x08AC3EE4u) goto L_08AC3EE4;
    return;
L_08AC3EE4:
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32304));
    ctx.gpr[31] = (0x08AC3EF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0135_entry, 135u, 299u, 0x08A22268u>(ctx, &aot_mem) && ctx.pc == 0x08AC3EF4u) goto L_08AC3EF4;
    return;
L_08AC3EF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    ctx.gpr[31] = (0x08AC3F00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 194u, 0x08A1D178u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F00u) goto L_08AC3F00;
    return;
L_08AC3F00:
    ctx.gpr[31] = (0x08AC3F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 589u, 0x08932C94u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F08u) goto L_08AC3F08;
    return;
L_08AC3F08:
    ctx.gpr[31] = (0x08AC3F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 159u, 0x0895D300u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F10u) goto L_08AC3F10;
    return;
L_08AC3F10:
    ctx.gpr[31] = (0x08AC3F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 469u, 0x08AFB424u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F18u) goto L_08AC3F18;
    return;
L_08AC3F18:
    ctx.gpr[31] = (0x08AC3F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 736u, 0x089737F8u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F20u) goto L_08AC3F20;
    return;
L_08AC3F20:
    ctx.gpr[31] = (0x08AC3F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 526u, 0x08B3E27Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3F28u) goto L_08AC3F28;
    return;
L_08AC3F28:
    ctx.gpr[31] = (0x08AC3F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 799u, 0x08953898u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F30u) goto L_08AC3F30;
    return;
L_08AC3F30:
    ctx.gpr[31] = (0x08AC3F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 136u, 0x08AB8970u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F38u) goto L_08AC3F38;
    return;
L_08AC3F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    ctx.gpr[20] = (2238u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-6992));
      if (branch_taken) {
          goto L_08AC3F50;
      }
      goto L_08AC3F48;
    }
L_08AC3F48:
    ctx.gpr[31] = (0x08AC3F50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 748u, 0x08B671D4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F50u) goto L_08AC3F50;
    return;
L_08AC3F50:
    ctx.gpr[31] = (0x08AC3F58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 284u, 0x0886DB9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3F58u) goto L_08AC3F58;
    return;
L_08AC3F58:
    ctx.gpr[31] = (0x08AC3F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 476u, 0x08ABAA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3F60u) goto L_08AC3F60;
    return;
L_08AC3F60:
    ctx.gpr[31] = (0x08AC3F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 153u, 0x08990B50u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F68u) goto L_08AC3F68;
    return;
L_08AC3F68:
    ctx.gpr[31] = (0x08AC3F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 34u, 0x08A94214u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F70u) goto L_08AC3F70;
    return;
L_08AC3F70:
    ctx.gpr[31] = (0x08AC3F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 223u, 0x088919FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC3F78u) goto L_08AC3F78;
    return;
L_08AC3F78:
    ctx.gpr[31] = (0x08AC3F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 299u, 0x0898124Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3F80u) goto L_08AC3F80;
    return;
L_08AC3F80:
    ctx.gpr[31] = (0x08AC3F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 775u, 0x088FF808u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F88u) goto L_08AC3F88;
    return;
L_08AC3F88:
    ctx.gpr[31] = (0x08AC3F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 286u, 0x08B41098u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F90u) goto L_08AC3F90;
    return;
L_08AC3F90:
    ctx.gpr[31] = (0x08AC3F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 518u, 0x088F27E4u>(ctx, &aot_mem) && ctx.pc == 0x08AC3F98u) goto L_08AC3F98;
    return;
L_08AC3F98:
    ctx.gpr[31] = (0x08AC3FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 319u, 0x08AED434u>(ctx, &aot_mem) && ctx.pc == 0x08AC3FA0u) goto L_08AC3FA0;
    return;
L_08AC3FA0:
    ctx.gpr[31] = (0x08AC3FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 394u, 0x088B9D3Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3FA8u) goto L_08AC3FA8;
    return;
L_08AC3FA8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_08AC3FB4;
L_08AC3FB4:
    ctx.gpr[31] = (0x08AC3FBCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 87u, 0x089606D0u>(ctx, &aot_mem) && ctx.pc == 0x08AC3FBCu) goto L_08AC3FBC;
    return;
L_08AC3FBC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(352));
      if (branch_taken) {
          goto L_08AC3FB4;
      }
      goto L_08AC3FCC;
    }
L_08AC3FCC:
    ctx.gpr[4] = (17136u << 16u);
    ctx.gpr[31] = (0x08AC3FD8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 437u, 0x08975D44u>(ctx, &aot_mem) && ctx.pc == 0x08AC3FD8u) goto L_08AC3FD8;
    return;
L_08AC3FD8:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-968));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7804), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AC3FF8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 355u, 0x0893570Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC3FF8u) goto L_08AC3FF8;
    return;
L_08AC3FF8:
    ctx.gpr[31] = (0x08AC4000u);
    ctx.gpr[4] = (0u | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0175(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0175_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_175(Runtime &runtime) {
    runtime.register_generated_unit(175u, 0x08AC0000u, 16384u, &recomp_unit_0175, &recomp_unit_0175_entry);
    runtime.register_function(0x08AC0000u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0004u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0014u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC001Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC002Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0034u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0044u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC004Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC005Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0064u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0074u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0088u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0094u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC00A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC00B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC00D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC00D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC00E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0110u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0118u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0120u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0130u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0140u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0150u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC016Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0180u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0190u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC01F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0218u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC022Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0238u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0254u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0260u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC02F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0318u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC032Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC033Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC034Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC035Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0364u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0370u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0378u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0384u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0388u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC03F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0400u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0408u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0410u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0418u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0430u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC044Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0458u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0460u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0468u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC046Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0474u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0480u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0488u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0490u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0498u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC04FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0508u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0510u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0518u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0520u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0528u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0540u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0560u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0570u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC057Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0588u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC059Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC05F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0608u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0614u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0624u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0630u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0648u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0664u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0670u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0678u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC067Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0684u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC068Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0690u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0698u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC06A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC06B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC06C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC06D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC06E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0700u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC070Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0714u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0718u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0730u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0744u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC075Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0764u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0774u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0788u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0790u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC07B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC07C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC07CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC07E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC07ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC07F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0804u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0808u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0820u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC083Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0848u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC085Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0874u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0898u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC08B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC08C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC08CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC08D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC08E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0904u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0910u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC091Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0924u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0938u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0960u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC097Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0988u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC099Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC09FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A1Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A44u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A50u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0A9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0AA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0AC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0AD0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0AE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0AECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0AF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0AFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B08u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B14u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B1Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0B9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BE8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0BECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C2Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C44u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0C90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CCCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CDCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0CFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D10u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0D98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0DA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0DB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0DBCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0DC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0DD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0DD8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0DF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E14u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E2Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E80u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E8Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0E98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0EA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0EA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0EBCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0EE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0EECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0EF8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F00u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0F98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0FBCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0FCCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC0FF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1000u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1024u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1030u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC103Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1050u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1064u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1068u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1080u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC10F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC110Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC112Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC115Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1168u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1170u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1178u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1180u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1188u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC11F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1200u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1208u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1228u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC123Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC124Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC126Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC127Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1294u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC12A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC12C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC12CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC12E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1310u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1324u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC134Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1358u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1360u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC137Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC13ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC13C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC13CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC13E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1414u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1424u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC143Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1444u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC144Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC145Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1474u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1498u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC14E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1500u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1524u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1530u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC153Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1550u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC155Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1560u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1578u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC15A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC15B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC15BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC15C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC15C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC15D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1614u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1620u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1630u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1638u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1640u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1644u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1658u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC167Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1694u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1698u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC169Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC16A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC16ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC16C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1714u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1728u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC172Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC173Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1754u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1760u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1768u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1774u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1784u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC17F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1800u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1808u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1810u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC181Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1824u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1840u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1860u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1868u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1870u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1878u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC188Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC189Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC18B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC18CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC18E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC18FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC190Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1924u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1934u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC194Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC195Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1978u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1988u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC19ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1A90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1AB0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1AC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1ADCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1AE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1B84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1BA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1BB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1BFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1C0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1C24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1C68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1C90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1C98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CD0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CD8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CE8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1CF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D08u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D14u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D1Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D50u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1D74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1DB0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1DC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1DD0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E00u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E14u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E1Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1E84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1EA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1EB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1EC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1EC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1ED0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1ED8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1EDCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1EE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1EECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F00u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F1Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F44u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F80u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1F9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1FA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1FACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1FC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1FDCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1FE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC1FF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2018u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2024u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC202Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2034u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC203Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2040u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC204Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2064u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC20D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC20D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC20ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2104u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC210Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2110u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC211Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC212Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2158u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC216Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC217Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2184u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2190u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2198u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC21A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC21B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC21C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC21CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC21D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC21E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC21F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC221Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2234u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2248u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2260u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2280u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2288u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2294u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC22A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC22ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC22B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC22BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC22E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC22ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2300u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2304u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2318u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2344u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2350u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2378u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2380u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC238Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC239Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC23A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC23B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC23C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC23CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC23D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC23DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC23E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC23F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC23F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2400u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2414u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC242Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2458u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2470u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC247Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2488u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2494u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC249Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC24F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC250Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2514u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2520u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC252Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2538u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2540u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2544u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2548u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2554u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2564u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2590u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC25E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2690u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC269Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC26B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC26C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2718u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2734u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2744u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2750u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2758u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2778u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2784u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC278Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC27C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC27D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC27D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC27F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2800u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2808u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2824u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2830u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2838u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC285Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2868u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2870u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC28F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2924u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2958u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2968u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2974u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC29F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2A84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2AA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2AC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2AD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2AF8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B14u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2B98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2BECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2BF8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C50u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C60u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2C90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CD8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2CF8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D34u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D84u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2D98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DCCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DD0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DD8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DDCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2DECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E24u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2E98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2EA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2EB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2EBCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2EC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2ED0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2ED8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2EE8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F60u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2F9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2FA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2FB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2FC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2FD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2FE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2FF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC2FFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3010u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3034u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC303Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3044u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC304Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3060u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3068u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3070u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3078u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3084u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC308Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3094u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC309Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC30FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3100u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3104u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC310Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3118u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3124u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC312Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3134u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC313Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3144u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC314Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3168u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3180u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3188u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3194u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31B0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31C8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC31F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3200u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3208u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3214u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC321Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3220u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3228u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3230u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3238u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3240u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3248u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3250u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3258u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3260u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3268u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC327Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC32B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC32D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC32E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC32F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3300u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3308u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3310u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC331Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3324u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3330u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC333Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3344u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC334Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3358u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3370u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3378u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3380u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3388u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3390u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3398u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC33F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3418u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC343Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3444u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3454u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3460u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3468u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3470u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3478u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3480u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC348Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3494u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC349Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC34F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3508u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3510u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3518u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3520u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3528u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3530u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3538u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3540u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3548u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3550u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC355Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3578u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3590u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3598u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC35F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3600u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3608u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3610u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3618u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3620u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3628u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3630u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3638u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3640u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3648u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3650u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3658u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3660u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3668u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3674u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC367Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3688u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC36A8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC36D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC36FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3740u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3748u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC375Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3778u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC377Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3780u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3788u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3790u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3798u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37BCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37C4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37D4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37E0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC37F8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3800u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3808u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3818u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3828u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3830u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3834u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC383Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3848u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3858u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3860u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3864u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3870u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC387Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3888u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3890u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3898u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC38A0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC38ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC38B8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC38C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC38CCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC38D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC38E4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC38ECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC38F0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC38FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC390Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3914u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3918u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3920u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3928u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3930u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC393Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC394Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3954u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3958u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3964u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC396Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3978u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3980u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3984u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3990u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC399Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39A4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39ACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39B4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39C0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39D0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39D8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39DCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39E8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39F4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC39FCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A64u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A80u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3A9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3AA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3AB0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3AC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3AC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3AD0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3ADCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3AE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3AE8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3AF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B00u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B10u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B1Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B34u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B44u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B4Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B60u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3B9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BACu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BC8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BD0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BDCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BE8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3BFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C04u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C10u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C2Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C34u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C3Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C44u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C50u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C60u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C6Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C74u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3C94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3CB8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3CC4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3CD0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3CE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3CF0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3CFCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D14u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D2Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D54u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D60u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D7Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D94u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3D9Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DA4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DCCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DD4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DD8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DE0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DECu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3DF8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E00u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E0Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E14u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E2Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E34u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E40u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E5Cu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3E98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3EA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3EC0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3ED4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3EDCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3EE4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3EF4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F00u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F08u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F10u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F18u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F20u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F28u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F30u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F38u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F48u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F50u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F58u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F60u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F68u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F70u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F78u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F80u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F88u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F90u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3F98u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FA0u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FA8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FB4u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FBCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FCCu, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FD8u, &recomp_unit_0175, "recomp_unit_0175");
    runtime.register_function(0x08AC3FF8u, &recomp_unit_0175, "recomp_unit_0175");
}
} // namespace psprecomp
