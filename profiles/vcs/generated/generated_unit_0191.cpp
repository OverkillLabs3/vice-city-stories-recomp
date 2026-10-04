#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0191[4092] = {
    1, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0,
    0, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 21, 0, 22, 23,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 27, 0, 0, 28, 0, 29, 0, 0, 30, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 36, 0, 0, 0, 37, 0, 38, 39, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 48,
    0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60,
    0, 61, 0, 62, 0, 63, 0, 64, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0,
    0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 90, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 97, 0,
    98, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 110, 0, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0,
    0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 130, 0, 0, 131, 0, 0, 132, 133,
    0, 0, 134, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0,
    0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 153,
    0, 154, 0, 155, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 160, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0,
    166, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 176, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 180, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 189,
    0, 190, 0, 191, 192, 0, 193, 0, 0, 194, 0, 0, 195, 0, 196, 197, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 201, 202, 0, 0, 203, 0,
    0, 0, 204, 0, 0, 205, 0, 206, 207, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0,
    0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0,
    0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 0, 225, 0, 0, 0, 226, 0, 227, 228, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 231, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0,
    0, 235, 0, 236, 237, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0,
    248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 258, 0, 259, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0,
    263, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 272,
    0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0,
    0, 0, 0, 285, 0, 286, 0, 287, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 293, 0, 294,
    295, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 305, 0, 0,
    306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 317, 0, 0, 318, 0,
    319, 320, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 324, 0, 325, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0,
    0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0,
    0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    353, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359,
    360, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 368, 0,
    369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 374, 375, 0, 0, 0, 376, 0, 0, 0,
    0, 377, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 383, 384, 0, 0, 0, 0, 385, 0, 0, 386,
    0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392,
    0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 397, 0, 398, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 404, 0, 405, 0,
    0, 0, 0, 406, 0, 407, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 0, 415, 0, 416, 0, 417, 418,
    0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 423, 424, 0, 0, 425, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 429, 0, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0,
    438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0,
    444, 0, 0, 0, 445, 0, 0, 0, 446, 447, 0, 0, 0, 0, 0, 448, 0, 449, 0, 450, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 453,
    0, 454, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0, 0, 464, 0, 0,
    465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 0, 470, 0, 471, 0, 472, 473, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 477, 0,
    478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486,
    0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0,
    0, 495, 0, 496, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 500, 501, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0,
    504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 509,
    0, 510, 0, 511, 0, 512, 513, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0,
    0, 517, 0, 518, 0, 519, 0, 0, 0, 520, 0, 521, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 524, 0, 0, 0, 525, 0, 526, 0, 527, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 531, 0, 532, 0, 533,
    0, 0, 0, 534, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 545, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 548, 549, 0,
    550, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 554, 0, 555, 0, 0, 556, 0, 0, 0, 0,
    0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 560, 561, 0, 0, 562, 563, 0, 0, 0, 564, 0, 565, 0, 0, 0,
    0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0,
    576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 0,
    0, 589, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0,
    0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601,
    0, 0, 0, 602, 0, 0, 0, 603, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 616,
    617, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 620, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 0,
    0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0,
    0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0,
    0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0,
    641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 646, 0, 0, 0, 647, 0, 648, 0, 649, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658,
    0, 0, 659, 0, 660, 661, 0, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 666, 0, 667, 0, 0,
    0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 671, 0, 0, 672, 0, 673, 0, 674, 0, 0, 675, 676, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0,
    0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 682, 0, 683, 684, 0, 0, 0, 685, 0, 0, 686, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0,
    0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 692, 0, 693, 0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 697, 0, 698,
    0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 703, 0, 704, 0, 705, 0, 0, 706, 0, 0, 0, 707, 0,
    0, 708, 0, 0, 709, 0, 710, 711, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 0, 0, 715, 0, 716, 0, 0, 717, 0, 718, 719, 0, 0,
    0, 720, 0, 0, 721, 0, 722, 0, 0, 723, 0, 724, 725, 0, 0, 0, 726, 0, 0, 727, 0, 728, 0, 0, 729, 0, 730, 731, 0, 0, 0, 732,
    0, 0, 733, 0, 734, 0, 735, 0, 0, 0, 736, 0, 0, 737, 0, 738, 739, 0, 0, 0, 740, 0, 0, 741, 0, 742, 0, 0, 743, 0, 744, 745,
    0, 0, 0, 746, 0, 0, 747, 0, 748, 0, 0, 749, 0, 750, 751, 0, 0, 0, 752, 0, 0, 753, 0, 754, 0, 0, 755, 0, 756, 0, 0, 757,
    0, 758, 759, 0, 0, 0, 760, 0, 0, 761, 0, 762, 0, 0, 763, 0, 764, 765, 0, 0, 0, 766, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0, 770, 0, 771, 0, 0, 0, 0, 772, 0, 773, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 776,
    0, 0, 0, 0, 0, 0, 777, 0, 0, 778, 779, 0, 780, 0, 0, 781, 0, 782, 0, 0, 783, 0, 784, 0, 0, 785, 0, 0, 786, 0, 0, 787,
    0, 0, 0, 788, 0, 0, 789, 0, 790, 791, 0, 0, 0, 792, 0, 0, 793, 0, 794, 0, 0, 795, 0, 796, 797, 0, 0, 0, 798, 0, 0, 799,
    0, 800, 0, 0, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 804, 0, 805, 0, 0, 0, 806, 0, 0, 807, 0, 808, 809, 0, 0, 0, 810, 0,
    0, 811, 0, 812, 0, 0, 0, 813, 0, 0, 814, 0, 815, 816, 0, 0, 0, 817, 0, 0, 818, 0, 819, 0, 820, 0, 821, 0, 0, 822, 0, 823,
    824, 0, 0, 0, 825, 0, 0, 826, 0, 827, 0, 0, 828, 0, 829, 830, 0, 0, 0, 831, 0, 0, 832, 0, 833, 0, 0, 834, 0, 835, 836, 0,
    0, 0, 837, 0, 0, 838, 0, 839, 0, 840, 0, 0, 0, 841, 0, 0, 842, 0, 843, 844, 0, 0, 0, 845, 0, 0, 846, 0, 847, 0, 0, 0,
    848, 0, 0, 849, 0, 850, 851, 0, 0, 0, 852, 0, 0, 853, 0, 854, 0, 855, 0, 856, 0, 0, 857, 0, 858, 859, 0, 0, 0, 860, 0, 0,
    861, 0, 862, 0, 0, 863, 0, 864, 865, 0, 0, 0, 866, 0, 0, 867, 0, 868, 0, 0, 869, 0, 870, 871, 0, 0, 0, 872, 0, 0, 873, 0,
    874, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 878, 0, 879, 880, 0,
    0, 881, 0, 0, 882, 0, 883, 0, 0, 884, 0, 0, 885, 0, 886, 0, 887, 0, 888, 0, 0, 0, 889, 0, 0, 890, 0, 891, 0, 892, 0, 893,
    0, 894, 0, 0, 0, 895, 0, 0, 896, 0, 897, 0, 898, 0, 899, 0, 900, 0, 0, 0, 901, 0, 0, 902, 0, 903, 0, 904, 0, 905, 0, 906,
    0, 0, 0, 907, 0, 0, 908, 0, 909, 0, 910, 0, 0, 911, 0, 0, 912, 0, 913, 0, 914, 0, 915, 0, 0, 0, 916, 0, 0, 917, 0, 918,
    0, 919, 0, 920, 0, 921, 0, 0, 0, 922, 0, 0, 923, 0, 924, 0, 925, 0, 926, 0, 927, 0, 0, 0, 928, 0, 0, 929, 0, 930, 0, 931,
    0, 932, 0, 933, 0, 0, 0, 934, 0, 0, 935, 936, 0, 0, 937, 0, 0, 938, 0, 0, 939, 0, 0, 940, 0, 0, 941, 0, 942, 0, 943, 0,
    0, 944, 0, 0, 945, 0, 946, 0, 0, 947, 0, 0, 948, 0, 0, 0, 949, 950, 0, 951, 952, 0, 0, 953, 0, 954, 0, 0, 0, 955, 0, 0,
    0, 956, 0, 957, 0, 0, 0, 0, 958, 0, 0, 0, 0, 959, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 960, 0, 0, 0, 0, 0, 0, 961, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 962, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 963, 0, 0, 0, 0,
    0, 964, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 965, 0, 0, 0, 0, 0, 0, 0, 966, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 967,
    0, 968, 0, 0, 0, 969, 0, 970, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 971, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 972, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    973, 0, 0, 974, 0, 0, 0, 975, 0, 0, 976, 0, 0, 977, 0, 0, 0, 0, 978, 0, 979, 0, 0, 980, 981, 0, 0, 0, 0, 0, 0, 0,
    982, 0, 0, 983, 0, 0, 984, 0, 985, 0, 986, 0, 987, 0, 0, 988, 0, 0, 0, 0, 0, 989, 0, 990, 0, 0, 0, 991, 0, 0, 992, 993,
    0, 994, 0, 0, 995, 0, 0, 0, 996, 0, 0, 997, 0, 0, 0, 0, 0, 998, 0, 0, 999, 0, 0, 1000, 0, 0, 0, 0, 1001, 0, 0, 0,
    0, 1002, 0, 0, 0, 1003, 0, 0, 1004, 0, 0, 1005, 0, 1006, 0, 0, 1007, 0, 0, 1008, 0, 0, 1009, 0, 0, 0, 0, 1010,
};
void recomp_unit_0191_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B00000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0191[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B00000;
    case 2u: goto L_08B00004;
    case 3u: goto L_08B00014;
    case 4u: goto L_08B00038;
    case 5u: goto L_08B00044;
    case 6u: goto L_08B0005C;
    case 7u: goto L_08B0006C;
    case 8u: goto L_08B00088;
    case 9u: goto L_08B0008C;
    case 10u: goto L_08B000AC;
    case 11u: goto L_08B000D4;
    case 12u: goto L_08B000E4;
    case 13u: goto L_08B00158;
    case 14u: goto L_08B00160;
    case 15u: goto L_08B0019C;
    case 16u: goto L_08B001B0;
    case 17u: goto L_08B001BC;
    case 18u: goto L_08B001C4;
    case 19u: goto L_08B001D8;
    case 20u: goto L_08B001E0;
    case 21u: goto L_08B001F0;
    case 22u: goto L_08B001F8;
    case 23u: goto L_08B001FC;
    case 24u: goto L_08B00214;
    case 25u: goto L_08B00240;
    case 26u: goto L_08B00250;
    case 27u: goto L_08B00258;
    case 28u: goto L_08B00264;
    case 29u: goto L_08B0026C;
    case 30u: goto L_08B00278;
    case 31u: goto L_08B002EC;
    case 32u: goto L_08B002F4;
    case 33u: goto L_08B00330;
    case 34u: goto L_08B00340;
    case 35u: goto L_08B00348;
    case 36u: goto L_08B00350;
    case 37u: goto L_08B00360;
    case 38u: goto L_08B00368;
    case 39u: goto L_08B0036C;
    case 40u: goto L_08B00384;
    case 41u: goto L_08B003AC;
    case 42u: goto L_08B003BC;
    case 43u: goto L_08B003C8;
    case 44u: goto L_08B003D0;
    case 45u: goto L_08B003D8;
    case 46u: goto L_08B003E0;
    case 47u: goto L_08B003EC;
    case 48u: goto L_08B003FC;
    case 49u: goto L_08B00404;
    case 50u: goto L_08B00414;
    case 51u: goto L_08B0041C;
    case 52u: goto L_08B00430;
    case 53u: goto L_08B0043C;
    case 54u: goto L_08B00444;
    case 55u: goto L_08B0044C;
    case 56u: goto L_08B00454;
    case 57u: goto L_08B00460;
    case 58u: goto L_08B0046C;
    case 59u: goto L_08B00474;
    case 60u: goto L_08B0047C;
    case 61u: goto L_08B00484;
    case 62u: goto L_08B0048C;
    case 63u: goto L_08B00494;
    case 64u: goto L_08B0049C;
    case 65u: goto L_08B004A0;
    case 66u: goto L_08B004AC;
    case 67u: goto L_08B004BC;
    case 68u: goto L_08B004DC;
    case 69u: goto L_08B004EC;
    case 70u: goto L_08B004F4;
    case 71u: goto L_08B00508;
    case 72u: goto L_08B00520;
    case 73u: goto L_08B00540;
    case 74u: goto L_08B00548;
    case 75u: goto L_08B00554;
    case 76u: goto L_08B0055C;
    case 77u: goto L_08B00564;
    case 78u: goto L_08B00578;
    case 79u: goto L_08B005B0;
    case 80u: goto L_08B005B8;
    case 81u: goto L_08B005C8;
    case 82u: goto L_08B005D0;
    case 83u: goto L_08B005D8;
    case 84u: goto L_08B005E8;
    case 85u: goto L_08B005F8;
    case 86u: goto L_08B00604;
    case 87u: goto L_08B00614;
    case 88u: goto L_08B00620;
    case 89u: goto L_08B0062C;
    case 90u: goto L_08B00634;
    case 91u: goto L_08B00638;
    case 92u: goto L_08B00640;
    case 93u: goto L_08B00648;
    case 94u: goto L_08B00658;
    case 95u: goto L_08B00660;
    case 96u: goto L_08B00668;
    case 97u: goto L_08B00678;
    case 98u: goto L_08B00680;
    case 99u: goto L_08B00694;
    case 100u: goto L_08B0069C;
    case 101u: goto L_08B006A4;
    case 102u: goto L_08B006AC;
    case 103u: goto L_08B006B8;
    case 104u: goto L_08B006C8;
    case 105u: goto L_08B006F4;
    case 106u: goto L_08B00708;
    case 107u: goto L_08B00724;
    case 108u: goto L_08B00734;
    case 109u: goto L_08B0073C;
    case 110u: goto L_08B00744;
    case 111u: goto L_08B00750;
    case 112u: goto L_08B00760;
    case 113u: goto L_08B0076C;
    case 114u: goto L_08B00778;
    case 115u: goto L_08B00788;
    case 116u: goto L_08B00794;
    case 117u: goto L_08B007A4;
    case 118u: goto L_08B007C0;
    case 119u: goto L_08B007C8;
    case 120u: goto L_08B007DC;
    case 121u: goto L_08B00810;
    case 122u: goto L_08B00818;
    case 123u: goto L_08B00828;
    case 124u: goto L_08B00830;
    case 125u: goto L_08B0083C;
    case 126u: goto L_08B00844;
    case 127u: goto L_08B0084C;
    case 128u: goto L_08B00854;
    case 129u: goto L_08B0085C;
    case 130u: goto L_08B00860;
    case 131u: goto L_08B0086C;
    case 132u: goto L_08B00878;
    case 133u: goto L_08B0087C;
    case 134u: goto L_08B00888;
    case 135u: goto L_08B00890;
    case 136u: goto L_08B008A0;
    case 137u: goto L_08B008AC;
    case 138u: goto L_08B008B8;
    case 139u: goto L_08B008D0;
    case 140u: goto L_08B008DC;
    case 141u: goto L_08B008E8;
    case 142u: goto L_08B008F4;
    case 143u: goto L_08B00904;
    case 144u: goto L_08B00914;
    case 145u: goto L_08B0091C;
    case 146u: goto L_08B00928;
    case 147u: goto L_08B00934;
    case 148u: goto L_08B00944;
    case 149u: goto L_08B0094C;
    case 150u: goto L_08B00954;
    case 151u: goto L_08B00964;
    case 152u: goto L_08B00970;
    case 153u: goto L_08B0097C;
    case 154u: goto L_08B00984;
    case 155u: goto L_08B0098C;
    case 156u: goto L_08B00998;
    case 157u: goto L_08B009A0;
    case 158u: goto L_08B009AC;
    case 159u: goto L_08B009BC;
    case 160u: goto L_08B009C4;
    case 161u: goto L_08B009D4;
    case 162u: goto L_08B009DC;
    case 163u: goto L_08B009E4;
    case 164u: goto L_08B009EC;
    case 165u: goto L_08B009F4;
    case 166u: goto L_08B00A00;
    case 167u: goto L_08B00A18;
    case 168u: goto L_08B00A24;
    case 169u: goto L_08B00A50;
    case 170u: goto L_08B00A70;
    case 171u: goto L_08B00A84;
    case 172u: goto L_08B00A90;
    case 173u: goto L_08B00A98;
    case 174u: goto L_08B00AAC;
    case 175u: goto L_08B00AB4;
    case 176u: goto L_08B00ABC;
    case 177u: goto L_08B00AC0;
    case 178u: goto L_08B00AD8;
    case 179u: goto L_08B00B04;
    case 180u: goto L_08B00B10;
    case 181u: goto L_08B00B18;
    case 182u: goto L_08B00B24;
    case 183u: goto L_08B00B30;
    case 184u: goto L_08B00B44;
    case 185u: goto L_08B00B4C;
    case 186u: goto L_08B00B50;
    case 187u: goto L_08B00B68;
    case 188u: goto L_08B00B70;
    case 189u: goto L_08B00B7C;
    case 190u: goto L_08B00B84;
    case 191u: goto L_08B00B8C;
    case 192u: goto L_08B00B90;
    case 193u: goto L_08B00B98;
    case 194u: goto L_08B00BA4;
    case 195u: goto L_08B00BB0;
    case 196u: goto L_08B00BB8;
    case 197u: goto L_08B00BBC;
    case 198u: goto L_08B00BC4;
    case 199u: goto L_08B00BD4;
    case 200u: goto L_08B00BE0;
    case 201u: goto L_08B00BE8;
    case 202u: goto L_08B00BEC;
    case 203u: goto L_08B00BF8;
    case 204u: goto L_08B00C08;
    case 205u: goto L_08B00C14;
    case 206u: goto L_08B00C1C;
    case 207u: goto L_08B00C20;
    case 208u: goto L_08B00C2C;
    case 209u: goto L_08B00C34;
    case 210u: goto L_08B00C40;
    case 211u: goto L_08B00C48;
    case 212u: goto L_08B00C58;
    case 213u: goto L_08B00C60;
    case 214u: goto L_08B00C68;
    case 215u: goto L_08B00C84;
    case 216u: goto L_08B00C90;
    case 217u: goto L_08B00CF4;
    case 218u: goto L_08B00D04;
    case 219u: goto L_08B00D14;
    case 220u: goto L_08B00D1C;
    case 221u: goto L_08B00D24;
    case 222u: goto L_08B00D34;
    case 223u: goto L_08B00D44;
    case 224u: goto L_08B00D4C;
    case 225u: goto L_08B00D54;
    case 226u: goto L_08B00D64;
    case 227u: goto L_08B00D6C;
    case 228u: goto L_08B00D70;
    case 229u: goto L_08B00D78;
    case 230u: goto L_08B00DA8;
    case 231u: goto L_08B00DB0;
    case 232u: goto L_08B00DB4;
    case 233u: goto L_08B00DBC;
    case 234u: goto L_08B00DE8;
    case 235u: goto L_08B00E04;
    case 236u: goto L_08B00E0C;
    case 237u: goto L_08B00E10;
    case 238u: goto L_08B00E18;
    case 239u: goto L_08B00E28;
    case 240u: goto L_08B00E34;
    case 241u: goto L_08B00E40;
    case 242u: goto L_08B00E4C;
    case 243u: goto L_08B00E54;
    case 244u: goto L_08B00E5C;
    case 245u: goto L_08B00E64;
    case 246u: goto L_08B00E6C;
    case 247u: goto L_08B00E78;
    case 248u: goto L_08B00E80;
    case 249u: goto L_08B00E88;
    case 250u: goto L_08B00E90;
    case 251u: goto L_08B00E98;
    case 252u: goto L_08B00EA0;
    case 253u: goto L_08B00EA8;
    case 254u: goto L_08B00EB0;
    case 255u: goto L_08B00EB8;
    case 256u: goto L_08B00EC0;
    case 257u: goto L_08B00EC8;
    case 258u: goto L_08B00ECC;
    case 259u: goto L_08B00ED4;
    case 260u: goto L_08B00EE4;
    case 261u: goto L_08B00EEC;
    case 262u: goto L_08B00EF4;
    case 263u: goto L_08B00F00;
    case 264u: goto L_08B00F04;
    case 265u: goto L_08B00F0C;
    case 266u: goto L_08B00F38;
    case 267u: goto L_08B00F48;
    case 268u: goto L_08B00F50;
    case 269u: goto L_08B00F58;
    case 270u: goto L_08B00F6C;
    case 271u: goto L_08B00F74;
    case 272u: goto L_08B00F7C;
    case 273u: goto L_08B00F84;
    case 274u: goto L_08B00F8C;
    case 275u: goto L_08B00F94;
    case 276u: goto L_08B00F9C;
    case 277u: goto L_08B00FA4;
    case 278u: goto L_08B00FAC;
    case 279u: goto L_08B00FB4;
    case 280u: goto L_08B00FBC;
    case 281u: goto L_08B00FC4;
    case 282u: goto L_08B00FD0;
    case 283u: goto L_08B00FE0;
    case 284u: goto L_08B00FF0;
    case 285u: goto L_08B0100C;
    case 286u: goto L_08B01014;
    case 287u: goto L_08B0101C;
    case 288u: goto L_08B01020;
    case 289u: goto L_08B01038;
    case 290u: goto L_08B01054;
    case 291u: goto L_08B01060;
    case 292u: goto L_08B0106C;
    case 293u: goto L_08B01074;
    case 294u: goto L_08B0107C;
    case 295u: goto L_08B01080;
    case 296u: goto L_08B01088;
    case 297u: goto L_08B010AC;
    case 298u: goto L_08B010B8;
    case 299u: goto L_08B010C0;
    case 300u: goto L_08B010C8;
    case 301u: goto L_08B010D0;
    case 302u: goto L_08B010D8;
    case 303u: goto L_08B010E0;
    case 304u: goto L_08B010E8;
    case 305u: goto L_08B010F4;
    case 306u: goto L_08B01100;
    case 307u: goto L_08B01108;
    case 308u: goto L_08B01110;
    case 309u: goto L_08B01118;
    case 310u: goto L_08B01120;
    case 311u: goto L_08B0112C;
    case 312u: goto L_08B01134;
    case 313u: goto L_08B01140;
    case 314u: goto L_08B01150;
    case 315u: goto L_08B0115C;
    case 316u: goto L_08B01164;
    case 317u: goto L_08B0116C;
    case 318u: goto L_08B01178;
    case 319u: goto L_08B01180;
    case 320u: goto L_08B01184;
    case 321u: goto L_08B01198;
    case 322u: goto L_08B011A4;
    case 323u: goto L_08B011AC;
    case 324u: goto L_08B011B4;
    case 325u: goto L_08B011BC;
    case 326u: goto L_08B011C0;
    case 327u: goto L_08B011C8;
    case 328u: goto L_08B011E8;
    case 329u: goto L_08B011F8;
    case 330u: goto L_08B01208;
    case 331u: goto L_08B01228;
    case 332u: goto L_08B01244;
    case 333u: goto L_08B01274;
    case 334u: goto L_08B01298;
    case 335u: goto L_08B012A0;
    case 336u: goto L_08B012A8;
    case 337u: goto L_08B012B0;
    case 338u: goto L_08B012B4;
    case 339u: goto L_08B012BC;
    case 340u: goto L_08B012FC;
    case 341u: goto L_08B0131C;
    case 342u: goto L_08B01324;
    case 343u: goto L_08B0133C;
    case 344u: goto L_08B01350;
    case 345u: goto L_08B01358;
    case 346u: goto L_08B01360;
    case 347u: goto L_08B01374;
    case 348u: goto L_08B01388;
    case 349u: goto L_08B013B8;
    case 350u: goto L_08B013C0;
    case 351u: goto L_08B013C8;
    case 352u: goto L_08B013D8;
    case 353u: goto L_08B01400;
    case 354u: goto L_08B01408;
    case 355u: goto L_08B01410;
    case 356u: goto L_08B01430;
    case 357u: goto L_08B01450;
    case 358u: goto L_08B01470;
    case 359u: goto L_08B0147C;
    case 360u: goto L_08B01480;
    case 361u: goto L_08B01490;
    case 362u: goto L_08B014A4;
    case 363u: goto L_08B014B0;
    case 364u: goto L_08B014C0;
    case 365u: goto L_08B014D4;
    case 366u: goto L_08B014E0;
    case 367u: goto L_08B014F0;
    case 368u: goto L_08B014F8;
    case 369u: goto L_08B01500;
    case 370u: goto L_08B01520;
    case 371u: goto L_08B01528;
    case 372u: goto L_08B01548;
    case 373u: goto L_08B01554;
    case 374u: goto L_08B0155C;
    case 375u: goto L_08B01560;
    case 376u: goto L_08B01570;
    case 377u: goto L_08B01584;
    case 378u: goto L_08B01590;
    case 379u: goto L_08B015A0;
    case 380u: goto L_08B015B4;
    case 381u: goto L_08B015C0;
    case 382u: goto L_08B015D0;
    case 383u: goto L_08B015D8;
    case 384u: goto L_08B015DC;
    case 385u: goto L_08B015F0;
    case 386u: goto L_08B015FC;
    case 387u: goto L_08B01604;
    case 388u: goto L_08B01634;
    case 389u: goto L_08B0164C;
    case 390u: goto L_08B01654;
    case 391u: goto L_08B01674;
    case 392u: goto L_08B0167C;
    case 393u: goto L_08B01688;
    case 394u: goto L_08B016A0;
    case 395u: goto L_08B016B8;
    case 396u: goto L_08B016D8;
    case 397u: goto L_08B016DC;
    case 398u: goto L_08B016E4;
    case 399u: goto L_08B01710;
    case 400u: goto L_08B01718;
    case 401u: goto L_08B01730;
    case 402u: goto L_08B01760;
    case 403u: goto L_08B01768;
    case 404u: goto L_08B01770;
    case 405u: goto L_08B01778;
    case 406u: goto L_08B0178C;
    case 407u: goto L_08B01794;
    case 408u: goto L_08B01798;
    case 409u: goto L_08B017A8;
    case 410u: goto L_08B017B8;
    case 411u: goto L_08B017C0;
    case 412u: goto L_08B017C8;
    case 413u: goto L_08B017D0;
    case 414u: goto L_08B017D8;
    case 415u: goto L_08B017E8;
    case 416u: goto L_08B017F0;
    case 417u: goto L_08B017F8;
    case 418u: goto L_08B017FC;
    case 419u: goto L_08B01804;
    case 420u: goto L_08B01844;
    case 421u: goto L_08B01894;
    case 422u: goto L_08B018A8;
    case 423u: goto L_08B018B0;
    case 424u: goto L_08B018B4;
    case 425u: goto L_08B018C0;
    case 426u: goto L_08B018C4;
    case 427u: goto L_08B018CC;
    case 428u: goto L_08B018F0;
    case 429u: goto L_08B01908;
    case 430u: goto L_08B01914;
    case 431u: goto L_08B0191C;
    case 432u: goto L_08B01924;
    case 433u: goto L_08B019B4;
    case 434u: goto L_08B019C0;
    case 435u: goto L_08B01A0C;
    case 436u: goto L_08B01A44;
    case 437u: goto L_08B01A74;
    case 438u: goto L_08B01A80;
    case 439u: goto L_08B01AA8;
    case 440u: goto L_08B01AC8;
    case 441u: goto L_08B01AD0;
    case 442u: goto L_08B01AD8;
    case 443u: goto L_08B01AEC;
    case 444u: goto L_08B01B00;
    case 445u: goto L_08B01B10;
    case 446u: goto L_08B01B20;
    case 447u: goto L_08B01B24;
    case 448u: goto L_08B01B3C;
    case 449u: goto L_08B01B44;
    case 450u: goto L_08B01B4C;
    case 451u: goto L_08B01B5C;
    case 452u: goto L_08B01B64;
    case 453u: goto L_08B01B7C;
    case 454u: goto L_08B01B84;
    case 455u: goto L_08B01B9C;
    case 456u: goto L_08B01BA4;
    case 457u: goto L_08B01BB4;
    case 458u: goto L_08B01BC0;
    case 459u: goto L_08B01BC8;
    case 460u: goto L_08B01BD0;
    case 461u: goto L_08B01BD8;
    case 462u: goto L_08B01BE0;
    case 463u: goto L_08B01BE8;
    case 464u: goto L_08B01BF4;
    case 465u: goto L_08B01C00;
    case 466u: goto L_08B01C08;
    case 467u: goto L_08B01C10;
    case 468u: goto L_08B01C18;
    case 469u: goto L_08B01C20;
    case 470u: goto L_08B01C2C;
    case 471u: goto L_08B01C34;
    case 472u: goto L_08B01C3C;
    case 473u: goto L_08B01C40;
    case 474u: goto L_08B01C48;
    case 475u: goto L_08B01C64;
    case 476u: goto L_08B01C6C;
    case 477u: goto L_08B01C78;
    case 478u: goto L_08B01C80;
    case 479u: goto L_08B01C90;
    case 480u: goto L_08B01CC0;
    case 481u: goto L_08B01CC8;
    case 482u: goto L_08B01CD0;
    case 483u: goto L_08B01CD8;
    case 484u: goto L_08B01CE4;
    case 485u: goto L_08B01CF0;
    case 486u: goto L_08B01CFC;
    case 487u: goto L_08B01D08;
    case 488u: goto L_08B01D10;
    case 489u: goto L_08B01D24;
    case 490u: goto L_08B01D30;
    case 491u: goto L_08B01D38;
    case 492u: goto L_08B01D50;
    case 493u: goto L_08B01D68;
    case 494u: goto L_08B01D78;
    case 495u: goto L_08B01D84;
    case 496u: goto L_08B01D8C;
    case 497u: goto L_08B01D98;
    case 498u: goto L_08B01DA0;
    case 499u: goto L_08B01DB8;
    case 500u: goto L_08B01DC4;
    case 501u: goto L_08B01DC8;
    case 502u: goto L_08B01DD0;
    case 503u: goto L_08B01DF4;
    case 504u: goto L_08B01E00;
    case 505u: goto L_08B01E20;
    case 506u: goto L_08B01E3C;
    case 507u: goto L_08B01E58;
    case 508u: goto L_08B01E74;
    case 509u: goto L_08B01E7C;
    case 510u: goto L_08B01E84;
    case 511u: goto L_08B01E8C;
    case 512u: goto L_08B01E94;
    case 513u: goto L_08B01E98;
    case 514u: goto L_08B01EA0;
    case 515u: goto L_08B01EA8;
    case 516u: goto L_08B01EE8;
    case 517u: goto L_08B01F04;
    case 518u: goto L_08B01F0C;
    case 519u: goto L_08B01F14;
    case 520u: goto L_08B01F24;
    case 521u: goto L_08B01F2C;
    case 522u: goto L_08B01F30;
    case 523u: goto L_08B01F48;
    case 524u: goto L_08B01F8C;
    case 525u: goto L_08B01F9C;
    case 526u: goto L_08B01FA4;
    case 527u: goto L_08B01FAC;
    case 528u: goto L_08B01FB0;
    case 529u: goto L_08B01FD0;
    case 530u: goto L_08B01FE0;
    case 531u: goto L_08B01FEC;
    case 532u: goto L_08B01FF4;
    case 533u: goto L_08B01FFC;
    case 534u: goto L_08B0200C;
    case 535u: goto L_08B02018;
    case 536u: goto L_08B02024;
    case 537u: goto L_08B02038;
    case 538u: goto L_08B02040;
    case 539u: goto L_08B02050;
    case 540u: goto L_08B0205C;
    case 541u: goto L_08B02064;
    case 542u: goto L_08B02090;
    case 543u: goto L_08B020AC;
    case 544u: goto L_08B020C4;
    case 545u: goto L_08B020C8;
    case 546u: goto L_08B020D0;
    case 547u: goto L_08B020E0;
    case 548u: goto L_08B020F4;
    case 549u: goto L_08B020F8;
    case 550u: goto L_08B02100;
    case 551u: goto L_08B02120;
    case 552u: goto L_08B02138;
    case 553u: goto L_08B0214C;
    case 554u: goto L_08B02158;
    case 555u: goto L_08B02160;
    case 556u: goto L_08B0216C;
    case 557u: goto L_08B02184;
    case 558u: goto L_08B0219C;
    case 559u: goto L_08B021B0;
    case 560u: goto L_08B021C4;
    case 561u: goto L_08B021C8;
    case 562u: goto L_08B021D4;
    case 563u: goto L_08B021D8;
    case 564u: goto L_08B021E8;
    case 565u: goto L_08B021F0;
    case 566u: goto L_08B02208;
    case 567u: goto L_08B02228;
    case 568u: goto L_08B02234;
    case 569u: goto L_08B02240;
    case 570u: goto L_08B0224C;
    case 571u: goto L_08B02258;
    case 572u: goto L_08B02260;
    case 573u: goto L_08B02268;
    case 574u: goto L_08B02270;
    case 575u: goto L_08B02278;
    case 576u: goto L_08B02280;
    case 577u: goto L_08B0228C;
    case 578u: goto L_08B02298;
    case 579u: goto L_08B022A4;
    case 580u: goto L_08B022AC;
    case 581u: goto L_08B022B4;
    case 582u: goto L_08B022BC;
    case 583u: goto L_08B022C4;
    case 584u: goto L_08B022D0;
    case 585u: goto L_08B022D8;
    case 586u: goto L_08B022E0;
    case 587u: goto L_08B022EC;
    case 588u: goto L_08B022F4;
    case 589u: goto L_08B02304;
    case 590u: goto L_08B02310;
    case 591u: goto L_08B02324;
    case 592u: goto L_08B02334;
    case 593u: goto L_08B02344;
    case 594u: goto L_08B02354;
    case 595u: goto L_08B02364;
    case 596u: goto L_08B02370;
    case 597u: goto L_08B02384;
    case 598u: goto L_08B023B0;
    case 599u: goto L_08B023C4;
    case 600u: goto L_08B023D8;
    case 601u: goto L_08B023FC;
    case 602u: goto L_08B0240C;
    case 603u: goto L_08B0241C;
    case 604u: goto L_08B02424;
    case 605u: goto L_08B0242C;
    case 606u: goto L_08B0245C;
    case 607u: goto L_08B024A0;
    case 608u: goto L_08B024A8;
    case 609u: goto L_08B024B0;
    case 610u: goto L_08B024B8;
    case 611u: goto L_08B024C0;
    case 612u: goto L_08B024C8;
    case 613u: goto L_08B024D0;
    case 614u: goto L_08B024D8;
    case 615u: goto L_08B024E4;
    case 616u: goto L_08B024FC;
    case 617u: goto L_08B02500;
    case 618u: goto L_08B02524;
    case 619u: goto L_08B02538;
    case 620u: goto L_08B02540;
    case 621u: goto L_08B02544;
    case 622u: goto L_08B025A4;
    case 623u: goto L_08B025D0;
    case 624u: goto L_08B025D8;
    case 625u: goto L_08B025F0;
    case 626u: goto L_08B02610;
    case 627u: goto L_08B0264C;
    case 628u: goto L_08B02668;
    case 629u: goto L_08B026B0;
    case 630u: goto L_08B02724;
    case 631u: goto L_08B0279C;
    case 632u: goto L_08B02824;
    case 633u: goto L_08B02844;
    case 634u: goto L_08B02864;
    case 635u: goto L_08B02888;
    case 636u: goto L_08B028B4;
    case 637u: goto L_08B028F8;
    case 638u: goto L_08B0291C;
    case 639u: goto L_08B02950;
    case 640u: goto L_08B02978;
    case 641u: goto L_08B02980;
    case 642u: goto L_08B02988;
    case 643u: goto L_08B029AC;
    case 644u: goto L_08B029C0;
    case 645u: goto L_08B029D0;
    case 646u: goto L_08B029D8;
    case 647u: goto L_08B029E8;
    case 648u: goto L_08B029F0;
    case 649u: goto L_08B029F8;
    case 650u: goto L_08B02A28;
    case 651u: goto L_08B02A30;
    case 652u: goto L_08B02A38;
    case 653u: goto L_08B02A40;
    case 654u: goto L_08B02A70;
    case 655u: goto L_08B02A78;
    case 656u: goto L_08B02AA8;
    case 657u: goto L_08B02AC8;
    case 658u: goto L_08B02AFC;
    case 659u: goto L_08B02B08;
    case 660u: goto L_08B02B10;
    case 661u: goto L_08B02B14;
    case 662u: goto L_08B02B34;
    case 663u: goto L_08B02B3C;
    case 664u: goto L_08B02B58;
    case 665u: goto L_08B02B60;
    case 666u: goto L_08B02B6C;
    case 667u: goto L_08B02B74;
    case 668u: goto L_08B02B88;
    case 669u: goto L_08B02B90;
    case 670u: goto L_08B02B98;
    case 671u: goto L_08B02BA8;
    case 672u: goto L_08B02BB4;
    case 673u: goto L_08B02BBC;
    case 674u: goto L_08B02BC4;
    case 675u: goto L_08B02BD0;
    case 676u: goto L_08B02BD4;
    case 677u: goto L_08B02BDC;
    case 678u: goto L_08B02BEC;
    case 679u: goto L_08B02BF8;
    case 680u: goto L_08B02C08;
    case 681u: goto L_08B02C20;
    case 682u: goto L_08B02C2C;
    case 683u: goto L_08B02C34;
    case 684u: goto L_08B02C38;
    case 685u: goto L_08B02C48;
    case 686u: goto L_08B02C54;
    case 687u: goto L_08B02C5C;
    case 688u: goto L_08B02C70;
    case 689u: goto L_08B02C84;
    case 690u: goto L_08B02C9C;
    case 691u: goto L_08B02CA8;
    case 692u: goto L_08B02CB4;
    case 693u: goto L_08B02CBC;
    case 694u: goto L_08B02CC8;
    case 695u: goto L_08B02CD8;
    case 696u: goto L_08B02CEC;
    case 697u: goto L_08B02CF4;
    case 698u: goto L_08B02CFC;
    case 699u: goto L_08B02D08;
    case 700u: goto L_08B02D10;
    case 701u: goto L_08B02D2C;
    case 702u: goto L_08B02D44;
    case 703u: goto L_08B02D4C;
    case 704u: goto L_08B02D54;
    case 705u: goto L_08B02D5C;
    case 706u: goto L_08B02D68;
    case 707u: goto L_08B02D78;
    case 708u: goto L_08B02D84;
    case 709u: goto L_08B02D90;
    case 710u: goto L_08B02D98;
    case 711u: goto L_08B02D9C;
    case 712u: goto L_08B02DAC;
    case 713u: goto L_08B02DB8;
    case 714u: goto L_08B02DC0;
    case 715u: goto L_08B02DD4;
    case 716u: goto L_08B02DDC;
    case 717u: goto L_08B02DE8;
    case 718u: goto L_08B02DF0;
    case 719u: goto L_08B02DF4;
    case 720u: goto L_08B02E04;
    case 721u: goto L_08B02E10;
    case 722u: goto L_08B02E18;
    case 723u: goto L_08B02E24;
    case 724u: goto L_08B02E2C;
    case 725u: goto L_08B02E30;
    case 726u: goto L_08B02E40;
    case 727u: goto L_08B02E4C;
    case 728u: goto L_08B02E54;
    case 729u: goto L_08B02E60;
    case 730u: goto L_08B02E68;
    case 731u: goto L_08B02E6C;
    case 732u: goto L_08B02E7C;
    case 733u: goto L_08B02E88;
    case 734u: goto L_08B02E90;
    case 735u: goto L_08B02E98;
    case 736u: goto L_08B02EA8;
    case 737u: goto L_08B02EB4;
    case 738u: goto L_08B02EBC;
    case 739u: goto L_08B02EC0;
    case 740u: goto L_08B02ED0;
    case 741u: goto L_08B02EDC;
    case 742u: goto L_08B02EE4;
    case 743u: goto L_08B02EF0;
    case 744u: goto L_08B02EF8;
    case 745u: goto L_08B02EFC;
    case 746u: goto L_08B02F0C;
    case 747u: goto L_08B02F18;
    case 748u: goto L_08B02F20;
    case 749u: goto L_08B02F2C;
    case 750u: goto L_08B02F34;
    case 751u: goto L_08B02F38;
    case 752u: goto L_08B02F48;
    case 753u: goto L_08B02F54;
    case 754u: goto L_08B02F5C;
    case 755u: goto L_08B02F68;
    case 756u: goto L_08B02F70;
    case 757u: goto L_08B02F7C;
    case 758u: goto L_08B02F84;
    case 759u: goto L_08B02F88;
    case 760u: goto L_08B02F98;
    case 761u: goto L_08B02FA4;
    case 762u: goto L_08B02FAC;
    case 763u: goto L_08B02FB8;
    case 764u: goto L_08B02FC0;
    case 765u: goto L_08B02FC4;
    case 766u: goto L_08B02FD4;
    case 767u: goto L_08B02FE0;
    case 768u: goto L_08B0301C;
    case 769u: goto L_08B03024;
    case 770u: goto L_08B0302C;
    case 771u: goto L_08B03034;
    case 772u: goto L_08B03048;
    case 773u: goto L_08B03050;
    case 774u: goto L_08B0305C;
    case 775u: goto L_08B03064;
    case 776u: goto L_08B0307C;
    case 777u: goto L_08B03098;
    case 778u: goto L_08B030A4;
    case 779u: goto L_08B030A8;
    case 780u: goto L_08B030B0;
    case 781u: goto L_08B030BC;
    case 782u: goto L_08B030C4;
    case 783u: goto L_08B030D0;
    case 784u: goto L_08B030D8;
    case 785u: goto L_08B030E4;
    case 786u: goto L_08B030F0;
    case 787u: goto L_08B030FC;
    case 788u: goto L_08B0310C;
    case 789u: goto L_08B03118;
    case 790u: goto L_08B03120;
    case 791u: goto L_08B03124;
    case 792u: goto L_08B03134;
    case 793u: goto L_08B03140;
    case 794u: goto L_08B03148;
    case 795u: goto L_08B03154;
    case 796u: goto L_08B0315C;
    case 797u: goto L_08B03160;
    case 798u: goto L_08B03170;
    case 799u: goto L_08B0317C;
    case 800u: goto L_08B03184;
    case 801u: goto L_08B03198;
    case 802u: goto L_08B031A4;
    case 803u: goto L_08B031B0;
    case 804u: goto L_08B031B8;
    case 805u: goto L_08B031C0;
    case 806u: goto L_08B031D0;
    case 807u: goto L_08B031DC;
    case 808u: goto L_08B031E4;
    case 809u: goto L_08B031E8;
    case 810u: goto L_08B031F8;
    case 811u: goto L_08B03204;
    case 812u: goto L_08B0320C;
    case 813u: goto L_08B0321C;
    case 814u: goto L_08B03228;
    case 815u: goto L_08B03230;
    case 816u: goto L_08B03234;
    case 817u: goto L_08B03244;
    case 818u: goto L_08B03250;
    case 819u: goto L_08B03258;
    case 820u: goto L_08B03260;
    case 821u: goto L_08B03268;
    case 822u: goto L_08B03274;
    case 823u: goto L_08B0327C;
    case 824u: goto L_08B03280;
    case 825u: goto L_08B03290;
    case 826u: goto L_08B0329C;
    case 827u: goto L_08B032A4;
    case 828u: goto L_08B032B0;
    case 829u: goto L_08B032B8;
    case 830u: goto L_08B032BC;
    case 831u: goto L_08B032CC;
    case 832u: goto L_08B032D8;
    case 833u: goto L_08B032E0;
    case 834u: goto L_08B032EC;
    case 835u: goto L_08B032F4;
    case 836u: goto L_08B032F8;
    case 837u: goto L_08B03308;
    case 838u: goto L_08B03314;
    case 839u: goto L_08B0331C;
    case 840u: goto L_08B03324;
    case 841u: goto L_08B03334;
    case 842u: goto L_08B03340;
    case 843u: goto L_08B03348;
    case 844u: goto L_08B0334C;
    case 845u: goto L_08B0335C;
    case 846u: goto L_08B03368;
    case 847u: goto L_08B03370;
    case 848u: goto L_08B03380;
    case 849u: goto L_08B0338C;
    case 850u: goto L_08B03394;
    case 851u: goto L_08B03398;
    case 852u: goto L_08B033A8;
    case 853u: goto L_08B033B4;
    case 854u: goto L_08B033BC;
    case 855u: goto L_08B033C4;
    case 856u: goto L_08B033CC;
    case 857u: goto L_08B033D8;
    case 858u: goto L_08B033E0;
    case 859u: goto L_08B033E4;
    case 860u: goto L_08B033F4;
    case 861u: goto L_08B03400;
    case 862u: goto L_08B03408;
    case 863u: goto L_08B03414;
    case 864u: goto L_08B0341C;
    case 865u: goto L_08B03420;
    case 866u: goto L_08B03430;
    case 867u: goto L_08B0343C;
    case 868u: goto L_08B03444;
    case 869u: goto L_08B03450;
    case 870u: goto L_08B03458;
    case 871u: goto L_08B0345C;
    case 872u: goto L_08B0346C;
    case 873u: goto L_08B03478;
    case 874u: goto L_08B03480;
    case 875u: goto L_08B03494;
    case 876u: goto L_08B034B0;
    case 877u: goto L_08B034E0;
    case 878u: goto L_08B034EC;
    case 879u: goto L_08B034F4;
    case 880u: goto L_08B034F8;
    case 881u: goto L_08B03504;
    case 882u: goto L_08B03510;
    case 883u: goto L_08B03518;
    case 884u: goto L_08B03524;
    case 885u: goto L_08B03530;
    case 886u: goto L_08B03538;
    case 887u: goto L_08B03540;
    case 888u: goto L_08B03548;
    case 889u: goto L_08B03558;
    case 890u: goto L_08B03564;
    case 891u: goto L_08B0356C;
    case 892u: goto L_08B03574;
    case 893u: goto L_08B0357C;
    case 894u: goto L_08B03584;
    case 895u: goto L_08B03594;
    case 896u: goto L_08B035A0;
    case 897u: goto L_08B035A8;
    case 898u: goto L_08B035B0;
    case 899u: goto L_08B035B8;
    case 900u: goto L_08B035C0;
    case 901u: goto L_08B035D0;
    case 902u: goto L_08B035DC;
    case 903u: goto L_08B035E4;
    case 904u: goto L_08B035EC;
    case 905u: goto L_08B035F4;
    case 906u: goto L_08B035FC;
    case 907u: goto L_08B0360C;
    case 908u: goto L_08B03618;
    case 909u: goto L_08B03620;
    case 910u: goto L_08B03628;
    case 911u: goto L_08B03634;
    case 912u: goto L_08B03640;
    case 913u: goto L_08B03648;
    case 914u: goto L_08B03650;
    case 915u: goto L_08B03658;
    case 916u: goto L_08B03668;
    case 917u: goto L_08B03674;
    case 918u: goto L_08B0367C;
    case 919u: goto L_08B03684;
    case 920u: goto L_08B0368C;
    case 921u: goto L_08B03694;
    case 922u: goto L_08B036A4;
    case 923u: goto L_08B036B0;
    case 924u: goto L_08B036B8;
    case 925u: goto L_08B036C0;
    case 926u: goto L_08B036C8;
    case 927u: goto L_08B036D0;
    case 928u: goto L_08B036E0;
    case 929u: goto L_08B036EC;
    case 930u: goto L_08B036F4;
    case 931u: goto L_08B036FC;
    case 932u: goto L_08B03704;
    case 933u: goto L_08B0370C;
    case 934u: goto L_08B0371C;
    case 935u: goto L_08B03728;
    case 936u: goto L_08B0372C;
    case 937u: goto L_08B03738;
    case 938u: goto L_08B03744;
    case 939u: goto L_08B03750;
    case 940u: goto L_08B0375C;
    case 941u: goto L_08B03768;
    case 942u: goto L_08B03770;
    case 943u: goto L_08B03778;
    case 944u: goto L_08B03784;
    case 945u: goto L_08B03790;
    case 946u: goto L_08B03798;
    case 947u: goto L_08B037A4;
    case 948u: goto L_08B037B0;
    case 949u: goto L_08B037C0;
    case 950u: goto L_08B037C4;
    case 951u: goto L_08B037CC;
    case 952u: goto L_08B037D0;
    case 953u: goto L_08B037DC;
    case 954u: goto L_08B037E4;
    case 955u: goto L_08B037F4;
    case 956u: goto L_08B03804;
    case 957u: goto L_08B0380C;
    case 958u: goto L_08B03820;
    case 959u: goto L_08B03834;
    case 960u: goto L_08B038A8;
    case 961u: goto L_08B038C4;
    case 962u: goto L_08B03A18;
    case 963u: goto L_08B03A6C;
    case 964u: goto L_08B03A84;
    case 965u: goto L_08B03C1C;
    case 966u: goto L_08B03C3C;
    case 967u: goto L_08B03CFC;
    case 968u: goto L_08B03D04;
    case 969u: goto L_08B03D14;
    case 970u: goto L_08B03D1C;
    case 971u: goto L_08B03D74;
    case 972u: goto L_08B03DB0;
    case 973u: goto L_08B03E00;
    case 974u: goto L_08B03E0C;
    case 975u: goto L_08B03E1C;
    case 976u: goto L_08B03E28;
    case 977u: goto L_08B03E34;
    case 978u: goto L_08B03E48;
    case 979u: goto L_08B03E50;
    case 980u: goto L_08B03E5C;
    case 981u: goto L_08B03E60;
    case 982u: goto L_08B03E80;
    case 983u: goto L_08B03E8C;
    case 984u: goto L_08B03E98;
    case 985u: goto L_08B03EA0;
    case 986u: goto L_08B03EA8;
    case 987u: goto L_08B03EB0;
    case 988u: goto L_08B03EBC;
    case 989u: goto L_08B03ED4;
    case 990u: goto L_08B03EDC;
    case 991u: goto L_08B03EEC;
    case 992u: goto L_08B03EF8;
    case 993u: goto L_08B03EFC;
    case 994u: goto L_08B03F04;
    case 995u: goto L_08B03F10;
    case 996u: goto L_08B03F20;
    case 997u: goto L_08B03F2C;
    case 998u: goto L_08B03F44;
    case 999u: goto L_08B03F50;
    case 1000u: goto L_08B03F5C;
    case 1001u: goto L_08B03F70;
    case 1002u: goto L_08B03F84;
    case 1003u: goto L_08B03F94;
    case 1004u: goto L_08B03FA0;
    case 1005u: goto L_08B03FAC;
    case 1006u: goto L_08B03FB4;
    case 1007u: goto L_08B03FC0;
    case 1008u: goto L_08B03FCC;
    case 1009u: goto L_08B03FD8;
    case 1010u: goto L_08B03FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B00000:
    ctx.gpr[6] = (0u | 0u);
    goto L_08B00004;
L_08B00004:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00014:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[7] = (ctx.gpr[7] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (2179u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B00038u);
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem) && ctx.pc == 0x08B00038u) goto L_08B00038;
    return;
L_08B00038:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00044:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08B0006C;
      }
      goto L_08B0005C;
    }
L_08B0005C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08B0006C;
L_08B0006C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0008C;
      }
      goto L_08B00088;
    }
L_08B00088:
    ctx.gpr[7] = (0u | 0u);
    goto L_08B0008C;
L_08B0008C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B000AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B000E4;
      }
      goto L_08B000D4;
    }
L_08B000D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (48716u << 16u);
      if (branch_taken) {
          goto L_08B00160;
      }
      goto L_08B000E4;
    }
L_08B000E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (48291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08B00158u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x08B00158u) goto L_08B00158;
    return;
L_08B00158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0019C;
      }
      goto L_08B00160;
    }
L_08B00160:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[18];
    ctx.gpr[31] = (0x08B0019Cu);
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x08B0019Cu) goto L_08B0019C;
    return;
L_08B0019C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B001F8;
      }
      goto L_08B001B0;
    }
L_08B001B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B001BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B001BCu) goto L_08B001BC;
    return;
L_08B001BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B001E0;
      }
      goto L_08B001C4;
    }
L_08B001C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B001B0;
      }
      goto L_08B001D8;
    }
L_08B001D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B001F8;
      }
      goto L_08B001E0;
    }
L_08B001E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B001F0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x08B001F0u) goto L_08B001F0;
    return;
L_08B001F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B001FC;
      }
      goto L_08B001F8;
    }
L_08B001F8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B001FC;
L_08B001FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00214:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[7] & 2u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B00258;
      }
      goto L_08B00240;
    }
L_08B00240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B00278;
      }
      goto L_08B00250;
    }
L_08B00250:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
      if (branch_taken) {
          goto L_08B0026C;
      }
      goto L_08B00258;
    }
L_08B00258:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B00264u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B000AC;
L_08B00264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0036C;
      }
      goto L_08B0026C;
    }
L_08B0026C:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (48716u << 16u);
      if (branch_taken) {
          goto L_08B002F4;
      }
      goto L_08B00278;
    }
L_08B00278:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (48291u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (48588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08B002ECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x08B002ECu) goto L_08B002EC;
    return;
L_08B002EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00330;
      }
      goto L_08B002F4;
    }
L_08B002F4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[18];
    ctx.gpr[31] = (0x08B00330u);
    ctx.fpr[16] = ctx.fpr[19] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x08B00330u) goto L_08B00330;
    return;
L_08B00330:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B00368;
      }
      goto L_08B00340;
    }
L_08B00340:
    ctx.gpr[31] = (0x08B00348u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00348u) goto L_08B00348;
    return;
L_08B00348:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00368;
      }
      goto L_08B00350;
    }
L_08B00350:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00360u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x08B00360u) goto L_08B00360;
    return;
L_08B00360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B0036C;
      }
      goto L_08B00368;
    }
L_08B00368:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B0036C;
L_08B0036C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0041C;
      }
      goto L_08B003AC;
    }
L_08B003AC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00414;
      }
      goto L_08B003BC;
    }
L_08B003BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B003C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B003C8u) goto L_08B003C8;
    return;
L_08B003C8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B00404;
      }
      goto L_08B003D0;
    }
L_08B003D0:
    ctx.gpr[31] = (0x08B003D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B003D8u) goto L_08B003D8;
    return;
L_08B003D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B003EC;
      }
      goto L_08B003E0;
    }
L_08B003E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B003ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08B003ECu) goto L_08B003EC;
    return;
L_08B003EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B003FCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x08B003FCu) goto L_08B003FC;
    return;
L_08B003FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00508;
      }
      goto L_08B00404;
    }
L_08B00404:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B003BC;
      }
      goto L_08B00414;
    }
L_08B00414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00508;
      }
      goto L_08B0041C;
    }
L_08B0041C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00508;
      }
      goto L_08B00430;
    }
L_08B00430:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B0043Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0043Cu) goto L_08B0043C;
    return;
L_08B0043C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B004F4;
      }
      goto L_08B00444;
    }
L_08B00444:
    ctx.gpr[31] = (0x08B0044Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B0044Cu) goto L_08B0044C;
    return;
L_08B0044C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00460;
      }
      goto L_08B00454;
    }
L_08B00454:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B00460u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08B00460u) goto L_08B00460;
    return;
L_08B00460:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B0047C;
      }
      goto L_08B0046C;
    }
L_08B0046C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B0049C;
      }
      goto L_08B00474;
    }
L_08B00474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_08B004A0;
      }
      goto L_08B0047C;
    }
L_08B0047C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B00494;
      }
      goto L_08B00484;
    }
L_08B00484:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0049C;
      }
      goto L_08B0048C;
    }
L_08B0048C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_08B004A0;
      }
      goto L_08B00494;
    }
L_08B00494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_08B004A0;
      }
      goto L_08B0049C;
    }
L_08B0049C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08B004A0;
L_08B004A0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B004DC;
      }
      goto L_08B004AC;
    }
L_08B004AC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08B004BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x08B004BCu) goto L_08B004BC;
    return;
L_08B004BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(564)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(563), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(564), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B004DC;
L_08B004DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B004ECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x08B004ECu) goto L_08B004EC;
    return;
L_08B004EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00508;
      }
      goto L_08B004F4;
    }
L_08B004F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00430;
      }
      goto L_08B00508;
    }
L_08B00508:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00520:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B00548;
      }
      goto L_08B00540;
    }
L_08B00540:
    ctx.gpr[31] = (0x08B00548u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(900));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08B00548u) goto L_08B00548;
    return;
L_08B00548:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(900), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08B00564;
      }
      goto L_08B00554;
    }
L_08B00554:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00564;
      }
      goto L_08B0055C;
    }
L_08B0055C:
    ctx.gpr[31] = (0x08B00564u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(900));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08B00564u) goto L_08B00564;
    return;
L_08B00564:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00578:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B005B0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B005B0u) goto L_08B005B0;
    return;
L_08B005B0:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B0069C;
      }
      goto L_08B005B8;
    }
L_08B005B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 207u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B00648;
      }
      goto L_08B005C8;
    }
L_08B005C8:
    ctx.gpr[31] = (0x08B005D0u);
    ctx.gpr[4] = (0u | 349u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08B005D0u) goto L_08B005D0;
    return;
L_08B005D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00648;
      }
      goto L_08B005D8;
    }
L_08B005D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00638;
      }
      goto L_08B005E8;
    }
L_08B005E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[31] = (0x08B005F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 630u, 0x08947340u>(ctx, &aot_mem) && ctx.pc == 0x08B005F8u) goto L_08B005F8;
    return;
L_08B005F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-129));
      if (branch_taken) {
          goto L_08B00620;
      }
      goto L_08B00604;
    }
L_08B00604:
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08B00614u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B00614u) goto L_08B00614;
    return;
L_08B00614:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B00634;
      }
      goto L_08B00620;
    }
L_08B00620:
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[31] = (0x08B0062Cu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 53u, 0x089082C8u>(ctx, &aot_mem) && ctx.pc == 0x08B0062Cu) goto L_08B0062C;
    return;
L_08B0062C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[17]);
    goto L_08B00634;
L_08B00634:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08B00638;
L_08B00638:
    ctx.gpr[31] = (0x08B00640u);
    ctx.gpr[4] = (0u | 349u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08B00640u) goto L_08B00640;
    return;
L_08B00640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0069C;
      }
      goto L_08B00648;
    }
L_08B00648:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B0069C;
      }
      goto L_08B00658;
    }
L_08B00658:
    ctx.gpr[31] = (0x08B00660u);
    ctx.gpr[4] = (0u | 333u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x08B00660u) goto L_08B00660;
    return;
L_08B00660:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0069C;
      }
      goto L_08B00668;
    }
L_08B00668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x08B00678u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 630u, 0x08947340u>(ctx, &aot_mem) && ctx.pc == 0x08B00678u) goto L_08B00678;
    return;
L_08B00678:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00694;
      }
      goto L_08B00680;
    }
L_08B00680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B00694u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08B00694u) goto L_08B00694;
    return;
L_08B00694:
    ctx.gpr[31] = (0x08B0069Cu);
    ctx.gpr[4] = (0u | 333u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08B0069Cu) goto L_08B0069C;
    return;
L_08B0069C:
    ctx.gpr[31] = (0x08B006A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08B006A4u) goto L_08B006A4;
    return;
L_08B006A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B006B8;
      }
      goto L_08B006AC;
    }
L_08B006AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[31] = (0x08B006B8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08B006B8u) goto L_08B006B8;
    return;
L_08B006B8:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B006C8u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x08B006C8u) goto L_08B006C8;
    return;
L_08B006C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(563)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(564)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(563), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(564), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B006F4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08B00520;
L_08B006F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B0073C;
      }
      goto L_08B00724;
    }
L_08B00724:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B00744;
      }
      goto L_08B00734;
    }
L_08B00734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B007C8;
      }
      goto L_08B0073C;
    }
L_08B0073C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08B007C8;
      }
      goto L_08B00744;
    }
L_08B00744:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00750u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 641u, 0x089CA714u>(ctx, &aot_mem) && ctx.pc == 0x08B00750u) goto L_08B00750;
    return;
L_08B00750:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B00760u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08B00760u) goto L_08B00760;
    return;
L_08B00760:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B0076Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08B0076Cu) goto L_08B0076C;
    return;
L_08B0076C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B00778u);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08B00778u) goto L_08B00778;
    return;
L_08B00778:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00788u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 307u, 0x089B56FCu>(ctx, &aot_mem) && ctx.pc == 0x08B00788u) goto L_08B00788;
    return;
L_08B00788:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00794u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08B00520;
L_08B00794:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B007C0;
      }
      goto L_08B007A4;
    }
L_08B007A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(456));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08B007C0;
L_08B007C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08B007C8;
      }
      goto L_08B007C8;
    }
L_08B007C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B007DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B00810u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00810u) goto L_08B00810;
    return;
L_08B00810:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00830;
      }
      goto L_08B00818;
    }
L_08B00818:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (0u | 226u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B0085C;
      }
      goto L_08B00828;
    }
L_08B00828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 183u);
      if (branch_taken) {
          goto L_08B00844;
      }
      goto L_08B00830;
    }
L_08B00830:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B0083Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0083Cu) goto L_08B0083C;
    return;
L_08B0083C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00A24;
      }
      goto L_08B00844;
    }
L_08B00844:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-959));
      if (branch_taken) {
          goto L_08B0085C;
      }
      goto L_08B0084C;
    }
L_08B0084C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-937));
      if (branch_taken) {
          goto L_08B0085C;
      }
      goto L_08B00854;
    }
L_08B00854:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B00860;
      }
      goto L_08B0085C;
    }
L_08B0085C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B00860;
L_08B00860:
    ctx.gpr[7] = (0u | 228u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B00878;
      }
      goto L_08B0086C;
    }
L_08B0086C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-989));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B0087C;
      }
      goto L_08B00878;
    }
L_08B00878:
    ctx.gpr[6] = (0u | 1u);
    goto L_08B0087C;
L_08B0087C:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B008AC;
      }
      goto L_08B00888;
    }
L_08B00888:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B008AC;
      }
      goto L_08B00890;
    }
L_08B00890:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B008A0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x08B008A0u) goto L_08B008A0;
    return;
L_08B008A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08B009DC;
      }
      goto L_08B008AC;
    }
L_08B008AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B008B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 641u, 0x089CA714u>(ctx, &aot_mem) && ctx.pc == 0x08B008B8u) goto L_08B008B8;
    return;
L_08B008B8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B008D0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x08B008D0u) goto L_08B008D0;
    return;
L_08B008D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B008DCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem) && ctx.pc == 0x08B008DCu) goto L_08B008DC;
    return;
L_08B008DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B008E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem) && ctx.pc == 0x08B008E8u) goto L_08B008E8;
    return;
L_08B008E8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08B008F4u);
    ctx.gpr[5] = (0u | 55u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08B008F4u) goto L_08B008F4;
    return;
L_08B008F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00904u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 307u, 0x089B56FCu>(ctx, &aot_mem) && ctx.pc == 0x08B00904u) goto L_08B00904;
    return;
L_08B00904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[20] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08B0091C;
      }
      goto L_08B00914;
    }
L_08B00914:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B009D4;
      }
      goto L_08B0091C;
    }
L_08B0091C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00954;
      }
      goto L_08B00928;
    }
L_08B00928:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B00954;
      }
      goto L_08B00934;
    }
L_08B00934:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B00944u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x08B00944u) goto L_08B00944;
    return;
L_08B00944:
    ctx.gpr[31] = (0x08B0094Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x08B0094Cu) goto L_08B0094C;
    return;
L_08B0094C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B009D4;
      }
      goto L_08B00954;
    }
L_08B00954:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 5u);
      if (branch_taken) {
          goto L_08B009D4;
      }
      goto L_08B00964;
    }
L_08B00964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00970u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00970u) goto L_08B00970;
    return;
L_08B00970:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B009C4;
      }
      goto L_08B0097C;
    }
L_08B0097C:
    ctx.gpr[31] = (0x08B00984u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00984u) goto L_08B00984;
    return;
L_08B00984:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B009C4;
      }
      goto L_08B0098C;
    }
L_08B0098C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08B009A0;
      }
      goto L_08B00998;
    }
L_08B00998:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08B009C4;
      }
      goto L_08B009A0;
    }
L_08B009A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B009C4;
      }
      goto L_08B009AC;
    }
L_08B009AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B009BCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem) && ctx.pc == 0x08B009BCu) goto L_08B009BC;
    return;
L_08B009BC:
    ctx.gpr[31] = (0x08B009C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem) && ctx.pc == 0x08B009C4u) goto L_08B009C4;
    return;
L_08B009C4:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00964;
      }
      goto L_08B009D4;
    }
L_08B009D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    goto L_08B009DC;
L_08B009DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B00A18;
      }
      goto L_08B009E4;
    }
L_08B009E4:
    ctx.gpr[31] = (0x08B009ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B009ECu) goto L_08B009EC;
    return;
L_08B009EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00A18;
      }
      goto L_08B009F4;
    }
L_08B009F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00A00u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00A00u) goto L_08B00A00;
    return;
L_08B00A00:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(456));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (65528u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08B00A18;
L_08B00A18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B00A24u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00A24u) goto L_08B00A24;
    return;
L_08B00A24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00A50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B00ABC;
      }
      goto L_08B00A70;
    }
L_08B00A70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00AAC;
      }
      goto L_08B00A84;
    }
L_08B00A84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B00A90u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00A90u) goto L_08B00A90;
    return;
L_08B00A90:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B00AB4;
      }
      goto L_08B00A98;
    }
L_08B00A98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00A84;
      }
      goto L_08B00AAC;
    }
L_08B00AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B00AC0;
      }
      goto L_08B00AB4;
    }
L_08B00AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B00AC0;
      }
      goto L_08B00ABC;
    }
L_08B00ABC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B00AC0;
L_08B00AC0:
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
L_08B00AD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(565)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B00B44;
      }
      goto L_08B00B04;
    }
L_08B00B04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B00B10u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00B10u) goto L_08B00B10;
    return;
L_08B00B10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00B30;
      }
      goto L_08B00B18;
    }
L_08B00B18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B00B24u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B00B24u) goto L_08B00B24;
    return;
L_08B00B24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B00B4C;
      }
      goto L_08B00B30;
    }
L_08B00B30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00B04;
      }
      goto L_08B00B44;
    }
L_08B00B44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B00B50;
      }
      goto L_08B00B4C;
    }
L_08B00B4C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B00B50;
L_08B00B50:
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
L_08B00B68:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00B84;
      }
      goto L_08B00B70;
    }
L_08B00B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B00B8C;
      }
      goto L_08B00B7C;
    }
L_08B00B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B00B90;
      }
      goto L_08B00B84;
    }
L_08B00B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B00B90;
      }
      goto L_08B00B8C;
    }
L_08B00B8C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B00B90;
L_08B00B90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00BB8;
      }
      goto L_08B00BA4;
    }
L_08B00BA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B00BB8;
      }
      goto L_08B00BB0;
    }
L_08B00BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B00BBC;
      }
      goto L_08B00BB8;
    }
L_08B00BB8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B00BBC;
L_08B00BBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00BC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B00BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 22u, 0x089401B0u>(ctx, &aot_mem) && ctx.pc == 0x08B00BD4u) goto L_08B00BD4;
    return;
L_08B00BD4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00BE8;
      }
      goto L_08B00BE0;
    }
L_08B00BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1048)));
      if (branch_taken) {
          goto L_08B00BEC;
      }
      goto L_08B00BE8;
    }
L_08B00BE8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B00BEC;
L_08B00BEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B00C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 22u, 0x089401B0u>(ctx, &aot_mem) && ctx.pc == 0x08B00C08u) goto L_08B00C08;
    return;
L_08B00C08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00C1C;
      }
      goto L_08B00C14;
    }
L_08B00C14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1044)));
      if (branch_taken) {
          goto L_08B00C20;
      }
      goto L_08B00C1C;
    }
L_08B00C1C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B00C20;
L_08B00C20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00C2C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00C34:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_08B00C58;
      }
      goto L_08B00C40;
    }
L_08B00C40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B00C68;
      }
      goto L_08B00C48;
    }
L_08B00C48:
    ctx.gpr[4] = (49036u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B00C84;
      }
      goto L_08B00C58;
    }
L_08B00C58:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B00C68;
      }
      goto L_08B00C60;
    }
L_08B00C60:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B00C84;
      }
      goto L_08B00C68;
    }
L_08B00C68:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    goto L_08B00C84;
L_08B00C84:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    jump_target = ctx.gpr[31];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00C90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B00D04;
      }
      goto L_08B00CF4;
    }
L_08B00CF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B00D24;
      }
      goto L_08B00D04;
    }
L_08B00D04:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B00D1C;
      }
      goto L_08B00D14;
    }
L_08B00D14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B00D70;
      }
      goto L_08B00D1C;
    }
L_08B00D1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08B00D70;
      }
      goto L_08B00D24;
    }
L_08B00D24:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B00D54;
      }
      goto L_08B00D34;
    }
L_08B00D34:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B00D4C;
      }
      goto L_08B00D44;
    }
L_08B00D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B00D70;
      }
      goto L_08B00D4C;
    }
L_08B00D4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B00D70;
      }
      goto L_08B00D54;
    }
L_08B00D54:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B00D6C;
      }
      goto L_08B00D64;
    }
L_08B00D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08B00D70;
      }
      goto L_08B00D6C;
    }
L_08B00D6C:
    ctx.gpr[2] = (0u | 2u);
    goto L_08B00D70;
L_08B00D70:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00D78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48998u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B00DB0;
      }
      goto L_08B00DA8;
    }
L_08B00DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B00DB4;
      }
      goto L_08B00DB0;
    }
L_08B00DB0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B00DB4;
L_08B00DB4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (48972u << 16u);
      if (branch_taken) {
          goto L_08B00E04;
      }
      goto L_08B00DE8;
    }
L_08B00DE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B00E0C;
      }
      goto L_08B00E04;
    }
L_08B00E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B00E10;
      }
      goto L_08B00E0C;
    }
L_08B00E0C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B00E10;
L_08B00E10:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00E18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 195 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 268u);
      if (branch_taken) {
          goto L_08B00E90;
      }
      goto L_08B00E28;
    }
L_08B00E28:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -933 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B00E64;
      }
      goto L_08B00E34;
    }
L_08B00E34:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -991 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -935 ? 1u : 0u);
        goto L_08B00E54;
    }
    goto L_08B00E40;
L_08B00E40:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -992 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00E5C;
      }
      goto L_08B00E4C;
    }
L_08B00E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B00ECC;
      }
      goto L_08B00E54;
    }
L_08B00E54:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00E4C;
      }
      goto L_08B00E5C;
    }
L_08B00E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B00ECC;
      }
      goto L_08B00E64;
    }
L_08B00E64:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 193 ? 1u : 0u);
        goto L_08B00E80;
    }
    goto L_08B00E6C;
L_08B00E6C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 191 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00E5C;
      }
      goto L_08B00E78;
    }
L_08B00E78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00E4C;
      }
      goto L_08B00E80;
    }
L_08B00E80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00E5C;
      }
      goto L_08B00E88;
    }
L_08B00E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00E4C;
      }
      goto L_08B00E90;
    }
L_08B00E90:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 244u);
      if (branch_taken) {
          goto L_08B00E5C;
      }
      goto L_08B00E98;
    }
L_08B00E98:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 234u);
      if (branch_taken) {
          goto L_08B00E5C;
      }
      goto L_08B00EA0;
    }
L_08B00EA0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 227u);
      if (branch_taken) {
          goto L_08B00E5C;
      }
      goto L_08B00EA8;
    }
L_08B00EA8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 219u);
      if (branch_taken) {
          goto L_08B00E5C;
      }
      goto L_08B00EB0;
    }
L_08B00EB0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 207u);
      if (branch_taken) {
          goto L_08B00E5C;
      }
      goto L_08B00EB8;
    }
L_08B00EB8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 204u);
      if (branch_taken) {
          goto L_08B00E5C;
      }
      goto L_08B00EC0;
    }
L_08B00EC0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B00E4C;
      }
      goto L_08B00EC8;
    }
L_08B00EC8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B00ECC;
L_08B00ECC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00ED4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 226 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 183u);
      if (branch_taken) {
          goto L_08B00EF4;
      }
      goto L_08B00EE4;
    }
L_08B00EE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B00F00;
      }
      goto L_08B00EEC;
    }
L_08B00EEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B00F04;
      }
      goto L_08B00EF4;
    }
L_08B00EF4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 228 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00EEC;
      }
      goto L_08B00F00;
    }
L_08B00F00:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B00F04;
L_08B00F04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B00F0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] & 64u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B00F50;
      }
      goto L_08B00F38;
    }
L_08B00F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00F58;
      }
      goto L_08B00F48;
    }
L_08B00F48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00F8C;
      }
      goto L_08B00F50;
    }
L_08B00F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01020;
      }
      goto L_08B00F58;
    }
L_08B00F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00F8C;
      }
      goto L_08B00F6C;
    }
L_08B00F6C:
    ctx.gpr[31] = (0x08B00F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B00F74u) goto L_08B00F74;
    return;
L_08B00F74:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B00F8C;
      }
      goto L_08B00F7C;
    }
L_08B00F7C:
    ctx.gpr[31] = (0x08B00F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08B00F84u) goto L_08B00F84;
    return;
L_08B00F84:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B00FA4;
      }
      goto L_08B00F8C;
    }
L_08B00F8C:
    ctx.gpr[31] = (0x08B00F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B00F94u) goto L_08B00F94;
    return;
L_08B00F94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B00FAC;
      }
      goto L_08B00F9C;
    }
L_08B00F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B00FD0;
      }
      goto L_08B00FA4;
    }
L_08B00FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01020;
      }
      goto L_08B00FAC;
    }
L_08B00FAC:
    ctx.gpr[31] = (0x08B00FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B00FB4u) goto L_08B00FB4;
    return;
L_08B00FB4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B00FD0;
      }
      goto L_08B00FBC;
    }
L_08B00FBC:
    ctx.gpr[31] = (0x08B00FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08B00FC4u) goto L_08B00FC4;
    return;
L_08B00FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B01014;
      }
      goto L_08B00FD0;
    }
L_08B00FD0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0100C;
      }
      goto L_08B00FE0;
    }
L_08B00FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0100C;
      }
      goto L_08B00FF0;
    }
L_08B00FF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B0101C;
      }
      goto L_08B0100C;
    }
L_08B0100C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B01020;
      }
      goto L_08B01014;
    }
L_08B01014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01020;
      }
      goto L_08B0101C;
    }
L_08B0101C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B01020;
L_08B01020:
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
L_08B01038:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0107C;
      }
      goto L_08B01054;
    }
L_08B01054:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(556))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0106C;
      }
      goto L_08B01060;
    }
L_08B01060:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(557))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01074;
      }
      goto L_08B0106C;
    }
L_08B0106C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B01080;
      }
      goto L_08B01074;
    }
L_08B01074:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01080;
      }
      goto L_08B0107C;
    }
L_08B0107C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B01080;
L_08B01080:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(680)));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B010E0;
      }
      goto L_08B010AC;
    }
L_08B010AC:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08B010E0;
      }
      goto L_08B010B8;
    }
L_08B010B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_08B010E0;
      }
      goto L_08B010C0;
    }
L_08B010C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B010E0;
      }
      goto L_08B010C8;
    }
L_08B010C8:
    ctx.gpr[31] = (0x08B010D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B010D0u) goto L_08B010D0;
    return;
L_08B010D0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(680)));
        goto L_08B010E8;
    }
    goto L_08B010D8;
L_08B010D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B010F4;
      }
      goto L_08B010E0;
    }
L_08B010E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01184;
      }
      goto L_08B010E8;
    }
L_08B010E8:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B01108;
      }
      goto L_08B010F4;
    }
L_08B010F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01110;
      }
      goto L_08B01100;
    }
L_08B01100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01180;
      }
      goto L_08B01108;
    }
L_08B01108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01184;
      }
      goto L_08B01110;
    }
L_08B01110:
    ctx.gpr[31] = (0x08B01118u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01118u) goto L_08B01118;
    return;
L_08B01118:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01180;
      }
      goto L_08B01120;
    }
L_08B01120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01180;
      }
      goto L_08B0112C;
    }
L_08B0112C:
    ctx.gpr[31] = (0x08B01134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 696u, 0x0890EF94u>(ctx, &aot_mem) && ctx.pc == 0x08B01134u) goto L_08B01134;
    return;
L_08B01134:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01150;
      }
      goto L_08B01140;
    }
L_08B01140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(680)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B01164;
      }
      goto L_08B01150;
    }
L_08B01150:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(680)));
        goto L_08B0116C;
    }
    goto L_08B0115C;
L_08B0115C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01180;
      }
      goto L_08B01164;
    }
L_08B01164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01184;
      }
      goto L_08B0116C;
    }
L_08B0116C:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B01180;
      }
      goto L_08B01178;
    }
L_08B01178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01184;
      }
      goto L_08B01180;
    }
L_08B01180:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B01184;
L_08B01184:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08B011B4;
      }
      goto L_08B011A4;
    }
L_08B011A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_08B011B4;
      }
      goto L_08B011AC;
    }
L_08B011AC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B011BC;
      }
      goto L_08B011B4;
    }
L_08B011B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B011C0;
      }
      goto L_08B011BC;
    }
L_08B011BC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B011C0;
L_08B011C0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B011C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B01244;
      }
      goto L_08B011E8;
    }
L_08B011E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B01244;
      }
      goto L_08B011F8;
    }
L_08B011F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B01244;
      }
      goto L_08B01208;
    }
L_08B01208:
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (48588u << 16u);
      if (branch_taken) {
          goto L_08B01244;
      }
      goto L_08B01228;
    }
L_08B01228:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B012A8;
      }
      goto L_08B01244;
    }
L_08B01244:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (15651u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55051u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B012A0;
      }
      goto L_08B01274;
    }
L_08B01274:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B012B0;
      }
      goto L_08B01298;
    }
L_08B01298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B012B4;
      }
      goto L_08B012A0;
    }
L_08B012A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B012B4;
      }
      goto L_08B012A8;
    }
L_08B012A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B012B4;
      }
      goto L_08B012B0;
    }
L_08B012B0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B012B4;
L_08B012B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B012BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B0131C;
      }
      goto L_08B012FC;
    }
L_08B012FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0133C;
      }
      goto L_08B0131C;
    }
L_08B0131C:
    ctx.gpr[31] = (0x08B01324u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 937u, 0x08AFFE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01324u) goto L_08B01324;
    return;
L_08B01324:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01358;
      }
      goto L_08B0133C;
    }
L_08B0133C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01360;
      }
      goto L_08B01350;
    }
L_08B01350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(636)));
      if (branch_taken) {
          goto L_08B01374;
      }
      goto L_08B01358;
    }
L_08B01358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B015DC;
      }
      goto L_08B01360;
    }
L_08B01360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(636)));
    goto L_08B01374;
L_08B01374:
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B013C8;
      }
      goto L_08B01388;
    }
L_08B01388:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B013C0;
      }
      goto L_08B013B8;
    }
L_08B013B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B015DC;
      }
      goto L_08B013C0;
    }
L_08B013C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B015DC;
      }
      goto L_08B013C8;
    }
L_08B013C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B01408;
      }
      goto L_08B013D8;
    }
L_08B013D8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (15267u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B01410;
      }
      goto L_08B01400;
    }
L_08B01400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01500;
      }
      goto L_08B01408;
    }
L_08B01408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B015DC;
      }
      goto L_08B01410;
    }
L_08B01410:
    ctx.gpr[5] = (48588u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01500;
      }
      goto L_08B01430;
    }
L_08B01430:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B014F8;
      }
      goto L_08B01450;
    }
L_08B01450:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0147C;
      }
      goto L_08B01470;
    }
L_08B01470:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08B01480;
      }
      goto L_08B0147C;
    }
L_08B0147C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_08B01480;
L_08B01480:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B014F8;
      }
      goto L_08B01490;
    }
L_08B01490:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
        goto L_08B014B0;
    }
    goto L_08B014A4;
L_08B014A4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08B014B0;
      }
      goto L_08B014B0;
    }
L_08B014B0:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B014F8;
      }
      goto L_08B014C0;
    }
L_08B014C0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08B014E0;
    }
    goto L_08B014D4;
L_08B014D4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08B014E0;
      }
      goto L_08B014E0;
    }
L_08B014E0:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B014F8;
      }
      goto L_08B014F0;
    }
L_08B014F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B015DC;
      }
      goto L_08B014F8;
    }
L_08B014F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B015DC;
      }
      goto L_08B01500;
    }
L_08B01500:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01528;
      }
      goto L_08B01520;
    }
L_08B01520:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01554;
      }
      goto L_08B01528;
    }
L_08B01528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15605u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B0155C;
      }
      goto L_08B01548;
    }
L_08B01548:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08B01560;
      }
      goto L_08B01554;
    }
L_08B01554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B015DC;
      }
      goto L_08B0155C;
    }
L_08B0155C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_08B01560;
L_08B01560:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B015D0;
      }
      goto L_08B01570;
    }
L_08B01570:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
        goto L_08B01590;
    }
    goto L_08B01584;
L_08B01584:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08B01590;
      }
      goto L_08B01590;
    }
L_08B01590:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B015D0;
      }
      goto L_08B015A0;
    }
L_08B015A0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_08B015C0;
    }
    goto L_08B015B4;
L_08B015B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08B015C0;
      }
      goto L_08B015C0;
    }
L_08B015C0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B015D8;
      }
      goto L_08B015D0;
    }
L_08B015D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B015DC;
      }
      goto L_08B015D8;
    }
L_08B015D8:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B015DC;
L_08B015DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B015F0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(558)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 65535u);
      if (branch_taken) {
          goto L_08B0164C;
      }
      goto L_08B015FC;
    }
L_08B015FC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (16968u << 16u);
      if (branch_taken) {
          goto L_08B0164C;
      }
      goto L_08B01604;
    }
L_08B01604:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01654;
      }
      goto L_08B01634;
    }
L_08B01634:
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08B01674;
      }
      goto L_08B0164C;
    }
L_08B0164C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B016DC;
      }
      goto L_08B01654;
    }
L_08B01654:
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (32768u << 16u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    goto L_08B01674;
L_08B01674:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01688;
      }
      goto L_08B0167C;
    }
L_08B0167C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(558), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(700), 0u);
      if (branch_taken) {
          goto L_08B016DC;
      }
      goto L_08B01688;
    }
L_08B01688:
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B016B8;
      }
      goto L_08B016A0;
    }
L_08B016A0:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08B016D8;
      }
      goto L_08B016B8;
    }
L_08B016B8:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    goto L_08B016D8;
L_08B016D8:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(558), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08B016DC;
L_08B016DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B016E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01770;
      }
      goto L_08B01710;
    }
L_08B01710:
    ctx.gpr[31] = (0x08B01718u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 937u, 0x08AFFE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01718u) goto L_08B01718;
    return;
L_08B01718:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01768;
      }
      goto L_08B01730;
    }
L_08B01730:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B0178C;
      }
      goto L_08B01760;
    }
L_08B01760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (16128u << 16u);
      if (branch_taken) {
          goto L_08B01778;
      }
      goto L_08B01768;
    }
L_08B01768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01798;
      }
      goto L_08B01770;
    }
L_08B01770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01798;
      }
      goto L_08B01778;
    }
L_08B01778:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01794;
      }
      goto L_08B0178C;
    }
L_08B0178C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01798;
      }
      goto L_08B01794;
    }
L_08B01794:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B01798;
L_08B01798:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B017A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08B017F0;
      }
      goto L_08B017B8;
    }
L_08B017B8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08B017F0;
      }
      goto L_08B017C0;
    }
L_08B017C0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_08B017F0;
      }
      goto L_08B017C8;
    }
L_08B017C8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_08B017F0;
      }
      goto L_08B017D0;
    }
L_08B017D0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B017F0;
      }
      goto L_08B017D8;
    }
L_08B017D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (0u | 170u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B017F8;
      }
      goto L_08B017E8;
    }
L_08B017E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B017FC;
      }
      goto L_08B017F0;
    }
L_08B017F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B017FC;
      }
      goto L_08B017F8;
    }
L_08B017F8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B017FC;
L_08B017FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 8u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01924;
      }
      goto L_08B01844;
    }
L_08B01844:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08B018B0;
      }
      goto L_08B01894;
    }
L_08B01894:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08B018B4;
    }
    goto L_08B018A8;
L_08B018A8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B018C4;
      }
      goto L_08B018B0;
    }
L_08B018B0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B018B4;
L_08B018B4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08B018C0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08B018C0u) goto L_08B018C0;
    return;
L_08B018C0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08B018C4;
L_08B018C4:
    ctx.gpr[31] = (0x08B018CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem) && ctx.pc == 0x08B018CCu) goto L_08B018CC;
    return;
L_08B018CC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B018F0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 579u, 0x08AFE928u>(ctx, &aot_mem) && ctx.pc == 0x08B018F0u) goto L_08B018F0;
    return;
L_08B018F0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01A80;
      }
      goto L_08B01908;
    }
L_08B01908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01A80;
      }
      goto L_08B01914;
    }
L_08B01914:
    ctx.gpr[31] = (0x08B0191Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B0191Cu) goto L_08B0191C;
    return;
L_08B0191C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01A80;
      }
      goto L_08B01924;
    }
L_08B01924:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B019C0;
      }
      goto L_08B019B4;
    }
L_08B019B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_08B019C0;
L_08B019C0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B01A0Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08B01A0Cu) goto L_08B01A0C;
    return;
L_08B01A0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B01A44u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08B01A44u) goto L_08B01A44;
    return;
L_08B01A44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B01A74u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08B01A74u) goto L_08B01A74;
    return;
L_08B01A74:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08B01A80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08B01A80u) goto L_08B01A80;
    return;
L_08B01A80:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01AA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08B01B24;
      }
      goto L_08B01AC8;
    }
L_08B01AC8:
    ctx.gpr[31] = (0x08B01AD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B021B0;
L_08B01AD0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01B24;
      }
      goto L_08B01AD8;
    }
L_08B01AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B01B24;
      }
      goto L_08B01AEC;
    }
L_08B01AEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01B10;
      }
      goto L_08B01B00;
    }
L_08B01B00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B01B10;
L_08B01B10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(629))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B01B24;
      }
      goto L_08B01B20;
    }
L_08B01B20:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B01B24;
L_08B01B24:
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
L_08B01B3C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(856)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01B44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01B4C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_08B01B7C;
      }
      goto L_08B01B5C;
    }
L_08B01B5C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01B9C;
      }
      goto L_08B01B64;
    }
L_08B01B64:
    ctx.gpr[5] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5440)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5440), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B01B9C;
      }
      goto L_08B01B7C;
    }
L_08B01B7C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01B9C;
      }
      goto L_08B01B84;
    }
L_08B01B84:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5440)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5440), ctx.gpr[4]);
    goto L_08B01B9C;
L_08B01B9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01BA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 218 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 246 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B01BE0;
      }
      goto L_08B01BB4;
    }
L_08B01BB4:
    ctx.gpr[5] = (0u | 207u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 204u);
      if (branch_taken) {
          goto L_08B01C3C;
      }
      goto L_08B01BC0;
    }
L_08B01BC0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 193u);
      if (branch_taken) {
          goto L_08B01C3C;
      }
      goto L_08B01BC8;
    }
L_08B01BC8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 191u);
      if (branch_taken) {
          goto L_08B01C3C;
      }
      goto L_08B01BD0;
    }
L_08B01BD0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B01C3C;
      }
      goto L_08B01BD8;
    }
L_08B01BD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B01C40;
      }
      goto L_08B01BE0;
    }
L_08B01BE0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 268 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B01C18;
      }
      goto L_08B01BE8;
    }
L_08B01BE8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 234 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 235 ? 1u : 0u);
        goto L_08B01C08;
    }
    goto L_08B01BF4;
L_08B01BF4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 220 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01BD8;
      }
      goto L_08B01C00;
    }
L_08B01C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01C3C;
      }
      goto L_08B01C08;
    }
L_08B01C08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01BD8;
      }
      goto L_08B01C10;
    }
L_08B01C10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01C3C;
      }
      goto L_08B01C18;
    }
L_08B01C18:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 269 ? 1u : 0u);
        goto L_08B01C34;
    }
    goto L_08B01C20;
L_08B01C20:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 247 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01BD8;
      }
      goto L_08B01C2C;
    }
L_08B01C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01C3C;
      }
      goto L_08B01C34;
    }
L_08B01C34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01BD8;
      }
      goto L_08B01C3C;
    }
L_08B01C3C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B01C40;
L_08B01C40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01C48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01C6C;
      }
      goto L_08B01C64;
    }
L_08B01C64:
    ctx.gpr[31] = (0x08B01C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 609u, 0x08A0BDACu>(ctx, &aot_mem) && ctx.pc == 0x08B01C6Cu) goto L_08B01C6C;
    return;
L_08B01C6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(372)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01C80;
      }
      goto L_08B01C78;
    }
L_08B01C78:
    ctx.gpr[31] = (0x08B01C80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 609u, 0x08A0BDACu>(ctx, &aot_mem) && ctx.pc == 0x08B01C80u) goto L_08B01C80;
    return;
L_08B01C80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01C90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_08B01CC8;
      }
      goto L_08B01CC0;
    }
L_08B01CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08B01CC8;
      }
      goto L_08B01CC8;
    }
L_08B01CC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08B01CD8;
      }
      goto L_08B01CD0;
    }
L_08B01CD0:
    ctx.gpr[31] = (0x08B01CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem) && ctx.pc == 0x08B01CD8u) goto L_08B01CD8;
    return;
L_08B01CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01D10;
      }
      goto L_08B01CE4;
    }
L_08B01CE4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x08B01CF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 387u, 0x08B0D970u>(ctx, &aot_mem) && ctx.pc == 0x08B01CF0u) goto L_08B01CF0;
    return;
L_08B01CF0:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(225) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01D08;
      }
      goto L_08B01CFC;
    }
L_08B01CFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B01D08u);
    ctx.gpr[5] = (0u | 215u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 383u, 0x08B0D94Cu>(ctx, &aot_mem) && ctx.pc == 0x08B01D08u) goto L_08B01D08;
    return;
L_08B01D08:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08B01D10;
L_08B01D10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01D24:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08B01D38;
      }
      goto L_08B01D30;
    }
L_08B01D30:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B01DA0;
      }
      goto L_08B01D38;
    }
L_08B01D38:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01D8C;
      }
      goto L_08B01D50;
    }
L_08B01D50:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01D84;
      }
      goto L_08B01D68;
    }
L_08B01D68:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01D98;
      }
      goto L_08B01D78;
    }
L_08B01D78:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B01DC8;
      }
      goto L_08B01D84;
    }
L_08B01D84:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08B01DC8;
      }
      goto L_08B01D8C;
    }
L_08B01D8C:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B01DC8;
      }
      goto L_08B01D98;
    }
L_08B01D98:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08B01DC8;
      }
      goto L_08B01DA0;
    }
L_08B01DA0:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01DC4;
      }
      goto L_08B01DB8;
    }
L_08B01DB8:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B01DC8;
      }
      goto L_08B01DC4;
    }
L_08B01DC4:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08B01DC8;
L_08B01DC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01DD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5148));
    ctx.gpr[7] = (ctx.gpr[7] | 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B01DF4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 248u, 0x0881DCCCu>(ctx, &aot_mem) && ctx.pc == 0x08B01DF4u) goto L_08B01DF4;
    return;
L_08B01DF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01E8C;
      }
      goto L_08B01E20;
    }
L_08B01E20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01E84;
      }
      goto L_08B01E3C;
    }
L_08B01E3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (1024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B01E7C;
      }
      goto L_08B01E58;
    }
L_08B01E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B01E94;
      }
      goto L_08B01E74;
    }
L_08B01E74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_08B01E98;
      }
      goto L_08B01E7C;
    }
L_08B01E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_08B01E98;
      }
      goto L_08B01E84;
    }
L_08B01E84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_08B01E98;
      }
      goto L_08B01E8C;
    }
L_08B01E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08B01E98;
      }
      goto L_08B01E94;
    }
L_08B01E94:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B01E98;
L_08B01E98:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01EA0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B01EA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B01F0C;
      }
      goto L_08B01EE8;
    }
L_08B01EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B01F14;
      }
      goto L_08B01F04;
    }
L_08B01F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B01F30;
      }
      goto L_08B01F0C;
    }
L_08B01F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02064;
      }
      goto L_08B01F14;
    }
L_08B01F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08B01F30;
      }
      goto L_08B01F24;
    }
L_08B01F24:
    ctx.gpr[31] = (0x08B01F2Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B01F2Cu) goto L_08B01F2C;
    return;
L_08B01F2C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08B01F30;
L_08B01F30:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B01F48u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem) && ctx.pc == 0x08B01F48u) goto L_08B01F48;
    return;
L_08B01F48:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[24];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[24];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
      if (branch_taken) {
          goto L_08B01FA4;
      }
      goto L_08B01F8C;
    }
L_08B01F8C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[22])) && ctx.fpr[13] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01FA4;
      }
      goto L_08B01F9C;
    }
L_08B01F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08B01FB0;
      }
      goto L_08B01FA4;
    }
L_08B01FA4:
    ctx.gpr[31] = (0x08B01FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08B01FACu) goto L_08B01FAC;
    return;
L_08B01FAC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    goto L_08B01FB0;
L_08B01FB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16384u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[22])) && ctx.fpr[20] == ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08B01FE0;
      }
      goto L_08B01FD0;
    }
L_08B01FD0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[22])) && ctx.fpr[12] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B01FF4;
      }
      goto L_08B01FE0;
    }
L_08B01FE0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08B01FECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem) && ctx.pc == 0x08B01FECu) goto L_08B01FEC;
    return;
L_08B01FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B01FF4;
      }
      goto L_08B01FF4;
    }
L_08B01FF4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0200C;
      }
      goto L_08B01FFC;
    }
L_08B01FFC:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[24] + ctx.fpr[26];
    goto L_08B0200C;
L_08B0200C:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08B02018u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem) && ctx.pc == 0x08B02018u) goto L_08B02018;
    return;
L_08B02018:
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x08B02024u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02024u) goto L_08B02024;
    return;
L_08B02024:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08B02038u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08B02038u) goto L_08B02038;
    return;
L_08B02038:
    ctx.gpr[31] = (0x08B02040u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem) && ctx.pc == 0x08B02040u) goto L_08B02040;
    return;
L_08B02040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02064;
      }
      goto L_08B02050;
    }
L_08B02050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02064;
      }
      goto L_08B0205C;
    }
L_08B0205C:
    ctx.gpr[31] = (0x08B02064u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem) && ctx.pc == 0x08B02064u) goto L_08B02064;
    return;
L_08B02064:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (ctx.gpr[6] & 16384u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08B020C8;
      }
      goto L_08B020AC;
    }
L_08B020AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B020C8;
      }
      goto L_08B020C4;
    }
L_08B020C4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08B020C8;
L_08B020C8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B020D0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(619))))));
    ctx.gpr[6] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B020F4;
      }
      goto L_08B020E0;
    }
L_08B020E0:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B020F8;
      }
      goto L_08B020F4;
    }
L_08B020F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08B020F8;
L_08B020F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02100:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02138;
      }
      goto L_08B02120;
    }
L_08B02120:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08B02138u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B02138u) goto L_08B02138;
    return;
L_08B02138:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0219C;
      }
      goto L_08B0214C;
    }
L_08B0214C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02158u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02158u) goto L_08B02158;
    return;
L_08B02158:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02184;
      }
      goto L_08B02160;
    }
L_08B02160:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B0216Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0216Cu) goto L_08B0216C;
    return;
L_08B0216C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B02184u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B02184u) goto L_08B02184;
    return;
L_08B02184:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B0214C;
      }
      goto L_08B0219C;
    }
L_08B0219C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B021B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(565)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B021E8;
      }
      goto L_08B021C4;
    }
L_08B021C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(904));
    goto L_08B021C8;
L_08B021C8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B021D8;
      }
      goto L_08B021D4;
    }
L_08B021D4:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08B021D8;
L_08B021D8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B021C8;
      }
      goto L_08B021E8;
    }
L_08B021E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B021F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B02208u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08B02208u) goto L_08B02208;
    return;
L_08B02208:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[17] = (0u | 9u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -956 ? 1u : 0u);
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08B02280;
      }
      goto L_08B02228;
    }
L_08B02228:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -972 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -970 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B02268;
      }
      goto L_08B02234;
    }
L_08B02234:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -999 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-984));
      if (branch_taken) {
          goto L_08B02258;
      }
      goto L_08B02240;
    }
L_08B02240:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B022EC;
      }
      goto L_08B0224C;
    }
L_08B0224C:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B02304;
      }
      goto L_08B02258;
    }
L_08B02258:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B0224C;
      }
      goto L_08B02260;
    }
L_08B02260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B022EC;
      }
      goto L_08B02268;
    }
L_08B02268:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -957 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B0224C;
      }
      goto L_08B02270;
    }
L_08B02270:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0224C;
      }
      goto L_08B02278;
    }
L_08B02278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B022EC;
      }
      goto L_08B02280;
    }
L_08B02280:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 231 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 275 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B022BC;
      }
      goto L_08B0228C;
    }
L_08B0228C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -942 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 174u);
      if (branch_taken) {
          goto L_08B022AC;
      }
      goto L_08B02298;
    }
L_08B02298:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -943 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0224C;
      }
      goto L_08B022A4;
    }
L_08B022A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B022EC;
      }
      goto L_08B022AC;
    }
L_08B022AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B0224C;
      }
      goto L_08B022B4;
    }
L_08B022B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B022EC;
      }
      goto L_08B022BC;
    }
L_08B022BC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 276 ? 1u : 0u);
        goto L_08B022D8;
    }
    goto L_08B022C4;
L_08B022C4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 233 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B022E0;
      }
      goto L_08B022D0;
    }
L_08B022D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B022EC;
      }
      goto L_08B022D8;
    }
L_08B022D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B022EC;
      }
      goto L_08B022E0;
    }
L_08B022E0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B02304;
      }
      goto L_08B022EC;
    }
L_08B022EC:
    ctx.gpr[31] = (0x08B022F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08B022F4u) goto L_08B022F4;
    return;
L_08B022F4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B02304;
L_08B02304:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B02370;
      }
      goto L_08B02310;
    }
L_08B02310:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02334;
      }
      goto L_08B02324;
    }
L_08B02324:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08B02334;
L_08B02334:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(644));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(25))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B02370;
      }
      goto L_08B02344;
    }
L_08B02344:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02364;
      }
      goto L_08B02354;
    }
L_08B02354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08B02364;
L_08B02364:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(644));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(695), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08B02370;
L_08B02370:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B024D0;
      }
      goto L_08B023B0;
    }
L_08B023B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B024C8;
      }
      goto L_08B023C4;
    }
L_08B023C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B024C8;
      }
      goto L_08B023D8;
    }
L_08B023D8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B024C0;
      }
      goto L_08B023FC;
    }
L_08B023FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B024B8;
      }
      goto L_08B0240C;
    }
L_08B0240C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B024B8;
      }
      goto L_08B0241C;
    }
L_08B0241C:
    ctx.gpr[31] = (0x08B02424u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02424u) goto L_08B02424;
    return;
L_08B02424:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B024B0;
      }
      goto L_08B0242C;
    }
L_08B0242C:
    ctx.gpr[4] = (14545u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B024A8;
      }
      goto L_08B0245C;
    }
L_08B0245C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08B024D8;
      }
      goto L_08B024A0;
    }
L_08B024A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B024E4;
      }
      goto L_08B024A8;
    }
L_08B024A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B025F0;
      }
      goto L_08B024B0;
    }
L_08B024B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B025F0;
      }
      goto L_08B024B8;
    }
L_08B024B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B025F0;
      }
      goto L_08B024C0;
    }
L_08B024C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B025F0;
      }
      goto L_08B024C8;
    }
L_08B024C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B025F0;
      }
      goto L_08B024D0;
    }
L_08B024D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B025F0;
      }
      goto L_08B024D8;
    }
L_08B024D8:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08B024E4;
L_08B024E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B025F0;
      }
      goto L_08B024FC;
    }
L_08B024FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    goto L_08B02500;
L_08B02500:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 58u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
        goto L_08B02544;
    }
    goto L_08B02524;
L_08B02524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08B02538u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 751u, 0x0890F43Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02538u) goto L_08B02538;
    return;
L_08B02538:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B025D8;
      }
      goto L_08B02540;
    }
L_08B02540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    goto L_08B02544;
L_08B02544:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1784)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B025D8;
      }
      goto L_08B025A4;
    }
L_08B025A4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B025D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem) && ctx.pc == 0x08B025D0u) goto L_08B025D0;
    return;
L_08B025D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B025F0;
      }
      goto L_08B025D8;
    }
L_08B025D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
        goto L_08B02500;
    }
    goto L_08B025F0;
L_08B025F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B026B0;
      }
      goto L_08B0264C;
    }
L_08B0264C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B02668u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem) && ctx.pc == 0x08B02668u) goto L_08B02668;
    return;
L_08B02668:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 14u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[31] = (0x08B026B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 161u, 0x08A69104u>(ctx, &aot_mem) && ctx.pc == 0x08B026B0u) goto L_08B026B0;
    return;
L_08B026B0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16204u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B02888;
      }
      goto L_08B02724;
    }
L_08B02724:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B02888;
      }
      goto L_08B0279C;
    }
L_08B0279C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B02888;
      }
      goto L_08B02824;
    }
L_08B02824:
    ctx.gpr[4] = (16179u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_08B02864;
      }
      goto L_08B02844;
    }
L_08B02844:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08B02864;
L_08B02864:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08B02888u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem) && ctx.pc == 0x08B02888u) goto L_08B02888;
    return;
L_08B02888:
    ctx.gpr[4] = (17402u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08B028F8;
    }
    goto L_08B028B4;
L_08B028B4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08B028F8;
L_08B028F8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B02AA8;
      }
      goto L_08B0291C;
    }
L_08B0291C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (0u | 87u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08B02950u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem) && ctx.pc == 0x08B02950u) goto L_08B02950;
    return;
L_08B02950:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02980;
      }
      goto L_08B02978;
    }
L_08B02978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08B02980;
      }
      goto L_08B02980;
    }
L_08B02980:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B029AC;
      }
      goto L_08B02988;
    }
L_08B02988:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08B029AC;
L_08B029AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08B029C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem) && ctx.pc == 0x08B029C0u) goto L_08B029C0;
    return;
L_08B029C0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B029D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 620u, 0x08A66F58u>(ctx, &aot_mem) && ctx.pc == 0x08B029D0u) goto L_08B029D0;
    return;
L_08B029D0:
    ctx.gpr[31] = (0x08B029D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B01E00;
L_08B029D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08B02A30;
      }
      goto L_08B029E8;
    }
L_08B029E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B02AA8;
      }
      goto L_08B029F0;
    }
L_08B029F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02A40;
      }
      goto L_08B029F8;
    }
L_08B029F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    jump_target = ctx.gpr[10];
    ctx.gpr[31] = (0x08B02A28u);
    ctx.gpr[9] = (0u | 42u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B02A28u) goto L_08B02A28;
    return;
L_08B02A28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02AA8;
      }
      goto L_08B02A30;
    }
L_08B02A30:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B02A78;
      }
      goto L_08B02A38;
    }
L_08B02A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02AA8;
      }
      goto L_08B02A40;
    }
L_08B02A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    jump_target = ctx.gpr[10];
    ctx.gpr[31] = (0x08B02A70u);
    ctx.gpr[9] = (0u | 42u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B02A70u) goto L_08B02A70;
    return;
L_08B02A70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02AA8;
      }
      goto L_08B02A78;
    }
L_08B02A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(416));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    jump_target = ctx.gpr[10];
    ctx.gpr[31] = (0x08B02AA8u);
    ctx.gpr[9] = (0u | 42u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B02AA8u) goto L_08B02AA8;
    return;
L_08B02AA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B02AC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(614))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08B02B14;
      }
      goto L_08B02AFC;
    }
L_08B02AFC:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08B02B10;
      }
      goto L_08B02B08;
    }
L_08B02B08:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B02B14;
      }
      goto L_08B02B10;
    }
L_08B02B10:
    ctx.gpr[19] = (0u | 1u);
    goto L_08B02B14;
L_08B02B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(304));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B02B34u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B02B34u) goto L_08B02B34;
    return;
L_08B02B34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03064;
      }
      goto L_08B02B3C;
    }
L_08B02B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(288));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08B02B58u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B02B58u) goto L_08B02B58;
    return;
L_08B02B58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03064;
      }
      goto L_08B02B60;
    }
L_08B02B60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B02B6Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08B01088;
L_08B02B6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02F5C;
      }
      goto L_08B02B74;
    }
L_08B02B74:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08B02B90;
      }
      goto L_08B02B88;
    }
L_08B02B88:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B02E90;
      }
      goto L_08B02B90;
    }
L_08B02B90:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02E54;
      }
      goto L_08B02B98;
    }
L_08B02B98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02E18;
      }
      goto L_08B02BA8;
    }
L_08B02BA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B02BD4;
      }
      goto L_08B02BB4;
    }
L_08B02BB4:
    ctx.gpr[31] = (0x08B02BBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02BBCu) goto L_08B02BBC;
    return;
L_08B02BBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02BD4;
      }
      goto L_08B02BC4;
    }
L_08B02BC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(620))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B02BD4;
      }
      goto L_08B02BD0;
    }
L_08B02BD0:
    ctx.gpr[18] = (0u | 1u);
    goto L_08B02BD4;
L_08B02BD4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02C20;
      }
      goto L_08B02BDC;
    }
L_08B02BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B02D10;
      }
      goto L_08B02BEC;
    }
L_08B02BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02D10;
      }
      goto L_08B02BF8;
    }
L_08B02BF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02D10;
      }
      goto L_08B02C08;
    }
L_08B02C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2228));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B02D10;
      }
      goto L_08B02C20;
    }
L_08B02C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B02C38;
    }
    goto L_08B02C2C;
L_08B02C2C:
    ctx.gpr[31] = (0x08B02C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B02C34u) goto L_08B02C34;
    return;
L_08B02C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B02C38;
L_08B02C38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B02C48u);
    ctx.gpr[7] = (0u | 63u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B02C48u) goto L_08B02C48;
    return;
L_08B02C48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02C54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B02C54u) goto L_08B02C54;
    return;
L_08B02C54:
    ctx.gpr[31] = (0x08B02C5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B02C5Cu) goto L_08B02C5C;
    return;
L_08B02C5C:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02C70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13856));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B02C70u) goto L_08B02C70;
    return;
L_08B02C70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02CC8;
      }
      goto L_08B02C84;
    }
L_08B02C84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B02C9Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08B03DB0;
L_08B02C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02CC8;
      }
      goto L_08B02CA8;
    }
L_08B02CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02CC8;
      }
      goto L_08B02CB4;
    }
L_08B02CB4:
    ctx.gpr[31] = (0x08B02CBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem) && ctx.pc == 0x08B02CBCu) goto L_08B02CBC;
    return;
L_08B02CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08B02CC8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 108u, 0x08A346B4u>(ctx, &aot_mem) && ctx.pc == 0x08B02CC8u) goto L_08B02CC8;
    return;
L_08B02CC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B02D08;
      }
      goto L_08B02CD8;
    }
L_08B02CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B02CECu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 567u, 0x089AE4F4u>(ctx, &aot_mem) && ctx.pc == 0x08B02CECu) goto L_08B02CEC;
    return;
L_08B02CEC:
    ctx.gpr[31] = (0x08B02CF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem) && ctx.pc == 0x08B02CF4u) goto L_08B02CF4;
    return;
L_08B02CF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02D08;
      }
      goto L_08B02CFC;
    }
L_08B02CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    ctx.gpr[31] = (0x08B02D08u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 119u, 0x089B4624u>(ctx, &aot_mem) && ctx.pc == 0x08B02D08u) goto L_08B02D08;
    return;
L_08B02D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03494;
      }
      goto L_08B02D10;
    }
L_08B02D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02D84;
      }
      goto L_08B02D2C;
    }
L_08B02D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(312));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08B02D44u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B02D44u) goto L_08B02D44;
    return;
L_08B02D44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02DDC;
      }
      goto L_08B02D4C;
    }
L_08B02D4C:
    ctx.gpr[31] = (0x08B02D54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B01038;
L_08B02D54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02DDC;
      }
      goto L_08B02D5C;
    }
L_08B02D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02DDC;
      }
      goto L_08B02D68;
    }
L_08B02D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B02DDC;
      }
      goto L_08B02D78;
    }
L_08B02D78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02DDC;
      }
      goto L_08B02D84;
    }
L_08B02D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B02D9C;
    }
    goto L_08B02D90;
L_08B02D90:
    ctx.gpr[31] = (0x08B02D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B02D98u) goto L_08B02D98;
    return;
L_08B02D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B02D9C;
L_08B02D9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B02DACu);
    ctx.gpr[7] = (0u | 77u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B02DACu) goto L_08B02DAC;
    return;
L_08B02DAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02DB8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B02DB8u) goto L_08B02DB8;
    return;
L_08B02DB8:
    ctx.gpr[31] = (0x08B02DC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B02DC0u) goto L_08B02DC0;
    return;
L_08B02DC0:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02DD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13856));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B02DD4u) goto L_08B02DD4;
    return;
L_08B02DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03494;
      }
      goto L_08B02DDC;
    }
L_08B02DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B02DF4;
    }
    goto L_08B02DE8;
L_08B02DE8:
    ctx.gpr[31] = (0x08B02DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B02DF0u) goto L_08B02DF0;
    return;
L_08B02DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B02DF4;
L_08B02DF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B02E04u);
    ctx.gpr[7] = (0u | 67u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B02E04u) goto L_08B02E04;
    return;
L_08B02E04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02E10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B02E10u) goto L_08B02E10;
    return;
L_08B02E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0301C;
      }
      goto L_08B02E18;
    }
L_08B02E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B02E30;
    }
    goto L_08B02E24;
L_08B02E24:
    ctx.gpr[31] = (0x08B02E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B02E2Cu) goto L_08B02E2C;
    return;
L_08B02E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B02E30;
L_08B02E30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B02E40u);
    ctx.gpr[7] = (0u | 182u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B02E40u) goto L_08B02E40;
    return;
L_08B02E40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02E4Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B02E4Cu) goto L_08B02E4C;
    return;
L_08B02E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0301C;
      }
      goto L_08B02E54;
    }
L_08B02E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B02E6C;
    }
    goto L_08B02E60;
L_08B02E60:
    ctx.gpr[31] = (0x08B02E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B02E68u) goto L_08B02E68;
    return;
L_08B02E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B02E6C;
L_08B02E6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B02E7Cu);
    ctx.gpr[7] = (0u | 174u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B02E7Cu) goto L_08B02E7C;
    return;
L_08B02E7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02E88u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B02E88u) goto L_08B02E88;
    return;
L_08B02E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0301C;
      }
      goto L_08B02E90;
    }
L_08B02E90:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02F20;
      }
      goto L_08B02E98;
    }
L_08B02E98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B02EE4;
      }
      goto L_08B02EA8;
    }
L_08B02EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B02EC0;
    }
    goto L_08B02EB4;
L_08B02EB4:
    ctx.gpr[31] = (0x08B02EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B02EBCu) goto L_08B02EBC;
    return;
L_08B02EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B02EC0;
L_08B02EC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B02ED0u);
    ctx.gpr[7] = (0u | 87u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B02ED0u) goto L_08B02ED0;
    return;
L_08B02ED0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02EDCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B02EDCu) goto L_08B02EDC;
    return;
L_08B02EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0301C;
      }
      goto L_08B02EE4;
    }
L_08B02EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B02EFC;
    }
    goto L_08B02EF0;
L_08B02EF0:
    ctx.gpr[31] = (0x08B02EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B02EF8u) goto L_08B02EF8;
    return;
L_08B02EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B02EFC;
L_08B02EFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B02F0Cu);
    ctx.gpr[7] = (0u | 183u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B02F0Cu) goto L_08B02F0C;
    return;
L_08B02F0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02F18u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B02F18u) goto L_08B02F18;
    return;
L_08B02F18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0301C;
      }
      goto L_08B02F20;
    }
L_08B02F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B02F38;
    }
    goto L_08B02F2C;
L_08B02F2C:
    ctx.gpr[31] = (0x08B02F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B02F34u) goto L_08B02F34;
    return;
L_08B02F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B02F38;
L_08B02F38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B02F48u);
    ctx.gpr[7] = (0u | 178u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B02F48u) goto L_08B02F48;
    return;
L_08B02F48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02F54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B02F54u) goto L_08B02F54;
    return;
L_08B02F54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0301C;
      }
      goto L_08B02F5C;
    }
L_08B02F5C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08B02F70;
      }
      goto L_08B02F68;
    }
L_08B02F68:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B02FAC;
      }
      goto L_08B02F70;
    }
L_08B02F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B02F88;
    }
    goto L_08B02F7C;
L_08B02F7C:
    ctx.gpr[31] = (0x08B02F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B02F84u) goto L_08B02F84;
    return;
L_08B02F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B02F88;
L_08B02F88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B02F98u);
    ctx.gpr[7] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B02F98u) goto L_08B02F98;
    return;
L_08B02F98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02FA4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B02FA4u) goto L_08B02FA4;
    return;
L_08B02FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B02FE0;
      }
      goto L_08B02FAC;
    }
L_08B02FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B02FC4;
    }
    goto L_08B02FB8;
L_08B02FB8:
    ctx.gpr[31] = (0x08B02FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B02FC0u) goto L_08B02FC0;
    return;
L_08B02FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B02FC4;
L_08B02FC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B02FD4u);
    ctx.gpr[7] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B02FD4u) goto L_08B02FD4;
    return;
L_08B02FD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B02FE0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B02FE0u) goto L_08B02FE0;
    return;
L_08B02FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[4] = (2237u << 16u);
    ctx.gpr[5] = (0u | 79u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 12000u);
    ctx.gpr[10] = (0u | 127u);
    ctx.gpr[11] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08B0301Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 35u, 0x089B8320u>(ctx, &aot_mem) && ctx.pc == 0x08B0301Cu) goto L_08B0301C;
    return;
L_08B0301C:
    ctx.gpr[31] = (0x08B03024u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B03024u) goto L_08B03024;
    return;
L_08B03024:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03050;
      }
      goto L_08B0302C;
    }
L_08B0302C:
    ctx.gpr[31] = (0x08B03034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B03034u) goto L_08B03034;
    return;
L_08B03034:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03048u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12000));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B03048u) goto L_08B03048;
    return;
L_08B03048:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03494;
      }
      goto L_08B03050;
    }
L_08B03050:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08B0305Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 735u, 0x089B2EE0u>(ctx, &aot_mem) && ctx.pc == 0x08B0305Cu) goto L_08B0305C;
    return;
L_08B0305C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03494;
      }
      goto L_08B03064;
    }
L_08B03064:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B030C4;
      }
      goto L_08B0307C;
    }
L_08B0307C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
        goto L_08B030A8;
    }
    goto L_08B03098;
L_08B03098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B030C4;
      }
      goto L_08B030A4;
    }
L_08B030A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    goto L_08B030A8;
L_08B030A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B030D8;
      }
      goto L_08B030B0;
    }
L_08B030B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08B030D8;
      }
      goto L_08B030BC;
    }
L_08B030BC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B030D8;
      }
      goto L_08B030C4;
    }
L_08B030C4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08B030D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 735u, 0x089B2EE0u>(ctx, &aot_mem) && ctx.pc == 0x08B030D0u) goto L_08B030D0;
    return;
L_08B030D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03494;
      }
      goto L_08B030D8;
    }
L_08B030D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B031A4;
      }
      goto L_08B030E4;
    }
L_08B030E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B031A4;
      }
      goto L_08B030F0;
    }
L_08B030F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(620))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08B031A4;
      }
      goto L_08B030FC;
    }
L_08B030FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03148;
      }
      goto L_08B0310C;
    }
L_08B0310C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B03124;
    }
    goto L_08B03118;
L_08B03118:
    ctx.gpr[31] = (0x08B03120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B03120u) goto L_08B03120;
    return;
L_08B03120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B03124;
L_08B03124:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B03134u);
    ctx.gpr[7] = (0u | 70u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B03134u) goto L_08B03134;
    return;
L_08B03134:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03140u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B03140u) goto L_08B03140;
    return;
L_08B03140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0317C;
      }
      goto L_08B03148;
    }
L_08B03148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B03160;
    }
    goto L_08B03154;
L_08B03154:
    ctx.gpr[31] = (0x08B0315Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B0315Cu) goto L_08B0315C;
    return;
L_08B0315C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B03160;
L_08B03160:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B03170u);
    ctx.gpr[7] = (0u | 69u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B03170u) goto L_08B03170;
    return;
L_08B03170:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B0317Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B0317Cu) goto L_08B0317C;
    return;
L_08B0317C:
    ctx.gpr[31] = (0x08B03184u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B03184u) goto L_08B03184;
    return;
L_08B03184:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03198u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21176));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B03198u) goto L_08B03198;
    return;
L_08B03198:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08B03494;
      }
      goto L_08B031A4;
    }
L_08B031A4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08B031B8;
      }
      goto L_08B031B0;
    }
L_08B031B0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08B0331C;
      }
      goto L_08B031B8;
    }
L_08B031B8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B032E0;
      }
      goto L_08B031C0;
    }
L_08B031C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0320C;
      }
      goto L_08B031D0;
    }
L_08B031D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B031E8;
    }
    goto L_08B031DC;
L_08B031DC:
    ctx.gpr[31] = (0x08B031E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B031E4u) goto L_08B031E4;
    return;
L_08B031E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B031E8;
L_08B031E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B031F8u);
    ctx.gpr[7] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B031F8u) goto L_08B031F8;
    return;
L_08B031F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03204u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B03204u) goto L_08B03204;
    return;
L_08B03204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03478;
      }
      goto L_08B0320C;
    }
L_08B0320C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03258;
      }
      goto L_08B0321C;
    }
L_08B0321C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B03234;
    }
    goto L_08B03228;
L_08B03228:
    ctx.gpr[31] = (0x08B03230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B03230u) goto L_08B03230;
    return;
L_08B03230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B03234;
L_08B03234:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B03244u);
    ctx.gpr[7] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B03244u) goto L_08B03244;
    return;
L_08B03244:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03250u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B03250u) goto L_08B03250;
    return;
L_08B03250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03478;
      }
      goto L_08B03258;
    }
L_08B03258:
    ctx.gpr[31] = (0x08B03260u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B02090;
L_08B03260:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B032A4;
      }
      goto L_08B03268;
    }
L_08B03268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B03280;
    }
    goto L_08B03274;
L_08B03274:
    ctx.gpr[31] = (0x08B0327Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B0327Cu) goto L_08B0327C;
    return;
L_08B0327C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B03280;
L_08B03280:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B03290u);
    ctx.gpr[7] = (0u | 78u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B03290u) goto L_08B03290;
    return;
L_08B03290:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B0329Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B0329Cu) goto L_08B0329C;
    return;
L_08B0329C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03478;
      }
      goto L_08B032A4;
    }
L_08B032A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B032BC;
    }
    goto L_08B032B0;
L_08B032B0:
    ctx.gpr[31] = (0x08B032B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B032B8u) goto L_08B032B8;
    return;
L_08B032B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B032BC;
L_08B032BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B032CCu);
    ctx.gpr[7] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B032CCu) goto L_08B032CC;
    return;
L_08B032CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B032D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B032D8u) goto L_08B032D8;
    return;
L_08B032D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03478;
      }
      goto L_08B032E0;
    }
L_08B032E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B032F8;
    }
    goto L_08B032EC;
L_08B032EC:
    ctx.gpr[31] = (0x08B032F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B032F4u) goto L_08B032F4;
    return;
L_08B032F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B032F8;
L_08B032F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B03308u);
    ctx.gpr[7] = (0u | 175u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B03308u) goto L_08B03308;
    return;
L_08B03308:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03314u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B03314u) goto L_08B03314;
    return;
L_08B03314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03478;
      }
      goto L_08B0331C;
    }
L_08B0331C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03444;
      }
      goto L_08B03324;
    }
L_08B03324:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03370;
      }
      goto L_08B03334;
    }
L_08B03334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B0334C;
    }
    goto L_08B03340;
L_08B03340:
    ctx.gpr[31] = (0x08B03348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B03348u) goto L_08B03348;
    return;
L_08B03348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B0334C;
L_08B0334C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B0335Cu);
    ctx.gpr[7] = (0u | 185u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B0335Cu) goto L_08B0335C;
    return;
L_08B0335C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03368u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B03368u) goto L_08B03368;
    return;
L_08B03368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03478;
      }
      goto L_08B03370;
    }
L_08B03370:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B033BC;
      }
      goto L_08B03380;
    }
L_08B03380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B03398;
    }
    goto L_08B0338C;
L_08B0338C:
    ctx.gpr[31] = (0x08B03394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B03394u) goto L_08B03394;
    return;
L_08B03394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B03398;
L_08B03398:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B033A8u);
    ctx.gpr[7] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B033A8u) goto L_08B033A8;
    return;
L_08B033A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B033B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B033B4u) goto L_08B033B4;
    return;
L_08B033B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03478;
      }
      goto L_08B033BC;
    }
L_08B033BC:
    ctx.gpr[31] = (0x08B033C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08B02090;
L_08B033C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03408;
      }
      goto L_08B033CC;
    }
L_08B033CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B033E4;
    }
    goto L_08B033D8;
L_08B033D8:
    ctx.gpr[31] = (0x08B033E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B033E0u) goto L_08B033E0;
    return;
L_08B033E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B033E4;
L_08B033E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B033F4u);
    ctx.gpr[7] = (0u | 79u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B033F4u) goto L_08B033F4;
    return;
L_08B033F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03400u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B03400u) goto L_08B03400;
    return;
L_08B03400:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03478;
      }
      goto L_08B03408;
    }
L_08B03408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B03420;
    }
    goto L_08B03414;
L_08B03414:
    ctx.gpr[31] = (0x08B0341Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B0341Cu) goto L_08B0341C;
    return;
L_08B0341C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B03420;
L_08B03420:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B03430u);
    ctx.gpr[7] = (0u | 91u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B03430u) goto L_08B03430;
    return;
L_08B03430:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B0343Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B0343Cu) goto L_08B0343C;
    return;
L_08B0343C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03478;
      }
      goto L_08B03444;
    }
L_08B03444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08B0345C;
    }
    goto L_08B03450;
L_08B03450:
    ctx.gpr[31] = (0x08B03458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B03458u) goto L_08B03458;
    return;
L_08B03458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B0345C;
L_08B0345C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B0346Cu);
    ctx.gpr[7] = (0u | 179u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B0346Cu) goto L_08B0346C;
    return;
L_08B0346C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03478u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B03478u) goto L_08B03478;
    return;
L_08B03478:
    ctx.gpr[31] = (0x08B03480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B03480u) goto L_08B03480;
    return;
L_08B03480:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03494u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13856));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B03494u) goto L_08B03494;
    return;
L_08B03494:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B034B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_08B034F8;
      }
      goto L_08B034E0;
    }
L_08B034E0:
    ctx.gpr[8] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    ctx.gpr[8] = (0u | 9u);
      if (branch_taken) {
          goto L_08B034F4;
      }
      goto L_08B034EC;
    }
L_08B034EC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B034F8;
      }
      goto L_08B034F4;
    }
L_08B034F4:
    ctx.gpr[7] = (0u | 1u);
    goto L_08B034F8;
L_08B034F8:
    ctx.gpr[8] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[8];
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08B03510;
      }
      goto L_08B03504;
    }
L_08B03504:
    ctx.gpr[8] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B03620;
      }
      goto L_08B03510;
    }
L_08B03510:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B035E4;
      }
      goto L_08B03518;
    }
L_08B03518:
    ctx.gpr[4] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B035A8;
      }
      goto L_08B03524;
    }
L_08B03524:
    ctx.gpr[4] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0356C;
      }
      goto L_08B03530;
    }
L_08B03530:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B03548;
      }
      goto L_08B03538;
    }
L_08B03538:
    ctx.gpr[31] = (0x08B03540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B03540u) goto L_08B03540;
    return;
L_08B03540:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B03548;
L_08B03548:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B03558u);
    ctx.gpr[7] = (0u | 72u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B03558u) goto L_08B03558;
    return;
L_08B03558:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03564u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B03564u) goto L_08B03564;
    return;
L_08B03564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03804;
      }
      goto L_08B0356C;
    }
L_08B0356C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B03584;
      }
      goto L_08B03574;
    }
L_08B03574:
    ctx.gpr[31] = (0x08B0357Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B0357Cu) goto L_08B0357C;
    return;
L_08B0357C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B03584;
L_08B03584:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B03594u);
    ctx.gpr[7] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B03594u) goto L_08B03594;
    return;
L_08B03594:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B035A0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B035A0u) goto L_08B035A0;
    return;
L_08B035A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03804;
      }
      goto L_08B035A8;
    }
L_08B035A8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B035C0;
      }
      goto L_08B035B0;
    }
L_08B035B0:
    ctx.gpr[31] = (0x08B035B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B035B8u) goto L_08B035B8;
    return;
L_08B035B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B035C0;
L_08B035C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B035D0u);
    ctx.gpr[7] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B035D0u) goto L_08B035D0;
    return;
L_08B035D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B035DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B035DCu) goto L_08B035DC;
    return;
L_08B035DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03804;
      }
      goto L_08B035E4;
    }
L_08B035E4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B035FC;
      }
      goto L_08B035EC;
    }
L_08B035EC:
    ctx.gpr[31] = (0x08B035F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B035F4u) goto L_08B035F4;
    return;
L_08B035F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B035FC;
L_08B035FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B0360Cu);
    ctx.gpr[7] = (0u | 175u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B0360Cu) goto L_08B0360C;
    return;
L_08B0360C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03618u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B03618u) goto L_08B03618;
    return;
L_08B03618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03804;
      }
      goto L_08B03620;
    }
L_08B03620:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B036F4;
      }
      goto L_08B03628;
    }
L_08B03628:
    ctx.gpr[4] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B036B8;
      }
      goto L_08B03634;
    }
L_08B03634:
    ctx.gpr[4] = (ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B0367C;
      }
      goto L_08B03640;
    }
L_08B03640:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B03658;
      }
      goto L_08B03648;
    }
L_08B03648:
    ctx.gpr[31] = (0x08B03650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B03650u) goto L_08B03650;
    return;
L_08B03650:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B03658;
L_08B03658:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B03668u);
    ctx.gpr[7] = (0u | 92u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B03668u) goto L_08B03668;
    return;
L_08B03668:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03674u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B03674u) goto L_08B03674;
    return;
L_08B03674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
      if (branch_taken) {
          goto L_08B0372C;
      }
      goto L_08B0367C;
    }
L_08B0367C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B03694;
      }
      goto L_08B03684;
    }
L_08B03684:
    ctx.gpr[31] = (0x08B0368Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B0368Cu) goto L_08B0368C;
    return;
L_08B0368C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B03694;
L_08B03694:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08B036A4u);
    ctx.gpr[7] = (0u | 91u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B036A4u) goto L_08B036A4;
    return;
L_08B036A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B036B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B036B0u) goto L_08B036B0;
    return;
L_08B036B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
      if (branch_taken) {
          goto L_08B0372C;
      }
      goto L_08B036B8;
    }
L_08B036B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B036D0;
      }
      goto L_08B036C0;
    }
L_08B036C0:
    ctx.gpr[31] = (0x08B036C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B036C8u) goto L_08B036C8;
    return;
L_08B036C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B036D0;
L_08B036D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08B036E0u);
    ctx.gpr[7] = (0u | 185u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B036E0u) goto L_08B036E0;
    return;
L_08B036E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B036ECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B036ECu) goto L_08B036EC;
    return;
L_08B036EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
      if (branch_taken) {
          goto L_08B0372C;
      }
      goto L_08B036F4;
    }
L_08B036F4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08B0370C;
      }
      goto L_08B036FC;
    }
L_08B036FC:
    ctx.gpr[31] = (0x08B03704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08B03704u) goto L_08B03704;
    return;
L_08B03704:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08B0370C;
L_08B0370C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08B0371Cu);
    ctx.gpr[7] = (0u | 179u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem) && ctx.pc == 0x08B0371Cu) goto L_08B0371C;
    return;
L_08B0371C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03728u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem) && ctx.pc == 0x08B03728u) goto L_08B03728;
    return;
L_08B03728:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
    goto L_08B0372C;
L_08B0372C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B03768;
      }
      goto L_08B03738;
    }
L_08B03738:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B037CC;
      }
      goto L_08B03744;
    }
L_08B03744:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03798;
      }
      goto L_08B03750;
    }
L_08B03750:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B0375Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B0375Cu) goto L_08B0375C;
    return;
L_08B0375C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
      if (branch_taken) {
          goto L_08B037D0;
      }
      goto L_08B03768;
    }
L_08B03768:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B03790;
      }
      goto L_08B03770;
    }
L_08B03770:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B037CC;
      }
      goto L_08B03778;
    }
L_08B03778:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B03784u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03784u) goto L_08B03784;
    return;
L_08B03784:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
      if (branch_taken) {
          goto L_08B037D0;
      }
      goto L_08B03790;
    }
L_08B03790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
      if (branch_taken) {
          goto L_08B037D0;
      }
      goto L_08B03798;
    }
L_08B03798:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08B037A4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B037A4u) goto L_08B037A4;
    return;
L_08B037A4:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2274)));
      if (branch_taken) {
          goto L_08B037C4;
      }
      goto L_08B037B0;
    }
L_08B037B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    ctx.gpr[7] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B037C4;
      }
      goto L_08B037C0;
    }
L_08B037C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    goto L_08B037C4;
L_08B037C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B037D0;
      }
      goto L_08B037CC;
    }
L_08B037CC:
    ctx.gpr[5] = (0u | 0u);
    goto L_08B037D0;
L_08B037D0:
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08B03804;
      }
      goto L_08B037DC;
    }
L_08B037DC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03804;
      }
      goto L_08B037E4;
    }
L_08B037E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03804;
      }
      goto L_08B037F4;
    }
L_08B037F4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08B03804u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08B03804u) goto L_08B03804;
    return;
L_08B03804:
    ctx.gpr[31] = (0x08B0380Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem) && ctx.pc == 0x08B0380Cu) goto L_08B0380C;
    return;
L_08B0380C:
    ctx.gpr[5] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03820u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13856));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem) && ctx.pc == 0x08B03820u) goto L_08B03820;
    return;
L_08B03820:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03834:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(384));
    ctx.gpr[22] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B038A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 258u, 0x08A696F8u>(ctx, &aot_mem) && ctx.pc == 0x08B038A8u) goto L_08B038A8;
    return;
L_08B038A8:
    ctx.gpr[4] = (2235u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32232));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(368), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08B038C4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(372), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 123u, 0x089DC94Cu>(ctx, &aot_mem) && ctx.pc == 0x08B038C4u) goto L_08B038C4;
    return;
L_08B038C4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(644), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(692), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(694), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(698), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(716), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(880));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(619))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(619))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(619))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(619))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(619))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(619))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-15));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(560), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(864), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08B03A18u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 407u, 0x08B41BC4u>(ctx, &aot_mem) && ctx.pc == 0x08B03A18u) goto L_08B03A18;
    return;
L_08B03A18:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(900), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(562), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(563), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(564), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(565), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B03A84;
      }
      goto L_08B03A6C;
    }
L_08B03A6C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(904), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B03A6C;
      }
      goto L_08B03A84;
    }
L_08B03A84:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(668), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(616))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(620), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(706))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(664), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(616))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(706), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(624), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(700), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(616))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(704), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(705), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[31] = (0x08B03C1Cu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem) && ctx.pc == 0x08B03C1Cu) goto L_08B03C1C;
    return;
L_08B03C1C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08B03C3C;
    }
    goto L_08B03C3C;
L_08B03C3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[6] = (ctx.gpr[17] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(617))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 7u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(614))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(618))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(544), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(708), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(712), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(652), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(558), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(627), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(684), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(688), 0u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08B03CFCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 497u, 0x08A05F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03CFCu) goto L_08B03CFC;
    return;
L_08B03CFC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B03D14;
      }
      goto L_08B03D04;
    }
L_08B03D04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B03D14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 501u, 0x08A05F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03D14u) goto L_08B03D14;
    return;
L_08B03D14:
    ctx.gpr[31] = (0x08B03D1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08B021F0;
L_08B03D1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(696), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(697), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(707), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(768), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(832), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(538))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(538))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08B03D74u);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 180u, 0x089DD23Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03D74u) goto L_08B03D74;
    return;
L_08B03D74:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B03DB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[31] = (0x08B03E00u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03E00u) goto L_08B03E00;
    return;
L_08B03E00:
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B03E34;
      }
      goto L_08B03E0C;
    }
L_08B03E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08B03E34;
      }
      goto L_08B03E1C;
    }
L_08B03E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B03E34;
      }
      goto L_08B03E28;
    }
L_08B03E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08B03E50;
      }
      goto L_08B03E34;
    }
L_08B03E34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08B03E5C;
      }
      goto L_08B03E48;
    }
L_08B03E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03E60;
      }
      goto L_08B03E50;
    }
L_08B03E50:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 29u, 0x08B041E8u>(ctx, &aot_mem); return;
      }
      goto L_08B03E5C;
    }
L_08B03E5C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08B03E60;
L_08B03E60:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 0u);
      if (branch_taken) {
          goto L_08B03F84;
      }
      goto L_08B03E80;
    }
L_08B03E80:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[19] = (ctx.gpr[29] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    goto L_08B03E8C;
L_08B03E8C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B03E98u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03E98u) goto L_08B03E98;
    return;
L_08B03E98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08B03F70;
      }
      goto L_08B03EA0;
    }
L_08B03EA0:
    ctx.gpr[31] = (0x08B03EA8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03EA8u) goto L_08B03EA8;
    return;
L_08B03EA8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08B03F70;
      }
      goto L_08B03EB0;
    }
L_08B03EB0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B03EBCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03EBCu) goto L_08B03EBC;
    return;
L_08B03EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[31] = (0x08B03ED4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03ED4u) goto L_08B03ED4;
    return;
L_08B03ED4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03EFC;
      }
      goto L_08B03EDC;
    }
L_08B03EDC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(2274)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08B03EECu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 78u, 0x089A8ACCu>(ctx, &aot_mem) && ctx.pc == 0x08B03EECu) goto L_08B03EEC;
    return;
L_08B03EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08B03EFC;
      }
      goto L_08B03EF8;
    }
L_08B03EF8:
    ctx.gpr[17] = (0u | 0u);
    goto L_08B03EFC;
L_08B03EFC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F70;
      }
      goto L_08B03F04;
    }
L_08B03F04:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B03F10u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03F10u) goto L_08B03F10;
    return;
L_08B03F10:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B03F44;
      }
      goto L_08B03F20;
    }
L_08B03F20:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B03F2Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03F2Cu) goto L_08B03F2C;
    return;
L_08B03F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08B03F70;
      }
      goto L_08B03F44;
    }
L_08B03F44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03F70;
      }
      goto L_08B03F50;
    }
L_08B03F50:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08B03F5Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03F5Cu) goto L_08B03F5C;
    return;
L_08B03F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    goto L_08B03F70;
L_08B03F70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B03E8C;
      }
      goto L_08B03F84;
    }
L_08B03F84:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 2u, 0x08B04008u>(ctx, &aot_mem); return;
      }
      goto L_08B03F94;
    }
L_08B03F94:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    goto L_08B03FA0;
L_08B03FA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08B03FACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08B03FACu) goto L_08B03FAC;
    return;
L_08B03FAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B03FEC;
      }
      goto L_08B03FB4;
    }
L_08B03FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B03FEC;
      }
      goto L_08B03FC0;
    }
L_08B03FC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B03FEC;
      }
      goto L_08B03FCC;
    }
L_08B03FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08B03FEC;
      }
      goto L_08B03FD8;
    }
L_08B03FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 29u, 0x08B041E8u>(ctx, &aot_mem); return;
      }
      goto L_08B03FEC;
    }
L_08B03FEC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    ctx.pc = 0x08B04000u; return;
}

void recomp_unit_0191(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0191_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_191(Runtime &runtime) {
    runtime.register_generated_unit(191u, 0x08B00000u, 16384u, &recomp_unit_0191, &recomp_unit_0191_entry);
    runtime.register_function(0x08B00000u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00004u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00014u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00038u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00044u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0005Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0006Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00088u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0008Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B000E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00158u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00160u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0019Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B001FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00214u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00240u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00250u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00258u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00264u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0026Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00278u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B002F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00330u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00340u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00348u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00350u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00360u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00368u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0036Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00384u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B003FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00404u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00414u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0041Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00430u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0043Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00444u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0044Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00454u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00460u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0046Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00474u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0047Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00484u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0048Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00494u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0049Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B004F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00508u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00520u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00540u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00548u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00554u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0055Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00564u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00578u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B005F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00604u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00614u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00620u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0062Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00634u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00638u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00640u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00648u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00658u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00660u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00668u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00678u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00680u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00694u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0069Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B006F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00708u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00724u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00734u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0073Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00744u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00750u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00760u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0076Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00778u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00788u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00794u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B007DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00810u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00818u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00828u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00830u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0083Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00844u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0084Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00854u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0085Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00860u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0086Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00878u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0087Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00888u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00890u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B008F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00904u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00914u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0091Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00928u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00934u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00944u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0094Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00954u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00964u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00970u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0097Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00984u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0098Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00998u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B009F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00A98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ABCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00AD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00B98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00BF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00C90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00CF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00D78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00DE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00E98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ECCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00ED4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00EF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00F9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B00FF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0100Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01014u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0101Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01020u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01038u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01054u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01060u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0106Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01074u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0107Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01080u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01088u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B010F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01100u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01108u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01110u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01118u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01120u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0112Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01134u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01140u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01150u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0115Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01164u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0116Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01178u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01180u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01184u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01198u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B011F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01208u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01228u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01244u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01274u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01298u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B012FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0131Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01324u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0133Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01350u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01358u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01360u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01374u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01388u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B013D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01400u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01408u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01410u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01430u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01450u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01470u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0147Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01480u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01490u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B014F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01500u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01520u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01528u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01548u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01554u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0155Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01560u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01570u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01584u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01590u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B015FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01604u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01634u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0164Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01654u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01674u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0167Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01688u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B016E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01710u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01718u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01730u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01760u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01768u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01770u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01778u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0178Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01794u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01798u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B017FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01804u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01844u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01894u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B018F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01908u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01914u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0191Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01924u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B019C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01A80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01AECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01B9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01BF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C64u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01C90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01CFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01D98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01DF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01E98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01EE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01F9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B01FFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0200Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02018u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02024u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02038u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02040u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02050u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0205Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02064u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02090u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B020F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02100u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02120u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02138u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0214Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02158u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02160u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0216Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02184u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0219Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021D4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B021F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02208u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02228u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02234u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02240u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0224Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02258u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02260u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02268u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02270u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02278u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02280u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0228Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02298u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B022F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02304u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02310u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02324u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02334u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02344u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02354u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02364u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02370u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02384u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B023FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0240Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0241Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02424u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0242Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0245Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B024FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02500u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02524u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02538u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02540u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02544u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B025F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02610u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0264Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02668u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B026B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02724u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0279Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02824u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02844u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02864u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02888u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B028F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0291Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02950u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02978u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02980u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02988u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029ACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B029F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02A78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02AFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B58u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02B98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BD0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02BF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02C9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CC8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02CFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D08u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D78u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02D9Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DE8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02DF4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E24u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E30u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E40u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E4Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E90u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02E98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02ED0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EE4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EF0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02EFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F38u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F54u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F68u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F7Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F88u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02F98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FA4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FB8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FC4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FD4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B02FE0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0301Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03024u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0302Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03034u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03048u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03050u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0305Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03064u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0307Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03098u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030F0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B030FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0310Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03118u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03120u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03124u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03134u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03140u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03148u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03154u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0315Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03160u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03170u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0317Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03184u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03198u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031E8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B031F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03204u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0320Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0321Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03228u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03230u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03234u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03244u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03250u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03258u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03260u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03268u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03274u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0327Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03280u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03290u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0329Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B032F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03308u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03314u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0331Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03324u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03334u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03340u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03348u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0334Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0335Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03368u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03370u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03380u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0338Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03394u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03398u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033B4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033BCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033D8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B033F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03400u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03408u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03414u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0341Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03420u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03430u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0343Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03444u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03450u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03458u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0345Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0346Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03478u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03480u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03494u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B034F8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03504u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03510u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03518u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03524u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03530u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03538u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03540u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03548u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03558u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03564u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0356Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03574u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0357Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03584u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03594u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035A0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B035FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0360Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03618u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03620u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03628u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03634u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03640u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03648u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03650u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03658u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03668u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03674u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0367Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03684u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0368Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03694u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036B8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036C8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036E0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036ECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B036FCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03704u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0370Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0371Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03728u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0372Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03738u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03744u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03750u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0375Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03768u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03770u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03778u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03784u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03790u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03798u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037A4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037B0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037C0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037CCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037D0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037DCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037E4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B037F4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03804u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B0380Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03820u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03834u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038A8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B038C4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A18u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A6Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03A84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03C3Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03CFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D14u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03D74u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03DB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E00u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E0Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E1Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E28u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E34u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E48u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E60u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E80u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E8Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03E98u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EA8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EB0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EBCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03ED4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EDCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EECu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EF8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03EFCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F04u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F10u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F20u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F2Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F44u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F50u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F5Cu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F70u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F84u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03F94u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FA0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FACu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FB4u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FC0u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FCCu, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FD8u, &recomp_unit_0191, "recomp_unit_0191");
    runtime.register_function(0x08B03FECu, &recomp_unit_0191, "recomp_unit_0191");
}
} // namespace psprecomp
