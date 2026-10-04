#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0216[4087] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 8, 0, 0, 0, 9, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0,
    0, 0, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0,
    30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0,
    0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 50, 0, 0, 0,
    51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 56, 0, 57, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60,
    0, 61, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 66, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 70, 0, 71, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 75, 76, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 87, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 95, 0, 96, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0,
    0, 102, 0, 0, 103, 0, 0, 104, 0, 105, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 109, 110, 0, 0, 0, 0, 111, 112, 0,
    0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0,
    0, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 127, 128, 0, 129, 0, 0, 130, 0, 0, 0,
    0, 0, 131, 132, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 142,
    0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 151, 0, 0, 152, 0,
    153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 160, 0, 0,
    0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 168, 169, 0, 0, 0, 0, 0,
    0, 0, 170, 171, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0,
    180, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 185, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0,
    0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0,
    199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 209, 210, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0,
    214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 221, 0, 222, 0,
    0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 229, 0, 230, 0, 0,
    231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236,
    0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 0,
    242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 256, 0, 0, 0, 0, 0,
    257, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    266, 0, 0, 267, 0, 268, 269, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0,
    0, 0, 280, 0, 0, 0, 0, 281, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 294, 0,
    0, 295, 0, 296, 0, 0, 297, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 305,
    0, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 314,
    0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0,
    0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 327, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 335,
    0, 0, 336, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 342, 343, 0, 344, 0, 0, 345, 0, 0,
    0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0,
    0, 352, 0, 0, 353, 0, 354, 355, 0, 356, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 361, 362, 0,
    363, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0,
    0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 376, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 383, 0,
    384, 0, 385, 0, 0, 386, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0, 390, 391, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0,
    0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401,
    0, 402, 403, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 410, 0, 411, 0, 0, 412, 0,
    0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 416, 417, 0, 418, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0, 0,
    422, 0, 423, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 430, 0, 431, 0, 0, 432, 0, 0,
    0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 436, 437, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0,
    0, 0, 0, 0, 0, 442, 0, 443, 444, 0, 445, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0,
    450, 451, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 455, 456, 0, 457, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0,
    0, 460, 0, 0, 461, 0, 462, 463, 0, 464, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 469, 470, 0,
    471, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    476, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0,
    0, 0, 0, 481, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 487, 0, 0,
    0, 0, 488, 0, 489, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0,
    0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 497, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0,
    0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0,
    0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0,
    0, 513, 0, 514, 0, 515, 0, 0, 0, 516, 0, 517, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0,
    0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 525, 0, 526, 0, 0, 527, 528, 0, 529, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0,
    0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 0,
    540, 541, 0, 542, 0, 0, 543, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 548, 0,
    0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 552, 0, 553, 0, 0, 554, 555, 0, 556, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0,
    0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570,
    0, 571, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 578, 0, 579, 0, 0, 580, 0,
    0, 581, 0, 582, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0,
    0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0,
    596, 0, 0, 597, 0, 598, 0, 599, 0, 0, 600, 601, 0, 602, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0,
    606, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 609, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 614,
    0, 0, 615, 0, 616, 617, 0, 618, 0, 619, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 623, 0, 0, 0, 624, 0, 625, 0, 0, 0,
    0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 632, 0, 633,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0,
    0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 638, 639, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0,
    0, 642, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 0, 650, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0,
    0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 659, 660, 0, 661, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 668, 0, 0,
    669, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 678, 0, 679, 0, 0,
    0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 682, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685, 0, 686, 687, 0, 688, 0,
    0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 694, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 697,
    0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 702, 0, 703, 0, 0, 704,
    0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 710, 0, 711, 0, 712,
    0, 0, 713, 714, 0, 715, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0,
    721, 0, 0, 722, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 728, 0, 729, 0,
    730, 0, 731, 0, 0, 0, 0, 732, 0, 0, 733, 734, 0, 735, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0,
    0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0,
    0, 0, 0, 0, 745, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 750,
    0, 751, 752, 0, 753, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 757, 0, 758, 759, 0, 760, 0, 0, 761, 0,
    0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 0, 767, 768, 0, 769, 0, 770,
    0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0,
    0, 0, 0, 776, 0, 0, 0, 0, 0, 777, 778, 0, 779, 0, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 783, 0, 0, 0, 784,
    0, 785, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 790, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0,
    794, 0, 0, 795, 0, 0, 796, 0, 797, 0, 798, 0, 799, 800, 0, 801, 0, 802, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 805, 0, 0, 806, 0, 807, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0,
    0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 814,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 816, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 820, 0, 0, 0, 821, 0, 0, 822, 0, 823, 0, 0, 824, 0, 825, 0, 0, 0, 826, 0, 0,
    0, 0, 827, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 830, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0,
    832, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0,
    0, 837, 0, 0, 0, 838, 0, 0, 0, 0, 839, 840, 0, 0, 0, 841, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 843, 0, 0, 0, 844, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 846, 0, 847, 0, 0, 848, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 850, 0, 851, 0, 852, 0, 0, 853, 0, 854, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0,
    0, 0, 0, 858, 0, 0, 859, 0, 860, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    862, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 865, 0, 0, 866, 0, 867, 868, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0,
    0, 870, 0, 0, 0, 871, 0, 0, 872, 0, 873, 0, 874, 0, 875, 0, 0, 876, 0, 0, 877, 0, 878, 879, 0, 0, 0, 0, 0, 0, 880, 0,
    0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    883, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 0, 886, 0, 0, 887, 0, 0, 0, 888,
    0, 889, 0, 0, 0, 0, 890, 0, 0, 0, 891, 0, 0, 0, 892, 893, 0, 0, 894, 0, 895, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 897,
    898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 900, 0, 0, 901, 0, 0, 0, 902, 0, 903, 0, 904, 905, 0, 0, 906, 0,
    907, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 0, 909, 0, 0, 910, 0, 911, 0, 0, 912, 0, 0, 913, 0, 914, 915, 0, 0,
    916, 0, 0, 917, 0, 0, 0, 918, 0, 919, 0, 920, 0, 0, 0, 0, 921, 922, 0, 923, 0, 0, 924, 0, 0, 0, 0, 925, 0, 926, 0, 927,
    0, 928, 0, 0, 0, 0, 929, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 931, 0, 932, 0, 0, 933, 0, 0, 0, 934, 0, 935, 0, 0, 0, 0, 936,
};
void recomp_unit_0216_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B64000u;
        entry_id = (entry_delta < 16348u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0216[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B64000;
    case 2u: goto L_08B64010;
    case 3u: goto L_08B64020;
    case 4u: goto L_08B6403C;
    case 5u: goto L_08B6404C;
    case 6u: goto L_08B64068;
    case 7u: goto L_08B640B0;
    case 8u: goto L_08B640B4;
    case 9u: goto L_08B640C4;
    case 10u: goto L_08B640D0;
    case 11u: goto L_08B640D4;
    case 12u: goto L_08B64154;
    case 13u: goto L_08B641A0;
    case 14u: goto L_08B641B8;
    case 15u: goto L_08B64244;
    case 16u: goto L_08B64254;
    case 17u: goto L_08B64290;
    case 18u: goto L_08B6429C;
    case 19u: goto L_08B642B0;
    case 20u: goto L_08B642B8;
    case 21u: goto L_08B642C0;
    case 22u: goto L_08B642E4;
    case 23u: goto L_08B642F4;
    case 24u: goto L_08B64310;
    case 25u: goto L_08B64318;
    case 26u: goto L_08B64324;
    case 27u: goto L_08B64354;
    case 28u: goto L_08B6436C;
    case 29u: goto L_08B64374;
    case 30u: goto L_08B64380;
    case 31u: goto L_08B64390;
    case 32u: goto L_08B64398;
    case 33u: goto L_08B643A0;
    case 34u: goto L_08B643AC;
    case 35u: goto L_08B643CC;
    case 36u: goto L_08B643D4;
    case 37u: goto L_08B643EC;
    case 38u: goto L_08B643F4;
    case 39u: goto L_08B64414;
    case 40u: goto L_08B6441C;
    case 41u: goto L_08B64424;
    case 42u: goto L_08B6444C;
    case 43u: goto L_08B64454;
    case 44u: goto L_08B64460;
    case 45u: goto L_08B64488;
    case 46u: goto L_08B64490;
    case 47u: goto L_08B6449C;
    case 48u: goto L_08B644E4;
    case 49u: goto L_08B644EC;
    case 50u: goto L_08B644F0;
    case 51u: goto L_08B64500;
    case 52u: goto L_08B64520;
    case 53u: goto L_08B6453C;
    case 54u: goto L_08B64544;
    case 55u: goto L_08B64550;
    case 56u: goto L_08B64590;
    case 57u: goto L_08B64598;
    case 58u: goto L_08B6459C;
    case 59u: goto L_08B645AC;
    case 60u: goto L_08B645FC;
    case 61u: goto L_08B64604;
    case 62u: goto L_08B64608;
    case 63u: goto L_08B64618;
    case 64u: goto L_08B64624;
    case 65u: goto L_08B64638;
    case 66u: goto L_08B6463C;
    case 67u: goto L_08B64644;
    case 68u: goto L_08B6464C;
    case 69u: goto L_08B64654;
    case 70u: goto L_08B64684;
    case 71u: goto L_08B6468C;
    case 72u: goto L_08B64690;
    case 73u: goto L_08B646A0;
    case 74u: goto L_08B646D0;
    case 75u: goto L_08B646D8;
    case 76u: goto L_08B646DC;
    case 77u: goto L_08B646EC;
    case 78u: goto L_08B64714;
    case 79u: goto L_08B6471C;
    case 80u: goto L_08B64728;
    case 81u: goto L_08B64760;
    case 82u: goto L_08B6476C;
    case 83u: goto L_08B64784;
    case 84u: goto L_08B647A4;
    case 85u: goto L_08B647AC;
    case 86u: goto L_08B647B4;
    case 87u: goto L_08B647D0;
    case 88u: goto L_08B647D4;
    case 89u: goto L_08B647F0;
    case 90u: goto L_08B64844;
    case 91u: goto L_08B6484C;
    case 92u: goto L_08B64854;
    case 93u: goto L_08B64860;
    case 94u: goto L_08B64868;
    case 95u: goto L_08B64898;
    case 96u: goto L_08B648A0;
    case 97u: goto L_08B648A4;
    case 98u: goto L_08B648B0;
    case 99u: goto L_08B648CC;
    case 100u: goto L_08B648E0;
    case 101u: goto L_08B648EC;
    case 102u: goto L_08B64904;
    case 103u: goto L_08B64910;
    case 104u: goto L_08B6491C;
    case 105u: goto L_08B64924;
    case 106u: goto L_08B64928;
    case 107u: goto L_08B6493C;
    case 108u: goto L_08B64944;
    case 109u: goto L_08B6495C;
    case 110u: goto L_08B64960;
    case 111u: goto L_08B64974;
    case 112u: goto L_08B64978;
    case 113u: goto L_08B6498C;
    case 114u: goto L_08B6499C;
    case 115u: goto L_08B649A8;
    case 116u: goto L_08B649C0;
    case 117u: goto L_08B649D4;
    case 118u: goto L_08B649DC;
    case 119u: goto L_08B649EC;
    case 120u: goto L_08B64A04;
    case 121u: goto L_08B64A10;
    case 122u: goto L_08B64A1C;
    case 123u: goto L_08B64A24;
    case 124u: goto L_08B64A30;
    case 125u: goto L_08B64A3C;
    case 126u: goto L_08B64A44;
    case 127u: goto L_08B64A58;
    case 128u: goto L_08B64A5C;
    case 129u: goto L_08B64A64;
    case 130u: goto L_08B64A70;
    case 131u: goto L_08B64A88;
    case 132u: goto L_08B64A8C;
    case 133u: goto L_08B64A90;
    case 134u: goto L_08B64A9C;
    case 135u: goto L_08B64AA8;
    case 136u: goto L_08B64AB4;
    case 137u: goto L_08B64AC0;
    case 138u: goto L_08B64ACC;
    case 139u: goto L_08B64AD8;
    case 140u: goto L_08B64AE4;
    case 141u: goto L_08B64AF4;
    case 142u: goto L_08B64AFC;
    case 143u: goto L_08B64B20;
    case 144u: goto L_08B64B28;
    case 145u: goto L_08B64B30;
    case 146u: goto L_08B64B38;
    case 147u: goto L_08B64B40;
    case 148u: goto L_08B64B4C;
    case 149u: goto L_08B64B58;
    case 150u: goto L_08B64B60;
    case 151u: goto L_08B64B6C;
    case 152u: goto L_08B64B78;
    case 153u: goto L_08B64B80;
    case 154u: goto L_08B64B88;
    case 155u: goto L_08B64B98;
    case 156u: goto L_08B64BA8;
    case 157u: goto L_08B64BC8;
    case 158u: goto L_08B64BD8;
    case 159u: goto L_08B64BE8;
    case 160u: goto L_08B64BF4;
    case 161u: goto L_08B64C08;
    case 162u: goto L_08B64C18;
    case 163u: goto L_08B64C28;
    case 164u: goto L_08B64C30;
    case 165u: goto L_08B64C3C;
    case 166u: goto L_08B64C48;
    case 167u: goto L_08B64C50;
    case 168u: goto L_08B64C64;
    case 169u: goto L_08B64C68;
    case 170u: goto L_08B64C88;
    case 171u: goto L_08B64C8C;
    case 172u: goto L_08B64C98;
    case 173u: goto L_08B64CA0;
    case 174u: goto L_08B64CAC;
    case 175u: goto L_08B64CB8;
    case 176u: goto L_08B64CD0;
    case 177u: goto L_08B64CDC;
    case 178u: goto L_08B64CE4;
    case 179u: goto L_08B64CEC;
    case 180u: goto L_08B64D00;
    case 181u: goto L_08B64D08;
    case 182u: goto L_08B64D10;
    case 183u: goto L_08B64D28;
    case 184u: goto L_08B64D38;
    case 185u: goto L_08B64D3C;
    case 186u: goto L_08B64D4C;
    case 187u: goto L_08B64D54;
    case 188u: goto L_08B64D60;
    case 189u: goto L_08B64D68;
    case 190u: goto L_08B64D74;
    case 191u: goto L_08B64D90;
    case 192u: goto L_08B64D98;
    case 193u: goto L_08B64DA0;
    case 194u: goto L_08B64DAC;
    case 195u: goto L_08B64DBC;
    case 196u: goto L_08B64DD0;
    case 197u: goto L_08B64DDC;
    case 198u: goto L_08B64DF8;
    case 199u: goto L_08B64E00;
    case 200u: goto L_08B64E28;
    case 201u: goto L_08B64E34;
    case 202u: goto L_08B64E48;
    case 203u: goto L_08B64E50;
    case 204u: goto L_08B64E58;
    case 205u: goto L_08B64E64;
    case 206u: goto L_08B64E70;
    case 207u: goto L_08B64E9C;
    case 208u: goto L_08B64EB8;
    case 209u: goto L_08B64EBC;
    case 210u: goto L_08B64EC0;
    case 211u: goto L_08B64ECC;
    case 212u: goto L_08B64ED4;
    case 213u: goto L_08B64EDC;
    case 214u: goto L_08B64F00;
    case 215u: goto L_08B64F08;
    case 216u: goto L_08B64F14;
    case 217u: goto L_08B64F20;
    case 218u: goto L_08B64F44;
    case 219u: goto L_08B64F50;
    case 220u: goto L_08B64F6C;
    case 221u: goto L_08B64F70;
    case 222u: goto L_08B64F78;
    case 223u: goto L_08B64F90;
    case 224u: goto L_08B64F9C;
    case 225u: goto L_08B64FC4;
    case 226u: goto L_08B64FCC;
    case 227u: goto L_08B64FD8;
    case 228u: goto L_08B64FE4;
    case 229u: goto L_08B64FEC;
    case 230u: goto L_08B64FF4;
    case 231u: goto L_08B65000;
    case 232u: goto L_08B65010;
    case 233u: goto L_08B65040;
    case 234u: goto L_08B65048;
    case 235u: goto L_08B65064;
    case 236u: goto L_08B6507C;
    case 237u: goto L_08B65088;
    case 238u: goto L_08B650C4;
    case 239u: goto L_08B650E4;
    case 240u: goto L_08B650EC;
    case 241u: goto L_08B650F4;
    case 242u: goto L_08B65100;
    case 243u: goto L_08B6511C;
    case 244u: goto L_08B65128;
    case 245u: goto L_08B6512C;
    case 246u: goto L_08B65144;
    case 247u: goto L_08B6514C;
    case 248u: goto L_08B65158;
    case 249u: goto L_08B6518C;
    case 250u: goto L_08B651A8;
    case 251u: goto L_08B651B0;
    case 252u: goto L_08B651B8;
    case 253u: goto L_08B651C4;
    case 254u: goto L_08B651D8;
    case 255u: goto L_08B651E4;
    case 256u: goto L_08B651E8;
    case 257u: goto L_08B65200;
    case 258u: goto L_08B65208;
    case 259u: goto L_08B65214;
    case 260u: goto L_08B65228;
    case 261u: goto L_08B65230;
    case 262u: goto L_08B65238;
    case 263u: goto L_08B65240;
    case 264u: goto L_08B65250;
    case 265u: goto L_08B65278;
    case 266u: goto L_08B65280;
    case 267u: goto L_08B6528C;
    case 268u: goto L_08B65294;
    case 269u: goto L_08B65298;
    case 270u: goto L_08B652A4;
    case 271u: goto L_08B652B0;
    case 272u: goto L_08B652B8;
    case 273u: goto L_08B652F0;
    case 274u: goto L_08B6530C;
    case 275u: goto L_08B65324;
    case 276u: goto L_08B65340;
    case 277u: goto L_08B65350;
    case 278u: goto L_08B65368;
    case 279u: goto L_08B65378;
    case 280u: goto L_08B65388;
    case 281u: goto L_08B6539C;
    case 282u: goto L_08B653A0;
    case 283u: goto L_08B653C0;
    case 284u: goto L_08B653D0;
    case 285u: goto L_08B653DC;
    case 286u: goto L_08B65400;
    case 287u: goto L_08B65418;
    case 288u: goto L_08B6542C;
    case 289u: goto L_08B65438;
    case 290u: goto L_08B65448;
    case 291u: goto L_08B65450;
    case 292u: goto L_08B65464;
    case 293u: goto L_08B6546C;
    case 294u: goto L_08B65478;
    case 295u: goto L_08B65484;
    case 296u: goto L_08B6548C;
    case 297u: goto L_08B65498;
    case 298u: goto L_08B654A0;
    case 299u: goto L_08B654AC;
    case 300u: goto L_08B654BC;
    case 301u: goto L_08B654C8;
    case 302u: goto L_08B654DC;
    case 303u: goto L_08B654E8;
    case 304u: goto L_08B654F4;
    case 305u: goto L_08B654FC;
    case 306u: goto L_08B65508;
    case 307u: goto L_08B65518;
    case 308u: goto L_08B65524;
    case 309u: goto L_08B65538;
    case 310u: goto L_08B65544;
    case 311u: goto L_08B65550;
    case 312u: goto L_08B65558;
    case 313u: goto L_08B65564;
    case 314u: goto L_08B6557C;
    case 315u: goto L_08B65588;
    case 316u: goto L_08B65594;
    case 317u: goto L_08B6559C;
    case 318u: goto L_08B655A8;
    case 319u: goto L_08B655B8;
    case 320u: goto L_08B655E8;
    case 321u: goto L_08B655F8;
    case 322u: goto L_08B65610;
    case 323u: goto L_08B65628;
    case 324u: goto L_08B65648;
    case 325u: goto L_08B6565C;
    case 326u: goto L_08B65678;
    case 327u: goto L_08B6568C;
    case 328u: goto L_08B6569C;
    case 329u: goto L_08B656A4;
    case 330u: goto L_08B656AC;
    case 331u: goto L_08B656B8;
    case 332u: goto L_08B656C0;
    case 333u: goto L_08B656D8;
    case 334u: goto L_08B656F0;
    case 335u: goto L_08B656FC;
    case 336u: goto L_08B65708;
    case 337u: goto L_08B65710;
    case 338u: goto L_08B6571C;
    case 339u: goto L_08B6572C;
    case 340u: goto L_08B65748;
    case 341u: goto L_08B65754;
    case 342u: goto L_08B6575C;
    case 343u: goto L_08B65760;
    case 344u: goto L_08B65768;
    case 345u: goto L_08B65774;
    case 346u: goto L_08B65788;
    case 347u: goto L_08B657AC;
    case 348u: goto L_08B657B8;
    case 349u: goto L_08B657C0;
    case 350u: goto L_08B657CC;
    case 351u: goto L_08B657E8;
    case 352u: goto L_08B65804;
    case 353u: goto L_08B65810;
    case 354u: goto L_08B65818;
    case 355u: goto L_08B6581C;
    case 356u: goto L_08B65824;
    case 357u: goto L_08B65830;
    case 358u: goto L_08B65844;
    case 359u: goto L_08B65860;
    case 360u: goto L_08B6586C;
    case 361u: goto L_08B65874;
    case 362u: goto L_08B65878;
    case 363u: goto L_08B65880;
    case 364u: goto L_08B6588C;
    case 365u: goto L_08B658A0;
    case 366u: goto L_08B658B0;
    case 367u: goto L_08B658B8;
    case 368u: goto L_08B658C4;
    case 369u: goto L_08B658E8;
    case 370u: goto L_08B65904;
    case 371u: goto L_08B6590C;
    case 372u: goto L_08B65914;
    case 373u: goto L_08B65920;
    case 374u: goto L_08B65928;
    case 375u: goto L_08B65930;
    case 376u: goto L_08B65944;
    case 377u: goto L_08B65948;
    case 378u: goto L_08B65950;
    case 379u: goto L_08B65958;
    case 380u: goto L_08B65960;
    case 381u: goto L_08B65968;
    case 382u: goto L_08B65970;
    case 383u: goto L_08B65978;
    case 384u: goto L_08B65980;
    case 385u: goto L_08B65988;
    case 386u: goto L_08B65994;
    case 387u: goto L_08B6599C;
    case 388u: goto L_08B659A4;
    case 389u: goto L_08B659B8;
    case 390u: goto L_08B659C4;
    case 391u: goto L_08B659C8;
    case 392u: goto L_08B659D0;
    case 393u: goto L_08B659D8;
    case 394u: goto L_08B659F4;
    case 395u: goto L_08B65A18;
    case 396u: goto L_08B65A24;
    case 397u: goto L_08B65A2C;
    case 398u: goto L_08B65A38;
    case 399u: goto L_08B65A54;
    case 400u: goto L_08B65A70;
    case 401u: goto L_08B65A7C;
    case 402u: goto L_08B65A84;
    case 403u: goto L_08B65A88;
    case 404u: goto L_08B65A90;
    case 405u: goto L_08B65A9C;
    case 406u: goto L_08B65AB0;
    case 407u: goto L_08B65ACC;
    case 408u: goto L_08B65AD8;
    case 409u: goto L_08B65AE0;
    case 410u: goto L_08B65AE4;
    case 411u: goto L_08B65AEC;
    case 412u: goto L_08B65AF8;
    case 413u: goto L_08B65B0C;
    case 414u: goto L_08B65B28;
    case 415u: goto L_08B65B34;
    case 416u: goto L_08B65B3C;
    case 417u: goto L_08B65B40;
    case 418u: goto L_08B65B48;
    case 419u: goto L_08B65B54;
    case 420u: goto L_08B65B68;
    case 421u: goto L_08B65B74;
    case 422u: goto L_08B65B80;
    case 423u: goto L_08B65B88;
    case 424u: goto L_08B65B98;
    case 425u: goto L_08B65BA0;
    case 426u: goto L_08B65BC0;
    case 427u: goto L_08B65C1C;
    case 428u: goto L_08B65C24;
    case 429u: goto L_08B65C5C;
    case 430u: goto L_08B65C60;
    case 431u: goto L_08B65C68;
    case 432u: goto L_08B65C74;
    case 433u: goto L_08B65C84;
    case 434u: goto L_08B65C9C;
    case 435u: goto L_08B65CB0;
    case 436u: goto L_08B65CB8;
    case 437u: goto L_08B65CBC;
    case 438u: goto L_08B65CC4;
    case 439u: goto L_08B65CD0;
    case 440u: goto L_08B65CE0;
    case 441u: goto L_08B65CF8;
    case 442u: goto L_08B65D14;
    case 443u: goto L_08B65D1C;
    case 444u: goto L_08B65D20;
    case 445u: goto L_08B65D28;
    case 446u: goto L_08B65D34;
    case 447u: goto L_08B65D44;
    case 448u: goto L_08B65D5C;
    case 449u: goto L_08B65D78;
    case 450u: goto L_08B65D80;
    case 451u: goto L_08B65D84;
    case 452u: goto L_08B65D8C;
    case 453u: goto L_08B65DA8;
    case 454u: goto L_08B65DB4;
    case 455u: goto L_08B65DBC;
    case 456u: goto L_08B65DC0;
    case 457u: goto L_08B65DC8;
    case 458u: goto L_08B65DD4;
    case 459u: goto L_08B65DE8;
    case 460u: goto L_08B65E04;
    case 461u: goto L_08B65E10;
    case 462u: goto L_08B65E18;
    case 463u: goto L_08B65E1C;
    case 464u: goto L_08B65E24;
    case 465u: goto L_08B65E30;
    case 466u: goto L_08B65E44;
    case 467u: goto L_08B65E60;
    case 468u: goto L_08B65E6C;
    case 469u: goto L_08B65E74;
    case 470u: goto L_08B65E78;
    case 471u: goto L_08B65E80;
    case 472u: goto L_08B65E8C;
    case 473u: goto L_08B65EA0;
    case 474u: goto L_08B65EBC;
    case 475u: goto L_08B65ED0;
    case 476u: goto L_08B65F00;
    case 477u: goto L_08B65F24;
    case 478u: goto L_08B65F40;
    case 479u: goto L_08B65F5C;
    case 480u: goto L_08B65F70;
    case 481u: goto L_08B65F8C;
    case 482u: goto L_08B65F90;
    case 483u: goto L_08B65FA8;
    case 484u: goto L_08B65FBC;
    case 485u: goto L_08B65FDC;
    case 486u: goto L_08B65FEC;
    case 487u: goto L_08B65FF4;
    case 488u: goto L_08B66008;
    case 489u: goto L_08B66010;
    case 490u: goto L_08B66014;
    case 491u: goto L_08B66024;
    case 492u: goto L_08B66064;
    case 493u: goto L_08B66088;
    case 494u: goto L_08B66094;
    case 495u: goto L_08B660B8;
    case 496u: goto L_08B660C0;
    case 497u: goto L_08B660C8;
    case 498u: goto L_08B660CC;
    case 499u: goto L_08B660D4;
    case 500u: goto L_08B660F8;
    case 501u: goto L_08B6610C;
    case 502u: goto L_08B66120;
    case 503u: goto L_08B66144;
    case 504u: goto L_08B66154;
    case 505u: goto L_08B66170;
    case 506u: goto L_08B66178;
    case 507u: goto L_08B66184;
    case 508u: goto L_08B661AC;
    case 509u: goto L_08B661B4;
    case 510u: goto L_08B661D0;
    case 511u: goto L_08B661E8;
    case 512u: goto L_08B661F8;
    case 513u: goto L_08B66204;
    case 514u: goto L_08B6620C;
    case 515u: goto L_08B66214;
    case 516u: goto L_08B66224;
    case 517u: goto L_08B6622C;
    case 518u: goto L_08B66238;
    case 519u: goto L_08B6624C;
    case 520u: goto L_08B66268;
    case 521u: goto L_08B66278;
    case 522u: goto L_08B66290;
    case 523u: goto L_08B662A0;
    case 524u: goto L_08B662AC;
    case 525u: goto L_08B662B4;
    case 526u: goto L_08B662BC;
    case 527u: goto L_08B662C8;
    case 528u: goto L_08B662CC;
    case 529u: goto L_08B662D4;
    case 530u: goto L_08B662E0;
    case 531u: goto L_08B662F4;
    case 532u: goto L_08B66310;
    case 533u: goto L_08B66320;
    case 534u: goto L_08B66330;
    case 535u: goto L_08B66348;
    case 536u: goto L_08B66358;
    case 537u: goto L_08B66364;
    case 538u: goto L_08B6636C;
    case 539u: goto L_08B66374;
    case 540u: goto L_08B66380;
    case 541u: goto L_08B66384;
    case 542u: goto L_08B6638C;
    case 543u: goto L_08B66398;
    case 544u: goto L_08B663AC;
    case 545u: goto L_08B663C8;
    case 546u: goto L_08B663D8;
    case 547u: goto L_08B663E8;
    case 548u: goto L_08B663F8;
    case 549u: goto L_08B66410;
    case 550u: goto L_08B66420;
    case 551u: goto L_08B6642C;
    case 552u: goto L_08B66434;
    case 553u: goto L_08B6643C;
    case 554u: goto L_08B66448;
    case 555u: goto L_08B6644C;
    case 556u: goto L_08B66454;
    case 557u: goto L_08B66460;
    case 558u: goto L_08B66474;
    case 559u: goto L_08B66490;
    case 560u: goto L_08B664A0;
    case 561u: goto L_08B664B4;
    case 562u: goto L_08B664C0;
    case 563u: goto L_08B664CC;
    case 564u: goto L_08B664D4;
    case 565u: goto L_08B664E8;
    case 566u: goto L_08B66534;
    case 567u: goto L_08B66554;
    case 568u: goto L_08B66564;
    case 569u: goto L_08B66570;
    case 570u: goto L_08B6657C;
    case 571u: goto L_08B66584;
    case 572u: goto L_08B66588;
    case 573u: goto L_08B665A8;
    case 574u: goto L_08B665B8;
    case 575u: goto L_08B665C8;
    case 576u: goto L_08B665D4;
    case 577u: goto L_08B665DC;
    case 578u: goto L_08B665E4;
    case 579u: goto L_08B665EC;
    case 580u: goto L_08B665F8;
    case 581u: goto L_08B66604;
    case 582u: goto L_08B6660C;
    case 583u: goto L_08B66610;
    case 584u: goto L_08B6662C;
    case 585u: goto L_08B66650;
    case 586u: goto L_08B66660;
    case 587u: goto L_08B6666C;
    case 588u: goto L_08B66678;
    case 589u: goto L_08B66684;
    case 590u: goto L_08B66690;
    case 591u: goto L_08B6669C;
    case 592u: goto L_08B666B8;
    case 593u: goto L_08B666C8;
    case 594u: goto L_08B666D8;
    case 595u: goto L_08B666F0;
    case 596u: goto L_08B66700;
    case 597u: goto L_08B6670C;
    case 598u: goto L_08B66714;
    case 599u: goto L_08B6671C;
    case 600u: goto L_08B66728;
    case 601u: goto L_08B6672C;
    case 602u: goto L_08B66734;
    case 603u: goto L_08B66740;
    case 604u: goto L_08B66754;
    case 605u: goto L_08B66770;
    case 606u: goto L_08B66780;
    case 607u: goto L_08B66794;
    case 608u: goto L_08B667A0;
    case 609u: goto L_08B667AC;
    case 610u: goto L_08B667B4;
    case 611u: goto L_08B667C8;
    case 612u: goto L_08B667E4;
    case 613u: goto L_08B667EC;
    case 614u: goto L_08B667FC;
    case 615u: goto L_08B66808;
    case 616u: goto L_08B66810;
    case 617u: goto L_08B66814;
    case 618u: goto L_08B6681C;
    case 619u: goto L_08B66824;
    case 620u: goto L_08B66838;
    case 621u: goto L_08B66844;
    case 622u: goto L_08B66850;
    case 623u: goto L_08B66858;
    case 624u: goto L_08B66868;
    case 625u: goto L_08B66870;
    case 626u: goto L_08B66890;
    case 627u: goto L_08B668F0;
    case 628u: goto L_08B668F8;
    case 629u: goto L_08B66924;
    case 630u: goto L_08B66938;
    case 631u: goto L_08B66970;
    case 632u: goto L_08B66974;
    case 633u: goto L_08B6697C;
    case 634u: goto L_08B669E4;
    case 635u: goto L_08B66A08;
    case 636u: goto L_08B66A10;
    case 637u: goto L_08B66A34;
    case 638u: goto L_08B66A4C;
    case 639u: goto L_08B66A50;
    case 640u: goto L_08B66A58;
    case 641u: goto L_08B66A74;
    case 642u: goto L_08B66A84;
    case 643u: goto L_08B66A8C;
    case 644u: goto L_08B66A9C;
    case 645u: goto L_08B66AAC;
    case 646u: goto L_08B66ABC;
    case 647u: goto L_08B66AC8;
    case 648u: goto L_08B66ADC;
    case 649u: goto L_08B66AE4;
    case 650u: goto L_08B66AF0;
    case 651u: goto L_08B66B1C;
    case 652u: goto L_08B66B3C;
    case 653u: goto L_08B66B4C;
    case 654u: goto L_08B66B58;
    case 655u: goto L_08B66B60;
    case 656u: goto L_08B66B84;
    case 657u: goto L_08B66BA0;
    case 658u: goto L_08B66BAC;
    case 659u: goto L_08B66BB4;
    case 660u: goto L_08B66BB8;
    case 661u: goto L_08B66BC0;
    case 662u: goto L_08B66BCC;
    case 663u: goto L_08B66BE0;
    case 664u: goto L_08B66C10;
    case 665u: goto L_08B66C38;
    case 666u: goto L_08B66C58;
    case 667u: goto L_08B66C68;
    case 668u: goto L_08B66C74;
    case 669u: goto L_08B66C80;
    case 670u: goto L_08B66C8C;
    case 671u: goto L_08B66C94;
    case 672u: goto L_08B66CA4;
    case 673u: goto L_08B66CAC;
    case 674u: goto L_08B66CCC;
    case 675u: goto L_08B66D28;
    case 676u: goto L_08B66D30;
    case 677u: goto L_08B66D68;
    case 678u: goto L_08B66D6C;
    case 679u: goto L_08B66D74;
    case 680u: goto L_08B66D98;
    case 681u: goto L_08B66DB0;
    case 682u: goto L_08B66DB4;
    case 683u: goto L_08B66DBC;
    case 684u: goto L_08B66DD8;
    case 685u: goto L_08B66DE4;
    case 686u: goto L_08B66DEC;
    case 687u: goto L_08B66DF0;
    case 688u: goto L_08B66DF8;
    case 689u: goto L_08B66E04;
    case 690u: goto L_08B66E18;
    case 691u: goto L_08B66E28;
    case 692u: goto L_08B66E34;
    case 693u: goto L_08B66E40;
    case 694u: goto L_08B66E4C;
    case 695u: goto L_08B66E54;
    case 696u: goto L_08B66E60;
    case 697u: goto L_08B66E7C;
    case 698u: goto L_08B66E98;
    case 699u: goto L_08B66EB4;
    case 700u: goto L_08B66ED0;
    case 701u: goto L_08B66EE0;
    case 702u: goto L_08B66EE8;
    case 703u: goto L_08B66EF0;
    case 704u: goto L_08B66EFC;
    case 705u: goto L_08B66F18;
    case 706u: goto L_08B66F28;
    case 707u: goto L_08B66F38;
    case 708u: goto L_08B66F50;
    case 709u: goto L_08B66F60;
    case 710u: goto L_08B66F6C;
    case 711u: goto L_08B66F74;
    case 712u: goto L_08B66F7C;
    case 713u: goto L_08B66F88;
    case 714u: goto L_08B66F8C;
    case 715u: goto L_08B66F94;
    case 716u: goto L_08B66FA0;
    case 717u: goto L_08B66FB4;
    case 718u: goto L_08B66FD0;
    case 719u: goto L_08B66FE0;
    case 720u: goto L_08B66FF4;
    case 721u: goto L_08B67000;
    case 722u: goto L_08B6700C;
    case 723u: goto L_08B67014;
    case 724u: goto L_08B67028;
    case 725u: goto L_08B67044;
    case 726u: goto L_08B6705C;
    case 727u: goto L_08B67068;
    case 728u: goto L_08B67070;
    case 729u: goto L_08B67078;
    case 730u: goto L_08B67080;
    case 731u: goto L_08B67088;
    case 732u: goto L_08B6709C;
    case 733u: goto L_08B670A8;
    case 734u: goto L_08B670AC;
    case 735u: goto L_08B670B4;
    case 736u: goto L_08B670BC;
    case 737u: goto L_08B670D0;
    case 738u: goto L_08B670F4;
    case 739u: goto L_08B67118;
    case 740u: goto L_08B67134;
    case 741u: goto L_08B67138;
    case 742u: goto L_08B6714C;
    case 743u: goto L_08B6716C;
    case 744u: goto L_08B67178;
    case 745u: goto L_08B67190;
    case 746u: goto L_08B6719C;
    case 747u: goto L_08B671B0;
    case 748u: goto L_08B671D4;
    case 749u: goto L_08B671F0;
    case 750u: goto L_08B671FC;
    case 751u: goto L_08B67204;
    case 752u: goto L_08B67208;
    case 753u: goto L_08B67210;
    case 754u: goto L_08B6721C;
    case 755u: goto L_08B67230;
    case 756u: goto L_08B6724C;
    case 757u: goto L_08B67258;
    case 758u: goto L_08B67260;
    case 759u: goto L_08B67264;
    case 760u: goto L_08B6726C;
    case 761u: goto L_08B67278;
    case 762u: goto L_08B6728C;
    case 763u: goto L_08B672A8;
    case 764u: goto L_08B672C0;
    case 765u: goto L_08B672C8;
    case 766u: goto L_08B672DC;
    case 767u: goto L_08B672E8;
    case 768u: goto L_08B672EC;
    case 769u: goto L_08B672F4;
    case 770u: goto L_08B672FC;
    case 771u: goto L_08B67310;
    case 772u: goto L_08B67324;
    case 773u: goto L_08B67328;
    case 774u: goto L_08B67360;
    case 775u: goto L_08B67368;
    case 776u: goto L_08B6738C;
    case 777u: goto L_08B673A4;
    case 778u: goto L_08B673A8;
    case 779u: goto L_08B673B0;
    case 780u: goto L_08B673CC;
    case 781u: goto L_08B673D8;
    case 782u: goto L_08B673E4;
    case 783u: goto L_08B673EC;
    case 784u: goto L_08B673FC;
    case 785u: goto L_08B67404;
    case 786u: goto L_08B67424;
    case 787u: goto L_08B67488;
    case 788u: goto L_08B67490;
    case 789u: goto L_08B674C8;
    case 790u: goto L_08B674CC;
    case 791u: goto L_08B674D4;
    case 792u: goto L_08B674F0;
    case 793u: goto L_08B674F8;
    case 794u: goto L_08B67500;
    case 795u: goto L_08B6750C;
    case 796u: goto L_08B67518;
    case 797u: goto L_08B67520;
    case 798u: goto L_08B67528;
    case 799u: goto L_08B67530;
    case 800u: goto L_08B67534;
    case 801u: goto L_08B6753C;
    case 802u: goto L_08B67544;
    case 803u: goto L_08B67558;
    case 804u: goto L_08B675A0;
    case 805u: goto L_08B675BC;
    case 806u: goto L_08B675C8;
    case 807u: goto L_08B675D0;
    case 808u: goto L_08B675F0;
    case 809u: goto L_08B67610;
    case 810u: goto L_08B67630;
    case 811u: goto L_08B6764C;
    case 812u: goto L_08B67664;
    case 813u: goto L_08B67674;
    case 814u: goto L_08B6767C;
    case 815u: goto L_08B676B8;
    case 816u: goto L_08B676C4;
    case 817u: goto L_08B676E0;
    case 818u: goto L_08B6771C;
    case 819u: goto L_08B67724;
    case 820u: goto L_08B6772C;
    case 821u: goto L_08B6773C;
    case 822u: goto L_08B67748;
    case 823u: goto L_08B67750;
    case 824u: goto L_08B6775C;
    case 825u: goto L_08B67764;
    case 826u: goto L_08B67774;
    case 827u: goto L_08B67788;
    case 828u: goto L_08B67798;
    case 829u: goto L_08B677C8;
    case 830u: goto L_08B677D4;
    case 831u: goto L_08B677E8;
    case 832u: goto L_08B67800;
    case 833u: goto L_08B6781C;
    case 834u: goto L_08B67838;
    case 835u: goto L_08B67850;
    case 836u: goto L_08B67864;
    case 837u: goto L_08B67884;
    case 838u: goto L_08B67894;
    case 839u: goto L_08B678A8;
    case 840u: goto L_08B678AC;
    case 841u: goto L_08B678BC;
    case 842u: goto L_08B678C0;
    case 843u: goto L_08B67904;
    case 844u: goto L_08B67914;
    case 845u: goto L_08B67958;
    case 846u: goto L_08B67960;
    case 847u: goto L_08B67968;
    case 848u: goto L_08B67974;
    case 849u: goto L_08B679BC;
    case 850u: goto L_08B679CC;
    case 851u: goto L_08B679D4;
    case 852u: goto L_08B679DC;
    case 853u: goto L_08B679E8;
    case 854u: goto L_08B679F0;
    case 855u: goto L_08B67A20;
    case 856u: goto L_08B67A40;
    case 857u: goto L_08B67A68;
    case 858u: goto L_08B67A8C;
    case 859u: goto L_08B67A98;
    case 860u: goto L_08B67AA0;
    case 861u: goto L_08B67AB4;
    case 862u: goto L_08B67B00;
    case 863u: goto L_08B67B20;
    case 864u: goto L_08B67B30;
    case 865u: goto L_08B67B3C;
    case 866u: goto L_08B67B48;
    case 867u: goto L_08B67B50;
    case 868u: goto L_08B67B54;
    case 869u: goto L_08B67B74;
    case 870u: goto L_08B67B84;
    case 871u: goto L_08B67B94;
    case 872u: goto L_08B67BA0;
    case 873u: goto L_08B67BA8;
    case 874u: goto L_08B67BB0;
    case 875u: goto L_08B67BB8;
    case 876u: goto L_08B67BC4;
    case 877u: goto L_08B67BD0;
    case 878u: goto L_08B67BD8;
    case 879u: goto L_08B67BDC;
    case 880u: goto L_08B67BF8;
    case 881u: goto L_08B67C1C;
    case 882u: goto L_08B67C58;
    case 883u: goto L_08B67C80;
    case 884u: goto L_08B67CA4;
    case 885u: goto L_08B67CD0;
    case 886u: goto L_08B67CE0;
    case 887u: goto L_08B67CEC;
    case 888u: goto L_08B67CFC;
    case 889u: goto L_08B67D04;
    case 890u: goto L_08B67D18;
    case 891u: goto L_08B67D28;
    case 892u: goto L_08B67D38;
    case 893u: goto L_08B67D3C;
    case 894u: goto L_08B67D48;
    case 895u: goto L_08B67D50;
    case 896u: goto L_08B67D6C;
    case 897u: goto L_08B67D7C;
    case 898u: goto L_08B67D80;
    case 899u: goto L_08B67DAC;
    case 900u: goto L_08B67DBC;
    case 901u: goto L_08B67DC8;
    case 902u: goto L_08B67DD8;
    case 903u: goto L_08B67DE0;
    case 904u: goto L_08B67DE8;
    case 905u: goto L_08B67DEC;
    case 906u: goto L_08B67DF8;
    case 907u: goto L_08B67E00;
    case 908u: goto L_08B67E2C;
    case 909u: goto L_08B67E3C;
    case 910u: goto L_08B67E48;
    case 911u: goto L_08B67E50;
    case 912u: goto L_08B67E5C;
    case 913u: goto L_08B67E68;
    case 914u: goto L_08B67E70;
    case 915u: goto L_08B67E74;
    case 916u: goto L_08B67E80;
    case 917u: goto L_08B67E8C;
    case 918u: goto L_08B67E9C;
    case 919u: goto L_08B67EA4;
    case 920u: goto L_08B67EAC;
    case 921u: goto L_08B67EC0;
    case 922u: goto L_08B67EC4;
    case 923u: goto L_08B67ECC;
    case 924u: goto L_08B67ED8;
    case 925u: goto L_08B67EEC;
    case 926u: goto L_08B67EF4;
    case 927u: goto L_08B67EFC;
    case 928u: goto L_08B67F04;
    case 929u: goto L_08B67F18;
    case 930u: goto L_08B67F44;
    case 931u: goto L_08B67F98;
    case 932u: goto L_08B67FA0;
    case 933u: goto L_08B67FAC;
    case 934u: goto L_08B67FBC;
    case 935u: goto L_08B67FC4;
    case 936u: goto L_08B67FD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B64000:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[6] & ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(127));
      if (branch_taken) {
          goto L_08B642B8;
      }
      goto L_08B64010;
    }
L_08B64010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    rt.unsupported(0x08B6401Cu, 0x000001CDu, "special? not lowered yet"); return;
        goto L_08B64020;
    }
    goto L_08B64020;
L_08B64020:
    ctx.gpr[12] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[12] << 7u);
    ctx.gpr[9] = (ctx.gpr[10] - ctx.gpr[12]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B642B0;
      }
      goto L_08B6403C;
    }
L_08B6403C:
    ctx.gpr[3] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08B640B0;
      }
      goto L_08B6404C;
    }
L_08B6404C:
    ctx.gpr[10] = (ctx.gpr[6] + 0u);
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x00100000u) | ((0u & 0x00000001u) << 20u));
    ctx.gpr[4] = (1u << 16u);
    ctx.gpr[6] = (ctx.gpr[10] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_08B64244;
      }
      goto L_08B64068;
    }
L_08B64068:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(48)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(52)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(40)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(44)));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x00010000u) | ((0u & 0x00000001u) << 16u));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(40), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(44), ctx.gpr[12]);
    goto L_08B640B0;
L_08B640B0:
    ctx.gpr[4] = (ctx.gpr[25] + ctx.gpr[17]);
    goto L_08B640B4;
L_08B640B4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[3] & 256u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08B640D4;
    }
    goto L_08B640C4;
L_08B640C4:
    ctx.gpr[6] = (ctx.gpr[3] & 512u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
        goto L_08B641B8;
    }
    goto L_08B640D0;
L_08B640D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    goto L_08B640D4;
L_08B640D4:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[12] = (ctx.gpr[15] << 2u);
    ctx.gpr[3] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[2] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[7] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[2]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 6u));
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[10] = (ctx.hi);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[3]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 6u));
    ctx.gpr[2] = (ctx.gpr[10] - ctx.gpr[5]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    ctx.gpr[7] = (ctx.gpr[6] >> 20u);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 12u));
    ctx.gpr[3] = (ctx.lo);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[5] = (ctx.gpr[9] >> 20u);
    ctx.gpr[4] = (ctx.gpr[3] + ctx.gpr[5]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 12u));
    goto L_08B64154;
L_08B64154:
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[16]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(32767));
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[6]) ? ctx.gpr[3] : ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[3] : ctx.gpr[2]);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-32768));
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[10]) < -32768 ? 1u : 0u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < -32768 ? 1u : 0u);
    if (ctx.gpr[12] != 0u) ctx.gpr[10] = (ctx.gpr[9]);
    if (ctx.gpr[6] != 0u) ctx.gpr[8] = (ctx.gpr[9]);
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[15]) < 28 ? 1u : 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[14] = (ctx.gpr[14] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08B64000;
      }
      goto L_08B641A0;
    }
L_08B641A0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B641B8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[12] = (ctx.gpr[15] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[3] = (ctx.gpr[12] + ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[4] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[8] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 6u));
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[3]);
    ctx.gpr[9] = (ctx.hi);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 6u));
    ctx.gpr[2] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 31u));
    ctx.gpr[7] = (ctx.gpr[5] >> 20u);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 12u));
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.gpr[3] = (ctx.gpr[6] >> 20u);
    ctx.gpr[9] = (ctx.gpr[4] + ctx.gpr[3]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 12u));
    goto L_08B64154;
L_08B64244:
    ctx.gpr[9] = (2u << 16u);
    ctx.gpr[12] = (ctx.gpr[10] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[9] = (4u << 16u);
      if (branch_taken) {
          goto L_08B64290;
      }
      goto L_08B64254;
    }
L_08B64254:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(40)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(44)));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x00020000u) | ((0u & 0x00000001u) << 17u));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    goto L_08B640B0;
L_08B64290:
    ctx.gpr[12] = (ctx.gpr[10] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[4] = (ctx.gpr[25] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B640B4;
      }
      goto L_08B6429C;
    }
L_08B6429C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x00040000u) | ((0u & 0x00000001u) << 18u));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    goto L_08B640B4;
L_08B642B0:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(56), 0u);
    goto L_08B6403C;
L_08B642B8:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(56), ctx.gpr[10]);
    goto L_08B640B0;
L_08B642C0:
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[5] + 0u);
    ctx.gpr[7] = (ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08B64318;
      }
      goto L_08B642E4;
    }
L_08B642E4:
    ctx.gpr[5] = (32834u << 16u);
    ctx.gpr[3] = (ctx.gpr[4] & 63u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 5u);
      if (branch_taken) {
          goto L_08B64318;
      }
      goto L_08B642F4;
    }
L_08B642F4:
    ctx.gpr[2] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] + 0u);
    ctx.gpr[8] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22144));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (ctx.gpr[8] | 5u);
      if (branch_taken) {
          goto L_08B64318;
      }
      goto L_08B64310;
    }
L_08B64310:
    ctx.gpr[31] = (0x08B64318u);
    // nop
    ctx.pc = 0x08B7330Cu;
    return;
L_08B64318:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[2] = (32834u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[2] | 257u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B643AC;
      }
      goto L_08B64354;
    }
L_08B64354:
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(22144));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[31] = (0x08B6436Cu);
    ctx.gpr[8] = (0u | 44100u);
    ctx.pc = 0x08B732FCu;
    return;
L_08B6436C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[3] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B643AC;
      }
      goto L_08B64374;
    }
L_08B64374:
    ctx.gpr[16] = (0u + 0u);
    ctx.gpr[19] = (ctx.gpr[17] + 0u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22080)));
    goto L_08B64380;
L_08B64380:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(22144));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(4096));
      if (branch_taken) {
          goto L_08B643CC;
      }
      goto L_08B64390;
    }
L_08B64390:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    goto L_08B64398;
L_08B64398:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22080)));
      if (branch_taken) {
          goto L_08B64380;
      }
      goto L_08B643A0;
    }
L_08B643A0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(22080), ctx.gpr[5]);
    ctx.gpr[3] = (0u + 0u);
    goto L_08B643AC;
L_08B643AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B643CC:
    ctx.gpr[31] = (0x08B643D4u);
    // nop
    ctx.pc = 0x08B7335Cu;
    return;
L_08B643D4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(22144));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(24512));
      if (branch_taken) {
          goto L_08B64390;
      }
      goto L_08B643EC;
    }
L_08B643EC:
    ctx.gpr[31] = (0x08B643F4u);
    // nop
    ctx.pc = 0x08B7336Cu;
    return;
L_08B643F4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(22144));
    ctx.gpr[6] = (0u + 0u);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[8] = (0u + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (0u + 0u);
      if (branch_taken) {
          goto L_08B64390;
      }
      goto L_08B64414;
    }
L_08B64414:
    ctx.gpr[31] = (0x08B6441Cu);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.pc = 0x08B73304u;
    return;
L_08B6441C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    goto L_08B64398;
L_08B64424:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[2] = (2236u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22144));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08B64454;
      }
      goto L_08B6444C;
    }
L_08B6444C:
    ctx.gpr[31] = (0x08B64454u);
    // nop
    ctx.pc = 0x08B7332Cu;
    return;
L_08B64454:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64460:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[2] = (2236u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22144));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08B64490;
      }
      goto L_08B64488;
    }
L_08B64488:
    ctx.gpr[31] = (0x08B64490u);
    // nop
    ctx.pc = 0x08B7334Cu;
    return;
L_08B64490:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6449C:
    ctx.gpr[14] = (2236u << 16u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[9] = (ctx.gpr[6] + 0u);
    ctx.gpr[10] = (ctx.gpr[4] + 0u);
    ctx.gpr[12] = (2236u << 16u);
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = (32834u << 16u);
    ctx.gpr[4] = (ctx.gpr[12] + static_cast<std::uint32_t>(22144));
    ctx.gpr[7] = (ctx.gpr[9] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[9] = (ctx.gpr[8] + 0u);
    ctx.gpr[5] = (ctx.gpr[10] + 0u);
    ctx.gpr[6] = (ctx.gpr[3] + 0u);
    ctx.gpr[8] = (ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[12] = (ctx.gpr[11] | 256u);
      if (branch_taken) {
          goto L_08B644F0;
      }
      goto L_08B644E4;
    }
L_08B644E4:
    ctx.gpr[31] = (0x08B644ECu);
    // nop
    ctx.pc = 0x08B73304u;
    return;
L_08B644EC:
    ctx.gpr[12] = (ctx.gpr[2] + 0u);
    goto L_08B644F0;
L_08B644F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[12] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64500:
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[7] = (ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08B64544;
      }
      goto L_08B64520;
    }
L_08B64520:
    ctx.gpr[2] = (2236u << 16u);
    ctx.gpr[8] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[6] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22144));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[8] | 18u);
      if (branch_taken) {
          goto L_08B64544;
      }
      goto L_08B6453C;
    }
L_08B6453C:
    ctx.gpr[31] = (0x08B64544u);
    // nop
    ctx.pc = 0x08B7335Cu;
    return;
L_08B64544:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64550:
    ctx.gpr[11] = (2236u << 16u);
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[8] = (ctx.gpr[5] + 0u);
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (ctx.gpr[6] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[10] = (32834u << 16u);
    ctx.gpr[9] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(22144));
    ctx.gpr[5] = (ctx.gpr[2] + 0u);
    ctx.gpr[7] = (ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[11] = (ctx.gpr[10] | 256u);
      if (branch_taken) {
          goto L_08B6459C;
      }
      goto L_08B64590;
    }
L_08B64590:
    ctx.gpr[31] = (0x08B64598u);
    // nop
    ctx.pc = 0x08B7333Cu;
    return;
L_08B64598:
    ctx.gpr[11] = (ctx.gpr[2] + 0u);
    goto L_08B6459C;
L_08B6459C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[11] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B645AC:
    ctx.gpr[24] = (2236u << 16u);
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[12] = (ctx.gpr[5] + 0u);
    ctx.gpr[10] = (ctx.gpr[6] + 0u);
    ctx.gpr[14] = (ctx.gpr[4] + 0u);
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    ctx.gpr[3] = (ctx.gpr[8] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = (32834u << 16u);
    ctx.gpr[15] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[12] + 0u);
    ctx.gpr[7] = (ctx.gpr[10] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[10] = (ctx.gpr[9] + 0u);
    ctx.gpr[4] = (ctx.gpr[15] + static_cast<std::uint32_t>(22144));
    ctx.gpr[5] = (ctx.gpr[14] + 0u);
    ctx.gpr[8] = (ctx.gpr[2] + 0u);
    ctx.gpr[9] = (ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.gpr[12] = (ctx.gpr[11] | 256u);
      if (branch_taken) {
          goto L_08B64608;
      }
      goto L_08B645FC;
    }
L_08B645FC:
    ctx.gpr[31] = (0x08B64604u);
    // nop
    ctx.pc = 0x08B732DCu;
    return;
L_08B64604:
    ctx.gpr[12] = (ctx.gpr[2] + 0u);
    goto L_08B64608;
L_08B64608:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[12] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64618:
    ctx.gpr[3] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[2] = (2236u << 16u);
    goto L_08B64624;
L_08B64624:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (0u + 0u);
      if (branch_taken) {
          goto L_08B64644;
      }
      goto L_08B64638;
    }
L_08B64638:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08B6463C;
L_08B6463C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64644:
    ctx.gpr[31] = (0x08B6464Cu);
    // nop
    ctx.pc = 0x08B7331Cu;
    return;
L_08B6464C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08B6463C;
L_08B64654:
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[2] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22144));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08B64690;
      }
      goto L_08B64684;
    }
L_08B64684:
    ctx.gpr[31] = (0x08B6468Cu);
    // nop
    ctx.pc = 0x08B7337Cu;
    return;
L_08B6468C:
    ctx.gpr[7] = (ctx.gpr[2] + 0u);
    goto L_08B64690;
L_08B64690:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B646A0:
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[2] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[7] + 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22144));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08B646DC;
      }
      goto L_08B646D0;
    }
L_08B646D0:
    ctx.gpr[31] = (0x08B646D8u);
    // nop
    ctx.pc = 0x08B73374u;
    return;
L_08B646D8:
    ctx.gpr[7] = (ctx.gpr[2] + 0u);
    goto L_08B646DC;
L_08B646DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B646EC:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22080)));
    ctx.gpr[2] = (2236u << 16u);
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (32834u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(22144));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] | 256u);
      if (branch_taken) {
          goto L_08B6471C;
      }
      goto L_08B64714;
    }
L_08B64714:
    ctx.gpr[31] = (0x08B6471Cu);
    // nop
    ctx.pc = 0x08B732F4u;
    return;
L_08B6471C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[7] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (0u + 0u);
    ctx.gpr[17] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[29] + 0u);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    ctx.gpr[4] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B64760u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1));
    goto L_08B647F0;
L_08B64760:
    ctx.gpr[3] = (32768u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[6] = (ctx.gpr[3] | 264u);
      if (branch_taken) {
          goto L_08B647D4;
      }
      goto L_08B6476C;
    }
L_08B6476C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[2] = (ctx.gpr[6] & 15u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[5] | 4u);
      if (branch_taken) {
          goto L_08B647D4;
      }
      goto L_08B64784;
    }
L_08B64784:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + 0u);
    ctx.gpr[3] = (ctx.gpr[9] & 32u);
    ctx.gpr[5] = (ctx.gpr[17] + 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[6] = (ctx.gpr[8] | 4u);
      if (branch_taken) {
          goto L_08B647D4;
      }
      goto L_08B647A4;
    }
L_08B647A4:
    ctx.gpr[31] = (0x08B647ACu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.pc = 0x08B648B0u;
    return;
L_08B647AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[6] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B647D4;
      }
      goto L_08B647B4;
    }
L_08B647B4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[3] = (rt.memory().aot_load_word_left(ctx.gpr[10] + static_cast<std::uint32_t>(3), ctx.gpr[3]));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[3]));
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(15), ctx.gpr[3]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B647D4;
      }
      goto L_08B647D0;
    }
L_08B647D0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08B647D4;
L_08B647D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B647F0:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[2] = (2114u << 16u);
    ctx.gpr[25] = (ctx.gpr[12] << 8u);
    ctx.gpr[11] = (ctx.gpr[25] | ctx.gpr[10]);
    ctx.gpr[14] = (ctx.gpr[2] | 4229u);
    { const std::uint64_t product = static_cast<std::uint64_t>(ctx.gpr[11]) * static_cast<std::uint64_t>(ctx.gpr[14]); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    ctx.gpr[14] = (32768u << 16u);
    ctx.gpr[13] = (ctx.gpr[4] + 0u);
    ctx.gpr[9] = (ctx.gpr[4] + 0u);
    ctx.gpr[15] = (ctx.hi);
    ctx.gpr[24] = (ctx.gpr[11] - ctx.gpr[15]);
    ctx.gpr[3] = (ctx.gpr[24] >> 1u);
    ctx.gpr[25] = (ctx.gpr[15] + ctx.gpr[3]);
    ctx.gpr[2] = (ctx.gpr[25] >> 4u);
    ctx.gpr[24] = (ctx.gpr[2] << 5u);
    ctx.gpr[15] = (ctx.gpr[24] - ctx.gpr[2]);
    ctx.gpr[3] = (ctx.gpr[11] - ctx.gpr[15]);
    ctx.gpr[2] = (ctx.gpr[3] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[11] = (ctx.gpr[14] | 264u);
      if (branch_taken) {
          goto L_08B648A4;
      }
      goto L_08B64844;
    }
L_08B64844:
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
        goto L_08B6484C;
    }
    goto L_08B6484C;
L_08B6484C:
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
        goto L_08B64854;
    }
    goto L_08B64854;
L_08B64854:
    ctx.gpr[4] = (ctx.gpr[10] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B64898;
      }
      goto L_08B64860;
    }
L_08B64860:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
        goto L_08B64898;
    }
    goto L_08B64868;
L_08B64868:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(2)));
    ctx.gpr[14] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.gpr[15] = (ctx.gpr[3] << 24u);
    ctx.gpr[24] = (ctx.gpr[14] << 16u);
    ctx.gpr[5] = (ctx.gpr[15] | ctx.gpr[24]);
    ctx.gpr[13] = (ctx.gpr[11] << 8u);
    ctx.gpr[10] = (ctx.gpr[5] | ctx.gpr[13]);
    ctx.gpr[6] = (ctx.gpr[10] | ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    goto L_08B64898;
L_08B64898:
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
        goto L_08B648A0;
    }
    goto L_08B648A0;
L_08B648A0:
    ctx.gpr[11] = (0u + 0u);
    goto L_08B648A4;
L_08B648A4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[11] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B648B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(776), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[14] = (ctx.gpr[4] + 0u);
    ctx.gpr[15] = (2233u << 16u);
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-24576));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(784), ctx.gpr[31]);
    goto L_08B648CC;
L_08B648CC:
    ctx.gpr[25] = (ctx.gpr[6] & 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[25]);
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (ctx.gpr[25] << 3u);
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    goto L_08B648E0;
L_08B648E0:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08B64904;
      }
      goto L_08B648EC;
    }
L_08B648EC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08B64904;
L_08B64904:
    ctx.gpr[3] = ((ctx.gpr[2] >> 30u) & 0x00000003u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[10] = ((ctx.gpr[2] >> 29u) & 0x00000001u);
      if (branch_taken) {
          goto L_08B64E00;
      }
      goto L_08B64910;
    }
L_08B64910:
    ctx.gpr[8] = (ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(788), static_cast<std::uint16_t>(ctx.gpr[10]));
      if (branch_taken) {
          goto L_08B6499C;
      }
      goto L_08B6491C;
    }
L_08B6491C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(0));
      if (branch_taken) {
          goto L_08B64E58;
      }
      goto L_08B64924;
    }
L_08B64924:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(108));
    goto L_08B64928;
L_08B64928:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-4), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B64928;
      }
      goto L_08B6493C;
    }
L_08B6493C:
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(144));
    goto L_08B64944;
L_08B64944:
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(144));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(304), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[20];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B64944;
      }
      goto L_08B6495C;
    }
L_08B6495C:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(16));
    goto L_08B64960;
L_08B64960:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-4), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B64960;
      }
      goto L_08B64974;
    }
L_08B64974:
    ctx.gpr[20] = (ctx.gpr[15] + static_cast<std::uint32_t>(64));
    goto L_08B64978;
L_08B64978:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[15];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(280), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08B64978;
      }
      goto L_08B6498C;
    }
L_08B6498C:
    ctx.gpr[15] = (ctx.gpr[15] + static_cast<std::uint32_t>(-188));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(636), static_cast<std::uint16_t>(ctx.gpr[11]));
    goto L_08B64A8C;
L_08B6499C:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08B649C0;
      }
      goto L_08B649A8;
    }
L_08B649A8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08B649C0;
L_08B649C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(860), ctx.gpr[2]);
    ctx.gpr[20] = ((ctx.gpr[2] >> 28u) & 0x0000000Fu);
    ctx.gpr[11] = (ctx.gpr[29] + static_cast<std::uint32_t>(760));
    ctx.gpr[8] = (ctx.gpr[15] + static_cast<std::uint32_t>(-4));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[15]);
    goto L_08B649D4;
L_08B649D4:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[20];
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B64A1C;
      }
      goto L_08B649DC;
    }
L_08B649DC:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(9))))));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08B64A04;
      }
      goto L_08B649EC;
    }
L_08B649EC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08B64A04;
L_08B64A04:
    ctx.gpr[2] = (ctx.gpr[2] >> 29u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = ((ctx.gpr[10] & ~0x00007E00u) | ((ctx.gpr[2] & 0x0000003Fu) << 9u));
      if (branch_taken) {
          goto L_08B649D4;
      }
      goto L_08B64A10;
    }
L_08B64A10:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_08B649D4;
L_08B64A1C:
    ctx.gpr[31] = (0x08B64A24u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(760));
    goto L_08B64D74;
L_08B64A24:
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(0));
      if (branch_taken) {
          goto L_08B64E58;
      }
      goto L_08B64A30;
    }
L_08B64A30:
    ctx.gpr[13] = ((ctx.gpr[13] >> 18u) & 0x0000001Fu);
    ctx.gpr[31] = (0x08B64A3Cu);
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(257));
    goto L_08B64C68;
L_08B64A3C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(860)));
      if (branch_taken) {
          goto L_08B64E58;
      }
      goto L_08B64A44;
    }
L_08B64A44:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(61)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[15] = ((ctx.gpr[15] & ~0x0000003Eu) | ((ctx.gpr[9] & 0x0000001Fu) << 1u));
      if (branch_taken) {
          goto L_08B64A5C;
      }
      goto L_08B64A58;
    }
L_08B64A58:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(60))))));
    goto L_08B64A5C;
L_08B64A5C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[11];
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08B64A44;
      }
      goto L_08B64A64;
    }
L_08B64A64:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(636));
    ctx.gpr[31] = (0x08B64A70u);
    ctx.gpr[13] = ((ctx.gpr[13] >> 23u) & 0x0000001Fu);
    goto L_08B64C64;
L_08B64A70:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[15] = ((ctx.gpr[15] & ~0x0000003Eu) | ((ctx.gpr[9] & 0x0000001Fu) << 1u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(124))))));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[11];
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08B64A70;
      }
      goto L_08B64A88;
    }
L_08B64A88:
    ctx.gpr[15] = ((ctx.gpr[15] & ~0x0000003Eu) | ((0u & 0x0000001Fu) << 1u));
    goto L_08B64A8C;
L_08B64A8C:
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    goto L_08B64A90;
L_08B64A90:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    ctx.gpr[31] = (0x08B64A9Cu);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(2));
    goto L_08B64C08;
L_08B64A9C:
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(638));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[10] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08B64B20;
      }
      goto L_08B64AA8;
    }
L_08B64AA8:
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    ctx.gpr[31] = (0x08B64AB4u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(666)));
      if (branch_taken) {
          goto L_08B64B4C;
      }
      goto L_08B64AB4;
    }
L_08B64AB4:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(636))))));
    ctx.gpr[31] = (0x08B64AC0u);
    ctx.gpr[1] = (ctx.gpr[4] - ctx.gpr[20]);
    goto L_08B64BC8;
L_08B64AC0:
    ctx.gpr[20] = (ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(std::countl_zero(ctx.gpr[2])));
      if (branch_taken) {
          goto L_08B64E64;
      }
      goto L_08B64ACC;
    }
L_08B64ACC:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-30));
    ctx.gpr[31] = (0x08B64AD8u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    ctx.gpr[20] = (ctx.gpr[4] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B64B30;
      }
      goto L_08B64AD8;
    }
L_08B64AD8:
    ctx.gpr[10] = (ctx.gpr[14] < ctx.gpr[20] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
        ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_08B64E58;
    }
    { const std::uint32_t lz_destination = ctx.gpr[4];
      const std::uint32_t lz_source_cursor = ctx.gpr[20];
      const std::uint32_t lz_source = lz_source_cursor - static_cast<std::uint32_t>(1);
      const std::uint32_t lz_length = ctx.gpr[1] - lz_destination;
      rt.memory().aot_copy_lz_match(lz_destination, lz_source, lz_length);
      ctx.gpr[4] = (ctx.gpr[1]);
      ctx.gpr[20] = (lz_source_cursor + lz_length); }
    goto L_08B64A90;
L_08B64AE4:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-1)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[1] == ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08B64A90;
      }
      goto L_08B64AF4;
    }
L_08B64AF4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08B64AE4;
L_08B64AFC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64B20:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B64E64;
      }
      goto L_08B64B28;
    }
L_08B64B28:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08B64A90;
L_08B64B30:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B64E58;
      }
      goto L_08B64B38;
    }
L_08B64B38:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08B64AFC;
      }
      goto L_08B64B40;
    }
L_08B64B40:
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64B4C:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 28u));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[10];
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B64B6C;
      }
      goto L_08B64B58;
    }
L_08B64B58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08B64AFC;
      }
      goto L_08B64B60;
    }
L_08B64B60:
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    jump_target = ctx.gpr[31];
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64B6C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(788))))));
      if (branch_taken) {
          goto L_08B64E58;
      }
      goto L_08B64B78;
    }
L_08B64B78:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08B648E0;
      }
      goto L_08B64B80;
    }
L_08B64B80:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[14]);
      if (branch_taken) {
          goto L_08B64B98;
      }
      goto L_08B64B88;
    }
L_08B64B88:
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(39));
    ctx.gpr[9] = (ctx.gpr[25] >> 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08B64B98;
L_08B64B98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(784)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(776)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64BA8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((0u & 0x0000FFFFu) << 0u));
    goto L_08B64BD8;
L_08B64BC8:
    ctx.gpr[2] = (ctx.gpr[24] >> (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[10] & 31u));
      if (branch_taken) {
          goto L_08B64BA8;
      }
      goto L_08B64BD8;
    }
L_08B64BD8:
    ctx.gpr[2] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[2]));
    ctx.gpr[10] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B64C28;
      }
      goto L_08B64BE8;
    }
L_08B64BE8:
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(58))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64BF4:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[10]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(60))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64C08:
    ctx.gpr[2] = (ctx.gpr[24] >> (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] - ctx.gpr[12]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) > 0;
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[12] & 31u));
      if (branch_taken) {
          goto L_08B64BA8;
      }
      goto L_08B64C18;
    }
L_08B64C18:
    ctx.gpr[2] = ([](std::uint32_t value) { value = ((value >> 1u) & 0x55555555u) | ((value & 0x55555555u) << 1u); value = ((value >> 2u) & 0x33333333u) | ((value & 0x33333333u) << 2u); value = ((value >> 4u) & 0x0F0F0F0Fu) | ((value & 0x0F0F0F0Fu) << 4u); value = ((value >> 8u) & 0x00FF00FFu) | ((value & 0x00FF00FFu) << 8u); return (value >> 16u) | (value << 16u); }(ctx.gpr[2]));
    ctx.gpr[10] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B64BE8;
      }
      goto L_08B64C28;
    }
L_08B64C28:
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(30)));
      if (branch_taken) {
          goto L_08B64C50;
      }
      goto L_08B64C30;
    }
L_08B64C30:
    ctx.gpr[10] = (ctx.gpr[24] >> (ctx.gpr[25] & 31u));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x00000001u) | ((ctx.gpr[10] & 0x00000001u) << 0u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(1));
    goto L_08B64C3C;
L_08B64C3C:
    ctx.gpr[3] = (ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B64BF4;
      }
      goto L_08B64C48;
    }
L_08B64C48:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    goto L_08B64C28;
L_08B64C50:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(-31));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x00000001u) | ((ctx.gpr[24] & 0x00000001u) << 0u));
    goto L_08B64C3C;
L_08B64C64:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08B64C68;
L_08B64C68:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[1] = (0u + 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(7));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[11] = (ctx.gpr[20] + 0u);
    ctx.hi = ctx.gpr[31];
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(760))))));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), 0u);
    goto L_08B64C88;
L_08B64C88:
    ctx.gpr[8] = (ctx.gpr[1] & 511u);
    goto L_08B64C8C;
L_08B64C8C:
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[13]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(790)));
      if (branch_taken) {
          goto L_08B64D68;
      }
      goto L_08B64C98;
    }
L_08B64C98:
    ctx.gpr[31] = (0x08B64CA0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(762));
    goto L_08B64C08;
L_08B64CA0:
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[8] : ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B64CE4;
      }
      goto L_08B64CAC;
    }
L_08B64CAC:
    ctx.gpr[25] = (ctx.gpr[25] + ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08B64CD0;
      }
      goto L_08B64CB8;
    }
L_08B64CB8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08B64CD0;
L_08B64CD0:
    ctx.gpr[10] = (0u - ctx.gpr[10]);
    ctx.gpr[2] = (ctx.gpr[2] >> (ctx.gpr[10] & 31u));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[2]);
    goto L_08B64CDC;
L_08B64CDC:
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    goto L_08B64C88;
L_08B64CE4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[10] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B64D00;
      }
      goto L_08B64CEC;
    }
L_08B64CEC:
    ctx.gpr[1] = ((ctx.gpr[1] & ~0x00007E00u) | ((ctx.gpr[2] & 0x0000003Fu) << 9u));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[1]));
    ctx.gpr[1] = (ctx.gpr[1] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[2] != 0u) ctx.gpr[11] = (ctx.gpr[10]);
    goto L_08B64C88;
L_08B64D00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[1]) <= 0;
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B64E58;
      }
      goto L_08B64D08;
    }
L_08B64D08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    ctx.gpr[2] = (std::rotr(ctx.gpr[24], static_cast<int>(ctx.gpr[25] & 31u)));
      if (branch_taken) {
          goto L_08B64D28;
      }
      goto L_08B64D10;
    }
L_08B64D10:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] << (ctx.gpr[25] & 31u));
    ctx.gpr[25] = (ctx.gpr[25] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0x0000FFFFu) | ((ctx.gpr[24] & 0x0000FFFFu) << 0u));
    ctx.gpr[2] = (std::rotr(ctx.gpr[2], static_cast<int>(ctx.gpr[25] & 31u)));
    goto L_08B64D28;
L_08B64D28:
    ctx.gpr[2] = (ctx.gpr[2] >> 30u);
    ctx.gpr[8] = (ctx.gpr[1] & 511u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[1];
    ctx.gpr[8] = (ctx.gpr[2] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B64CDC;
      }
      goto L_08B64D38;
    }
L_08B64D38:
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[1]);
    goto L_08B64D3C;
L_08B64D3C:
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[1]));
    ctx.gpr[1] = (ctx.gpr[1] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[1] != ctx.gpr[8];
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B64D3C;
      }
      goto L_08B64D4C;
    }
L_08B64D4C:
    ctx.gpr[8] = (ctx.gpr[1] & 511u);
    goto L_08B64C8C;
L_08B64D54:
    ctx.gpr[2] = (ctx.gpr[1] >> (ctx.gpr[8] & 31u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B64E58;
      }
      goto L_08B64D60;
    }
L_08B64D60:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[1]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64D68:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[31] = (ctx.hi);
      if (branch_taken) {
          goto L_08B64E58;
      }
      goto L_08B64D74;
    }
L_08B64D74:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[8] = (0u + 0u);
    ctx.gpr[13] = (ctx.gpr[20] + 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[9] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), 0u);
    goto L_08B64D90;
L_08B64D90:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[13];
    ctx.gpr[12] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B64D54;
      }
      goto L_08B64D98;
    }
L_08B64D98:
    ctx.gpr[1] = (ctx.gpr[1] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(60))))));
    goto L_08B64DA0;
L_08B64DA0:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[12];
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B64DBC;
      }
      goto L_08B64DAC;
    }
L_08B64DAC:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[3] : ctx.gpr[2]);
    aot_mem.aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[3] : ctx.gpr[2]);
    goto L_08B64DA0;
L_08B64DBC:
    ctx.gpr[12] = (ctx.gpr[2] >> 9u);
    ctx.gpr[2] = (ctx.gpr[2] & 511u);
    aot_mem.aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[12];
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B64D90;
      }
      goto L_08B64DD0;
    }
L_08B64DD0:
    ctx.gpr[10] = (ctx.gpr[8] - ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[12] + 0u);
      if (branch_taken) {
          goto L_08B64DF8;
      }
      goto L_08B64DDC;
    }
L_08B64DDC:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[1]));
    ctx.gpr[1] = (std::rotr(ctx.gpr[1], static_cast<int>(ctx.gpr[10] & 31u)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[13] - ctx.gpr[1]);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[1]);
    ctx.gpr[10] = (ctx.gpr[9] - ctx.gpr[10]);
    goto L_08B64DF8;
L_08B64DF8:
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_08B64D90;
L_08B64E00:
    ctx.gpr[8] = (0u - ctx.gpr[25]);
    ctx.gpr[8] = (ctx.gpr[8] >> 3u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(7), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]));
    ctx.gpr[3] = (ctx.gpr[8] & 65535u);
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (~(ctx.gpr[8] | 0u));
      if (branch_taken) {
          goto L_08B64E64;
      }
      goto L_08B64E28;
    }
L_08B64E28:
    ctx.gpr[9] = (std::rotr(ctx.gpr[9], 16));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B64E58;
      }
      goto L_08B64E34;
    }
L_08B64E34:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08B64E34;
      }
      goto L_08B64E48;
    }
L_08B64E48:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[25] = (0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B64B80;
      }
      goto L_08B64E50;
    }
L_08B64E50:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08B648CC;
L_08B64E58:
    ctx.gpr[2] = (32768u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 264u);
    goto L_08B64B98;
L_08B64E64:
    ctx.gpr[2] = (32768u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 260u);
    goto L_08B64B98;
L_08B64E70:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[3] = (ctx.gpr[6] + static_cast<std::uint32_t>(10240));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(9216));
    ctx.gpr[7] = (ctx.gpr[3] & 65535u);
    ctx.gpr[10] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[6] << 16u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (ctx.gpr[10] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
      if (branch_taken) {
          goto L_08B64ECC;
      }
      goto L_08B64E9C;
    }
L_08B64E9C:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(9216));
    ctx.gpr[11] = (ctx.gpr[12] & 65535u);
    ctx.gpr[6] = (ctx.gpr[11] < static_cast<std::uint32_t>(1024) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[3] = (ctx.gpr[8] | ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B64EC0;
      }
      goto L_08B64EB8;
    }
L_08B64EB8:
    ctx.gpr[13] = (2236u << 16u);
    goto L_08B64EBC;
L_08B64EBC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(25800)));
    goto L_08B64EC0;
L_08B64EC0:
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64ECC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[3] = (ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08B64EC0;
      }
      goto L_08B64ED4;
    }
L_08B64ED4:
    ctx.gpr[13] = (2236u << 16u);
    goto L_08B64EBC;
L_08B64EDC:
    ctx.gpr[7] = (16u << 16u);
    ctx.gpr[9] = (65535u << 16u);
    ctx.gpr[2] = (ctx.gpr[9] | 10240u);
    ctx.gpr[8] = (ctx.gpr[7] | 65535u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[6] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B64F08;
      }
      goto L_08B64F00;
    }
L_08B64F00:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[11] = (0u | 65535u);
      if (branch_taken) {
          goto L_08B64F14;
      }
      goto L_08B64F08;
    }
L_08B64F08:
    ctx.gpr[3] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25800)));
    ctx.gpr[11] = (0u | 65535u);
    goto L_08B64F14;
L_08B64F14:
    ctx.gpr[10] = (ctx.gpr[11] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
        goto L_08B64F44;
    }
    goto L_08B64F20;
L_08B64F20:
    ctx.gpr[24] = (65535u << 16u);
    ctx.gpr[14] = (ctx.gpr[5] + ctx.gpr[24]);
    ctx.gpr[15] = (ctx.gpr[14] >> 10u);
    ctx.gpr[12] = (ctx.gpr[15] + static_cast<std::uint32_t>(-10240));
    ctx.gpr[13] = (ctx.gpr[14] & 1023u);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.gpr[5] = (ctx.gpr[13] + static_cast<std::uint32_t>(-9216));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08B64F44;
L_08B64F44:
    ctx.gpr[25] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64F50:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + 0u);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[4] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08B64F78;
      }
      goto L_08B64F6C;
    }
L_08B64F6C:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08B64F70;
L_08B64F70:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64F78:
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(62));
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(51) ? 1u : 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[3] & 127u);
      if (branch_taken) {
          goto L_08B64F9C;
      }
      goto L_08B64F90;
    }
L_08B64F90:
    ctx.gpr[3] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25796)));
    goto L_08B64F6C;
L_08B64F9C:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[13] = (ctx.gpr[4] & ctx.gpr[14]);
    ctx.gpr[10] = (ctx.gpr[13] << 6u);
    ctx.gpr[11] = (ctx.gpr[12] & 63u);
    ctx.gpr[4] = (ctx.gpr[10] | ctx.gpr[11]);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[9] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B64F9C;
      }
      goto L_08B64FC4;
    }
L_08B64FC4:
    ctx.gpr[2] = (ctx.gpr[4] + 0u);
    goto L_08B64F70;
L_08B64FCC:
    ctx.gpr[10] = (ctx.gpr[4] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6507C;
      }
      goto L_08B64FD8;
    }
L_08B64FD8:
    ctx.gpr[3] = (ctx.gpr[5] < static_cast<std::uint32_t>(128) ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(2048) ? 1u : 0u);
        goto L_08B64FF4;
    }
    goto L_08B64FE4;
L_08B64FE4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08B64FEC;
L_08B64FEC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B64FF4:
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(2048));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B65010;
      }
      goto L_08B65000;
    }
L_08B65000:
    ctx.gpr[3] = (ctx.gpr[3] << 5u);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B65000;
      }
      goto L_08B65010;
    }
L_08B65010:
    ctx.gpr[15] = (0u + static_cast<std::uint32_t>(7));
    ctx.gpr[14] = (ctx.gpr[15] - ctx.gpr[7]);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[13] << (ctx.gpr[14] & 31u));
    ctx.gpr[12] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[11];
    ctx.gpr[6] = (ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08B65064;
      }
      goto L_08B65040;
    }
L_08B65040:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[3] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B65048;
L_08B65048:
    ctx.gpr[25] = (ctx.gpr[5] & 63u);
    ctx.gpr[24] = (ctx.gpr[25] | ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    ctx.gpr[5] = (ctx.gpr[5] >> 6u);
      if (branch_taken) {
          goto L_08B65048;
      }
      goto L_08B65064;
    }
L_08B65064:
    ctx.gpr[11] = (ctx.gpr[9] >> 1u);
    ctx.gpr[8] = (ctx.gpr[5] & ctx.gpr[11]);
    ctx.gpr[7] = (~(0u | ctx.gpr[9]));
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08B64FEC;
L_08B6507C:
    ctx.gpr[3] = (2236u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(25796)));
    goto L_08B64FD8;
L_08B65088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[3] = (0u + 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B650E4;
      }
      goto L_08B650C4;
    }
L_08B650C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B650E4:
    ctx.gpr[31] = (0x08B650ECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08B64F50;
L_08B650EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B6514C;
      }
      goto L_08B650F4;
    }
L_08B650F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B65100u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    goto L_08B64EDC;
L_08B65100:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[3] - ctx.gpr[29]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B6514C;
      }
      goto L_08B6511C;
    }
L_08B6511C:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08B65144;
      }
      goto L_08B65128;
    }
L_08B65128:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B6512C;
L_08B6512C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B6512C;
      }
      goto L_08B65144;
    }
L_08B65144:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08B650E4;
L_08B6514C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[3] = (ctx.gpr[18] + 0u);
    goto L_08B650C4;
L_08B65158:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[2] = (0u + 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B651A8;
      }
      goto L_08B6518C;
    }
L_08B6518C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B651A8:
    ctx.gpr[31] = (0x08B651B0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    goto L_08B64E70;
L_08B651B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08B65208;
      }
      goto L_08B651B8;
    }
L_08B651B8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B651C4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[29]);
    goto L_08B64FCC;
L_08B651C4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[3] - ctx.gpr[29]);
    ctx.gpr[2] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B65208;
      }
      goto L_08B651D8;
    }
L_08B651D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[3] = (ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08B65200;
      }
      goto L_08B651E4;
    }
L_08B651E4:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B651E8;
L_08B651E8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B651E8;
      }
      goto L_08B65200;
    }
L_08B65200:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08B651A8;
L_08B65208:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] + 0u);
    goto L_08B6518C;
L_08B65214:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08B65228;
L_08B65228:
    ctx.gpr[31] = (0x08B65230u);
    ctx.gpr[4] = (ctx.gpr[29] + 0u);
    goto L_08B64F50;
L_08B65230:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[2] = (ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08B65240;
      }
      goto L_08B65238;
    }
L_08B65238:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08B65228;
L_08B65240:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65250:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[3] = (ctx.gpr[5] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] + 0u);
    ctx.gpr[16] = (ctx.gpr[4] + 0u);
    ctx.gpr[7] = (ctx.gpr[6] + 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[6] = (ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08B652A4;
      }
      goto L_08B65278;
    }
L_08B65278:
    ctx.gpr[31] = (0x08B65280u);
    // nop
    ctx.pc = 0x08B72F1Cu;
    return;
L_08B65280:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
      if (branch_taken) {
          goto L_08B65294;
      }
      goto L_08B6528C;
    }
L_08B6528C:
    ctx.gpr[31] = (0x08B65294u);
    // nop
    ctx.pc = 0x08B72F2Cu;
    return;
L_08B65294:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B65298;
L_08B65298:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B652A4:
    ctx.gpr[5] = (ctx.gpr[16] + 0u);
    ctx.gpr[31] = (0x08B652B0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(30));
    ctx.pc = 0x08B72F24u;
    return;
L_08B652B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B65298;
L_08B652B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(25856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B65350;
      }
      goto L_08B652F0;
    }
L_08B652F0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B6530Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 635u, 0x08ABEF54u>(ctx, &aot_mem) && ctx.pc == 0x08B6530Cu) goto L_08B6530C;
    return;
L_08B6530C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08B65378;
      }
      goto L_08B65324;
    }
L_08B65324:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[31] = (0x08B65340u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem) && ctx.pc == 0x08B65340u) goto L_08B65340;
    return;
L_08B65340:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
      if (branch_taken) {
          goto L_08B65378;
      }
      goto L_08B65350;
    }
L_08B65350:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[31] = (0x08B65368u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08B65368u) goto L_08B65368;
    return;
L_08B65368:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    goto L_08B65378;
L_08B65378:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B653A0;
      }
      goto L_08B65388;
    }
L_08B65388:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[16] - ctx.gpr[6]);
    ctx.gpr[31] = (0x08B6539Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08B6539Cu) goto L_08B6539C;
    return;
L_08B6539C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B653A0;
L_08B653A0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B653C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B653DC;
      }
      goto L_08B653D0;
    }
L_08B653D0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B6542C;
      }
      goto L_08B653DC;
    }
L_08B653DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08B65400u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08B65400u) goto L_08B65400;
    return;
L_08B65400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08B65418u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B65418u) goto L_08B65418;
    return;
L_08B65418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08B6542C;
L_08B6542C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65438:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32752));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5832)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    goto L_08B65448;
L_08B65448:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B65478;
      }
      goto L_08B65450;
    }
L_08B65450:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B65464u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem) && ctx.pc == 0x08B65464u) goto L_08B65464;
    return;
L_08B65464:
    ctx.gpr[31] = (0x08B6546Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 939u, 0x08B57808u>(ctx, &aot_mem) && ctx.pc == 0x08B6546Cu) goto L_08B6546C;
    return;
L_08B6546C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08B65478;
L_08B65478:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B65484u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B65484u) goto L_08B65484;
    return;
L_08B65484:
    ctx.gpr[31] = (0x08B6548Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B6548Cu) goto L_08B6548C;
    return;
L_08B6548C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B654A0;
      }
      goto L_08B65498;
    }
L_08B65498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5832)));
      if (branch_taken) {
          goto L_08B65448;
      }
      goto L_08B654A0;
    }
L_08B654A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B654AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2235u << 16u);
      if (branch_taken) {
          goto L_08B654FC;
      }
      goto L_08B654BC;
    }
L_08B654BC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28740));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B654E8;
      }
      goto L_08B654C8;
    }
L_08B654C8:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28756));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5836), 0u);
      if (branch_taken) {
          goto L_08B654E8;
      }
      goto L_08B654DC;
    }
L_08B654DC:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B654E8;
L_08B654E8:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B654FC;
      }
      goto L_08B654F4;
    }
L_08B654F4:
    ctx.gpr[31] = (0x08B654FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B654FCu) goto L_08B654FC;
    return;
L_08B654FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2235u << 16u);
      if (branch_taken) {
          goto L_08B65558;
      }
      goto L_08B65518;
    }
L_08B65518:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28708));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B65544;
      }
      goto L_08B65524;
    }
L_08B65524:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28724));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5840), 0u);
      if (branch_taken) {
          goto L_08B65544;
      }
      goto L_08B65538;
    }
L_08B65538:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B65544;
L_08B65544:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65558;
      }
      goto L_08B65550;
    }
L_08B65550:
    ctx.gpr[31] = (0x08B65558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B65558u) goto L_08B65558;
    return;
L_08B65558:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65564:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6557Cu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B6557Cu) goto L_08B6557C;
    return;
L_08B6557C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08B65594;
      }
      goto L_08B65588;
    }
L_08B65588:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28740));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08B65594;
L_08B65594:
    ctx.gpr[31] = (0x08B6559Cu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5836), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B6559Cu) goto L_08B6559C;
    return;
L_08B6559C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[31] = (0x08B655A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B655A8u) goto L_08B655A8;
    return;
L_08B655A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B655B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B656A4;
      }
      goto L_08B655E8;
    }
L_08B655E8:
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(25856));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B6565C;
      }
      goto L_08B655F8;
    }
L_08B655F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08B65610u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 635u, 0x08ABEF54u>(ctx, &aot_mem) && ctx.pc == 0x08B65610u) goto L_08B65610;
    return;
L_08B65610:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B6568C;
      }
      goto L_08B65628;
    }
L_08B65628:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08B65648u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem) && ctx.pc == 0x08B65648u) goto L_08B65648;
    return;
L_08B65648:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B6568C;
      }
      goto L_08B6565C;
    }
L_08B6565C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[31] = (0x08B65678u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08B65678u) goto L_08B65678;
    return;
L_08B65678:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08B6568C;
L_08B6568C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B6569Cu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B6569Cu) goto L_08B6569C;
    return;
L_08B6569C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B656C0;
      }
      goto L_08B656A4;
    }
L_08B656A4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B656C0;
      }
      goto L_08B656AC;
    }
L_08B656AC:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x08B656B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B656B8u) goto L_08B656B8;
    return;
L_08B656B8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_08B656C0;
L_08B656C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B656D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B656F0u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B656F0u) goto L_08B656F0;
    return;
L_08B656F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2235u << 16u);
      if (branch_taken) {
          goto L_08B65708;
      }
      goto L_08B656FC;
    }
L_08B656FC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28708));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08B65708;
L_08B65708:
    ctx.gpr[31] = (0x08B65710u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5840), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B65710u) goto L_08B65710;
    return;
L_08B65710:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    ctx.gpr[31] = (0x08B6571Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B6571Cu) goto L_08B6571C;
    return;
L_08B6571C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6572C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B65748u);
    ctx.gpr[4] = (0u | 328u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B65748u) goto L_08B65748;
    return;
L_08B65748:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65760;
      }
      goto L_08B65754;
    }
L_08B65754:
    ctx.gpr[31] = (0x08B6575Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 162u, 0x089ECC34u>(ctx, &aot_mem) && ctx.pc == 0x08B6575Cu) goto L_08B6575C;
    return;
L_08B6575C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B65760;
L_08B65760:
    ctx.gpr[31] = (0x08B65768u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5844), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B65768u) goto L_08B65768;
    return;
L_08B65768:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    ctx.gpr[31] = (0x08B65774u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B65774u) goto L_08B65774;
    return;
L_08B65774:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B657CC;
      }
      goto L_08B657AC;
    }
L_08B657AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B657C0;
      }
      goto L_08B657B8;
    }
L_08B657B8:
    ctx.gpr[31] = (0x08B657C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B657C0u) goto L_08B657C0;
    return;
L_08B657C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B657AC;
      }
      goto L_08B657CC;
    }
L_08B657CC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B657E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B65804u);
    ctx.gpr[4] = (0u | 11256u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B65804u) goto L_08B65804;
    return;
L_08B65804:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6581C;
      }
      goto L_08B65810;
    }
L_08B65810:
    ctx.gpr[31] = (0x08B65818u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 449u, 0x089BA4A0u>(ctx, &aot_mem) && ctx.pc == 0x08B65818u) goto L_08B65818;
    return;
L_08B65818:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B6581C;
L_08B6581C:
    ctx.gpr[31] = (0x08B65824u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5848), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B65824u) goto L_08B65824;
    return;
L_08B65824:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[31] = (0x08B65830u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B65830u) goto L_08B65830;
    return;
L_08B65830:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65844:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B65860u);
    ctx.gpr[4] = (0u | 6912u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B65860u) goto L_08B65860;
    return;
L_08B65860:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65878;
      }
      goto L_08B6586C;
    }
L_08B6586C:
    ctx.gpr[31] = (0x08B65874u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 769u, 0x0880FEACu>(ctx, &aot_mem) && ctx.pc == 0x08B65874u) goto L_08B65874;
    return;
L_08B65874:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B65878;
L_08B65878:
    ctx.gpr[31] = (0x08B65880u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5852), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B65880u) goto L_08B65880;
    return;
L_08B65880:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[31] = (0x08B6588Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B6588Cu) goto L_08B6588C;
    return;
L_08B6588C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B658A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B658B0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-32664));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem) && ctx.pc == 0x08B658B0u) goto L_08B658B0;
    return;
L_08B658B0:
    ctx.gpr[31] = (0x08B658B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem) && ctx.pc == 0x08B658B8u) goto L_08B658B8;
    return;
L_08B658B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B658C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B659D8;
      }
      goto L_08B658E8;
    }
L_08B658E8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28676));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08B65928;
      }
      goto L_08B65904;
    }
L_08B65904:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65928;
      }
      goto L_08B6590C;
    }
L_08B6590C:
    ctx.gpr[31] = (0x08B65914u);
    // nop
    goto L_08B659F4;
L_08B65914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65928;
      }
      goto L_08B65920;
    }
L_08B65920:
    ctx.gpr[31] = (0x08B65928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B65928u) goto L_08B65928;
    return;
L_08B65928:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65970;
      }
      goto L_08B65930;
    }
L_08B65930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B65950;
      }
      goto L_08B65944;
    }
L_08B65944:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08B65948;
L_08B65948:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08B65948;
      }
      goto L_08B65950;
    }
L_08B65950:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65970;
      }
      goto L_08B65958;
    }
L_08B65958:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65970;
      }
      goto L_08B65960;
    }
L_08B65960:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65970;
      }
      goto L_08B65968;
    }
L_08B65968:
    ctx.gpr[31] = (0x08B65970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B65970u) goto L_08B65970;
    return;
L_08B65970:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6599C;
      }
      goto L_08B65978;
    }
L_08B65978:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6599C;
      }
      goto L_08B65980;
    }
L_08B65980:
    ctx.gpr[31] = (0x08B65988u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08B659F4;
L_08B65988:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6599C;
      }
      goto L_08B65994;
    }
L_08B65994:
    ctx.gpr[31] = (0x08B6599Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B6599Cu) goto L_08B6599C;
    return;
L_08B6599C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08B659C8;
      }
      goto L_08B659A4;
    }
L_08B659A4:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28692));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5856), 0u);
      if (branch_taken) {
          goto L_08B659C4;
      }
      goto L_08B659B8;
    }
L_08B659B8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B659C4;
L_08B659C4:
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
    goto L_08B659C8;
L_08B659C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B659D8;
      }
      goto L_08B659D0;
    }
L_08B659D0:
    ctx.gpr[31] = (0x08B659D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B659D8u) goto L_08B659D8;
    return;
L_08B659D8:
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
L_08B659F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B65A38;
      }
      goto L_08B65A18;
    }
L_08B65A18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B65A2C;
      }
      goto L_08B65A24;
    }
L_08B65A24:
    ctx.gpr[31] = (0x08B65A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B65A2Cu) goto L_08B65A2C;
    return;
L_08B65A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B65A18;
      }
      goto L_08B65A38;
    }
L_08B65A38:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65A54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B65A70u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B65A70u) goto L_08B65A70;
    return;
L_08B65A70:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65A88;
      }
      goto L_08B65A7C;
    }
L_08B65A7C:
    ctx.gpr[31] = (0x08B65A84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 245u, 0x08806200u>(ctx, &aot_mem) && ctx.pc == 0x08B65A84u) goto L_08B65A84;
    return;
L_08B65A84:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B65A88;
L_08B65A88:
    ctx.gpr[31] = (0x08B65A90u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5856), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B65A90u) goto L_08B65A90;
    return;
L_08B65A90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    ctx.gpr[31] = (0x08B65A9Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B65A9Cu) goto L_08B65A9C;
    return;
L_08B65A9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65AB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B65ACCu);
    ctx.gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B65ACCu) goto L_08B65ACC;
    return;
L_08B65ACC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65AE4;
      }
      goto L_08B65AD8;
    }
L_08B65AD8:
    ctx.gpr[31] = (0x08B65AE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 244u, 0x089750ECu>(ctx, &aot_mem) && ctx.pc == 0x08B65AE0u) goto L_08B65AE0;
    return;
L_08B65AE0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B65AE4;
L_08B65AE4:
    ctx.gpr[31] = (0x08B65AECu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5860), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B65AECu) goto L_08B65AEC;
    return;
L_08B65AEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5860)));
    ctx.gpr[31] = (0x08B65AF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B65AF8u) goto L_08B65AF8;
    return;
L_08B65AF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65B0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B65B28u);
    ctx.gpr[4] = (0u | 11776u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B65B28u) goto L_08B65B28;
    return;
L_08B65B28:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65B40;
      }
      goto L_08B65B34;
    }
L_08B65B34:
    ctx.gpr[31] = (0x08B65B3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 235u, 0x089550C0u>(ctx, &aot_mem) && ctx.pc == 0x08B65B3Cu) goto L_08B65B3C;
    return;
L_08B65B3C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B65B40;
L_08B65B40:
    ctx.gpr[31] = (0x08B65B48u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5864), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B65B48u) goto L_08B65B48;
    return;
L_08B65B48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    ctx.gpr[31] = (0x08B65B54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B65B54u) goto L_08B65B54;
    return;
L_08B65B54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65B68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B65B74;
L_08B65B74:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B65BA0;
      }
      goto L_08B65B80;
    }
L_08B65B80:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B65B98;
      }
      goto L_08B65B88;
    }
L_08B65B88:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B65BA0;
      }
      goto L_08B65B98;
    }
L_08B65B98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B65C1C;
      }
      goto L_08B65BA0;
    }
L_08B65BA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B65B74;
      }
      goto L_08B65BC0;
    }
L_08B65BC0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B65C1C;
L_08B65C1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65C24:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65C60;
      }
      goto L_08B65C5C;
    }
L_08B65C5C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B65C60;
L_08B65C60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65C68:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B65CB0;
      }
      goto L_08B65C74;
    }
L_08B65C74:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65CB0;
      }
      goto L_08B65C84;
    }
L_08B65C84:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3344));
      if (branch_taken) {
          goto L_08B65CB8;
      }
      goto L_08B65C9C;
    }
L_08B65C9C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B65CBC;
      }
      goto L_08B65CB0;
    }
L_08B65CB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B65CBC;
      }
      goto L_08B65CB8;
    }
L_08B65CB8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B65CBC;
L_08B65CBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65CC4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B65D14;
      }
      goto L_08B65CD0;
    }
L_08B65CD0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65D14;
      }
      goto L_08B65CE0;
    }
L_08B65CE0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B65D1C;
      }
      goto L_08B65CF8;
    }
L_08B65CF8:
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B65D20;
      }
      goto L_08B65D14;
    }
L_08B65D14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B65D20;
      }
      goto L_08B65D1C;
    }
L_08B65D1C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B65D20;
L_08B65D20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65D28:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B65D78;
      }
      goto L_08B65D34;
    }
L_08B65D34:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65D78;
      }
      goto L_08B65D44;
    }
L_08B65D44:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B65D80;
      }
      goto L_08B65D5C;
    }
L_08B65D5C:
    ctx.gpr[5] = (ctx.gpr[6] << 5u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B65D84;
      }
      goto L_08B65D78;
    }
L_08B65D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B65D84;
      }
      goto L_08B65D80;
    }
L_08B65D80:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B65D84;
L_08B65D84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65D8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B65DA8u);
    ctx.gpr[4] = (0u | 3188u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B65DA8u) goto L_08B65DA8;
    return;
L_08B65DA8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65DC0;
      }
      goto L_08B65DB4;
    }
L_08B65DB4:
    ctx.gpr[31] = (0x08B65DBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 309u, 0x08A55458u>(ctx, &aot_mem) && ctx.pc == 0x08B65DBCu) goto L_08B65DBC;
    return;
L_08B65DBC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B65DC0;
L_08B65DC0:
    ctx.gpr[31] = (0x08B65DC8u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5868), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B65DC8u) goto L_08B65DC8;
    return;
L_08B65DC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    ctx.gpr[31] = (0x08B65DD4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B65DD4u) goto L_08B65DD4;
    return;
L_08B65DD4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65DE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B65E04u);
    ctx.gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B65E04u) goto L_08B65E04;
    return;
L_08B65E04:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65E1C;
      }
      goto L_08B65E10;
    }
L_08B65E10:
    ctx.gpr[31] = (0x08B65E18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 481u, 0x08A52B60u>(ctx, &aot_mem) && ctx.pc == 0x08B65E18u) goto L_08B65E18;
    return;
L_08B65E18:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B65E1C;
L_08B65E1C:
    ctx.gpr[31] = (0x08B65E24u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5872), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B65E24u) goto L_08B65E24;
    return;
L_08B65E24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    ctx.gpr[31] = (0x08B65E30u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B65E30u) goto L_08B65E30;
    return;
L_08B65E30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B65E60u);
    ctx.gpr[4] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B65E60u) goto L_08B65E60;
    return;
L_08B65E60:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B65E78;
      }
      goto L_08B65E6C;
    }
L_08B65E6C:
    ctx.gpr[31] = (0x08B65E74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 465u, 0x089C6328u>(ctx, &aot_mem) && ctx.pc == 0x08B65E74u) goto L_08B65E74;
    return;
L_08B65E74:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B65E78;
L_08B65E78:
    ctx.gpr[31] = (0x08B65E80u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5876), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B65E80u) goto L_08B65E80;
    return;
L_08B65E80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    ctx.gpr[31] = (0x08B65E8Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B65E8Cu) goto L_08B65E8C;
    return;
L_08B65E8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B65EBCu);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem) && ctx.pc == 0x08B65EBCu) goto L_08B65EBC;
    return;
L_08B65EBC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65ED0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 10u);
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B65F24;
      }
      goto L_08B65F00;
    }
L_08B65F00:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    ctx.gpr[8] = (ctx.gpr[8] >> 28u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08B65F24;
L_08B65F24:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    ctx.gpr[6] = (ctx.gpr[6] >> 28u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B65F40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30744)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    goto L_08B65F5C;
L_08B65F5C:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B65FDC;
      }
      goto L_08B65F70;
    }
L_08B65F70:
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[5] ^ ctx.gpr[8]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08B65FDC;
      }
      goto L_08B65F8C;
    }
L_08B65F8C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    goto L_08B65F90;
L_08B65F90:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
        goto L_08B65FBC;
    }
    goto L_08B65FA8;
L_08B65FA8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    goto L_08B65FBC;
L_08B65FBC:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[5] ^ ctx.gpr[8]);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
        goto L_08B65F90;
    }
    goto L_08B65FDC;
L_08B65FDC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B65F5C;
      }
      goto L_08B65FEC;
    }
L_08B65FEC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66010;
      }
      goto L_08B65FF4;
    }
L_08B65FF4:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[11] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B66008u);
    ctx.gpr[7] = (ctx.gpr[10] | 0u);
    goto L_08B66170;
L_08B66008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B66014;
      }
      goto L_08B66010;
    }
L_08B66010:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B66014;
L_08B66014:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66024:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[9] & 65535u);
    ctx.gpr[11] = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B660C8;
      }
      goto L_08B66064;
    }
L_08B66064:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B660B8;
      }
      goto L_08B66088;
    }
L_08B66088:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08B660C0;
      }
      goto L_08B66094;
    }
L_08B66094:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B66088;
      }
      goto L_08B660B8;
    }
L_08B660B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B660CC;
      }
      goto L_08B660C0;
    }
L_08B660C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B660CC;
      }
      goto L_08B660C8;
    }
L_08B660C8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B660CC;
L_08B660CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B660D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    goto L_08B660F8;
L_08B660F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B66144;
      }
      goto L_08B6610C;
    }
L_08B6610C:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08B66120u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 597u, 0x08807CD8u>(ctx, &aot_mem) && ctx.pc == 0x08B66120u) goto L_08B66120;
    return;
L_08B66120:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] - ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 4u));
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] >> 28u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08B66144;
L_08B66144:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B660F8;
      }
      goto L_08B66154;
    }
L_08B66154:
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
L_08B66170:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
        goto L_08B66184;
    }
    goto L_08B66178;
L_08B66178:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B661AC;
      }
      goto L_08B66184;
    }
L_08B66184:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    ctx.gpr[8] = (ctx.gpr[8] >> 28u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 4u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08B661AC;
L_08B661AC:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B661B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B66238;
      }
      goto L_08B661D0;
    }
L_08B661D0:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6620C;
      }
      goto L_08B661E8;
    }
L_08B661E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6620C;
      }
      goto L_08B661F8;
    }
L_08B661F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6620C;
      }
      goto L_08B66204;
    }
L_08B66204:
    ctx.gpr[31] = (0x08B6620Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B6620Cu) goto L_08B6620C;
    return;
L_08B6620C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B66224;
      }
      goto L_08B66214;
    }
L_08B66214:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B66224;
L_08B66224:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B66238;
      }
      goto L_08B6622C;
    }
L_08B6622C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B66238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B66238u) goto L_08B66238;
    return;
L_08B66238:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6624C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B662E0;
      }
      goto L_08B66268;
    }
L_08B66268:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28596));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B662C8;
      }
      goto L_08B66278;
    }
L_08B66278:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B662B4;
      }
      goto L_08B66290;
    }
L_08B66290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B662B4;
      }
      goto L_08B662A0;
    }
L_08B662A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B662B4;
      }
      goto L_08B662AC;
    }
L_08B662AC:
    ctx.gpr[31] = (0x08B662B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B662B4u) goto L_08B662B4;
    return;
L_08B662B4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B662CC;
      }
      goto L_08B662BC;
    }
L_08B662BC:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B662C8;
L_08B662C8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B662CC;
L_08B662CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B662E0;
      }
      goto L_08B662D4;
    }
L_08B662D4:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B662E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B662E0u) goto L_08B662E0;
    return;
L_08B662E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B662F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B66398;
      }
      goto L_08B66310;
    }
L_08B66310:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28580));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B66380;
      }
      goto L_08B66320;
    }
L_08B66320:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28596));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B66380;
      }
      goto L_08B66330;
    }
L_08B66330:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6636C;
      }
      goto L_08B66348;
    }
L_08B66348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6636C;
      }
      goto L_08B66358;
    }
L_08B66358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B6636C;
      }
      goto L_08B66364;
    }
L_08B66364:
    ctx.gpr[31] = (0x08B6636Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B6636Cu) goto L_08B6636C;
    return;
L_08B6636C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B66384;
      }
      goto L_08B66374;
    }
L_08B66374:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B66380;
L_08B66380:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B66384;
L_08B66384:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B66398;
      }
      goto L_08B6638C;
    }
L_08B6638C:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B66398u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B66398u) goto L_08B66398;
    return;
L_08B66398:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B663AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B66460;
      }
      goto L_08B663C8;
    }
L_08B663C8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28564));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B66448;
      }
      goto L_08B663D8;
    }
L_08B663D8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28580));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B66448;
      }
      goto L_08B663E8;
    }
L_08B663E8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28596));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B66448;
      }
      goto L_08B663F8;
    }
L_08B663F8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66434;
      }
      goto L_08B66410;
    }
L_08B66410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66434;
      }
      goto L_08B66420;
    }
L_08B66420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66434;
      }
      goto L_08B6642C;
    }
L_08B6642C:
    ctx.gpr[31] = (0x08B66434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B66434u) goto L_08B66434;
    return;
L_08B66434:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B6644C;
      }
      goto L_08B6643C;
    }
L_08B6643C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B66448;
L_08B66448:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B6644C;
L_08B6644C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B66460;
      }
      goto L_08B66454;
    }
L_08B66454:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B66460u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B66460u) goto L_08B66460;
    return;
L_08B66460:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B664D4;
      }
      goto L_08B66490;
    }
L_08B66490:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18888));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B664C0;
      }
      goto L_08B664A0;
    }
L_08B664A0:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28548));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B664B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem) && ctx.pc == 0x08B664B4u) goto L_08B664B4;
    return;
L_08B664B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B664C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB80u>(ctx, &aot_mem) && ctx.pc == 0x08B664C0u) goto L_08B664C0;
    return;
L_08B664C0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B664D4;
      }
      goto L_08B664CC;
    }
L_08B664CC:
    ctx.gpr[31] = (0x08B664D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B664D4u) goto L_08B664D4;
    return;
L_08B664D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B664E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B6662C;
      }
      goto L_08B66534;
    }
L_08B66534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
      if (branch_taken) {
          goto L_08B665E4;
      }
      goto L_08B66554;
    }
L_08B66554:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B66588;
      }
      goto L_08B66564;
    }
L_08B66564:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08B66570u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B66570u) goto L_08B66570;
    return;
L_08B66570:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B66588;
      }
      goto L_08B6657C;
    }
L_08B6657C:
    ctx.gpr[31] = (0x08B66584u);
    // nop
    goto L_08B65438;
L_08B66584:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08B66588;
L_08B66588:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B665A8u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 315u, 0x08821BD8u>(ctx, &aot_mem) && ctx.pc == 0x08B665A8u) goto L_08B665A8;
    return;
L_08B665A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B665C8;
      }
      goto L_08B665B8;
    }
L_08B665B8:
    ctx.gpr[6] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B665C8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B665C8u) goto L_08B665C8;
    return;
L_08B665C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B66610;
      }
      goto L_08B665D4;
    }
L_08B665D4:
    ctx.gpr[31] = (0x08B665DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B665DCu) goto L_08B665DC;
    return;
L_08B665DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66610;
      }
      goto L_08B665E4;
    }
L_08B665E4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B66610;
      }
      goto L_08B665EC;
    }
L_08B665EC:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08B665F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B665F8u) goto L_08B665F8;
    return;
L_08B665F8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B66610;
      }
      goto L_08B66604;
    }
L_08B66604:
    ctx.gpr[31] = (0x08B6660Cu);
    // nop
    goto L_08B65438;
L_08B6660C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08B66610;
L_08B66610:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08B6662C;
L_08B6662C:
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
L_08B66650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2235u << 16u);
      if (branch_taken) {
          goto L_08B66690;
      }
      goto L_08B66660;
    }
L_08B66660:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28356));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B66678;
      }
      goto L_08B6666C;
    }
L_08B6666C:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B66678;
L_08B66678:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B66690;
      }
      goto L_08B66684;
    }
L_08B66684:
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[31] = (0x08B66690u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B66690u) goto L_08B66690;
    return;
L_08B66690:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6669C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B66740;
      }
      goto L_08B666B8;
    }
L_08B666B8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27980));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B66728;
      }
      goto L_08B666C8;
    }
L_08B666C8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28596));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B66728;
      }
      goto L_08B666D8;
    }
L_08B666D8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66714;
      }
      goto L_08B666F0;
    }
L_08B666F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66714;
      }
      goto L_08B66700;
    }
L_08B66700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66714;
      }
      goto L_08B6670C;
    }
L_08B6670C:
    ctx.gpr[31] = (0x08B66714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B66714u) goto L_08B66714;
    return;
L_08B66714:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B6672C;
      }
      goto L_08B6671C;
    }
L_08B6671C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B66728;
L_08B66728:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B6672C;
L_08B6672C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B66740;
      }
      goto L_08B66734;
    }
L_08B66734:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B66740u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B66740u) goto L_08B66740;
    return;
L_08B66740:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B667B4;
      }
      goto L_08B66770;
    }
L_08B66770:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19536));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B667A0;
      }
      goto L_08B66780;
    }
L_08B66780:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28172));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B66794u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem) && ctx.pc == 0x08B66794u) goto L_08B66794;
    return;
L_08B66794:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B667A0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 682u, 0x08A7FB94u>(ctx, &aot_mem) && ctx.pc == 0x08B667A0u) goto L_08B667A0;
    return;
L_08B667A0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B667B4;
      }
      goto L_08B667AC;
    }
L_08B667AC:
    ctx.gpr[31] = (0x08B667B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B667B4u) goto L_08B667B4;
    return;
L_08B667B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B667C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B66824;
      }
      goto L_08B667E4;
    }
L_08B667E4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B66814;
      }
      goto L_08B667EC;
    }
L_08B667EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B66814;
      }
      goto L_08B667FC;
    }
L_08B667FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B66814;
    }
    goto L_08B66808;
L_08B66808:
    ctx.gpr[31] = (0x08B66810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B66810u) goto L_08B66810;
    return;
L_08B66810:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B66814;
L_08B66814:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66824;
      }
      goto L_08B6681C;
    }
L_08B6681C:
    ctx.gpr[31] = (0x08B66824u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B66824u) goto L_08B66824;
    return;
L_08B66824:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66838:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B66844;
L_08B66844:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B66870;
      }
      goto L_08B66850;
    }
L_08B66850:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B66868;
      }
      goto L_08B66858;
    }
L_08B66858:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B66870;
      }
      goto L_08B66868;
    }
L_08B66868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B668F0;
      }
      goto L_08B66870;
    }
L_08B66870:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B66844;
      }
      goto L_08B66890;
    }
L_08B66890:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B668F0;
L_08B668F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B668F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[8] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B66924u);
    ctx.gpr[16] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08B6697C;
L_08B66924:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66938:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 544u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66974;
      }
      goto L_08B66970;
    }
L_08B66970:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B66974;
L_08B66974:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6697C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] & 127u);
    ctx.gpr[5] = (ctx.gpr[7] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B66A08;
      }
      goto L_08B669E4;
    }
L_08B669E4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 128u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B669E4;
      }
      goto L_08B66A08;
    }
L_08B66A08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66A10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 544u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66A4C;
      }
      goto L_08B66A34;
    }
L_08B66A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B66A50;
      }
      goto L_08B66A4C;
    }
L_08B66A4C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B66A50;
L_08B66A50:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 544u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66A74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66ADC;
      }
      goto L_08B66A84;
    }
L_08B66A84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B66AC8;
      }
      goto L_08B66A8C;
    }
L_08B66A8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B66A9Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B66A9Cu) goto L_08B66A9C;
    return;
L_08B66A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B66AC8;
      }
      goto L_08B66AAC;
    }
L_08B66AAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B66ABCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B65438;
L_08B66ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08B66AC8;
L_08B66AC8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B66AE4;
      }
      goto L_08B66ADC;
    }
L_08B66ADC:
    ctx.gpr[31] = (0x08B66AE4u);
    // nop
    goto L_08B658A0;
L_08B66AE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66AF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B66B1Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08B66B1Cu) goto L_08B66B1C;
    return;
L_08B66B1C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08B66B3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B66A74;
L_08B66B3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B66B60;
      }
      goto L_08B66B4C;
    }
L_08B66B4C:
    ctx.gpr[17] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08B66B58u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B66B58u) goto L_08B66B58;
    return;
L_08B66B58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B66B60;
      }
      goto L_08B66B60;
    }
L_08B66B60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66B84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B66BA0u);
    ctx.gpr[4] = (0u | 428u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B66BA0u) goto L_08B66BA0;
    return;
L_08B66BA0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66BB8;
      }
      goto L_08B66BAC;
    }
L_08B66BAC:
    ctx.gpr[31] = (0x08B66BB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 891u, 0x08873C40u>(ctx, &aot_mem) && ctx.pc == 0x08B66BB4u) goto L_08B66BB4;
    return;
L_08B66BB4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B66BB8;
L_08B66BB8:
    ctx.gpr[31] = (0x08B66BC0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5880), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B66BC0u) goto L_08B66BC0;
    return;
L_08B66BC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    ctx.gpr[31] = (0x08B66BCCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B66BCCu) goto L_08B66BCC;
    return;
L_08B66BCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66BE0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(19984));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66C10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08B66C58;
      }
      goto L_08B66C38;
    }
L_08B66C38:
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B66C58;
      }
      goto L_08B66C58;
    }
L_08B66C58:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08B66C68u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B66C68u) goto L_08B66C68;
    return;
L_08B66C68:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66C74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B66C80;
L_08B66C80:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B66CAC;
      }
      goto L_08B66C8C;
    }
L_08B66C8C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B66CA4;
      }
      goto L_08B66C94;
    }
L_08B66C94:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B66CAC;
      }
      goto L_08B66CA4;
    }
L_08B66CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B66D28;
      }
      goto L_08B66CAC;
    }
L_08B66CAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B66C80;
      }
      goto L_08B66CCC;
    }
L_08B66CCC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B66D28;
L_08B66D28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66D30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 48u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66D6C;
      }
      goto L_08B66D68;
    }
L_08B66D68:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B66D6C;
L_08B66D6C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66D74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 48u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66DB0;
      }
      goto L_08B66D98;
    }
L_08B66D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B66DB4;
      }
      goto L_08B66DB0;
    }
L_08B66DB0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B66DB4;
L_08B66DB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B66DD8u);
    ctx.gpr[4] = (0u | 176u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B66DD8u) goto L_08B66DD8;
    return;
L_08B66DD8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66DF0;
      }
      goto L_08B66DE4;
    }
L_08B66DE4:
    ctx.gpr[31] = (0x08B66DECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 75u, 0x0884C764u>(ctx, &aot_mem) && ctx.pc == 0x08B66DECu) goto L_08B66DEC;
    return;
L_08B66DEC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B66DF0;
L_08B66DF0:
    ctx.gpr[31] = (0x08B66DF8u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5884), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B66DF8u) goto L_08B66DF8;
    return;
L_08B66DF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    ctx.gpr[31] = (0x08B66E04u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B66E04u) goto L_08B66E04;
    return;
L_08B66E04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66E18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2234u << 16u);
      if (branch_taken) {
          goto L_08B66E54;
      }
      goto L_08B66E28;
    }
L_08B66E28:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(20576));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B66E40;
      }
      goto L_08B66E34;
    }
L_08B66E34:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22544));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    goto L_08B66E40;
L_08B66E40:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66E54;
      }
      goto L_08B66E4C;
    }
L_08B66E4C:
    ctx.gpr[31] = (0x08B66E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B66E54u) goto L_08B66E54;
    return;
L_08B66E54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 544u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66ED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08B66EF0;
      }
      goto L_08B66EE0;
    }
L_08B66EE0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66EF0;
      }
      goto L_08B66EE8;
    }
L_08B66EE8:
    ctx.gpr[31] = (0x08B66EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B66EF0u) goto L_08B66EF0;
    return;
L_08B66EF0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66EFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B66FA0;
      }
      goto L_08B66F18;
    }
L_08B66F18:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27724));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B66F88;
      }
      goto L_08B66F28;
    }
L_08B66F28:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28596));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B66F88;
      }
      goto L_08B66F38;
    }
L_08B66F38:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66F74;
      }
      goto L_08B66F50;
    }
L_08B66F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66F74;
      }
      goto L_08B66F60;
    }
L_08B66F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B66F74;
      }
      goto L_08B66F6C;
    }
L_08B66F6C:
    ctx.gpr[31] = (0x08B66F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B66F74u) goto L_08B66F74;
    return;
L_08B66F74:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B66F8C;
      }
      goto L_08B66F7C;
    }
L_08B66F7C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B66F88;
L_08B66F88:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B66F8C;
L_08B66F8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2237u << 16u);
      if (branch_taken) {
          goto L_08B66FA0;
      }
      goto L_08B66F94;
    }
L_08B66F94:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B66FA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08B66FA0u) goto L_08B66FA0;
    return;
L_08B66FA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B66FB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B67014;
      }
      goto L_08B66FD0;
    }
L_08B66FD0:
    ctx.gpr[4] = (2234u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20672));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B67000;
      }
      goto L_08B66FE0;
    }
L_08B66FE0:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27916));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B66FF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem) && ctx.pc == 0x08B66FF4u) goto L_08B66FF4;
    return;
L_08B66FF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B67000u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 682u, 0x08A7FB94u>(ctx, &aot_mem) && ctx.pc == 0x08B67000u) goto L_08B67000;
    return;
L_08B67000:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67014;
      }
      goto L_08B6700C;
    }
L_08B6700C:
    ctx.gpr[31] = (0x08B67014u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B67014u) goto L_08B67014;
    return;
L_08B67014:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B670BC;
      }
      goto L_08B67044;
    }
L_08B67044:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27692));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B67080;
      }
      goto L_08B6705C;
    }
L_08B6705C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B67080;
      }
      goto L_08B67068;
    }
L_08B67068:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67080;
      }
      goto L_08B67070;
    }
L_08B67070:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67080;
      }
      goto L_08B67078;
    }
L_08B67078:
    ctx.gpr[31] = (0x08B67080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B67080u) goto L_08B67080;
    return;
L_08B67080:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B670AC;
      }
      goto L_08B67088;
    }
L_08B67088:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27708));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5888), 0u);
      if (branch_taken) {
          goto L_08B670A8;
      }
      goto L_08B6709C;
    }
L_08B6709C:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B670A8;
L_08B670A8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B670AC;
L_08B670AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B670BC;
      }
      goto L_08B670B4;
    }
L_08B670B4:
    ctx.gpr[31] = (0x08B670BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B670BCu) goto L_08B670BC;
    return;
L_08B670BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B670D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B670F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08B670F4u) goto L_08B670F4;
    return;
L_08B670F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25856));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B67178;
      }
      goto L_08B67118;
    }
L_08B67118:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B67134u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 635u, 0x08ABEF54u>(ctx, &aot_mem) && ctx.pc == 0x08B67134u) goto L_08B67134;
    return;
L_08B67134:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08B67138;
L_08B67138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08B6719C;
      }
      goto L_08B6714C;
    }
L_08B6714C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08B6716Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem) && ctx.pc == 0x08B6716Cu) goto L_08B6716C;
    return;
L_08B6716C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B6719C;
      }
      goto L_08B67178;
    }
L_08B67178:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B67190u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem) && ctx.pc == 0x08B67190u) goto L_08B67190;
    return;
L_08B67190:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08B6719C;
L_08B6719C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08B671B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem) && ctx.pc == 0x08B671B0u) goto L_08B671B0;
    return;
L_08B671B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B671D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B671F0u);
    ctx.gpr[4] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B671F0u) goto L_08B671F0;
    return;
L_08B671F0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67208;
      }
      goto L_08B671FC;
    }
L_08B671FC:
    ctx.gpr[31] = (0x08B67204u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 431u, 0x0886ED40u>(ctx, &aot_mem) && ctx.pc == 0x08B67204u) goto L_08B67204;
    return;
L_08B67204:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B67208;
L_08B67208:
    ctx.gpr[31] = (0x08B67210u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5888), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B67210u) goto L_08B67210;
    return;
L_08B67210:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    ctx.gpr[31] = (0x08B6721Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B6721Cu) goto L_08B6721C;
    return;
L_08B6721C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67230:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B6724Cu);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08B6724Cu) goto L_08B6724C;
    return;
L_08B6724C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67264;
      }
      goto L_08B67258;
    }
L_08B67258:
    ctx.gpr[31] = (0x08B67260u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 277u, 0x08885304u>(ctx, &aot_mem) && ctx.pc == 0x08B67260u) goto L_08B67260;
    return;
L_08B67260:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08B67264;
L_08B67264:
    ctx.gpr[31] = (0x08B6726Cu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5892), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 652u, 0x08A06930u>(ctx, &aot_mem) && ctx.pc == 0x08B6726Cu) goto L_08B6726C;
    return;
L_08B6726C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[31] = (0x08B67278u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 650u, 0x08A06918u>(ctx, &aot_mem) && ctx.pc == 0x08B67278u) goto L_08B67278;
    return;
L_08B67278:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B6728C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B672FC;
      }
      goto L_08B672A8;
    }
L_08B672A8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27660));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(164));
    ctx.gpr[31] = (0x08B672C0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 584u, 0x0886F9A0u>(ctx, &aot_mem) && ctx.pc == 0x08B672C0u) goto L_08B672C0;
    return;
L_08B672C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B672EC;
      }
      goto L_08B672C8;
    }
L_08B672C8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27676));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5880), 0u);
      if (branch_taken) {
          goto L_08B672E8;
      }
      goto L_08B672DC;
    }
L_08B672DC:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08B672E8;
L_08B672E8:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B672EC;
L_08B672EC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B672FC;
      }
      goto L_08B672F4;
    }
L_08B672F4:
    ctx.gpr[31] = (0x08B672FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B672FCu) goto L_08B672FC;
    return;
L_08B672FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67310:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-128));
      if (branch_taken) {
          goto L_08B67360;
      }
      goto L_08B67324;
    }
L_08B67324:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08B67328;
L_08B67328:
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] | 128u);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08B67328;
    }
    goto L_08B67360;
L_08B67360:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67368:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 3344u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B673A4;
      }
      goto L_08B6738C;
    }
L_08B6738C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B673A8;
      }
      goto L_08B673A4;
    }
L_08B673A4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B673A8;
L_08B673A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B673B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 352u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B673CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08B673D8;
L_08B673D8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B67404;
      }
      goto L_08B673E4;
    }
L_08B673E4:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B673FC;
      }
      goto L_08B673EC;
    }
L_08B673EC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B67404;
      }
      goto L_08B673FC;
    }
L_08B673FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B67488;
      }
      goto L_08B67404;
    }
L_08B67404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] & 128u);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B673D8;
      }
      goto L_08B67424;
    }
L_08B67424:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-128));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] & 127u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] & 127u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_08B67488;
L_08B67488:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67490:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 352u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B674CC;
      }
      goto L_08B674C8;
    }
L_08B674C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08B674CC;
L_08B674CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B674D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B67544;
      }
      goto L_08B674F0;
    }
L_08B674F0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08B67534;
      }
      goto L_08B674F8;
    }
L_08B674F8:
    ctx.gpr[31] = (0x08B67500u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B67974;
L_08B67500:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B67530;
      }
      goto L_08B6750C;
    }
L_08B6750C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B67530;
      }
      goto L_08B67518;
    }
L_08B67518:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B67534;
    }
    goto L_08B67520;
L_08B67520:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08B67534;
    }
    goto L_08B67528;
L_08B67528:
    ctx.gpr[31] = (0x08B67530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B67530u) goto L_08B67530;
    return;
L_08B67530:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08B67534;
L_08B67534:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67544;
      }
      goto L_08B6753C;
    }
L_08B6753C:
    ctx.gpr[31] = (0x08B67544u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08B67544u) goto L_08B67544;
    return;
L_08B67544:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67558:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[10] = (ctx.gpr[10] >> 30u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    { const std::uint32_t dividend = ctx.gpr[8]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B675F0;
      }
      goto L_08B675A0;
    }
L_08B675A0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] ^ ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B675D0;
      }
      goto L_08B675BC;
    }
L_08B675BC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B675A0;
      }
      goto L_08B675C8;
    }
L_08B675C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B675F0;
      }
      goto L_08B675D0;
    }
L_08B675D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B676B8;
      }
      goto L_08B675F0;
    }
L_08B675F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08B67610u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B67610u) goto L_08B67610;
    return;
L_08B67610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B67664;
      }
      goto L_08B67630;
    }
L_08B67630:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[31] = (0x08B6764Cu);
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
    goto L_08B65438;
L_08B6764C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08B67664;
L_08B67664:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08B6767C;
      }
      goto L_08B67674;
    }
L_08B67674:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08B6767C;
L_08B6767C:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08B676B8;
L_08B676B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B676C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67788;
      }
      goto L_08B676E0;
    }
L_08B676E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B6773C;
      }
      goto L_08B6771C;
    }
L_08B6771C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B6772C;
      }
      goto L_08B67724;
    }
L_08B67724:
    ctx.gpr[31] = (0x08B6772Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B6772Cu) goto L_08B6772C;
    return;
L_08B6772C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B67788;
      }
      goto L_08B6773C;
    }
L_08B6773C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67788;
      }
      goto L_08B67748;
    }
L_08B67748:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B67774;
      }
      goto L_08B67750;
    }
L_08B67750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B67764;
      }
      goto L_08B6775C;
    }
L_08B6775C:
    ctx.gpr[31] = (0x08B67764u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B67764u) goto L_08B67764;
    return;
L_08B67764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B67788;
      }
      goto L_08B67774;
    }
L_08B67774:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B67748;
      }
      goto L_08B67788;
    }
L_08B67788:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67968;
      }
      goto L_08B677C8;
    }
L_08B677C8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B677D4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    goto L_08B67A40;
L_08B677D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B67968;
      }
      goto L_08B677E8;
    }
L_08B677E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08B67864;
      }
      goto L_08B67800;
    }
L_08B67800:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[31] = (0x08B6781Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B6781Cu) goto L_08B6781C;
    return;
L_08B6781C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08B67864;
      }
      goto L_08B67838;
    }
L_08B67838:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[31] = (0x08B67850u);
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
    goto L_08B65438;
L_08B67850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08B67864;
L_08B67864:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B67894;
      }
      goto L_08B67884;
    }
L_08B67884:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B67884;
      }
      goto L_08B67894;
    }
L_08B67894:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B67914;
      }
      goto L_08B678A8;
    }
L_08B678A8:
    ctx.gpr[11] = (0u | 0u);
    goto L_08B678AC;
L_08B678AC:
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67904;
      }
      goto L_08B678BC;
    }
L_08B678BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    goto L_08B678C0;
L_08B678C0:
    { const std::uint32_t dividend = ctx.gpr[7]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (ctx.hi);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[11]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
        goto L_08B678C0;
    }
    goto L_08B67904;
L_08B67904:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B678AC;
      }
      goto L_08B67914;
    }
L_08B67914:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B67968;
      }
      goto L_08B67958;
    }
L_08B67958:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67968;
      }
      goto L_08B67960;
    }
L_08B67960:
    ctx.gpr[31] = (0x08B67968u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B67968u) goto L_08B67968;
    return;
L_08B67968:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67974:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B67A20;
      }
      goto L_08B679BC;
    }
L_08B679BC:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
        goto L_08B679F0;
    }
    goto L_08B679CC;
L_08B679CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B679DC;
      }
      goto L_08B679D4;
    }
L_08B679D4:
    ctx.gpr[31] = (0x08B679DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B679DCu) goto L_08B679DC;
    return;
L_08B679DC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B679CC;
      }
      goto L_08B679E8;
    }
L_08B679E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_08B679F0;
L_08B679F0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B679BC;
      }
      goto L_08B67A20;
    }
L_08B67A20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
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
L_08B67A40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(21304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B67A68u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08B67FC4;
L_08B67A68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08B67A8Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08B67FD8;
L_08B67A8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08B67AA0;
    }
    goto L_08B67A98;
L_08B67A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08B67AA0;
      }
      goto L_08B67AA0;
    }
L_08B67AA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67AB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B67BF8;
      }
      goto L_08B67B00;
    }
L_08B67B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
      if (branch_taken) {
          goto L_08B67BB0;
      }
      goto L_08B67B20;
    }
L_08B67B20:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B67B54;
      }
      goto L_08B67B30;
    }
L_08B67B30:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08B67B3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B67B3Cu) goto L_08B67B3C;
    return;
L_08B67B3C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B67B54;
      }
      goto L_08B67B48;
    }
L_08B67B48:
    ctx.gpr[31] = (0x08B67B50u);
    // nop
    goto L_08B65438;
L_08B67B50:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08B67B54;
L_08B67B54:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B67B74u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 745u, 0x0887F7F0u>(ctx, &aot_mem) && ctx.pc == 0x08B67B74u) goto L_08B67B74;
    return;
L_08B67B74:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B67B94;
      }
      goto L_08B67B84;
    }
L_08B67B84:
    ctx.gpr[6] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08B67B94u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B67B94u) goto L_08B67B94;
    return;
L_08B67B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B67BDC;
      }
      goto L_08B67BA0;
    }
L_08B67BA0:
    ctx.gpr[31] = (0x08B67BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B67BA8u) goto L_08B67BA8;
    return;
L_08B67BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67BDC;
      }
      goto L_08B67BB0;
    }
L_08B67BB0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B67BDC;
      }
      goto L_08B67BB8;
    }
L_08B67BB8:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[31] = (0x08B67BC4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B67BC4u) goto L_08B67BC4;
    return;
L_08B67BC4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08B67BDC;
      }
      goto L_08B67BD0;
    }
L_08B67BD0:
    ctx.gpr[31] = (0x08B67BD8u);
    // nop
    goto L_08B65438;
L_08B67BD8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_08B67BDC;
L_08B67BDC:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08B67BF8;
L_08B67BF8:
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
L_08B67C1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B67F18;
      }
      goto L_08B67C58;
    }
L_08B67C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[22]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[20] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
        goto L_08B67E00;
    }
    goto L_08B67C80;
L_08B67C80:
    ctx.gpr[4] = (ctx.gpr[22] - ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08B67D50;
      }
      goto L_08B67CA4;
    }
L_08B67CA4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(9))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[22] - ctx.gpr[20]);
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B67CD0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 745u, 0x0887F7F0u>(ctx, &aot_mem) && ctx.pc == 0x08B67CD0u) goto L_08B67CD0;
    return;
L_08B67CD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[21];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B67CEC;
      }
      goto L_08B67CE0;
    }
L_08B67CE0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08B67D04;
      }
      goto L_08B67CEC;
    }
L_08B67CEC:
    ctx.gpr[6] = (ctx.gpr[22] - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08B67CFCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B67CFCu) goto L_08B67CFC;
    return;
L_08B67CFC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_08B67D04;
L_08B67D04:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[19] - ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B67D28;
      }
      goto L_08B67D18;
    }
L_08B67D18:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B67D28u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B67D28u) goto L_08B67D28;
    return;
L_08B67D28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B67D48;
      }
      goto L_08B67D38;
    }
L_08B67D38:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B67D3C;
L_08B67D3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08B67D3C;
    }
    goto L_08B67D48;
L_08B67D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67DF8;
      }
      goto L_08B67D50;
    }
L_08B67D50:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
      if (branch_taken) {
          goto L_08B67D80;
      }
      goto L_08B67D6C;
    }
L_08B67D6C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B67D6C;
      }
      goto L_08B67D7C;
    }
L_08B67D7C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B67D80;
L_08B67D80:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08B67DACu);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 745u, 0x0887F7F0u>(ctx, &aot_mem) && ctx.pc == 0x08B67DACu) goto L_08B67DAC;
    return;
L_08B67DAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B67DC8;
      }
      goto L_08B67DBC;
    }
L_08B67DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B67DE0;
      }
      goto L_08B67DC8;
    }
L_08B67DC8:
    ctx.gpr[6] = (ctx.gpr[19] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B67DD8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B67DD8u) goto L_08B67DD8;
    return;
L_08B67DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08B67DE0;
L_08B67DE0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B67DF8;
      }
      goto L_08B67DE8;
    }
L_08B67DE8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08B67DEC;
L_08B67DEC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[17] != ctx.gpr[19]) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
        goto L_08B67DEC;
    }
    goto L_08B67DF8;
L_08B67DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B67F18;
      }
      goto L_08B67E00;
    }
L_08B67E00:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B67E3C;
      }
      goto L_08B67E2C;
    }
L_08B67E2C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B67E48;
      }
      goto L_08B67E3C;
    }
L_08B67E3C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08B67E48;
L_08B67E48:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B67E74;
      }
      goto L_08B67E50;
    }
L_08B67E50:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[31] = (0x08B67E5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem) && ctx.pc == 0x08B67E5Cu) goto L_08B67E5C;
    return;
L_08B67E5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B67E74;
      }
      goto L_08B67E68;
    }
L_08B67E68:
    ctx.gpr[31] = (0x08B67E70u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B65438;
L_08B67E70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08B67E74;
L_08B67E74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B67E8C;
      }
      goto L_08B67E80;
    }
L_08B67E80:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B67EA4;
      }
      goto L_08B67E8C;
    }
L_08B67E8C:
    ctx.gpr[21] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B67E9Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B67E9Cu) goto L_08B67E9C;
    return;
L_08B67E9C:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08B67EA4;
L_08B67EA4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08B67EC4;
    }
    goto L_08B67EAC;
L_08B67EAC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B67EAC;
      }
      goto L_08B67EC0;
    }
L_08B67EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B67EC4;
L_08B67EC4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B67ED8;
      }
      goto L_08B67ECC;
    }
L_08B67ECC:
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B67EF4;
      }
      goto L_08B67ED8;
    }
L_08B67ED8:
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B67EECu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem) && ctx.pc == 0x08B67EECu) goto L_08B67EEC;
    return;
L_08B67EEC:
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08B67EF4;
L_08B67EF4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B67F04;
      }
      goto L_08B67EFC;
    }
L_08B67EFC:
    ctx.gpr[31] = (0x08B67F04u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08B67F04u) goto L_08B67F04;
    return;
L_08B67F04:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08B67F18;
L_08B67F18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67F44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    goto L_08B67F98;
L_08B67F98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B67FBC;
      }
      goto L_08B67FA0;
    }
L_08B67FA0:
    ctx.gpr[8] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B67FBC;
      }
      goto L_08B67FAC;
    }
L_08B67FAC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B67F98;
      }
      goto L_08B67FBC;
    }
L_08B67FBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67FC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B67FD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[2]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 6u, 0x08B68044u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 1u, 0x08B68000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0216(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0216_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_216(Runtime &runtime) {
    runtime.register_generated_unit(216u, 0x08B64000u, 16384u, &recomp_unit_0216, &recomp_unit_0216_entry);
    runtime.register_function(0x08B64000u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64010u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64020u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6403Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6404Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64068u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B640B0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B640B4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B640C4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B640D0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B640D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64154u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B641A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B641B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64244u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64254u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64290u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6429Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B642B0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B642B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B642C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B642E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B642F4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64310u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64318u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64324u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64354u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6436Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64374u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64380u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64390u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64398u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B643A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B643ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B643CCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B643D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B643ECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B643F4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64414u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6441Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64424u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6444Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64454u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64460u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64488u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64490u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6449Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B644E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B644ECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B644F0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64500u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64520u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6453Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64544u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64550u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64590u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64598u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6459Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B645ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B645FCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64604u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64608u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64618u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64624u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64638u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6463Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64644u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6464Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64654u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64684u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6468Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64690u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B646A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B646D0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B646D8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B646DCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B646ECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64714u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6471Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64728u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64760u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6476Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64784u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B647A4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B647ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B647B4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B647D0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B647D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B647F0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64844u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6484Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64854u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64860u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64868u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64898u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B648A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B648A4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B648B0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B648CCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B648E0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B648ECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64904u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64910u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6491Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64924u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64928u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6493Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64944u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6495Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64960u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64974u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64978u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6498Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6499Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B649A8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B649C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B649D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B649DCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B649ECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A04u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A10u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A1Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A24u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A30u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A3Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A44u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A58u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A5Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A64u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A70u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A88u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A8Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A90u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64A9Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64AA8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64AB4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64AC0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64ACCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64AD8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64AE4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64AF4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64AFCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B20u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B28u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B30u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B38u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B40u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B4Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B58u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B60u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B6Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B78u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B80u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B88u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64B98u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64BA8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64BC8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64BD8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64BE8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64BF4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C08u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C18u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C28u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C30u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C3Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C48u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C50u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C64u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C68u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C88u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C8Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64C98u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64CA0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64CACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64CB8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64CD0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64CDCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64CE4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64CECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D00u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D08u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D10u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D28u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D38u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D3Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D4Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D54u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D60u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D68u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D90u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64D98u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64DA0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64DACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64DBCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64DD0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64DDCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64DF8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64E00u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64E28u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64E34u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64E48u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64E50u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64E58u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64E64u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64E70u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64E9Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64EB8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64EBCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64EC0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64ECCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64ED4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64EDCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64F00u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64F08u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64F14u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64F20u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64F44u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64F50u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64F6Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64F70u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64F78u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64F90u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64F9Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64FC4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64FCCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64FD8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64FE4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64FECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B64FF4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65000u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65010u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65040u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65048u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65064u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6507Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65088u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B650C4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B650E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B650ECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B650F4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65100u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6511Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65128u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6512Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65144u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6514Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65158u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6518Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B651A8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B651B0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B651B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B651C4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B651D8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B651E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B651E8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65200u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65208u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65214u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65228u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65230u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65238u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65240u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65250u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65278u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65280u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6528Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65294u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65298u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B652A4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B652B0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B652B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B652F0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6530Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65324u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65340u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65350u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65368u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65378u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65388u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6539Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B653A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B653C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B653D0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B653DCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65400u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65418u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6542Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65438u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65448u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65450u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65464u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6546Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65478u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65484u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6548Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65498u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B654A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B654ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B654BCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B654C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B654DCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B654E8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B654F4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B654FCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65508u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65518u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65524u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65538u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65544u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65550u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65558u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65564u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6557Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65588u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65594u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6559Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B655A8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B655B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B655E8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B655F8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65610u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65628u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65648u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6565Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65678u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6568Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6569Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B656A4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B656ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B656B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B656C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B656D8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B656F0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B656FCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65708u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65710u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6571Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6572Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65748u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65754u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6575Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65760u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65768u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65774u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65788u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B657ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B657B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B657C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B657CCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B657E8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65804u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65810u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65818u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6581Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65824u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65830u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65844u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65860u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6586Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65874u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65878u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65880u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6588Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B658A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B658B0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B658B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B658C4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B658E8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65904u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6590Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65914u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65920u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65928u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65930u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65944u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65948u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65950u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65958u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65960u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65968u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65970u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65978u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65980u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65988u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65994u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6599Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B659A4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B659B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B659C4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B659C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B659D0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B659D8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B659F4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65A18u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65A24u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65A2Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65A38u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65A54u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65A70u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65A7Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65A84u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65A88u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65A90u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65A9Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65AB0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65ACCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65AD8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65AE0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65AE4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65AECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65AF8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B0Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B28u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B34u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B3Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B40u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B48u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B54u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B68u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B80u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B88u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65B98u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65BA0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65BC0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65C1Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65C24u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65C5Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65C60u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65C68u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65C74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65C84u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65C9Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65CB0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65CB8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65CBCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65CC4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65CD0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65CE0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65CF8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65D14u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65D1Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65D20u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65D28u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65D34u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65D44u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65D5Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65D78u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65D80u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65D84u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65D8Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65DA8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65DB4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65DBCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65DC0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65DC8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65DD4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65DE8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E04u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E10u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E18u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E1Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E24u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E30u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E44u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E60u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E6Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E78u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E80u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65E8Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65EA0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65EBCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65ED0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65F00u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65F24u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65F40u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65F5Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65F70u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65F8Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65F90u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65FA8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65FBCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65FDCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65FECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B65FF4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66008u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66010u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66014u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66024u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66064u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66088u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66094u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B660B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B660C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B660C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B660CCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B660D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B660F8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6610Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66120u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66144u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66154u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66170u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66178u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66184u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B661ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B661B4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B661D0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B661E8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B661F8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66204u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6620Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66214u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66224u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6622Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66238u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6624Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66268u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66278u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66290u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B662A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B662ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B662B4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B662BCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B662C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B662CCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B662D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B662E0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B662F4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66310u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66320u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66330u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66348u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66358u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66364u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6636Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66374u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66380u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66384u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6638Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66398u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B663ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B663C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B663D8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B663E8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B663F8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66410u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66420u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6642Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66434u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6643Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66448u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6644Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66454u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66460u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66474u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66490u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B664A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B664B4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B664C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B664CCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B664D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B664E8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66534u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66554u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66564u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66570u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6657Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66584u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66588u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B665A8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B665B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B665C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B665D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B665DCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B665E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B665ECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B665F8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66604u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6660Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66610u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6662Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66650u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66660u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6666Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66678u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66684u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66690u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6669Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B666B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B666C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B666D8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B666F0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66700u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6670Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66714u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6671Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66728u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6672Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66734u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66740u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66754u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66770u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66780u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66794u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B667A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B667ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B667B4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B667C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B667E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B667ECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B667FCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66808u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66810u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66814u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6681Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66824u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66838u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66844u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66850u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66858u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66868u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66870u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66890u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B668F0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B668F8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66924u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66938u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66970u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66974u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6697Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B669E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66A08u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66A10u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66A34u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66A4Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66A50u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66A58u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66A74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66A84u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66A8Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66A9Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66AACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66ABCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66AC8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66ADCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66AE4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66AF0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66B1Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66B3Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66B4Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66B58u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66B60u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66B84u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66BA0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66BACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66BB4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66BB8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66BC0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66BCCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66BE0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66C10u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66C38u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66C58u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66C68u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66C74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66C80u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66C8Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66C94u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66CA4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66CACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66CCCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66D28u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66D30u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66D68u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66D6Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66D74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66D98u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66DB0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66DB4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66DBCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66DD8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66DE4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66DECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66DF0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66DF8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66E04u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66E18u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66E28u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66E34u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66E40u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66E4Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66E54u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66E60u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66E7Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66E98u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66EB4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66ED0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66EE0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66EE8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66EF0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66EFCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66F18u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66F28u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66F38u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66F50u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66F60u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66F6Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66F74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66F7Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66F88u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66F8Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66F94u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66FA0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66FB4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66FD0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66FE0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B66FF4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67000u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6700Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67014u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67028u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67044u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6705Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67068u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67070u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67078u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67080u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67088u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6709Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B670A8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B670ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B670B4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B670BCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B670D0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B670F4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67118u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67134u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67138u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6714Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6716Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67178u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67190u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6719Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B671B0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B671D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B671F0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B671FCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67204u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67208u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67210u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6721Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67230u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6724Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67258u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67260u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67264u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6726Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67278u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6728Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B672A8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B672C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B672C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B672DCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B672E8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B672ECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B672F4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B672FCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67310u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67324u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67328u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67360u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67368u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6738Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B673A4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B673A8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B673B0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B673CCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B673D8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B673E4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B673ECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B673FCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67404u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67424u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67488u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67490u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B674C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B674CCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B674D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B674F0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B674F8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67500u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6750Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67518u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67520u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67528u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67530u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67534u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6753Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67544u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67558u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B675A0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B675BCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B675C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B675D0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B675F0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67610u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67630u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6764Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67664u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67674u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6767Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B676B8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B676C4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B676E0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6771Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67724u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6772Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6773Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67748u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67750u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6775Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67764u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67774u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67788u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67798u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B677C8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B677D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B677E8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67800u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B6781Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67838u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67850u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67864u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67884u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67894u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B678A8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B678ACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B678BCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B678C0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67904u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67914u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67958u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67960u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67968u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67974u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B679BCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B679CCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B679D4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B679DCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B679E8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B679F0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67A20u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67A40u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67A68u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67A8Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67A98u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67AA0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67AB4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67B00u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67B20u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67B30u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67B3Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67B48u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67B50u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67B54u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67B74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67B84u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67B94u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67BA0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67BA8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67BB0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67BB8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67BC4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67BD0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67BD8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67BDCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67BF8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67C1Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67C58u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67C80u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67CA4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67CD0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67CE0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67CECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67CFCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67D04u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67D18u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67D28u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67D38u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67D3Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67D48u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67D50u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67D6Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67D7Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67D80u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67DACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67DBCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67DC8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67DD8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67DE0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67DE8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67DECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67DF8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E00u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E2Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E3Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E48u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E50u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E5Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E68u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E70u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E74u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E80u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E8Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67E9Cu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67EA4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67EACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67EC0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67EC4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67ECCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67ED8u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67EECu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67EF4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67EFCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67F04u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67F18u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67F44u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67F98u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67FA0u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67FACu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67FBCu, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67FC4u, &recomp_unit_0216, "recomp_unit_0216");
    runtime.register_function(0x08B67FD8u, &recomp_unit_0216, "recomp_unit_0216");
}
} // namespace psprecomp
