#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0038[4096] = {
    1, 0, 2, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0,
    0, 9, 0, 10, 0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0,
    0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0,
    28, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 37,
    0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0,
    0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 79,
    0, 80, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 89,
    0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0,
    97, 98, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 104, 0, 105, 0, 0,
    106, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 0, 0, 129, 0,
    0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148,
    149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0,
    0, 0, 0, 157, 158, 0, 0, 159, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0,
    164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0,
    0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0,
    209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    215, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0, 243,
    0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 0,
    0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 0, 260, 0, 261, 0, 262, 0, 0, 263,
    0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 0, 276, 0,
    0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 282, 283, 0, 0, 0, 0, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 290, 291, 0, 292, 0, 0, 0, 293, 0, 0,
    0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 306, 0,
    307, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 0, 315, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 323, 0, 324, 0, 0, 325, 0, 0, 0, 0, 326, 327, 0, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 332, 0, 333, 0, 0, 334, 0,
    335, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0,
    0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 354, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    359, 0, 360, 0, 0, 361, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 0, 369,
    0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0,
    0, 377, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 382, 0, 383, 0, 0, 384, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 0, 394, 0, 0, 395, 0,
    396, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 408,
    0, 409, 0, 0, 410, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0,
    416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 420, 0, 0, 0, 421, 0, 0, 0, 0,
    0, 422, 0, 0, 423, 0, 0, 424, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0,
    430, 0, 431, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 435, 0, 0, 0, 436, 0, 437, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 448,
    0, 449, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 459, 0, 460, 0, 0, 461,
    462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0,
    0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0,
    0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0, 478, 0, 479, 0, 480, 481, 0, 0, 0, 482, 0, 0,
    0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 490, 0, 0, 491, 0, 492, 0,
    0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0, 499, 0, 0, 500, 0,
    501, 0, 502, 0, 503, 0, 0, 504, 0, 0, 505, 0, 506, 0, 0, 507, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 511,
    0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 519,
    0, 0, 520, 0, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 527,
    0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 530, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0,
    0, 535, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541,
    0, 0, 0, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 546, 0, 547, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 551,
    0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 561, 562, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0,
    0, 565, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 573,
    0, 0, 0, 0, 574, 0, 0, 575, 576, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 0, 583,
    0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 595, 0,
    0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 0,
    0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 605, 0, 606, 0, 607, 608, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0,
    0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 617,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0,
    0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 626, 0, 627, 0,
    628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0,
    634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 639, 0, 640, 0, 641, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 646, 0,
    0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0, 653, 654,
    0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 660,
    0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0,
    0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 673, 0, 674, 0, 675, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679,
    0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0, 684, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 692, 0,
    693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 696, 0, 697, 698, 0, 0, 0, 699, 0, 700, 0,
    701, 0, 702, 0, 0, 0, 0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0,
    0, 0, 0, 711, 0, 712, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0,
    720, 0, 721, 0, 722, 0, 0, 0, 723, 0, 724, 0, 725, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 729, 0,
    0, 0, 730, 0, 731, 0, 732, 0, 733, 0, 734, 0, 0, 0, 735, 0, 0, 0, 736, 0, 737, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0,
    0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 744,
    0, 0, 745, 0, 746, 0, 0, 747, 0, 748, 0, 749, 0, 0, 0, 0, 0, 750, 0, 0, 0, 751, 0, 752, 0, 753, 0, 0, 0, 0, 0, 754,
    0, 755, 0, 0, 756, 0, 757, 0, 758, 0, 0, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 762, 763, 0, 0, 0,
    764, 0, 765, 0, 0, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 768, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 775, 0,
    0, 0, 0, 0, 0, 776, 0, 0, 0, 777, 0, 778, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0,
    783, 0, 784, 0, 0, 0, 785, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 789, 790, 0,
    0, 0, 0, 791, 0, 792, 0, 0, 0, 793, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0,
    0, 798, 0, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 801, 0, 0, 0, 802, 0, 0, 0, 803, 0, 804, 0, 805, 0, 0, 0, 806, 0, 0,
    807, 0, 0, 0, 808, 0, 0, 0, 809, 0, 810, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0,
    814, 0, 815, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0,
    0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 825, 0,
    826, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 830, 0, 0, 0, 0, 0, 0, 831, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 834, 0, 835, 0, 836, 0, 0, 0, 0, 837, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 838, 0, 0, 0, 839, 0, 840, 0, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 842,
    0, 843, 0, 844, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 848, 0, 0, 0,
    849, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 0, 854, 0, 0, 0, 855, 0, 0,
    0, 856, 0, 0, 0, 0, 857, 0, 858, 0, 859, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0,
    862, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 866, 0, 867, 0, 0, 0, 0, 0, 0, 868, 0, 0, 869, 0, 870,
};
void recomp_unit_0038_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0889C000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0038[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0889C000;
    case 2u: goto L_0889C008;
    case 3u: goto L_0889C014;
    case 4u: goto L_0889C01C;
    case 5u: goto L_0889C024;
    case 6u: goto L_0889C054;
    case 7u: goto L_0889C06C;
    case 8u: goto L_0889C074;
    case 9u: goto L_0889C084;
    case 10u: goto L_0889C08C;
    case 11u: goto L_0889C094;
    case 12u: goto L_0889C09C;
    case 13u: goto L_0889C0A8;
    case 14u: goto L_0889C0B0;
    case 15u: goto L_0889C0B8;
    case 16u: goto L_0889C0C0;
    case 17u: goto L_0889C0D4;
    case 18u: goto L_0889C0E4;
    case 19u: goto L_0889C0F0;
    case 20u: goto L_0889C0F8;
    case 21u: goto L_0889C114;
    case 22u: goto L_0889C120;
    case 23u: goto L_0889C13C;
    case 24u: goto L_0889C14C;
    case 25u: goto L_0889C158;
    case 26u: goto L_0889C160;
    case 27u: goto L_0889C168;
    case 28u: goto L_0889C180;
    case 29u: goto L_0889C188;
    case 30u: goto L_0889C194;
    case 31u: goto L_0889C1A4;
    case 32u: goto L_0889C1B4;
    case 33u: goto L_0889C1C4;
    case 34u: goto L_0889C1CC;
    case 35u: goto L_0889C1E0;
    case 36u: goto L_0889C1F0;
    case 37u: goto L_0889C1FC;
    case 38u: goto L_0889C204;
    case 39u: goto L_0889C21C;
    case 40u: goto L_0889C234;
    case 41u: goto L_0889C23C;
    case 42u: goto L_0889C254;
    case 43u: goto L_0889C26C;
    case 44u: goto L_0889C274;
    case 45u: goto L_0889C298;
    case 46u: goto L_0889C2A0;
    case 47u: goto L_0889C2A8;
    case 48u: goto L_0889C2C0;
    case 49u: goto L_0889C2C8;
    case 50u: goto L_0889C2D0;
    case 51u: goto L_0889C2F8;
    case 52u: goto L_0889C378;
    case 53u: goto L_0889C380;
    case 54u: goto L_0889C388;
    case 55u: goto L_0889C394;
    case 56u: goto L_0889C3B0;
    case 57u: goto L_0889C3B8;
    case 58u: goto L_0889C3DC;
    case 59u: goto L_0889C3E4;
    case 60u: goto L_0889C3EC;
    case 61u: goto L_0889C404;
    case 62u: goto L_0889C40C;
    case 63u: goto L_0889C414;
    case 64u: goto L_0889C43C;
    case 65u: goto L_0889C4B8;
    case 66u: goto L_0889C4C0;
    case 67u: goto L_0889C4D8;
    case 68u: goto L_0889C4E8;
    case 69u: goto L_0889C4F4;
    case 70u: goto L_0889C570;
    case 71u: goto L_0889C580;
    case 72u: goto L_0889C590;
    case 73u: goto L_0889C5A0;
    case 74u: goto L_0889C5B0;
    case 75u: goto L_0889C5B8;
    case 76u: goto L_0889C5C0;
    case 77u: goto L_0889C5E0;
    case 78u: goto L_0889C5F4;
    case 79u: goto L_0889C5FC;
    case 80u: goto L_0889C604;
    case 81u: goto L_0889C608;
    case 82u: goto L_0889C644;
    case 83u: goto L_0889C6B4;
    case 84u: goto L_0889C6E8;
    case 85u: goto L_0889C734;
    case 86u: goto L_0889C73C;
    case 87u: goto L_0889C758;
    case 88u: goto L_0889C774;
    case 89u: goto L_0889C77C;
    case 90u: goto L_0889C784;
    case 91u: goto L_0889C798;
    case 92u: goto L_0889C7A8;
    case 93u: goto L_0889C7B0;
    case 94u: goto L_0889C7B8;
    case 95u: goto L_0889C7D4;
    case 96u: goto L_0889C7E8;
    case 97u: goto L_0889C800;
    case 98u: goto L_0889C804;
    case 99u: goto L_0889C814;
    case 100u: goto L_0889C828;
    case 101u: goto L_0889C83C;
    case 102u: goto L_0889C84C;
    case 103u: goto L_0889C85C;
    case 104u: goto L_0889C86C;
    case 105u: goto L_0889C874;
    case 106u: goto L_0889C880;
    case 107u: goto L_0889C890;
    case 108u: goto L_0889C898;
    case 109u: goto L_0889C8A0;
    case 110u: goto L_0889C8B4;
    case 111u: goto L_0889C8BC;
    case 112u: goto L_0889C8D0;
    case 113u: goto L_0889C8E4;
    case 114u: goto L_0889C8FC;
    case 115u: goto L_0889C90C;
    case 116u: goto L_0889C920;
    case 117u: goto L_0889C92C;
    case 118u: goto L_0889C940;
    case 119u: goto L_0889C950;
    case 120u: goto L_0889C968;
    case 121u: goto L_0889C984;
    case 122u: goto L_0889C99C;
    case 123u: goto L_0889C9A4;
    case 124u: goto L_0889C9B8;
    case 125u: goto L_0889C9C8;
    case 126u: goto L_0889C9D8;
    case 127u: goto L_0889C9E0;
    case 128u: goto L_0889C9E8;
    case 129u: goto L_0889C9F8;
    case 130u: goto L_0889CA0C;
    case 131u: goto L_0889CA1C;
    case 132u: goto L_0889CA24;
    case 133u: goto L_0889CA2C;
    case 134u: goto L_0889CA54;
    case 135u: goto L_0889CA70;
    case 136u: goto L_0889CA78;
    case 137u: goto L_0889CA8C;
    case 138u: goto L_0889CAA0;
    case 139u: goto L_0889CAB0;
    case 140u: goto L_0889CAB8;
    case 141u: goto L_0889CAC0;
    case 142u: goto L_0889CAE8;
    case 143u: goto L_0889CB04;
    case 144u: goto L_0889CB50;
    case 145u: goto L_0889CB54;
    case 146u: goto L_0889CB5C;
    case 147u: goto L_0889CB64;
    case 148u: goto L_0889CB7C;
    case 149u: goto L_0889CB80;
    case 150u: goto L_0889CB94;
    case 151u: goto L_0889CBAC;
    case 152u: goto L_0889CBE8;
    case 153u: goto L_0889CC14;
    case 154u: goto L_0889CC40;
    case 155u: goto L_0889CC5C;
    case 156u: goto L_0889CC70;
    case 157u: goto L_0889CC8C;
    case 158u: goto L_0889CC90;
    case 159u: goto L_0889CC9C;
    case 160u: goto L_0889CCA0;
    case 161u: goto L_0889CCD8;
    case 162u: goto L_0889CCE4;
    case 163u: goto L_0889CCF0;
    case 164u: goto L_0889CD00;
    case 165u: goto L_0889CD08;
    case 166u: goto L_0889CD24;
    case 167u: goto L_0889CD30;
    case 168u: goto L_0889CD38;
    case 169u: goto L_0889CD4C;
    case 170u: goto L_0889CD5C;
    case 171u: goto L_0889CD80;
    case 172u: goto L_0889CD90;
    case 173u: goto L_0889CDB0;
    case 174u: goto L_0889CDCC;
    case 175u: goto L_0889CDF0;
    case 176u: goto L_0889CDF8;
    case 177u: goto L_0889CE04;
    case 178u: goto L_0889CE34;
    case 179u: goto L_0889CE40;
    case 180u: goto L_0889CE4C;
    case 181u: goto L_0889CE50;
    case 182u: goto L_0889CE80;
    case 183u: goto L_0889CE90;
    case 184u: goto L_0889CEA4;
    case 185u: goto L_0889CEAC;
    case 186u: goto L_0889CEC8;
    case 187u: goto L_0889CED8;
    case 188u: goto L_0889CEF0;
    case 189u: goto L_0889CEF8;
    case 190u: goto L_0889CF10;
    case 191u: goto L_0889CF1C;
    case 192u: goto L_0889CF24;
    case 193u: goto L_0889CF40;
    case 194u: goto L_0889CF54;
    case 195u: goto L_0889CF5C;
    case 196u: goto L_0889CF70;
    case 197u: goto L_0889CFB8;
    case 198u: goto L_0889CFDC;
    case 199u: goto L_0889CFE4;
    case 200u: goto L_0889CFF0;
    case 201u: goto L_0889CFFC;
    case 202u: goto L_0889D028;
    case 203u: goto L_0889D038;
    case 204u: goto L_0889D044;
    case 205u: goto L_0889D04C;
    case 206u: goto L_0889D058;
    case 207u: goto L_0889D060;
    case 208u: goto L_0889D068;
    case 209u: goto L_0889D080;
    case 210u: goto L_0889D088;
    case 211u: goto L_0889D090;
    case 212u: goto L_0889D0AC;
    case 213u: goto L_0889D0C4;
    case 214u: goto L_0889D0F4;
    case 215u: goto L_0889D100;
    case 216u: goto L_0889D114;
    case 217u: goto L_0889D124;
    case 218u: goto L_0889D140;
    case 219u: goto L_0889D160;
    case 220u: goto L_0889D170;
    case 221u: goto L_0889D184;
    case 222u: goto L_0889D19C;
    case 223u: goto L_0889D1A4;
    case 224u: goto L_0889D1B4;
    case 225u: goto L_0889D1C0;
    case 226u: goto L_0889D1D4;
    case 227u: goto L_0889D1DC;
    case 228u: goto L_0889D1EC;
    case 229u: goto L_0889D1FC;
    case 230u: goto L_0889D250;
    case 231u: goto L_0889D260;
    case 232u: goto L_0889D26C;
    case 233u: goto L_0889D274;
    case 234u: goto L_0889D28C;
    case 235u: goto L_0889D2A8;
    case 236u: goto L_0889D2B4;
    case 237u: goto L_0889D2C0;
    case 238u: goto L_0889D2C8;
    case 239u: goto L_0889D2D0;
    case 240u: goto L_0889D2DC;
    case 241u: goto L_0889D2E4;
    case 242u: goto L_0889D2F0;
    case 243u: goto L_0889D2FC;
    case 244u: goto L_0889D308;
    case 245u: goto L_0889D314;
    case 246u: goto L_0889D320;
    case 247u: goto L_0889D32C;
    case 248u: goto L_0889D330;
    case 249u: goto L_0889D344;
    case 250u: goto L_0889D358;
    case 251u: goto L_0889D364;
    case 252u: goto L_0889D374;
    case 253u: goto L_0889D398;
    case 254u: goto L_0889D3A0;
    case 255u: goto L_0889D3AC;
    case 256u: goto L_0889D3B8;
    case 257u: goto L_0889D3C4;
    case 258u: goto L_0889D3CC;
    case 259u: goto L_0889D3D4;
    case 260u: goto L_0889D3E0;
    case 261u: goto L_0889D3E8;
    case 262u: goto L_0889D3F0;
    case 263u: goto L_0889D3FC;
    case 264u: goto L_0889D408;
    case 265u: goto L_0889D420;
    case 266u: goto L_0889D43C;
    case 267u: goto L_0889D444;
    case 268u: goto L_0889D458;
    case 269u: goto L_0889D46C;
    case 270u: goto L_0889D490;
    case 271u: goto L_0889D498;
    case 272u: goto L_0889D4A8;
    case 273u: goto L_0889D4C0;
    case 274u: goto L_0889D4DC;
    case 275u: goto L_0889D4E8;
    case 276u: goto L_0889D4F8;
    case 277u: goto L_0889D50C;
    case 278u: goto L_0889D534;
    case 279u: goto L_0889D540;
    case 280u: goto L_0889D550;
    case 281u: goto L_0889D558;
    case 282u: goto L_0889D564;
    case 283u: goto L_0889D568;
    case 284u: goto L_0889D588;
    case 285u: goto L_0889D5B4;
    case 286u: goto L_0889D5BC;
    case 287u: goto L_0889D5C4;
    case 288u: goto L_0889D5CC;
    case 289u: goto L_0889D5D4;
    case 290u: goto L_0889D5D8;
    case 291u: goto L_0889D5DC;
    case 292u: goto L_0889D5E4;
    case 293u: goto L_0889D5F4;
    case 294u: goto L_0889D610;
    case 295u: goto L_0889D630;
    case 296u: goto L_0889D648;
    case 297u: goto L_0889D650;
    case 298u: goto L_0889D658;
    case 299u: goto L_0889D668;
    case 300u: goto L_0889D684;
    case 301u: goto L_0889D6A8;
    case 302u: goto L_0889D6B0;
    case 303u: goto L_0889D6B8;
    case 304u: goto L_0889D6C4;
    case 305u: goto L_0889D6DC;
    case 306u: goto L_0889D6F8;
    case 307u: goto L_0889D700;
    case 308u: goto L_0889D70C;
    case 309u: goto L_0889D718;
    case 310u: goto L_0889D724;
    case 311u: goto L_0889D72C;
    case 312u: goto L_0889D738;
    case 313u: goto L_0889D740;
    case 314u: goto L_0889D748;
    case 315u: goto L_0889D754;
    case 316u: goto L_0889D758;
    case 317u: goto L_0889D76C;
    case 318u: goto L_0889D790;
    case 319u: goto L_0889D79C;
    case 320u: goto L_0889D7A4;
    case 321u: goto L_0889D7B0;
    case 322u: goto L_0889D7C0;
    case 323u: goto L_0889D7C8;
    case 324u: goto L_0889D7D0;
    case 325u: goto L_0889D7DC;
    case 326u: goto L_0889D7F0;
    case 327u: goto L_0889D7F4;
    case 328u: goto L_0889D80C;
    case 329u: goto L_0889D840;
    case 330u: goto L_0889D84C;
    case 331u: goto L_0889D858;
    case 332u: goto L_0889D864;
    case 333u: goto L_0889D86C;
    case 334u: goto L_0889D878;
    case 335u: goto L_0889D880;
    case 336u: goto L_0889D88C;
    case 337u: goto L_0889D898;
    case 338u: goto L_0889D8A4;
    case 339u: goto L_0889D8B4;
    case 340u: goto L_0889D8C0;
    case 341u: goto L_0889D8CC;
    case 342u: goto L_0889D8D8;
    case 343u: goto L_0889D8E8;
    case 344u: goto L_0889D8F4;
    case 345u: goto L_0889D904;
    case 346u: goto L_0889D914;
    case 347u: goto L_0889D920;
    case 348u: goto L_0889D930;
    case 349u: goto L_0889D940;
    case 350u: goto L_0889D964;
    case 351u: goto L_0889D988;
    case 352u: goto L_0889D998;
    case 353u: goto L_0889D9A0;
    case 354u: goto L_0889D9A8;
    case 355u: goto L_0889D9AC;
    case 356u: goto L_0889D9BC;
    case 357u: goto L_0889D9D8;
    case 358u: goto L_0889D9F4;
    case 359u: goto L_0889DA00;
    case 360u: goto L_0889DA08;
    case 361u: goto L_0889DA14;
    case 362u: goto L_0889DA1C;
    case 363u: goto L_0889DA28;
    case 364u: goto L_0889DA34;
    case 365u: goto L_0889DA44;
    case 366u: goto L_0889DA54;
    case 367u: goto L_0889DA60;
    case 368u: goto L_0889DA6C;
    case 369u: goto L_0889DA7C;
    case 370u: goto L_0889DA8C;
    case 371u: goto L_0889DABC;
    case 372u: goto L_0889DAC8;
    case 373u: goto L_0889DAD0;
    case 374u: goto L_0889DADC;
    case 375u: goto L_0889DAEC;
    case 376u: goto L_0889DAF8;
    case 377u: goto L_0889DB04;
    case 378u: goto L_0889DB0C;
    case 379u: goto L_0889DB1C;
    case 380u: goto L_0889DB28;
    case 381u: goto L_0889DB34;
    case 382u: goto L_0889DB3C;
    case 383u: goto L_0889DB44;
    case 384u: goto L_0889DB50;
    case 385u: goto L_0889DB5C;
    case 386u: goto L_0889DB68;
    case 387u: goto L_0889DB74;
    case 388u: goto L_0889DB90;
    case 389u: goto L_0889DBB0;
    case 390u: goto L_0889DBBC;
    case 391u: goto L_0889DBC4;
    case 392u: goto L_0889DBD0;
    case 393u: goto L_0889DBE0;
    case 394u: goto L_0889DBEC;
    case 395u: goto L_0889DBF8;
    case 396u: goto L_0889DC00;
    case 397u: goto L_0889DC08;
    case 398u: goto L_0889DC14;
    case 399u: goto L_0889DC20;
    case 400u: goto L_0889DC2C;
    case 401u: goto L_0889DC34;
    case 402u: goto L_0889DC3C;
    case 403u: goto L_0889DC44;
    case 404u: goto L_0889DC4C;
    case 405u: goto L_0889DC5C;
    case 406u: goto L_0889DC68;
    case 407u: goto L_0889DC70;
    case 408u: goto L_0889DC7C;
    case 409u: goto L_0889DC84;
    case 410u: goto L_0889DC90;
    case 411u: goto L_0889DC94;
    case 412u: goto L_0889DCAC;
    case 413u: goto L_0889DCD4;
    case 414u: goto L_0889DCDC;
    case 415u: goto L_0889DCEC;
    case 416u: goto L_0889DD00;
    case 417u: goto L_0889DD14;
    case 418u: goto L_0889DD44;
    case 419u: goto L_0889DD58;
    case 420u: goto L_0889DD5C;
    case 421u: goto L_0889DD6C;
    case 422u: goto L_0889DD84;
    case 423u: goto L_0889DD90;
    case 424u: goto L_0889DD9C;
    case 425u: goto L_0889DDA4;
    case 426u: goto L_0889DDB0;
    case 427u: goto L_0889DDBC;
    case 428u: goto L_0889DDCC;
    case 429u: goto L_0889DDEC;
    case 430u: goto L_0889DE00;
    case 431u: goto L_0889DE08;
    case 432u: goto L_0889DE10;
    case 433u: goto L_0889DE24;
    case 434u: goto L_0889DE54;
    case 435u: goto L_0889DE58;
    case 436u: goto L_0889DE68;
    case 437u: goto L_0889DE70;
    case 438u: goto L_0889DE98;
    case 439u: goto L_0889DEB8;
    case 440u: goto L_0889DECC;
    case 441u: goto L_0889DED8;
    case 442u: goto L_0889DEF0;
    case 443u: goto L_0889DF1C;
    case 444u: goto L_0889DF40;
    case 445u: goto L_0889DF4C;
    case 446u: goto L_0889DF5C;
    case 447u: goto L_0889DF74;
    case 448u: goto L_0889DF7C;
    case 449u: goto L_0889DF84;
    case 450u: goto L_0889DF8C;
    case 451u: goto L_0889DF98;
    case 452u: goto L_0889DFAC;
    case 453u: goto L_0889DFC8;
    case 454u: goto L_0889DFDC;
    case 455u: goto L_0889E010;
    case 456u: goto L_0889E038;
    case 457u: goto L_0889E054;
    case 458u: goto L_0889E060;
    case 459u: goto L_0889E068;
    case 460u: goto L_0889E070;
    case 461u: goto L_0889E07C;
    case 462u: goto L_0889E080;
    case 463u: goto L_0889E090;
    case 464u: goto L_0889E0A8;
    case 465u: goto L_0889E0CC;
    case 466u: goto L_0889E0DC;
    case 467u: goto L_0889E0E4;
    case 468u: goto L_0889E0F8;
    case 469u: goto L_0889E104;
    case 470u: goto L_0889E124;
    case 471u: goto L_0889E154;
    case 472u: goto L_0889E168;
    case 473u: goto L_0889E178;
    case 474u: goto L_0889E184;
    case 475u: goto L_0889E1B4;
    case 476u: goto L_0889E1BC;
    case 477u: goto L_0889E1C4;
    case 478u: goto L_0889E1D0;
    case 479u: goto L_0889E1D8;
    case 480u: goto L_0889E1E0;
    case 481u: goto L_0889E1E4;
    case 482u: goto L_0889E1F4;
    case 483u: goto L_0889E204;
    case 484u: goto L_0889E218;
    case 485u: goto L_0889E228;
    case 486u: goto L_0889E238;
    case 487u: goto L_0889E240;
    case 488u: goto L_0889E248;
    case 489u: goto L_0889E25C;
    case 490u: goto L_0889E264;
    case 491u: goto L_0889E270;
    case 492u: goto L_0889E278;
    case 493u: goto L_0889E288;
    case 494u: goto L_0889E290;
    case 495u: goto L_0889E2A8;
    case 496u: goto L_0889E2BC;
    case 497u: goto L_0889E2D8;
    case 498u: goto L_0889E2E0;
    case 499u: goto L_0889E2EC;
    case 500u: goto L_0889E2F8;
    case 501u: goto L_0889E300;
    case 502u: goto L_0889E308;
    case 503u: goto L_0889E310;
    case 504u: goto L_0889E31C;
    case 505u: goto L_0889E328;
    case 506u: goto L_0889E330;
    case 507u: goto L_0889E33C;
    case 508u: goto L_0889E340;
    case 509u: goto L_0889E368;
    case 510u: goto L_0889E374;
    case 511u: goto L_0889E37C;
    case 512u: goto L_0889E388;
    case 513u: goto L_0889E390;
    case 514u: goto L_0889E3B0;
    case 515u: goto L_0889E3BC;
    case 516u: goto L_0889E3D8;
    case 517u: goto L_0889E3E4;
    case 518u: goto L_0889E3F0;
    case 519u: goto L_0889E3FC;
    case 520u: goto L_0889E408;
    case 521u: goto L_0889E414;
    case 522u: goto L_0889E424;
    case 523u: goto L_0889E42C;
    case 524u: goto L_0889E448;
    case 525u: goto L_0889E458;
    case 526u: goto L_0889E464;
    case 527u: goto L_0889E47C;
    case 528u: goto L_0889E498;
    case 529u: goto L_0889E4AC;
    case 530u: goto L_0889E4B0;
    case 531u: goto L_0889E4BC;
    case 532u: goto L_0889E4D4;
    case 533u: goto L_0889E4E8;
    case 534u: goto L_0889E4F4;
    case 535u: goto L_0889E504;
    case 536u: goto L_0889E518;
    case 537u: goto L_0889E524;
    case 538u: goto L_0889E534;
    case 539u: goto L_0889E554;
    case 540u: goto L_0889E568;
    case 541u: goto L_0889E57C;
    case 542u: goto L_0889E594;
    case 543u: goto L_0889E59C;
    case 544u: goto L_0889E5A4;
    case 545u: goto L_0889E5B4;
    case 546u: goto L_0889E5BC;
    case 547u: goto L_0889E5C4;
    case 548u: goto L_0889E5C8;
    case 549u: goto L_0889E5DC;
    case 550u: goto L_0889E5F4;
    case 551u: goto L_0889E5FC;
    case 552u: goto L_0889E60C;
    case 553u: goto L_0889E620;
    case 554u: goto L_0889E638;
    case 555u: goto L_0889E640;
    case 556u: goto L_0889E650;
    case 557u: goto L_0889E664;
    case 558u: goto L_0889E698;
    case 559u: goto L_0889E6A4;
    case 560u: goto L_0889E6B0;
    case 561u: goto L_0889E6B8;
    case 562u: goto L_0889E6BC;
    case 563u: goto L_0889E6D0;
    case 564u: goto L_0889E6F4;
    case 565u: goto L_0889E704;
    case 566u: goto L_0889E718;
    case 567u: goto L_0889E724;
    case 568u: goto L_0889E730;
    case 569u: goto L_0889E738;
    case 570u: goto L_0889E744;
    case 571u: goto L_0889E760;
    case 572u: goto L_0889E774;
    case 573u: goto L_0889E77C;
    case 574u: goto L_0889E790;
    case 575u: goto L_0889E79C;
    case 576u: goto L_0889E7A0;
    case 577u: goto L_0889E7A8;
    case 578u: goto L_0889E7B0;
    case 579u: goto L_0889E7C4;
    case 580u: goto L_0889E7D8;
    case 581u: goto L_0889E7E4;
    case 582u: goto L_0889E7F0;
    case 583u: goto L_0889E7FC;
    case 584u: goto L_0889E808;
    case 585u: goto L_0889E814;
    case 586u: goto L_0889E820;
    case 587u: goto L_0889E82C;
    case 588u: goto L_0889E838;
    case 589u: goto L_0889E844;
    case 590u: goto L_0889E850;
    case 591u: goto L_0889E85C;
    case 592u: goto L_0889E888;
    case 593u: goto L_0889E894;
    case 594u: goto L_0889E8EC;
    case 595u: goto L_0889E8F8;
    case 596u: goto L_0889E914;
    case 597u: goto L_0889E924;
    case 598u: goto L_0889E930;
    case 599u: goto L_0889E94C;
    case 600u: goto L_0889E95C;
    case 601u: goto L_0889E968;
    case 602u: goto L_0889E984;
    case 603u: goto L_0889E994;
    case 604u: goto L_0889E9A4;
    case 605u: goto L_0889E9B0;
    case 606u: goto L_0889E9B8;
    case 607u: goto L_0889E9C0;
    case 608u: goto L_0889E9C4;
    case 609u: goto L_0889E9D0;
    case 610u: goto L_0889E9E8;
    case 611u: goto L_0889EA04;
    case 612u: goto L_0889EA0C;
    case 613u: goto L_0889EA40;
    case 614u: goto L_0889EA48;
    case 615u: goto L_0889EA50;
    case 616u: goto L_0889EA58;
    case 617u: goto L_0889EA7C;
    case 618u: goto L_0889EAC8;
    case 619u: goto L_0889EADC;
    case 620u: goto L_0889EAF0;
    case 621u: goto L_0889EB08;
    case 622u: goto L_0889EB24;
    case 623u: goto L_0889EB34;
    case 624u: goto L_0889EB50;
    case 625u: goto L_0889EB5C;
    case 626u: goto L_0889EB70;
    case 627u: goto L_0889EB78;
    case 628u: goto L_0889EB80;
    case 629u: goto L_0889EB94;
    case 630u: goto L_0889EBB0;
    case 631u: goto L_0889EBB8;
    case 632u: goto L_0889EBCC;
    case 633u: goto L_0889EBE0;
    case 634u: goto L_0889EC00;
    case 635u: goto L_0889EC9C;
    case 636u: goto L_0889ECB4;
    case 637u: goto L_0889ECC0;
    case 638u: goto L_0889ECD0;
    case 639u: goto L_0889ED08;
    case 640u: goto L_0889ED10;
    case 641u: goto L_0889ED18;
    case 642u: goto L_0889ED20;
    case 643u: goto L_0889ED2C;
    case 644u: goto L_0889ED50;
    case 645u: goto L_0889ED60;
    case 646u: goto L_0889ED78;
    case 647u: goto L_0889ED88;
    case 648u: goto L_0889ED98;
    case 649u: goto L_0889EDAC;
    case 650u: goto L_0889EDC8;
    case 651u: goto L_0889EDD8;
    case 652u: goto L_0889EDE4;
    case 653u: goto L_0889EDF8;
    case 654u: goto L_0889EDFC;
    case 655u: goto L_0889EE14;
    case 656u: goto L_0889EE44;
    case 657u: goto L_0889EEA8;
    case 658u: goto L_0889EEC8;
    case 659u: goto L_0889EEE0;
    case 660u: goto L_0889EEFC;
    case 661u: goto L_0889EF04;
    case 662u: goto L_0889EF34;
    case 663u: goto L_0889EF54;
    case 664u: goto L_0889EF74;
    case 665u: goto L_0889EF8C;
    case 666u: goto L_0889EFA8;
    case 667u: goto L_0889EFB0;
    case 668u: goto L_0889EFE0;
    case 669u: goto L_0889EFE8;
    case 670u: goto L_0889F030;
    case 671u: goto L_0889F044;
    case 672u: goto L_0889F054;
    case 673u: goto L_0889F05C;
    case 674u: goto L_0889F064;
    case 675u: goto L_0889F06C;
    case 676u: goto L_0889F144;
    case 677u: goto L_0889F164;
    case 678u: goto L_0889F16C;
    case 679u: goto L_0889F1FC;
    case 680u: goto L_0889F208;
    case 681u: goto L_0889F218;
    case 682u: goto L_0889F22C;
    case 683u: goto L_0889F23C;
    case 684u: goto L_0889F244;
    case 685u: goto L_0889F24C;
    case 686u: goto L_0889F254;
    case 687u: goto L_0889F330;
    case 688u: goto L_0889F350;
    case 689u: goto L_0889F358;
    case 690u: goto L_0889F3E8;
    case 691u: goto L_0889F3F4;
    case 692u: goto L_0889F3F8;
    case 693u: goto L_0889F400;
    case 694u: goto L_0889F444;
    case 695u: goto L_0889F44C;
    case 696u: goto L_0889F454;
    case 697u: goto L_0889F45C;
    case 698u: goto L_0889F460;
    case 699u: goto L_0889F470;
    case 700u: goto L_0889F478;
    case 701u: goto L_0889F480;
    case 702u: goto L_0889F488;
    case 703u: goto L_0889F49C;
    case 704u: goto L_0889F4A4;
    case 705u: goto L_0889F4AC;
    case 706u: goto L_0889F4B4;
    case 707u: goto L_0889F4BC;
    case 708u: goto L_0889F4C4;
    case 709u: goto L_0889F4E4;
    case 710u: goto L_0889F4EC;
    case 711u: goto L_0889F50C;
    case 712u: goto L_0889F514;
    case 713u: goto L_0889F51C;
    case 714u: goto L_0889F524;
    case 715u: goto L_0889F540;
    case 716u: goto L_0889F548;
    case 717u: goto L_0889F554;
    case 718u: goto L_0889F568;
    case 719u: goto L_0889F578;
    case 720u: goto L_0889F580;
    case 721u: goto L_0889F588;
    case 722u: goto L_0889F590;
    case 723u: goto L_0889F5A0;
    case 724u: goto L_0889F5A8;
    case 725u: goto L_0889F5B0;
    case 726u: goto L_0889F5C0;
    case 727u: goto L_0889F5D0;
    case 728u: goto L_0889F5E0;
    case 729u: goto L_0889F5F8;
    case 730u: goto L_0889F608;
    case 731u: goto L_0889F610;
    case 732u: goto L_0889F618;
    case 733u: goto L_0889F620;
    case 734u: goto L_0889F628;
    case 735u: goto L_0889F638;
    case 736u: goto L_0889F648;
    case 737u: goto L_0889F650;
    case 738u: goto L_0889F65C;
    case 739u: goto L_0889F670;
    case 740u: goto L_0889F68C;
    case 741u: goto L_0889F6C0;
    case 742u: goto L_0889F6D0;
    case 743u: goto L_0889F6D8;
    case 744u: goto L_0889F6FC;
    case 745u: goto L_0889F708;
    case 746u: goto L_0889F710;
    case 747u: goto L_0889F71C;
    case 748u: goto L_0889F724;
    case 749u: goto L_0889F72C;
    case 750u: goto L_0889F744;
    case 751u: goto L_0889F754;
    case 752u: goto L_0889F75C;
    case 753u: goto L_0889F764;
    case 754u: goto L_0889F77C;
    case 755u: goto L_0889F784;
    case 756u: goto L_0889F790;
    case 757u: goto L_0889F798;
    case 758u: goto L_0889F7A0;
    case 759u: goto L_0889F7B0;
    case 760u: goto L_0889F7C8;
    case 761u: goto L_0889F7D4;
    case 762u: goto L_0889F7EC;
    case 763u: goto L_0889F7F0;
    case 764u: goto L_0889F800;
    case 765u: goto L_0889F808;
    case 766u: goto L_0889F818;
    case 767u: goto L_0889F830;
    case 768u: goto L_0889F848;
    case 769u: goto L_0889F854;
    case 770u: goto L_0889F85C;
    case 771u: goto L_0889F878;
    case 772u: goto L_0889F8BC;
    case 773u: goto L_0889F8E0;
    case 774u: goto L_0889F8EC;
    case 775u: goto L_0889F8F8;
    case 776u: goto L_0889F914;
    case 777u: goto L_0889F924;
    case 778u: goto L_0889F92C;
    case 779u: goto L_0889F934;
    case 780u: goto L_0889F94C;
    case 781u: goto L_0889F95C;
    case 782u: goto L_0889F96C;
    case 783u: goto L_0889F980;
    case 784u: goto L_0889F988;
    case 785u: goto L_0889F998;
    case 786u: goto L_0889F9B0;
    case 787u: goto L_0889F9C8;
    case 788u: goto L_0889F9DC;
    case 789u: goto L_0889F9F4;
    case 790u: goto L_0889F9F8;
    case 791u: goto L_0889FA0C;
    case 792u: goto L_0889FA14;
    case 793u: goto L_0889FA24;
    case 794u: goto L_0889FA3C;
    case 795u: goto L_0889FA50;
    case 796u: goto L_0889FA68;
    case 797u: goto L_0889FA70;
    case 798u: goto L_0889FA84;
    case 799u: goto L_0889FAA4;
    case 800u: goto L_0889FAAC;
    case 801u: goto L_0889FAB4;
    case 802u: goto L_0889FAC4;
    case 803u: goto L_0889FAD4;
    case 804u: goto L_0889FADC;
    case 805u: goto L_0889FAE4;
    case 806u: goto L_0889FAF4;
    case 807u: goto L_0889FB00;
    case 808u: goto L_0889FB10;
    case 809u: goto L_0889FB20;
    case 810u: goto L_0889FB28;
    case 811u: goto L_0889FB38;
    case 812u: goto L_0889FB48;
    case 813u: goto L_0889FB5C;
    case 814u: goto L_0889FB80;
    case 815u: goto L_0889FB88;
    case 816u: goto L_0889FB98;
    case 817u: goto L_0889FBC0;
    case 818u: goto L_0889FBDC;
    case 819u: goto L_0889FBEC;
    case 820u: goto L_0889FC04;
    case 821u: goto L_0889FC1C;
    case 822u: goto L_0889FC2C;
    case 823u: goto L_0889FC3C;
    case 824u: goto L_0889FC5C;
    case 825u: goto L_0889FC78;
    case 826u: goto L_0889FC80;
    case 827u: goto L_0889FC88;
    case 828u: goto L_0889FC9C;
    case 829u: goto L_0889FCD4;
    case 830u: goto L_0889FCDC;
    case 831u: goto L_0889FCF8;
    case 832u: goto L_0889FD28;
    case 833u: goto L_0889FD30;
    case 834u: goto L_0889FD3C;
    case 835u: goto L_0889FD44;
    case 836u: goto L_0889FD4C;
    case 837u: goto L_0889FD60;
    case 838u: goto L_0889FD98;
    case 839u: goto L_0889FDA8;
    case 840u: goto L_0889FDB0;
    case 841u: goto L_0889FDCC;
    case 842u: goto L_0889FDFC;
    case 843u: goto L_0889FE04;
    case 844u: goto L_0889FE0C;
    case 845u: goto L_0889FE20;
    case 846u: goto L_0889FE58;
    case 847u: goto L_0889FE60;
    case 848u: goto L_0889FE70;
    case 849u: goto L_0889FE80;
    case 850u: goto L_0889FEA4;
    case 851u: goto L_0889FEB4;
    case 852u: goto L_0889FEC4;
    case 853u: goto L_0889FED4;
    case 854u: goto L_0889FEE4;
    case 855u: goto L_0889FEF4;
    case 856u: goto L_0889FF04;
    case 857u: goto L_0889FF18;
    case 858u: goto L_0889FF20;
    case 859u: goto L_0889FF28;
    case 860u: goto L_0889FF3C;
    case 861u: goto L_0889FF78;
    case 862u: goto L_0889FF80;
    case 863u: goto L_0889FF8C;
    case 864u: goto L_0889FFB4;
    case 865u: goto L_0889FFBC;
    case 866u: goto L_0889FFC4;
    case 867u: goto L_0889FFCC;
    case 868u: goto L_0889FFE8;
    case 869u: goto L_0889FFF4;
    case 870u: goto L_0889FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0889C000:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5B8;
      }
      goto L_0889C008;
    }
L_0889C008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C024;
      }
      goto L_0889C014;
    }
L_0889C014:
    ctx.gpr[31] = (0x0889C01Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 434u, 0x088961FCu>(ctx, &aot_mem) && ctx.pc == 0x0889C01Cu) goto L_0889C01C;
    return;
L_0889C01C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5B8;
      }
      goto L_0889C024;
    }
L_0889C024:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[19] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C0F8;
      }
      goto L_0889C054;
    }
L_0889C054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C0C0;
      }
      goto L_0889C06C;
    }
L_0889C06C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C084;
      }
      goto L_0889C074;
    }
L_0889C074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C0C0;
      }
      goto L_0889C084;
    }
L_0889C084:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C0B8;
      }
      goto L_0889C08C;
    }
L_0889C08C:
    ctx.gpr[31] = (0x0889C094u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0889C094u) goto L_0889C094;
    return;
L_0889C094:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C0B8;
      }
      goto L_0889C09C;
    }
L_0889C09C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C0B8;
      }
      goto L_0889C0A8;
    }
L_0889C0A8:
    ctx.gpr[31] = (0x0889C0B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 409u, 0x08B017A8u>(ctx, &aot_mem) && ctx.pc == 0x0889C0B0u) goto L_0889C0B0;
    return;
L_0889C0B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C0C0;
      }
      goto L_0889C0B8;
    }
L_0889C0B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C26C;
      }
      goto L_0889C0C0;
    }
L_0889C0C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C0E4;
      }
      goto L_0889C0D4;
    }
L_0889C0D4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0889C0E4;
L_0889C0E4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0889C0F0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 664u, 0x089039E4u>(ctx, &aot_mem) && ctx.pc == 0x0889C0F0u) goto L_0889C0F0;
    return;
L_0889C0F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0889C26C;
      }
      goto L_0889C0F8;
    }
L_0889C0F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 14u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C23C;
      }
      goto L_0889C114;
    }
L_0889C114:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C158;
      }
      goto L_0889C120;
    }
L_0889C120:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x0889C13Cu);
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 419u, 0x089D273Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C13Cu) goto L_0889C13C;
    return;
L_0889C13C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889C14Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C14Cu) goto L_0889C14C;
    return;
L_0889C14C:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_0889C160;
      }
      goto L_0889C158;
    }
L_0889C158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C160;
      }
      goto L_0889C160;
    }
L_0889C160:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C204;
      }
      goto L_0889C168;
    }
L_0889C168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C1CC;
      }
      goto L_0889C180;
    }
L_0889C180:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C1C4;
      }
      goto L_0889C188;
    }
L_0889C188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_0889C1B4;
    }
    goto L_0889C194;
L_0889C194:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[31] = (0x0889C1A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem) && ctx.pc == 0x0889C1A4u) goto L_0889C1A4;
    return;
L_0889C1A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_0889C1B4;
L_0889C1B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C1CC;
      }
      goto L_0889C1C4;
    }
L_0889C1C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C234;
      }
      goto L_0889C1CC;
    }
L_0889C1CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C1F0;
      }
      goto L_0889C1E0;
    }
L_0889C1E0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0889C1F0;
L_0889C1F0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0889C1FCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 664u, 0x089039E4u>(ctx, &aot_mem) && ctx.pc == 0x0889C1FCu) goto L_0889C1FC;
    return;
L_0889C1FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0889C234;
      }
      goto L_0889C204;
    }
L_0889C204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C234;
      }
      goto L_0889C21C;
    }
L_0889C21C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_0889C234;
L_0889C234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C26C;
      }
      goto L_0889C23C;
    }
L_0889C23C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C26C;
      }
      goto L_0889C254;
    }
L_0889C254:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_0889C26C;
L_0889C26C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C388;
      }
      goto L_0889C274;
    }
L_0889C274:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x0889C298u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 207u, 0x088B1820u>(ctx, &aot_mem) && ctx.pc == 0x0889C298u) goto L_0889C298;
    return;
L_0889C298:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
      if (branch_taken) {
          goto L_0889C2A8;
      }
      goto L_0889C2A0;
    }
L_0889C2A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C378;
      }
      goto L_0889C2A8;
    }
L_0889C2A8:
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889C2C0u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 484u, 0x088B3CECu>(ctx, &aot_mem) && ctx.pc == 0x0889C2C0u) goto L_0889C2C0;
    return;
L_0889C2C0:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_0889C2D0;
    }
    goto L_0889C2C8;
L_0889C2C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C378;
      }
      goto L_0889C2D0;
    }
L_0889C2D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889C2F8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 194u, 0x08891710u>(ctx, &aot_mem) && ctx.pc == 0x0889C2F8u) goto L_0889C2F8;
    return;
L_0889C2F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(32);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (0u | 1u);
    goto L_0889C378;
L_0889C378:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C388;
      }
      goto L_0889C380;
    }
L_0889C380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_0889C388;
L_0889C388:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5B8;
      }
      goto L_0889C394;
    }
L_0889C394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(336));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0889C3B0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C3B0u) goto L_0889C3B0;
    return;
L_0889C3B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C5B8;
      }
      goto L_0889C3B8;
    }
L_0889C3B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889C3DCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 207u, 0x088B1820u>(ctx, &aot_mem) && ctx.pc == 0x0889C3DCu) goto L_0889C3DC;
    return;
L_0889C3DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C3EC;
      }
      goto L_0889C3E4;
    }
L_0889C3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C4B8;
      }
      goto L_0889C3EC;
    }
L_0889C3EC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[31] = (0x0889C404u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 484u, 0x088B3CECu>(ctx, &aot_mem) && ctx.pc == 0x0889C404u) goto L_0889C404;
    return;
L_0889C404:
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_0889C414;
    }
    goto L_0889C40C;
L_0889C40C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C4B8;
      }
      goto L_0889C414;
    }
L_0889C414:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889C43Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 194u, 0x08891710u>(ctx, &aot_mem) && ctx.pc == 0x0889C43Cu) goto L_0889C43C;
    return;
L_0889C43C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(32);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 1u);
    goto L_0889C4B8;
L_0889C4B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0889C5B8;
      }
      goto L_0889C4C0;
    }
L_0889C4C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C4F4;
      }
      goto L_0889C4D8;
    }
L_0889C4D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0889C4E8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 157u, 0x08805288u>(ctx, &aot_mem) && ctx.pc == 0x0889C4E8u) goto L_0889C4E8;
    return;
L_0889C4E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0889C5B8;
      }
      goto L_0889C4F4;
    }
L_0889C4F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C580;
      }
      goto L_0889C570;
    }
L_0889C570:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C5A0;
      }
      goto L_0889C580;
    }
L_0889C580:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C5B8;
      }
      goto L_0889C590;
    }
L_0889C590:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C5B8;
      }
      goto L_0889C5A0;
    }
L_0889C5A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0889C5B0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 157u, 0x08805288u>(ctx, &aot_mem) && ctx.pc == 0x0889C5B0u) goto L_0889C5B0;
    return;
L_0889C5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_0889C5B8;
L_0889C5B8:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 706u, 0x0889BFC0u>(ctx, &aot_mem); return;
      }
      goto L_0889C5C0;
    }
L_0889C5C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
        goto L_0889C5FC;
    }
    goto L_0889C5E0;
L_0889C5E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0889C5F4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 70u, 0x08990464u>(ctx, &aot_mem) && ctx.pc == 0x0889C5F4u) goto L_0889C5F4;
    return;
L_0889C5F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889C608;
      }
      goto L_0889C5FC;
    }
L_0889C5FC:
    ctx.gpr[31] = (0x0889C604u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 70u, 0x08990464u>(ctx, &aot_mem) && ctx.pc == 0x0889C604u) goto L_0889C604;
    return;
L_0889C604:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889C608;
L_0889C608:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889C644:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[7]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[8]);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[30] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0889CF70;
      }
      goto L_0889C6B4;
    }
L_0889C6B4:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0889C6E8;
L_0889C6E8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
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
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-65));
      if (branch_taken) {
          goto L_0889CF54;
      }
      goto L_0889C734;
    }
L_0889C734:
    ctx.gpr[31] = (0x0889C73Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 290u, 0x08A4182Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C73Cu) goto L_0889C73C;
    return;
L_0889C73C:
    ctx.gpr[4] = (4u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF54;
      }
      goto L_0889C758;
    }
L_0889C758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C784;
      }
      goto L_0889C774;
    }
L_0889C774:
    ctx.gpr[31] = (0x0889C77Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0889C77Cu) goto L_0889C77C;
    return;
L_0889C77C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF54;
      }
      goto L_0889C784;
    }
L_0889C784:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0889C7A8;
      }
      goto L_0889C798;
    }
L_0889C798:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0889C7B0;
      }
      goto L_0889C7A8;
    }
L_0889C7A8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0889C7B0;
L_0889C7B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CA8C;
      }
      goto L_0889C7B8;
    }
L_0889C7B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2049));
      if (branch_taken) {
          goto L_0889CA78;
      }
      goto L_0889C7D4;
    }
L_0889C7D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
        goto L_0889C804;
    }
    goto L_0889C7E8;
L_0889C7E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889C828;
      }
      goto L_0889C800;
    }
L_0889C800:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    goto L_0889C804;
L_0889C804:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(186)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C828;
      }
      goto L_0889C814;
    }
L_0889C814:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C9F8;
      }
      goto L_0889C828;
    }
L_0889C828:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C84C;
      }
      goto L_0889C83C;
    }
L_0889C83C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0889C84C;
L_0889C84C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
        goto L_0889C874;
    }
    goto L_0889C85C;
L_0889C85C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u | 3u);
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
        goto L_0889C874;
    }
    goto L_0889C86C;
L_0889C86C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C898;
      }
      goto L_0889C874;
    }
L_0889C874:
    ctx.gpr[7] = (ctx.gpr[7] & 8192u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C890;
      }
      goto L_0889C880;
    }
L_0889C880:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0889C898;
      }
      goto L_0889C890;
    }
L_0889C890:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_0889C898;
L_0889C898:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2049));
      if (branch_taken) {
          goto L_0889C8BC;
      }
      goto L_0889C8A0;
    }
L_0889C8A0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0889C8B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 598u, 0x08827E00u>(ctx, &aot_mem) && ctx.pc == 0x0889C8B4u) goto L_0889C8B4;
    return;
L_0889C8B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C9F8;
      }
      goto L_0889C8BC;
    }
L_0889C8BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x0889C8D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem) && ctx.pc == 0x0889C8D0u) goto L_0889C8D0;
    return;
L_0889C8D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C968;
      }
      goto L_0889C8E4;
    }
L_0889C8E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C968;
      }
      goto L_0889C8FC;
    }
L_0889C8FC:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0889C90Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem) && ctx.pc == 0x0889C90Cu) goto L_0889C90C;
    return;
L_0889C90C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25444)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25448)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0889C920u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889C920u) goto L_0889C920;
    return;
L_0889C920:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0889C92Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x0889C92Cu) goto L_0889C92C;
    return;
L_0889C92C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0889C940u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 280u, 0x08941D04u>(ctx, &aot_mem) && ctx.pc == 0x0889C940u) goto L_0889C940;
    return;
L_0889C940:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0889C950u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 280u, 0x08941D04u>(ctx, &aot_mem) && ctx.pc == 0x0889C950u) goto L_0889C950;
    return;
L_0889C950:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C9F8;
      }
      goto L_0889C968;
    }
L_0889C968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889C9F8;
      }
      goto L_0889C984;
    }
L_0889C984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0889C99Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889C99Cu) goto L_0889C99C;
    return;
L_0889C99C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C9F8;
      }
      goto L_0889C9A4;
    }
L_0889C9A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(138)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C9D8;
      }
      goto L_0889C9B8;
    }
L_0889C9B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(190)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889C9D8;
      }
      goto L_0889C9C8;
    }
L_0889C9C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889C9E0;
      }
      goto L_0889C9D8;
    }
L_0889C9D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0889C9E0;
      }
      goto L_0889C9E0;
    }
L_0889C9E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C9F8;
      }
      goto L_0889C9E8;
    }
L_0889C9E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(482))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0889C9F8;
L_0889C9F8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0889CA1C;
      }
      goto L_0889CA0C;
    }
L_0889CA0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0889CA24;
      }
      goto L_0889CA1C;
    }
L_0889CA1C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0889CA24;
L_0889CA24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CA8C;
      }
      goto L_0889CA2C;
    }
L_0889CA2C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[26];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0889CA54;
    }
    goto L_0889CA54;
L_0889CA54:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889CA70u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 482u, 0x0882BFC8u>(ctx, &aot_mem) && ctx.pc == 0x0889CA70u) goto L_0889CA70;
    return;
L_0889CA70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CA8C;
      }
      goto L_0889CA78;
    }
L_0889CA78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x0889CA8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem) && ctx.pc == 0x0889CA8Cu) goto L_0889CA8C;
    return;
L_0889CA8C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0889CAB0;
      }
      goto L_0889CAA0;
    }
L_0889CAA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0889CAB8;
      }
      goto L_0889CAB0;
    }
L_0889CAB0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0889CAB8;
L_0889CAB8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF54;
      }
      goto L_0889CAC0;
    }
L_0889CAC0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[26];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0889CAE8;
    }
    goto L_0889CAE8;
L_0889CAE8:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0889CB04;
    }
    goto L_0889CB04;
L_0889CB04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (17583u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889CB54;
      }
      goto L_0889CB50;
    }
L_0889CB50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0889CB54;
L_0889CB54:
    ctx.gpr[31] = (0x0889CB5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0889CB5Cu) goto L_0889CB5C;
    return;
L_0889CB5C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0889CB80;
      }
      goto L_0889CB64;
    }
L_0889CB64:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_0889CB7C;
    }
    goto L_0889CB7C;
L_0889CB7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0889CB80;
L_0889CB80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0889CB94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x0889CB94u) goto L_0889CB94;
    return;
L_0889CB94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889CC40;
      }
      goto L_0889CBAC;
    }
L_0889CBAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0889CBE8;
    }
    goto L_0889CBE8;
L_0889CBE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0889CC14;
    }
    goto L_0889CC14;
L_0889CC14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0889CC40u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x0889CC40u) goto L_0889CC40;
    return;
L_0889CC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CD08;
      }
      goto L_0889CC5C;
    }
L_0889CC5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0889CC90;
      }
      goto L_0889CC70;
    }
L_0889CC70:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x0889CC8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem) && ctx.pc == 0x0889CC8Cu) goto L_0889CC8C;
    return;
L_0889CC8C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0889CC90;
L_0889CC90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (17545u << 16u);
      if (branch_taken) {
          goto L_0889CCA0;
      }
      goto L_0889CC9C;
    }
L_0889CC9C:
    ctx.gpr[4] = (0u | 2u);
    goto L_0889CCA0;
L_0889CCA0:
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x0889CCD8u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 71u, 0x08B0452Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CCD8u) goto L_0889CCD8;
    return;
L_0889CCD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CD00;
      }
      goto L_0889CCE4;
    }
L_0889CCE4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(666)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_0889CD00;
      }
      goto L_0889CCF0;
    }
L_0889CCF0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(666)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0889CD00;
L_0889CD00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF54;
      }
      goto L_0889CD08;
    }
L_0889CD08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF24;
      }
      goto L_0889CD24;
    }
L_0889CD24:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889CD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0889CD30u) goto L_0889CD30;
    return;
L_0889CD30:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0889CD5C;
      }
      goto L_0889CD38;
    }
L_0889CD38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1976))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CD5C;
      }
      goto L_0889CD4C;
    }
L_0889CD4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CF1C;
      }
      goto L_0889CD5C;
    }
L_0889CD5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x0889CD80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem) && ctx.pc == 0x0889CD80u) goto L_0889CD80;
    return;
L_0889CD80:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_0889CDF8;
      }
      goto L_0889CD90;
    }
L_0889CD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CDF8;
      }
      goto L_0889CDB0;
    }
L_0889CDB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CDF8;
      }
      goto L_0889CDCC;
    }
L_0889CDCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889CDF0u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x0889CDF0u) goto L_0889CDF0;
    return;
L_0889CDF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CE80;
      }
      goto L_0889CDF8;
    }
L_0889CDF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0889CE40;
      }
      goto L_0889CE04;
    }
L_0889CE04:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0889CE34u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x0889CE34u) goto L_0889CE34;
    return;
L_0889CE34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (0u | 1u);
    goto L_0889CE40;
L_0889CE40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (17274u << 16u);
      if (branch_taken) {
          goto L_0889CE50;
      }
      goto L_0889CE4C;
    }
L_0889CE4C:
    ctx.gpr[4] = (0u | 2u);
    goto L_0889CE50;
L_0889CE50:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889CE80u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x0889CE80u) goto L_0889CE80;
    return;
L_0889CE80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 57u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CEA4;
      }
      goto L_0889CE90;
    }
L_0889CE90:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2000u);
    ctx.gpr[31] = (0x0889CEA4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem) && ctx.pc == 0x0889CEA4u) goto L_0889CEA4;
    return;
L_0889CEA4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF1C;
      }
      goto L_0889CEAC;
    }
L_0889CEAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF1C;
      }
      goto L_0889CEC8;
    }
L_0889CEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889CEF8;
      }
      goto L_0889CED8;
    }
L_0889CED8:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0889CEF0u);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CEF0u) goto L_0889CEF0;
    return;
L_0889CEF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF10;
      }
      goto L_0889CEF8;
    }
L_0889CEF8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0889CF10u);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CF10u) goto L_0889CF10;
    return;
L_0889CF10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889CF1Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 119u, 0x089B4624u>(ctx, &aot_mem) && ctx.pc == 0x0889CF1Cu) goto L_0889CF1C;
    return;
L_0889CF1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889CF54;
      }
      goto L_0889CF24;
    }
L_0889CF24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (17302u << 16u);
      if (branch_taken) {
          goto L_0889CF54;
      }
      goto L_0889CF40;
    }
L_0889CF40:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889CF54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 482u, 0x0882BFC8u>(ctx, &aot_mem) && ctx.pc == 0x0889CF54u) goto L_0889CF54;
    return;
L_0889CF54:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889C6E8;
      }
      goto L_0889CF5C;
    }
L_0889CF5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0889CF70;
L_0889CF70:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CFB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[7] = (2185u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6516));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0889CFDCu);
    ctx.gpr[6] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0889CFDCu) goto L_0889CFDC;
    return;
L_0889CFDC:
    ctx.gpr[31] = (0x0889CFE4u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25440));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0889CFE4u) goto L_0889CFE4;
    return;
L_0889CFE4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7636), 0u);
    ctx.gpr[31] = (0x0889CFF0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25428));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0889CFF0u) goto L_0889CFF0;
    return;
L_0889CFF0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889CFFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D028u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem) && ctx.pc == 0x0889D028u) goto L_0889D028;
    return;
L_0889D028:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25416));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D038u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 622u, 0x089E6F54u>(ctx, &aot_mem) && ctx.pc == 0x0889D038u) goto L_0889D038;
    return;
L_0889D038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0889D044u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25412));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x0889D044u) goto L_0889D044;
    return;
L_0889D044:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0889D058;
      }
      goto L_0889D04C;
    }
L_0889D04C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D068;
      }
      goto L_0889D058;
    }
L_0889D058:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D088;
      }
      goto L_0889D060;
    }
L_0889D060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D090;
      }
      goto L_0889D068;
    }
L_0889D068:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D080u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22816));
    goto L_0889D1FC;
L_0889D080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D0AC;
      }
      goto L_0889D088;
    }
L_0889D088:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25404));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0889D090;
L_0889D090:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D0ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22784));
    goto L_0889D1FC;
L_0889D0AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D0C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D0F4u);
    ctx.gpr[19] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22752));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0889D0F4u) goto L_0889D0F4;
    return;
L_0889D0F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D100u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 327u, 0x088068B4u>(ctx, &aot_mem) && ctx.pc == 0x0889D100u) goto L_0889D100;
    return;
L_0889D100:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D114u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem) && ctx.pc == 0x0889D114u) goto L_0889D114;
    return;
L_0889D114:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D124u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_0889CFFC;
L_0889D124:
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
L_0889D140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D160u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 327u, 0x088068B4u>(ctx, &aot_mem) && ctx.pc == 0x0889D160u) goto L_0889D160;
    return;
L_0889D160:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D170u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_0889D0C4;
L_0889D170:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D184:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D19Cu);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 547u, 0x089E69E8u>(ctx, &aot_mem) && ctx.pc == 0x0889D19Cu) goto L_0889D19C;
    return;
L_0889D19C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D1DC;
      }
      goto L_0889D1A4;
    }
L_0889D1A4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25400));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D1B4u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 622u, 0x089E6F54u>(ctx, &aot_mem) && ctx.pc == 0x0889D1B4u) goto L_0889D1B4;
    return;
L_0889D1B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889D1DC;
      }
      goto L_0889D1C0;
    }
L_0889D1C0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25396));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0889D1D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem) && ctx.pc == 0x0889D1D4u) goto L_0889D1D4;
    return;
L_0889D1D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D1EC;
      }
      goto L_0889D1DC;
    }
L_0889D1DC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25388));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D1ECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889D1ECu) goto L_0889D1EC;
    return;
L_0889D1EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D1FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (0u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[11]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D250u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0889D184;
L_0889D250:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D260u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 436u, 0x08806EC0u>(ctx, &aot_mem) && ctx.pc == 0x0889D260u) goto L_0889D260;
    return;
L_0889D260:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D26Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 546u, 0x08807904u>(ctx, &aot_mem) && ctx.pc == 0x0889D26Cu) goto L_0889D26C;
    return;
L_0889D26C:
    ctx.gpr[31] = (0x0889D274u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 538u, 0x08807890u>(ctx, &aot_mem) && ctx.pc == 0x0889D274u) goto L_0889D274;
    return;
L_0889D274:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D28C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D2A8u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0889D2A8u) goto L_0889D2A8;
    return;
L_0889D2A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D2B4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0889D2B4u) goto L_0889D2B4;
    return;
L_0889D2B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D2C0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0889D2C0u) goto L_0889D2C0;
    return;
L_0889D2C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D2D0;
      }
      goto L_0889D2C8;
    }
L_0889D2C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889D330;
      }
      goto L_0889D2D0;
    }
L_0889D2D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D2DCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889D2DCu) goto L_0889D2DC;
    return;
L_0889D2DC:
    ctx.gpr[31] = (0x0889D2E4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x0889D2E4u) goto L_0889D2E4;
    return;
L_0889D2E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D2F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0889D2F0u) goto L_0889D2F0;
    return;
L_0889D2F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D2FCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D2FCu) goto L_0889D2FC;
    return;
L_0889D2FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D308u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x0889D308u) goto L_0889D308;
    return;
L_0889D308:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D314u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D314u) goto L_0889D314;
    return;
L_0889D314:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D320u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0889D320u) goto L_0889D320;
    return;
L_0889D320:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D32Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x0889D32Cu) goto L_0889D32C;
    return;
L_0889D32C:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889D330;
L_0889D330:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D344:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D358u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0889D358u) goto L_0889D358;
    return;
L_0889D358:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D364u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0889D364u) goto L_0889D364;
    return;
L_0889D364:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D398u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 466u, 0x08807294u>(ctx, &aot_mem) && ctx.pc == 0x0889D398u) goto L_0889D398;
    return;
L_0889D398:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D3E8;
      }
      goto L_0889D3A0;
    }
L_0889D3A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D3ACu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0889D3ACu) goto L_0889D3AC;
    return;
L_0889D3AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D3B8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D3B8u) goto L_0889D3B8;
    return;
L_0889D3B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D3D4;
      }
      goto L_0889D3C4;
    }
L_0889D3C4:
    ctx.gpr[31] = (0x0889D3CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 56u, 0x08B582CCu>(ctx, &aot_mem) && ctx.pc == 0x0889D3CCu) goto L_0889D3CC;
    return;
L_0889D3CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D3F0;
      }
      goto L_0889D3D4;
    }
L_0889D3D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D3E0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889D3E0u) goto L_0889D3E0;
    return;
L_0889D3E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889D408;
      }
      goto L_0889D3E8;
    }
L_0889D3E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889D408;
      }
      goto L_0889D3F0;
    }
L_0889D3F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D3FCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889D3FCu) goto L_0889D3FC;
    return;
L_0889D3FC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D408u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 397u, 0x08806C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D408u) goto L_0889D408;
    return;
L_0889D408:
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
L_0889D420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D43Cu);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 286u, 0x088064C0u>(ctx, &aot_mem) && ctx.pc == 0x0889D43Cu) goto L_0889D43C;
    return;
L_0889D43C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D458;
      }
      goto L_0889D444;
    }
L_0889D444:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D458u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22732));
    goto L_0889D1FC;
L_0889D458:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D46C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D490u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0889D490u) goto L_0889D490;
    return;
L_0889D490:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889D4A8;
      }
      goto L_0889D498;
    }
L_0889D498:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D4A8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0889D140;
L_0889D4A8:
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
L_0889D4C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D4DCu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0889D4DCu) goto L_0889D4DC;
    return;
L_0889D4DC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889D4F8;
      }
      goto L_0889D4E8;
    }
L_0889D4E8:
    ctx.gpr[6] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25384));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D4F8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0889CFFC;
L_0889D4F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D50C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D534u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D534u) goto L_0889D534;
    return;
L_0889D534:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D550;
      }
      goto L_0889D540;
    }
L_0889D540:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D550u);
    ctx.gpr[6] = (0u | 4u);
    goto L_0889D140;
L_0889D550:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D568;
      }
      goto L_0889D558;
    }
L_0889D558:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D564u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 387u, 0x08806BD8u>(ctx, &aot_mem) && ctx.pc == 0x0889D564u) goto L_0889D564;
    return;
L_0889D564:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0889D568;
L_0889D568:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0889D588:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D5B4u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0889D5B4u) goto L_0889D5B4;
    return;
L_0889D5B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0889D5E4;
      }
      goto L_0889D5BC;
    }
L_0889D5BC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D5DC;
      }
      goto L_0889D5C4;
    }
L_0889D5C4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0889D5D8;
      }
      goto L_0889D5CC;
    }
L_0889D5CC:
    ctx.gpr[31] = (0x0889D5D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x0889D5D4u) goto L_0889D5D4;
    return;
L_0889D5D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0889D5D8;
L_0889D5D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0889D5DC;
L_0889D5DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889D5F4;
      }
      goto L_0889D5E4;
    }
L_0889D5E4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D5F4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0889D50C;
L_0889D5F4:
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
L_0889D610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D630u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x0889D630u) goto L_0889D630;
    return;
L_0889D630:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[12])) && ctx.fpr[20] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889D668;
      }
      goto L_0889D648;
    }
L_0889D648:
    ctx.gpr[31] = (0x0889D650u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D650u) goto L_0889D650;
    return;
L_0889D650:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D668;
      }
      goto L_0889D658;
    }
L_0889D658:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889D668u);
    ctx.gpr[6] = (0u | 3u);
    goto L_0889D140;
L_0889D668:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
L_0889D684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D6A8u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0889D6A8u) goto L_0889D6A8;
    return;
L_0889D6A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0889D6B8;
      }
      goto L_0889D6B0;
    }
L_0889D6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0889D6C4;
      }
      goto L_0889D6B8;
    }
L_0889D6B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D6C4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0889D610;
L_0889D6C4:
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
L_0889D6DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D6F8u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 466u, 0x08807294u>(ctx, &aot_mem) && ctx.pc == 0x0889D6F8u) goto L_0889D6F8;
    return;
L_0889D6F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D740;
      }
      goto L_0889D700;
    }
L_0889D700:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D70Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0889D70Cu) goto L_0889D70C;
    return;
L_0889D70C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D718u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0889D718u) goto L_0889D718;
    return;
L_0889D718:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D724u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0889D724u) goto L_0889D724;
    return;
L_0889D724:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D748;
      }
      goto L_0889D72C;
    }
L_0889D72C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D738u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889D738u) goto L_0889D738;
    return;
L_0889D738:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889D758;
      }
      goto L_0889D740;
    }
L_0889D740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889D758;
      }
      goto L_0889D748;
    }
L_0889D748:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D754u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 310u, 0x088066C0u>(ctx, &aot_mem) && ctx.pc == 0x0889D754u) goto L_0889D754;
    return;
L_0889D754:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889D758;
L_0889D758:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889D76C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0889D7B0;
      }
      goto L_0889D790;
    }
L_0889D790:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < -9999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D7B0;
      }
      goto L_0889D79C;
    }
L_0889D79C:
    ctx.gpr[31] = (0x0889D7A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x0889D7A4u) goto L_0889D7A4;
    return;
L_0889D7A4:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889D7B0;
      }
      goto L_0889D7B0;
    }
L_0889D7B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889D7C0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_0889D6DC;
L_0889D7C0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D7D0;
      }
      goto L_0889D7C8;
    }
L_0889D7C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889D7F4;
      }
      goto L_0889D7D0;
    }
L_0889D7D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D7DCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D7DCu) goto L_0889D7DC;
    return;
L_0889D7DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0889D7F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem) && ctx.pc == 0x0889D7F0u) goto L_0889D7F0;
    return;
L_0889D7F0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_0889D7F4;
L_0889D7F4:
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
L_0889D80C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0889D8B4;
      }
      goto L_0889D840;
    }
L_0889D840:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D84Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0889D84Cu) goto L_0889D84C;
    return;
L_0889D84C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D858u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x0889D858u) goto L_0889D858;
    return;
L_0889D858:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D864u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0889D864u) goto L_0889D864;
    return;
L_0889D864:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D8A4;
      }
      goto L_0889D86C;
    }
L_0889D86C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D878u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889D878u) goto L_0889D878;
    return;
L_0889D878:
    ctx.gpr[31] = (0x0889D880u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x0889D880u) goto L_0889D880;
    return;
L_0889D880:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D88Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0889D88Cu) goto L_0889D88C;
    return;
L_0889D88C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D898u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D898u) goto L_0889D898;
    return;
L_0889D898:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D8A4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x0889D8A4u) goto L_0889D8A4;
    return;
L_0889D8A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[31] = (0x0889D8B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D8B4u) goto L_0889D8B4;
    return;
L_0889D8B4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889D930;
      }
      goto L_0889D8C0;
    }
L_0889D8C0:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.gpr[21] = (0u - ctx.gpr[21]);
    ctx.gpr[19] = (0u - ctx.gpr[19]);
    goto L_0889D8CC;
L_0889D8CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D8D8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0889D8D8u) goto L_0889D8D8;
    return;
L_0889D8D8:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889D904;
      }
      goto L_0889D8E8;
    }
L_0889D8E8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D8F4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D8F4u) goto L_0889D8F4;
    return;
L_0889D8F4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D8E8;
      }
      goto L_0889D904;
    }
L_0889D904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D914u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem) && ctx.pc == 0x0889D914u) goto L_0889D914;
    return;
L_0889D914:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889D920u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x0889D920u) goto L_0889D920;
    return;
L_0889D920:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D8CC;
      }
      goto L_0889D930;
    }
L_0889D930:
    ctx.gpr[5] = (0u - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0889D940u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889D940u) goto L_0889D940;
    return;
L_0889D940:
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
L_0889D964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D988u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem) && ctx.pc == 0x0889D988u) goto L_0889D988;
    return;
L_0889D988:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889D9AC;
      }
      goto L_0889D998;
    }
L_0889D998:
    ctx.gpr[31] = (0x0889D9A0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem) && ctx.pc == 0x0889D9A0u) goto L_0889D9A0;
    return;
L_0889D9A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889D9AC;
      }
      goto L_0889D9A8;
    }
L_0889D9A8:
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0889D9AC;
L_0889D9AC:
    ctx.gpr[5] = (0u - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0889D9BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889D9BCu) goto L_0889D9BC;
    return;
L_0889D9BC:
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
L_0889D9D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889D9F4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x0889D9F4u) goto L_0889D9F4;
    return;
L_0889D9F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DA00u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0889DA00u) goto L_0889DA00;
    return;
L_0889DA00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DA7C;
      }
      goto L_0889DA08;
    }
L_0889DA08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DA14u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889DA14u) goto L_0889DA14;
    return;
L_0889DA14:
    ctx.gpr[31] = (0x0889DA1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x0889DA1Cu) goto L_0889DA1C;
    return;
L_0889DA1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DA28u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DA28u) goto L_0889DA28;
    return;
L_0889DA28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DA34u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem) && ctx.pc == 0x0889DA34u) goto L_0889DA34;
    return;
L_0889DA34:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25368));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DA44u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889DA44u) goto L_0889DA44;
    return;
L_0889DA44:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25360));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DA54u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889DA54u) goto L_0889DA54;
    return;
L_0889DA54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DA60u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x0889DA60u) goto L_0889DA60;
    return;
L_0889DA60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DA6Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DA6Cu) goto L_0889DA6C;
    return;
L_0889DA6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    ctx.gpr[31] = (0x0889DA7Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DA7Cu) goto L_0889DA7C;
    return;
L_0889DA7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DA8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25416));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889DADC;
      }
      goto L_0889DABC;
    }
L_0889DABC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -9999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DADC;
      }
      goto L_0889DAC8;
    }
L_0889DAC8:
    ctx.gpr[31] = (0x0889DAD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x0889DAD0u) goto L_0889DAD0;
    return;
L_0889DAD0:
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889DADC;
      }
      goto L_0889DADC;
    }
L_0889DADC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889DAECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889DAECu) goto L_0889DAEC;
    return;
L_0889DAEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DAF8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0889DAF8u) goto L_0889DAF8;
    return;
L_0889DAF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DB04u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0889D964;
L_0889DB04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889DB3C;
      }
      goto L_0889DB0C;
    }
L_0889DB0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889DB1Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889DB1Cu) goto L_0889DB1C;
    return;
L_0889DB1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DB28u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x0889DB28u) goto L_0889DB28;
    return;
L_0889DB28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DB34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x0889DB34u) goto L_0889DB34;
    return;
L_0889DB34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DB74;
      }
      goto L_0889DB3C;
    }
L_0889DB3C:
    ctx.gpr[31] = (0x0889DB44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0889D9D8;
L_0889DB44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DB50u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DB50u) goto L_0889DB50;
    return;
L_0889DB50:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DB5Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem) && ctx.pc == 0x0889DB5Cu) goto L_0889DB5C;
    return;
L_0889DB5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DB68u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x0889DB68u) goto L_0889DB68;
    return;
L_0889DB68:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DB74u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889DB74u) goto L_0889DB74;
    return;
L_0889DB74:
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
L_0889DB90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889DBD0;
      }
      goto L_0889DBB0;
    }
L_0889DBB0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < -9999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DBD0;
      }
      goto L_0889DBBC;
    }
L_0889DBBC:
    ctx.gpr[31] = (0x0889DBC4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x0889DBC4u) goto L_0889DBC4;
    return;
L_0889DBC4:
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889DBD0;
      }
      goto L_0889DBD0;
    }
L_0889DBD0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25416));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DBE0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889DBE0u) goto L_0889DBE0;
    return;
L_0889DBE0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DBECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0889DBECu) goto L_0889DBEC;
    return;
L_0889DBEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DBF8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0889D964;
L_0889DBF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0889DC44;
      }
      goto L_0889DC00;
    }
L_0889DC00:
    ctx.gpr[31] = (0x0889DC08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0889D9D8;
L_0889DC08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DC14u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DC14u) goto L_0889DC14;
    return;
L_0889DC14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DC20u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem) && ctx.pc == 0x0889DC20u) goto L_0889DC20;
    return;
L_0889DC20:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DC2Cu);
    ctx.gpr[5] = (0u | 2u);
    goto L_0889D964;
L_0889DC2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0889DC3C;
      }
      goto L_0889DC34;
    }
L_0889DC34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0889DC4C;
      }
      goto L_0889DC3C;
    }
L_0889DC3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DC94;
      }
      goto L_0889DC44;
    }
L_0889DC44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DC94;
      }
      goto L_0889DC4C;
    }
L_0889DC4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889DC5Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x0889DC5Cu) goto L_0889DC5C;
    return;
L_0889DC5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DC68u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0889DC68u) goto L_0889DC68;
    return;
L_0889DC68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DC84;
      }
      goto L_0889DC70;
    }
L_0889DC70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DC7Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889DC7Cu) goto L_0889DC7C;
    return;
L_0889DC7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889DC4C;
      }
      goto L_0889DC84;
    }
L_0889DC84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889DC90u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889DC90u) goto L_0889DC90;
    return;
L_0889DC90:
    ctx.gpr[2] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    goto L_0889DC94;
L_0889DC94:
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
L_0889DCAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DCDC;
      }
      goto L_0889DCD4;
    }
L_0889DCD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889DD00;
      }
      goto L_0889DCDC;
    }
L_0889DCDC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0889DCECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0889DCECu) goto L_0889DCEC;
    return;
L_0889DCEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    goto L_0889DD00;
L_0889DD00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DD14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DDCC;
      }
      goto L_0889DD44;
    }
L_0889DD44:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0889DD58u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 387u, 0x08806BD8u>(ctx, &aot_mem) && ctx.pc == 0x0889DD58u) goto L_0889DD58;
    return;
L_0889DD58:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0889DD5C;
L_0889DD5C:
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u - ctx.gpr[17]);
    ctx.gpr[31] = (0x0889DD6Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 387u, 0x08806BD8u>(ctx, &aot_mem) && ctx.pc == 0x0889DD6Cu) goto L_0889DD6C;
    return;
L_0889DD6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0889DD90;
      }
      goto L_0889DD84;
    }
L_0889DD84:
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DD9C;
      }
      goto L_0889DD90;
    }
L_0889DD90:
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889DDA4;
      }
      goto L_0889DD9C;
    }
L_0889DD9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DDB0;
      }
      goto L_0889DDA4;
    }
L_0889DDA4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DD5C;
      }
      goto L_0889DDB0;
    }
L_0889DDB0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0889DDBCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 546u, 0x08807904u>(ctx, &aot_mem) && ctx.pc == 0x0889DDBCu) goto L_0889DDBC;
    return;
L_0889DDBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0889DDCC;
L_0889DDCC:
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
L_0889DDEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889DE00u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0889DCAC;
L_0889DE00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DE10;
      }
      goto L_0889DE08;
    }
L_0889DE08:
    ctx.gpr[31] = (0x0889DE10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0889DD14;
L_0889DE10:
    ctx.gpr[2] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DE24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889DE98;
      }
      goto L_0889DE54;
    }
L_0889DE54:
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(1036));
    goto L_0889DE58;
L_0889DE58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DE70;
      }
      goto L_0889DE68;
    }
L_0889DE68:
    ctx.gpr[31] = (0x0889DE70u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0889DDEC;
L_0889DE70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0889DE58;
      }
      goto L_0889DE98;
    }
L_0889DE98:
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
L_0889DEB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889DECCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0889DCAC;
L_0889DECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0889DED8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 546u, 0x08807904u>(ctx, &aot_mem) && ctx.pc == 0x0889DED8u) goto L_0889DED8;
    return;
L_0889DED8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DEF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889DF1Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 387u, 0x08806BD8u>(ctx, &aot_mem) && ctx.pc == 0x0889DF1Cu) goto L_0889DF1C;
    return;
L_0889DF1C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1024u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889DF7C;
      }
      goto L_0889DF40;
    }
L_0889DF40:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889DF4Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DF4Cu) goto L_0889DF4C;
    return;
L_0889DF4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889DF5Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x0889DF5Cu) goto L_0889DF5C;
    return;
L_0889DF5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x0889DF74u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889DF74u) goto L_0889DF74;
    return;
L_0889DF74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DFAC;
      }
      goto L_0889DF7C;
    }
L_0889DF7C:
    ctx.gpr[31] = (0x0889DF84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0889DCAC;
L_0889DF84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889DF98;
      }
      goto L_0889DF8C;
    }
L_0889DF8C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889DF98u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x0889DF98u) goto L_0889DF98;
    return;
L_0889DF98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0889DFACu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_0889DD14;
L_0889DFAC:
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
L_0889DFC8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889DFDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25348)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E010u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 898u, 0x08B3B264u>(ctx, &aot_mem) && ctx.pc == 0x0889E010u) goto L_0889E010;
    return;
L_0889E010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E068;
      }
      goto L_0889E038;
    }
L_0889E038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889E070;
      }
      goto L_0889E054;
    }
L_0889E054:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889E060u);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 822u, 0x08B3AEC4u>(ctx, &aot_mem) && ctx.pc == 0x0889E060u) goto L_0889E060;
    return;
L_0889E060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0889E080;
      }
      goto L_0889E068;
    }
L_0889E068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E090;
      }
      goto L_0889E070;
    }
L_0889E070:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889E07Cu);
    ctx.gpr[6] = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 864u, 0x08B3B0E4u>(ctx, &aot_mem) && ctx.pc == 0x0889E07Cu) goto L_0889E07C;
    return;
L_0889E07C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0889E080;
L_0889E080:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
        goto L_0889E090;
    }
    goto L_0889E090;
L_0889E090:
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
L_0889E0A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E0CCu);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E0CCu) goto L_0889E0CC;
    return;
L_0889E0CC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0889E0DCu);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22712));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 341u, 0x08B552F4u>(ctx, &aot_mem) && ctx.pc == 0x0889E0DCu) goto L_0889E0DC;
    return;
L_0889E0DC:
    ctx.gpr[31] = (0x0889E0E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 74u, 0x08B583A8u>(ctx, &aot_mem) && ctx.pc == 0x0889E0E4u) goto L_0889E0E4;
    return;
L_0889E0E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889E0F8u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem) && ctx.pc == 0x0889E0F8u) goto L_0889E0F8;
    return;
L_0889E0F8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889E104u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 310u, 0x088066C0u>(ctx, &aot_mem) && ctx.pc == 0x0889E104u) goto L_0889E104;
    return;
L_0889E104:
    ctx.gpr[2] = (0u | 2u);
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
L_0889E124:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1032), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1036), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1040), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E154u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x0889E154u) goto L_0889E154;
    return;
L_0889E154:
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25344));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E168u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 440u, 0x08806F24u>(ctx, &aot_mem) && ctx.pc == 0x0889E168u) goto L_0889E168;
    return;
L_0889E168:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25340));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889E178u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 356u, 0x08809B44u>(ctx, &aot_mem) && ctx.pc == 0x0889E178u) goto L_0889E178;
    return;
L_0889E178:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889E1C4;
      }
      goto L_0889E184;
    }
L_0889E184:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (32768u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[22] = (ctx.gpr[7] + static_cast<std::uint32_t>(14520));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1028));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25320)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0889E1D8;
      }
      goto L_0889E1B4;
    }
L_0889E1B4:
    ctx.gpr[31] = (0x0889E1BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 822u, 0x08B3AEC4u>(ctx, &aot_mem) && ctx.pc == 0x0889E1BCu) goto L_0889E1BC;
    return;
L_0889E1BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889E1E4;
      }
      goto L_0889E1C4;
    }
L_0889E1C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E1D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0889E0A8;
L_0889E1D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E340;
      }
      goto L_0889E1D8;
    }
L_0889E1D8:
    ctx.gpr[31] = (0x0889E1E0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 864u, 0x08B3B0E4u>(ctx, &aot_mem) && ctx.pc == 0x0889E1E0u) goto L_0889E1E0;
    return;
L_0889E1E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0889E1E4;
L_0889E1E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889E218;
      }
      goto L_0889E1F4;
    }
L_0889E1F4:
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0889E204u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 855u, 0x08B3B024u>(ctx, &aot_mem) && ctx.pc == 0x0889E204u) goto L_0889E204;
    return;
L_0889E204:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1028))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_0889E238;
      }
      goto L_0889E218;
    }
L_0889E218:
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0889E228u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 898u, 0x08B3B264u>(ctx, &aot_mem) && ctx.pc == 0x0889E228u) goto L_0889E228;
    return;
L_0889E228:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1028))))));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    goto L_0889E238;
L_0889E238:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 151u);
      if (branch_taken) {
          goto L_0889E290;
      }
      goto L_0889E240;
    }
L_0889E240:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E290;
      }
      goto L_0889E248;
    }
L_0889E248:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889E270;
      }
      goto L_0889E25C;
    }
L_0889E25C:
    ctx.gpr[31] = (0x0889E264u);
    // nop
    ctx.pc = 0x08B7363Cu;
    return;
L_0889E264:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889E278;
      }
      goto L_0889E270;
    }
L_0889E270:
    ctx.gpr[31] = (0x0889E278u);
    // nop
    ctx.pc = 0x08B7368Cu;
    return;
L_0889E278:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25336));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889E288u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 356u, 0x08809B44u>(ctx, &aot_mem) && ctx.pc == 0x0889E288u) goto L_0889E288;
    return;
L_0889E288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889E2EC;
      }
      goto L_0889E290;
    }
L_0889E290:
    ctx.gpr[6] = (2186u << 16u);
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0889E2A8u);
    ctx.gpr[17] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8228));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E2A8u) goto L_0889E2A8;
    return;
L_0889E2A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0889E2BCu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 517u, 0x0880771Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E2BCu) goto L_0889E2BC;
    return;
L_0889E2BC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0889E300;
      }
      goto L_0889E2D8;
    }
L_0889E2D8:
    ctx.gpr[31] = (0x0889E2E0u);
    // nop
    ctx.pc = 0x08B7363Cu;
    return;
L_0889E2E0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889E308;
      }
      goto L_0889E2EC;
    }
L_0889E2EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E2F8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0889E0A8;
L_0889E2F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E340;
      }
      goto L_0889E300;
    }
L_0889E300:
    ctx.gpr[31] = (0x0889E308u);
    // nop
    ctx.pc = 0x08B7368Cu;
    return;
L_0889E308:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E330;
      }
      goto L_0889E310;
    }
L_0889E310:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E31Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889E31Cu) goto L_0889E31C;
    return;
L_0889E31C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E328u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0889E0A8;
L_0889E328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E340;
      }
      goto L_0889E330;
    }
L_0889E330:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E33Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 310u, 0x088066C0u>(ctx, &aot_mem) && ctx.pc == 0x0889E33Cu) goto L_0889E33C;
    return;
L_0889E33C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_0889E340;
L_0889E340:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1036)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1040)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889E37C;
      }
      goto L_0889E374;
    }
L_0889E374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E388;
      }
      goto L_0889E37C;
    }
L_0889E37C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_0889E388;
L_0889E388:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (2186u << 16u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E3B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7320));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 517u, 0x0880771Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E3B0u) goto L_0889E3B0;
    return;
L_0889E3B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E3BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889E464;
      }
      goto L_0889E3D8;
    }
L_0889E3D8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25312));
    ctx.gpr[31] = (0x0889E3E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x0889E3E4u) goto L_0889E3E4;
    return;
L_0889E3E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E3F0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x0889E3F0u) goto L_0889E3F0;
    return;
L_0889E3F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E3FCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x0889E3FCu) goto L_0889E3FC;
    return;
L_0889E3FC:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0889E42C;
      }
      goto L_0889E408;
    }
L_0889E408:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E414u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E414u) goto L_0889E414;
    return;
L_0889E414:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0889E424u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem) && ctx.pc == 0x0889E424u) goto L_0889E424;
    return;
L_0889E424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E464;
      }
      goto L_0889E42C;
    }
L_0889E42C:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(15532)));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25304));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E448u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E448u) goto L_0889E448;
    return;
L_0889E448:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889E458u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 425u, 0x08B55920u>(ctx, &aot_mem) && ctx.pc == 0x0889E458u) goto L_0889E458;
    return;
L_0889E458:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E464u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0889E464u) goto L_0889E464;
    return;
L_0889E464:
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
L_0889E47C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889E4B0;
      }
      goto L_0889E498;
    }
L_0889E498:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0889E4ACu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 512u, 0x0880768Cu>(ctx, &aot_mem) && ctx.pc == 0x0889E4ACu) goto L_0889E4AC;
    return;
L_0889E4AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_0889E4B0;
L_0889E4B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0889E4BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0889E3BC;
L_0889E4BC:
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
L_0889E4D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E4E8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0889E124;
L_0889E4E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E4F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0889E47C;
L_0889E4F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E518u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0889E390;
L_0889E518:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889E524u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0889E47C;
L_0889E524:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E534:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E554u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x0889E554u) goto L_0889E554;
    return;
L_0889E554:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889E568u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_0889E504;
L_0889E568:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E57C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0889E594;
L_0889E594:
    ctx.gpr[31] = (0x0889E59Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 299u, 0x08A1A2ECu>(ctx, &aot_mem) && ctx.pc == 0x0889E59Cu) goto L_0889E59C;
    return;
L_0889E59C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E5BC;
      }
      goto L_0889E5A4;
    }
L_0889E5A4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889E594;
      }
      goto L_0889E5B4;
    }
L_0889E5B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E5C4;
      }
      goto L_0889E5BC;
    }
L_0889E5BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889E5C8;
      }
      goto L_0889E5C4;
    }
L_0889E5C4:
    ctx.gpr[2] = (0u | 1u);
    goto L_0889E5C8;
L_0889E5C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E5DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0889E5F4;
L_0889E5F4:
    ctx.gpr[31] = (0x0889E5FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 306u, 0x08A1A348u>(ctx, &aot_mem) && ctx.pc == 0x0889E5FCu) goto L_0889E5FC;
    return;
L_0889E5FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889E5F4;
      }
      goto L_0889E60C;
    }
L_0889E60C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0889E638;
L_0889E638:
    ctx.gpr[31] = (0x0889E640u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 307u, 0x08A1A350u>(ctx, &aot_mem) && ctx.pc == 0x0889E640u) goto L_0889E640;
    return;
L_0889E640:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889E638;
      }
      goto L_0889E650;
    }
L_0889E650:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E664:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21920));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0889E698;
L_0889E698:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0889E6A4u);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0889E6A4u) goto L_0889E6A4;
    return;
L_0889E6A4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0889E6BC;
      }
      goto L_0889E6B0;
    }
L_0889E6B0:
    ctx.gpr[31] = (0x0889E6B8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 298u, 0x08A1A2DCu>(ctx, &aot_mem) && ctx.pc == 0x0889E6B8u) goto L_0889E6B8;
    return;
L_0889E6B8:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_0889E6BC;
L_0889E6BC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0889E698;
      }
      goto L_0889E6D0;
    }
L_0889E6D0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_0889E6F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E738;
      }
      goto L_0889E704;
    }
L_0889E704:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27556));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5900), 0u);
      if (branch_taken) {
          goto L_0889E724;
      }
      goto L_0889E718;
    }
L_0889E718:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_0889E724;
L_0889E724:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E738;
      }
      goto L_0889E730;
    }
L_0889E730:
    ctx.gpr[31] = (0x0889E738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0889E738u) goto L_0889E738;
    return;
L_0889E738:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889E7B0;
      }
      goto L_0889E760;
    }
L_0889E760:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21920));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0889E774u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0889E5DC;
L_0889E774:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_0889E7A0;
      }
      goto L_0889E77C;
    }
L_0889E77C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27556));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5900), 0u);
      if (branch_taken) {
          goto L_0889E79C;
      }
      goto L_0889E790;
    }
L_0889E790:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_0889E79C;
L_0889E79C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_0889E7A0;
L_0889E7A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E7B0;
      }
      goto L_0889E7A8;
    }
L_0889E7A8:
    ctx.gpr[31] = (0x0889E7B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0889E7B0u) goto L_0889E7B0;
    return;
L_0889E7B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E7C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E7D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E7D8u) goto L_0889E7D8;
    return;
L_0889E7D8:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x0889E7E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E7E4u) goto L_0889E7E4;
    return;
L_0889E7E4:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x0889E7F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E7F0u) goto L_0889E7F0;
    return;
L_0889E7F0:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0889E7FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E7FCu) goto L_0889E7FC;
    return;
L_0889E7FC:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x0889E808u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E808u) goto L_0889E808;
    return;
L_0889E808:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x0889E814u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E814u) goto L_0889E814;
    return;
L_0889E814:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0889E820u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E820u) goto L_0889E820;
    return;
L_0889E820:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0889E82Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E82Cu) goto L_0889E82C;
    return;
L_0889E82C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x0889E838u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E838u) goto L_0889E838;
    return;
L_0889E838:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x0889E844u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E844u) goto L_0889E844;
    return;
L_0889E844:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0889E850u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E850u) goto L_0889E850;
    return;
L_0889E850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E888;
      }
      goto L_0889E85C;
    }
L_0889E85C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11096)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11092)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11100)));
    ctx.gpr[5] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[4] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[31] = (0x0889E888u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E888u) goto L_0889E888;
    return;
L_0889E888:
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[31] = (0x0889E894u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem) && ctx.pc == 0x0889E894u) goto L_0889E894;
    return;
L_0889E894:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[7] = (18944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[6] = (ctx.gpr[7] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (19200u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(29552), ctx.gpr[5]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8EC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E8F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2186u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E914u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5908));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x0889E914u) goto L_0889E914;
    return;
L_0889E914:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E924:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2186u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E94Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5852));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem) && ctx.pc == 0x0889E94Cu) goto L_0889E94C;
    return;
L_0889E94C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E95C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E968:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2186u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E984u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5796));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 352u, 0x08A65998u>(ctx, &aot_mem) && ctx.pc == 0x0889E984u) goto L_0889E984;
    return;
L_0889E984:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E994:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889E9A4u);
    // nop
    goto L_0889E8F8;
L_0889E9A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889E9C0;
      }
      goto L_0889E9B0;
    }
L_0889E9B0:
    ctx.gpr[31] = (0x0889E9B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 226u, 0x08968F88u>(ctx, &aot_mem) && ctx.pc == 0x0889E9B8u) goto L_0889E9B8;
    return;
L_0889E9B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_0889E9C4;
      }
      goto L_0889E9C0;
    }
L_0889E9C0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889E9C4;
L_0889E9C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889E9D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0889EA50;
      }
      goto L_0889E9E8;
    }
L_0889E9E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889EA04u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 244u, 0x089690F0u>(ctx, &aot_mem) && ctx.pc == 0x0889EA04u) goto L_0889EA04;
    return;
L_0889EA04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EA48;
      }
      goto L_0889EA0C;
    }
L_0889EA0C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0889EA58;
      }
      goto L_0889EA40;
    }
L_0889EA40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EAC8;
      }
      goto L_0889EA48;
    }
L_0889EA48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EAC8;
      }
      goto L_0889EA50;
    }
L_0889EA50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EAC8;
      }
      goto L_0889EA58;
    }
L_0889EA58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_0889EA7C;
L_0889EA7C:
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[12] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[7] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0889EA7C;
      }
      goto L_0889EAC8;
    }
L_0889EAC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EADC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889EAF0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 287u, 0x0896950Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EAF0u) goto L_0889EAF0;
    return;
L_0889EAF0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EB08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2186u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889EB24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5412));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem) && ctx.pc == 0x0889EB24u) goto L_0889EB24;
    return;
L_0889EB24:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EB34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889EB50u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 285u, 0x089694F8u>(ctx, &aot_mem) && ctx.pc == 0x0889EB50u) goto L_0889EB50;
    return;
L_0889EB50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889EB78;
      }
      goto L_0889EB5C;
    }
L_0889EB5C:
    ctx.gpr[5] = (2186u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889EB70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5324));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 614u, 0x08972D0Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EB70u) goto L_0889EB70;
    return;
L_0889EB70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889EB80;
      }
      goto L_0889EB78;
    }
L_0889EB78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    goto L_0889EB80;
L_0889EB80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EB94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889EBB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 285u, 0x089694F8u>(ctx, &aot_mem) && ctx.pc == 0x0889EBB0u) goto L_0889EBB0;
    return;
L_0889EBB0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889EBCC;
      }
      goto L_0889EBB8;
    }
L_0889EBB8:
    ctx.gpr[5] = (2186u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0889EBCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5324));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 614u, 0x08972D0Cu>(ctx, &aot_mem) && ctx.pc == 0x0889EBCCu) goto L_0889EBCC;
    return;
L_0889EBCC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EBE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889EC00u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 284u, 0x089694F0u>(ctx, &aot_mem) && ctx.pc == 0x0889EC00u) goto L_0889EC00;
    return;
L_0889EC00:
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EC9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889ECB4u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_0889EBE0;
L_0889ECB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889ECC0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 149u, 0x089D8C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0889ECC0u) goto L_0889ECC0;
    return;
L_0889ECC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889ECD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0889ED10;
      }
      goto L_0889ED08;
    }
L_0889ED08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EE14;
      }
      goto L_0889ED10;
    }
L_0889ED10:
    ctx.gpr[31] = (0x0889ED18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0889E8F8;
L_0889ED18:
    ctx.gpr[31] = (0x0889ED20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 226u, 0x08968F88u>(ctx, &aot_mem) && ctx.pc == 0x0889ED20u) goto L_0889ED20;
    return;
L_0889ED20:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889ED2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0889EB08;
L_0889ED2C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0889ED50u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 228u, 0x08968F9Cu>(ctx, &aot_mem) && ctx.pc == 0x0889ED50u) goto L_0889ED50;
    return;
L_0889ED50:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0889EE14;
      }
      goto L_0889ED60;
    }
L_0889ED60:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[19] = (0u | 8u);
    goto L_0889ED78;
L_0889ED78:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0889ED88u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_0889EC9C;
L_0889ED88:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0889ED98u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_0889EBE0;
L_0889ED98:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0889EDACu);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 233u, 0x088618A8u>(ctx, &aot_mem) && ctx.pc == 0x0889EDACu) goto L_0889EDAC;
    return;
L_0889EDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDD8;
      }
      goto L_0889EDC8;
    }
L_0889EDC8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_0889EDD8;
L_0889EDD8:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EDF8;
      }
      goto L_0889EDE4;
    }
L_0889EDE4:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0889EDFC;
      }
      goto L_0889EDF8;
    }
L_0889EDF8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0889EDFC;
L_0889EDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0889ED78;
      }
      goto L_0889EE14;
    }
L_0889EE14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EE44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889EEC8;
      }
      goto L_0889EEA8;
    }
L_0889EEA8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[6] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0889EEFC;
      }
      goto L_0889EEC8;
    }
L_0889EEC8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889EEFC;
      }
      goto L_0889EEE0;
    }
L_0889EEE0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    ctx.gpr[6] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    goto L_0889EEFC;
L_0889EEFC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EF34;
      }
      goto L_0889EF04;
    }
L_0889EF04:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    goto L_0889EF34;
L_0889EF34:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0889EF74;
      }
      goto L_0889EF54;
    }
L_0889EF54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[6] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
      if (branch_taken) {
          goto L_0889EFA8;
      }
      goto L_0889EF74;
    }
L_0889EF74:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889EFA8;
      }
      goto L_0889EF8C;
    }
L_0889EF8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[6] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    goto L_0889EFA8;
L_0889EFA8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889EFE0;
      }
      goto L_0889EFB0;
    }
L_0889EFB0:
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    goto L_0889EFE0;
L_0889EFE0:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889EFE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-640));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[16];
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[19];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[15])) && ctx.fpr[14] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[0];
      if (branch_taken) {
          goto L_0889F208;
      }
      goto L_0889F030;
    }
L_0889F030:
    ctx.fpr[14] = ctx.fpr[18] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F064;
      }
      goto L_0889F044;
    }
L_0889F044:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F064;
      }
      goto L_0889F054;
    }
L_0889F054:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
      if (branch_taken) {
          goto L_0889F06C;
      }
      goto L_0889F05C;
    }
L_0889F05C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F16C;
      }
      goto L_0889F064;
    }
L_0889F064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F3F8;
      }
      goto L_0889F06C;
    }
L_0889F06C:
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[11]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[11]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[19] = ctx.fpr[2] - ctx.fpr[19];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[11]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[11]);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F164;
      }
      goto L_0889F144;
    }
L_0889F144:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F3F8;
      }
      goto L_0889F164;
    }
L_0889F164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F208;
      }
      goto L_0889F16C;
    }
L_0889F16C:
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[11]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[2]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[3] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F208;
      }
      goto L_0889F1FC;
    }
L_0889F1FC:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F3F8;
      }
      goto L_0889F208;
    }
L_0889F208:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[16]) || std::isnan(ctx.fpr[15])) && ctx.fpr[16] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F3F4;
      }
      goto L_0889F218;
    }
L_0889F218:
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F24C;
      }
      goto L_0889F22C;
    }
L_0889F22C:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F24C;
      }
      goto L_0889F23C;
    }
L_0889F23C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
      if (branch_taken) {
          goto L_0889F254;
      }
      goto L_0889F244;
    }
L_0889F244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F358;
      }
      goto L_0889F24C;
    }
L_0889F24C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0889F3F8;
      }
      goto L_0889F254;
    }
L_0889F254:
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[4]);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[5]);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F350;
      }
      goto L_0889F330;
    }
L_0889F330:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F3F8;
      }
      goto L_0889F350;
    }
L_0889F350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F3F4;
      }
      goto L_0889F358;
    }
L_0889F358:
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F3F4;
      }
      goto L_0889F3E8;
    }
L_0889F3E8:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F3F8;
      }
      goto L_0889F3F4;
    }
L_0889F3F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_0889F3F8;
L_0889F3F8:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889F400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[31]);
    ctx.gpr[31] = (0x0889F444u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F444u) goto L_0889F444;
    return;
L_0889F444:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F460;
      }
      goto L_0889F44C;
    }
L_0889F44C:
    ctx.gpr[31] = (0x0889F454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 526u, 0x08AAE958u>(ctx, &aot_mem) && ctx.pc == 0x0889F454u) goto L_0889F454;
    return;
L_0889F454:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F460;
      }
      goto L_0889F45C;
    }
L_0889F45C:
    ctx.gpr[17] = (0u | 1u);
    goto L_0889F460;
L_0889F460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F548;
      }
      goto L_0889F470;
    }
L_0889F470:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F548;
      }
      goto L_0889F478;
    }
L_0889F478:
    ctx.gpr[31] = (0x0889F480u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F480u) goto L_0889F480;
    return;
L_0889F480:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F49C;
      }
      goto L_0889F488;
    }
L_0889F488:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889F554;
      }
      goto L_0889F49C;
    }
L_0889F49C:
    ctx.gpr[31] = (0x0889F4A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894D4DCu>(ctx, &aot_mem) && ctx.pc == 0x0889F4A4u) goto L_0889F4A4;
    return;
L_0889F4A4:
    ctx.gpr[31] = (0x0889F4ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0889F4ACu) goto L_0889F4AC;
    return;
L_0889F4AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F524;
      }
      goto L_0889F4B4;
    }
L_0889F4B4:
    ctx.gpr[31] = (0x0889F4BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 273u, 0x088954ACu>(ctx, &aot_mem) && ctx.pc == 0x0889F4BCu) goto L_0889F4BC;
    return;
L_0889F4BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F524;
      }
      goto L_0889F4C4;
    }
L_0889F4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0889F4E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem) && ctx.pc == 0x0889F4E4u) goto L_0889F4E4;
    return;
L_0889F4E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F50C;
      }
      goto L_0889F4EC;
    }
L_0889F4EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889F540;
      }
      goto L_0889F50C;
    }
L_0889F50C:
    ctx.gpr[31] = (0x0889F514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 184u, 0x089B4A30u>(ctx, &aot_mem) && ctx.pc == 0x0889F514u) goto L_0889F514;
    return;
L_0889F514:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F540;
      }
      goto L_0889F51C;
    }
L_0889F51C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 119u, 0x088A08ECu>(ctx, &aot_mem); return;
      }
      goto L_0889F524;
    }
L_0889F524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_0889F540;
L_0889F540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F554;
      }
      goto L_0889F548;
    }
L_0889F548:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889F554u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 377u, 0x088A1AF4u>(ctx, &aot_mem) && ctx.pc == 0x0889F554u) goto L_0889F554;
    return;
L_0889F554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1728)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F578;
      }
      goto L_0889F568;
    }
L_0889F568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F590;
      }
      goto L_0889F578;
    }
L_0889F578:
    ctx.gpr[31] = (0x0889F580u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F580u) goto L_0889F580;
    return;
L_0889F580:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F5A8;
      }
      goto L_0889F588;
    }
L_0889F588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F618;
      }
      goto L_0889F590;
    }
L_0889F590:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889F5A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0889F5A0u) goto L_0889F5A0;
    return;
L_0889F5A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 119u, 0x088A08ECu>(ctx, &aot_mem); return;
      }
      goto L_0889F5A8;
    }
L_0889F5A8:
    ctx.gpr[31] = (0x0889F5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0889F5B0u) goto L_0889F5B0;
    return;
L_0889F5B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0889F5D0;
      }
      goto L_0889F5C0;
    }
L_0889F5C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2318))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F5F8;
      }
      goto L_0889F5D0;
    }
L_0889F5D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2318))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F5F8;
      }
      goto L_0889F5E0;
    }
L_0889F5E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F618;
      }
      goto L_0889F5F8;
    }
L_0889F5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0889F610;
      }
      goto L_0889F608;
    }
L_0889F608:
    ctx.gpr[31] = (0x0889F610u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F610u) goto L_0889F610;
    return;
L_0889F610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 119u, 0x088A08ECu>(ctx, &aot_mem); return;
      }
      goto L_0889F618;
    }
L_0889F618:
    ctx.gpr[31] = (0x0889F620u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F620u) goto L_0889F620;
    return;
L_0889F620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F670;
      }
      goto L_0889F628;
    }
L_0889F628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F670;
      }
      goto L_0889F638;
    }
L_0889F638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F670;
      }
      goto L_0889F648;
    }
L_0889F648:
    ctx.gpr[31] = (0x0889F650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0889F650u) goto L_0889F650;
    return;
L_0889F650:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2312)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0889F670;
      }
      goto L_0889F65C;
    }
L_0889F65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F6FC;
      }
      goto L_0889F670;
    }
L_0889F670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F6D8;
      }
      goto L_0889F68C;
    }
L_0889F68C:
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[31] = (0x0889F6C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem) && ctx.pc == 0x0889F6C0u) goto L_0889F6C0;
    return;
L_0889F6C0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F710;
      }
      goto L_0889F6D0;
    }
L_0889F6D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0889F71C;
      }
      goto L_0889F6D8;
    }
L_0889F6D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 119u, 0x088A08ECu>(ctx, &aot_mem); return;
      }
      goto L_0889F6FC;
    }
L_0889F6FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889F708u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem) && ctx.pc == 0x0889F708u) goto L_0889F708;
    return;
L_0889F708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 119u, 0x088A08ECu>(ctx, &aot_mem); return;
      }
      goto L_0889F710;
    }
L_0889F710:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[24] / ctx.fpr[26];
    goto L_0889F71C;
L_0889F71C:
    ctx.gpr[31] = (0x0889F724u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0889F724u) goto L_0889F724;
    return;
L_0889F724:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F744;
      }
      goto L_0889F72C;
    }
L_0889F72C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 44u, 0x088A0284u>(ctx, &aot_mem); return;
      }
      goto L_0889F744;
    }
L_0889F744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_0889F784;
      }
      goto L_0889F754;
    }
L_0889F754:
    ctx.gpr[31] = (0x0889F75Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x0889F75Cu) goto L_0889F75C;
    return;
L_0889F75C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F784;
      }
      goto L_0889F764;
    }
L_0889F764:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0889F77Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem) && ctx.pc == 0x0889F77Cu) goto L_0889F77C;
    return;
L_0889F77C:
    ctx.gpr[31] = (0x0889F784u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 332u, 0x0890932Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F784u) goto L_0889F784;
    return;
L_0889F784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0889F85C;
      }
      goto L_0889F790;
    }
L_0889F790:
    ctx.gpr[31] = (0x0889F798u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x0889F798u) goto L_0889F798;
    return;
L_0889F798:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F85C;
      }
      goto L_0889F7A0;
    }
L_0889F7A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2301)));
    ctx.gpr[5] = (16384u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0889F7F0;
      }
      goto L_0889F7B0;
    }
L_0889F7B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F7D4;
      }
      goto L_0889F7C8;
    }
L_0889F7C8:
    ctx.gpr[4] = (16480u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0889F7F0;
      }
      goto L_0889F7D4;
    }
L_0889F7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F7F0;
      }
      goto L_0889F7EC;
    }
L_0889F7EC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2301), static_cast<std::uint8_t>(0u));
    goto L_0889F7F0;
L_0889F7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F808;
      }
      goto L_0889F800;
    }
L_0889F800:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0889F808;
L_0889F808:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F85C;
      }
      goto L_0889F818;
    }
L_0889F818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1732)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F848;
      }
      goto L_0889F830;
    }
L_0889F830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889F85C;
      }
      goto L_0889F848;
    }
L_0889F848:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[31] = (0x0889F854u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x0889F854u) goto L_0889F854;
    return;
L_0889F854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 119u, 0x088A08ECu>(ctx, &aot_mem); return;
      }
      goto L_0889F85C;
    }
L_0889F85C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F8E0;
      }
      goto L_0889F878;
    }
L_0889F878:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889F8E0;
      }
      goto L_0889F8BC;
    }
L_0889F8BC:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0889F8E0;
L_0889F8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F914;
      }
      goto L_0889F8EC;
    }
L_0889F8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889F914;
      }
      goto L_0889F8F8;
    }
L_0889F8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1772)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889F92C;
      }
      goto L_0889F914;
    }
L_0889F914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
        goto L_0889F94C;
    }
    goto L_0889F924;
L_0889F924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FBC0;
      }
      goto L_0889F92C;
    }
L_0889F92C:
    ctx.gpr[31] = (0x0889F934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem) && ctx.pc == 0x0889F934u) goto L_0889F934;
    return;
L_0889F934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1772), 0u);
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 119u, 0x088A08ECu>(ctx, &aot_mem); return;
      }
      goto L_0889F94C;
    }
L_0889F94C:
    ctx.gpr[20] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FBC0;
      }
      goto L_0889F95C;
    }
L_0889F95C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FBC0;
      }
      goto L_0889F96C;
    }
L_0889F96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FBC0;
      }
      goto L_0889F980;
    }
L_0889F980:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FBC0;
      }
      goto L_0889F988;
    }
L_0889F988:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (0u | 61u);
      if (branch_taken) {
          goto L_0889FA3C;
      }
      goto L_0889F998;
    }
L_0889F998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1732)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FA3C;
      }
      goto L_0889F9B0;
    }
L_0889F9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FA3C;
      }
      goto L_0889F9C8;
    }
L_0889F9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_0889F9F8;
      }
      goto L_0889F9DC;
    }
L_0889F9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FA0C;
      }
      goto L_0889F9F4;
    }
L_0889F9F4:
    ctx.gpr[4] = (16448u << 16u);
    goto L_0889F9F8;
L_0889F9F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FA3C;
      }
      goto L_0889FA0C;
    }
L_0889FA0C:
    ctx.gpr[31] = (0x0889FA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0889FA14u) goto L_0889FA14;
    return;
L_0889FA14:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16192u << 16u);
      if (branch_taken) {
          goto L_0889FBC0;
      }
      goto L_0889FA24;
    }
L_0889FA24:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FBC0;
      }
      goto L_0889FA3C;
    }
L_0889FA3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0889FA68;
      }
      goto L_0889FA50;
    }
L_0889FA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FA70;
      }
      goto L_0889FA68;
    }
L_0889FA68:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0889FA70;
L_0889FA70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB28;
      }
      goto L_0889FA84;
    }
L_0889FA84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0889FAA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x0889FAA4u) goto L_0889FAA4;
    return;
L_0889FAA4:
    ctx.gpr[31] = (0x0889FAACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem) && ctx.pc == 0x0889FAACu) goto L_0889FAAC;
    return;
L_0889FAAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FAD4;
      }
      goto L_0889FAB4;
    }
L_0889FAB4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889FAC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x0889FAC4u) goto L_0889FAC4;
    return;
L_0889FAC4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0889FAD4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 358u, 0x089B5A20u>(ctx, &aot_mem) && ctx.pc == 0x0889FAD4u) goto L_0889FAD4;
    return;
L_0889FAD4:
    ctx.gpr[31] = (0x0889FADCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem) && ctx.pc == 0x0889FADCu) goto L_0889FADC;
    return;
L_0889FADC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB00;
      }
      goto L_0889FAE4;
    }
L_0889FAE4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889FAF4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 94u, 0x089105E8u>(ctx, &aot_mem) && ctx.pc == 0x0889FAF4u) goto L_0889FAF4;
    return;
L_0889FAF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889FB00u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 34u, 0x08910218u>(ctx, &aot_mem) && ctx.pc == 0x0889FB00u) goto L_0889FB00;
    return;
L_0889FB00:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889FB10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 10u, 0x08910074u>(ctx, &aot_mem) && ctx.pc == 0x0889FB10u) goto L_0889FB10;
    return;
L_0889FB10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2060)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889FB20u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 686u, 0x0890AA84u>(ctx, &aot_mem) && ctx.pc == 0x0889FB20u) goto L_0889FB20;
    return;
L_0889FB20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FB38;
      }
      goto L_0889FB28;
    }
L_0889FB28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0889FB38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 751u, 0x0890AED8u>(ctx, &aot_mem) && ctx.pc == 0x0889FB38u) goto L_0889FB38;
    return;
L_0889FB38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_0889FB88;
      }
      goto L_0889FB48;
    }
L_0889FB48:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FB88;
      }
      goto L_0889FB5C;
    }
L_0889FB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 2048u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889FB80u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0889FB80u) goto L_0889FB80;
    return;
L_0889FB80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 43u, 0x088A027Cu>(ctx, &aot_mem); return;
      }
      goto L_0889FB88;
    }
L_0889FB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 43u, 0x088A027Cu>(ctx, &aot_mem); return;
      }
      goto L_0889FB98;
    }
L_0889FB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 43u, 0x088A027Cu>(ctx, &aot_mem); return;
      }
      goto L_0889FBC0;
    }
L_0889FBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[20] = (ctx.gpr[4] ^ 39u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0889FE60;
      }
      goto L_0889FBDC;
    }
L_0889FBDC:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FE60;
      }
      goto L_0889FBEC;
    }
L_0889FBEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 46u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FE60;
      }
      goto L_0889FC04;
    }
L_0889FC04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0889FE60;
      }
      goto L_0889FC1C;
    }
L_0889FC1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FC3C;
      }
      goto L_0889FC2C;
    }
L_0889FC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FD30;
      }
      goto L_0889FC3C;
    }
L_0889FC3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65472u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x0889FC5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem) && ctx.pc == 0x0889FC5Cu) goto L_0889FC5C;
    return;
L_0889FC5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0889FC78u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889FC78u) goto L_0889FC78;
    return;
L_0889FC78:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FD44;
      }
      goto L_0889FC80;
    }
L_0889FC80:
    ctx.gpr[31] = (0x0889FC88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0889FC88u) goto L_0889FC88;
    return;
L_0889FC88:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25268)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25272)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889FC9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FC9Cu) goto L_0889FC9C;
    return;
L_0889FC9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25260)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25264)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889FCD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 613u, 0x0890A5BCu>(ctx, &aot_mem) && ctx.pc == 0x0889FCD4u) goto L_0889FCD4;
    return;
L_0889FCD4:
    ctx.gpr[31] = (0x0889FCDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0889FCDCu) goto L_0889FCDC;
    return;
L_0889FCDC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25252)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25256)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889FCF8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FCF8u) goto L_0889FCF8;
    return;
L_0889FCF8:
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
    ctx.gpr[31] = (0x0889FD28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x0889FD28u) goto L_0889FD28;
    return;
L_0889FD28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 40u, 0x088A0238u>(ctx, &aot_mem); return;
      }
      goto L_0889FD30;
    }
L_0889FD30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889FD3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 696u, 0x089AB4FCu>(ctx, &aot_mem) && ctx.pc == 0x0889FD3Cu) goto L_0889FD3C;
    return;
L_0889FD3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 119u, 0x088A08ECu>(ctx, &aot_mem); return;
      }
      goto L_0889FD44;
    }
L_0889FD44:
    ctx.gpr[31] = (0x0889FD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0889FD4Cu) goto L_0889FD4C;
    return;
L_0889FD4C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25244)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25248)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889FD60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FD60u) goto L_0889FD60;
    return;
L_0889FD60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25236)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25240)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889FD98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 613u, 0x0890A5BCu>(ctx, &aot_mem) && ctx.pc == 0x0889FD98u) goto L_0889FD98;
    return;
L_0889FD98:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889FE04;
      }
      goto L_0889FDA8;
    }
L_0889FDA8:
    ctx.gpr[31] = (0x0889FDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0889FDB0u) goto L_0889FDB0;
    return;
L_0889FDB0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25252)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25256)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0889FDCCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FDCCu) goto L_0889FDCC;
    return;
L_0889FDCC:
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
    ctx.gpr[31] = (0x0889FDFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x0889FDFCu) goto L_0889FDFC;
    return;
L_0889FDFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 40u, 0x088A0238u>(ctx, &aot_mem); return;
      }
      goto L_0889FE04;
    }
L_0889FE04:
    ctx.gpr[31] = (0x0889FE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0889FE0Cu) goto L_0889FE0C;
    return;
L_0889FE0C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25228)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25232)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889FE20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FE20u) goto L_0889FE20;
    return;
L_0889FE20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25220)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25224)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0889FE58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem) && ctx.pc == 0x0889FE58u) goto L_0889FE58;
    return;
L_0889FE58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 40u, 0x088A0238u>(ctx, &aot_mem); return;
      }
      goto L_0889FE60;
    }
L_0889FE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1300)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FEA4;
      }
      goto L_0889FE70;
    }
L_0889FE70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FEA4;
      }
      goto L_0889FE80;
    }
L_0889FE80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    goto L_0889FEA4;
L_0889FEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 40u, 0x088A0238u>(ctx, &aot_mem); return;
      }
      goto L_0889FEB4;
    }
L_0889FEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 40u, 0x088A0238u>(ctx, &aot_mem); return;
      }
      goto L_0889FEC4;
    }
L_0889FEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF04;
      }
      goto L_0889FED4;
    }
L_0889FED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF04;
      }
      goto L_0889FEE4;
    }
L_0889FEE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF04;
      }
      goto L_0889FEF4;
    }
L_0889FEF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF20;
      }
      goto L_0889FF04;
    }
L_0889FF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889FF80;
      }
      goto L_0889FF18;
    }
L_0889FF18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 7u, 0x088A0048u>(ctx, &aot_mem); return;
      }
      goto L_0889FF20;
    }
L_0889FF20:
    ctx.gpr[31] = (0x0889FF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x0889FF28u) goto L_0889FF28;
    return;
L_0889FF28:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25212)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25216)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0889FF3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem) && ctx.pc == 0x0889FF3Cu) goto L_0889FF3C;
    return;
L_0889FF3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25204)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25208)));
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[6] = (ctx.gpr[2] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0889FF78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 654u, 0x089AB1F0u>(ctx, &aot_mem) && ctx.pc == 0x0889FF78u) goto L_0889FF78;
    return;
L_0889FF78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 119u, 0x088A08ECu>(ctx, &aot_mem); return;
      }
      goto L_0889FF80;
    }
L_0889FF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 6u, 0x088A0040u>(ctx, &aot_mem); return;
      }
      goto L_0889FF8C;
    }
L_0889FF8C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1396));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFE8;
      }
      goto L_0889FFB4;
    }
L_0889FFB4:
    ctx.gpr[31] = (0x0889FFBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem) && ctx.pc == 0x0889FFBCu) goto L_0889FFBC;
    return;
L_0889FFBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFF4;
      }
      goto L_0889FFC4;
    }
L_0889FFC4:
    ctx.gpr[31] = (0x0889FFCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem) && ctx.pc == 0x0889FFCCu) goto L_0889FFCC;
    return;
L_0889FFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889FFF4;
      }
      goto L_0889FFE8;
    }
L_0889FFE8:
    ctx.gpr[4] = (16576u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 7u, 0x088A0048u>(ctx, &aot_mem); return;
      }
      goto L_0889FFF4;
    }
L_0889FFF4:
    ctx.gpr[31] = (0x0889FFFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem) && ctx.pc == 0x0889FFFCu) goto L_0889FFFC;
    return;
L_0889FFFC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 5u, 0x088A0034u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 2u, 0x088A0004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0038(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0038_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_38(Runtime &runtime) {
    runtime.register_generated_unit(38u, 0x0889C000u, 16384u, &recomp_unit_0038, &recomp_unit_0038_entry);
    runtime.register_function(0x0889C000u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C008u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C014u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C01Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C024u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C054u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C06Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C074u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C084u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C08Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C094u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C09Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C0F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C114u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C120u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C13Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C14Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C158u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C160u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C168u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C180u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C188u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C194u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C1FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C204u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C21Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C234u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C23Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C254u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C26Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C274u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C298u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C2F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C378u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C380u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C388u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C394u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C3B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C3B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C3DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C3E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C3ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C404u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C40Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C414u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C43Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C4F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C570u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C580u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C590u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C5FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C604u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C608u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C644u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C6E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C734u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C73Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C758u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C774u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C77Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C784u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C798u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C7E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C800u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C804u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C814u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C828u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C83Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C84Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C85Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C86Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C874u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C880u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C890u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C898u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C8FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C90Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C920u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C92Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C940u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C950u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C968u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C984u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C99Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889C9F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CA8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CAE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB64u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CB94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CBE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CC9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCA0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CCF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CD90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CDF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CE90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CED8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CEF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CF70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889CFFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D028u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D038u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D044u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D04Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D058u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D060u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D068u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D080u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D088u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D090u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D0F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D100u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D114u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D124u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D140u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D160u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D170u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D184u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D19Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D1FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D250u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D260u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D26Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D274u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D28Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D2FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D308u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D314u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D320u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D32Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D330u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D344u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D358u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D364u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D374u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D398u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D3FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D408u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D420u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D43Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D444u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D458u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D46Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D490u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D498u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D4F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D50Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D534u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D540u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D550u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D558u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D564u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D568u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D588u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D5F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D610u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D630u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D648u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D650u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D658u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D668u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D684u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D6F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D700u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D70Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D718u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D724u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D72Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D738u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D740u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D748u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D754u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D758u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D76Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D790u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D79Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D7F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D80Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D840u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D84Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D858u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D864u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D86Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D878u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D880u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D88Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D898u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D8F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D904u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D914u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D920u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D930u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D940u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D964u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D988u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D998u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889D9F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DA8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DABCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DADCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DAF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DB90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DBF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DC94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DCECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD6Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD90u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DD9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DDECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DE98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DECCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DED8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DEF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DF98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889DFDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E010u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E038u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E054u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E060u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E068u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E070u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E07Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E080u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E090u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0CCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E0F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E104u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E124u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E154u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E168u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E178u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E184u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E1F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E204u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E218u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E228u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E238u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E240u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E248u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E25Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E264u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E270u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E278u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E288u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E290u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E2F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E300u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E308u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E310u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E31Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E328u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E330u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E33Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E340u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E368u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E374u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E37Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E388u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E390u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E3FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E408u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E414u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E424u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E42Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E448u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E458u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E464u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E47Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E498u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E4F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E504u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E518u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E524u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E534u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E554u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E568u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E57Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E594u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E59Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E5FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E60Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E620u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E638u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E640u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E650u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E664u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E698u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E6F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E704u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E718u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E724u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E730u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E738u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E744u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E760u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E774u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E77Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E790u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E79Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E7FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E808u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E814u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E820u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E82Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E838u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E844u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E850u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E85Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E888u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E894u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E8F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E914u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E924u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E930u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E94Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E95Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E968u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E984u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E994u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9B8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889E9E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA40u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EA7Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EADCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EAF0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EB94u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBB8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EBE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EC9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ECD0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED08u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889ED98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDD8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EDFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EE44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEC8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EEFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF34u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF54u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF74u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EF8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFE0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889EFE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F030u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F044u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F054u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F05Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F064u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F06Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F144u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F164u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F16Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F1FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F208u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F218u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F22Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F23Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F244u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F24Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F254u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F330u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F350u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F358u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3E8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F3F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F400u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F444u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F44Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F454u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F45Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F460u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F470u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F478u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F480u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F488u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F49Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4A4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4ACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4B4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4C4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4E4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F4ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F50Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F514u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F51Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F524u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F540u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F548u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F554u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F568u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F578u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F580u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F588u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F590u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5A8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F5F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F608u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F610u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F618u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F620u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F628u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F638u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F648u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F650u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F65Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F670u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F68Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6C0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6D0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6D8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F6FCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F708u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F710u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F71Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F724u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F72Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F744u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F754u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F75Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F764u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F77Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F784u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F790u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F798u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7A0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7D4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F7F0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F800u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F808u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F818u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F830u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F848u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F854u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F85Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F878u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8BCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8E0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8ECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F8F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F914u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F924u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F92Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F934u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F94Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F95Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F96Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F980u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F988u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F998u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9B0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9C8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9DCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9F4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889F9F8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA14u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA24u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA50u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA68u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FA84u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAACu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FADCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FAF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB00u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB10u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB38u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB48u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FB98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBC0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FBECu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC1Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC2Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC5Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC88u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FC9Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCD4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCDCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FCF8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD30u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD44u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD4Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FD98u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDA8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDB0u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FDFCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE0Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE58u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE60u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE70u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FE80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEA4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FED4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEE4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FEF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF04u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF18u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF20u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF28u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF3Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF78u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF80u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FF8Cu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFB4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFBCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFC4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFCCu, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFE8u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFF4u, &recomp_unit_0038, "recomp_unit_0038");
    runtime.register_function(0x0889FFFCu, &recomp_unit_0038, "recomp_unit_0038");
}
} // namespace psprecomp
