#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0097[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0,
    6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 10, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0,
    0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0,
    0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    32, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    36, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0,
    0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 80, 81, 0, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 0, 85, 0,
    86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89,
    90, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 0, 96, 97, 0, 0, 98, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 108, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 118, 0,
    119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0,
    0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 141, 142, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145,
    0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 152, 153, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 158,
    159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0,
    0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 175, 0,
    176, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0,
    0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197,
    0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 206, 207, 0,
    208, 0, 0, 209, 0, 0, 210, 0, 211, 212, 213, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0,
    218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0,
    0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 235, 0, 236,
    0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0,
    248, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0,
    258, 259, 0, 260, 0, 0, 261, 0, 0, 262, 0, 263, 264, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269,
    0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 278,
    0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0,
    287, 0, 288, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298,
    0, 299, 0, 300, 0, 301, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 307, 0, 308, 0,
    0, 309, 0, 0, 310, 0, 311, 312, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 319, 320, 0, 321, 0, 0, 322, 0, 0, 323, 0, 324, 325, 326, 0, 0, 327, 0, 0,
    0, 0, 0, 328, 329, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 333, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0, 0, 338, 0, 339, 0, 0,
    0, 340, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 353, 354, 355, 0, 0, 356, 0, 0,
    0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0, 363, 0, 364, 365, 0, 366, 0, 0, 367, 0, 0, 368, 0,
    369, 370, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 375, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    378, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386,
    0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 0,
    0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 394, 395, 0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 400, 401, 0, 0, 402,
    0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 405, 0, 406, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 409, 0, 410, 411, 0,
    0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    416, 0, 417, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 421, 422, 423, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0,
    0, 427, 0, 428, 429, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434,
    435, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 440, 441, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 450, 0, 451, 0, 0, 452, 0,
    0, 453, 0, 454, 455, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0,
    0, 0, 0, 0, 460, 0, 461, 462, 0, 463, 0, 0, 464, 0, 0, 465, 0, 466, 467, 468, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 476, 0, 477,
    0, 0, 478, 0, 0, 479, 0, 480, 481, 482, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 490, 0, 491, 0, 0, 492, 0, 0, 493, 0, 494, 495, 496,
    0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 502, 0, 503, 0, 0, 504, 0, 0, 505, 0, 506, 507, 508, 0, 0, 509, 0, 0, 0,
    0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514,
    515, 0, 516, 0, 0, 517, 0, 0, 518, 0, 519, 520, 521, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 525, 0, 0, 0, 0, 0, 526,
    0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 530, 531, 0, 532, 0, 0, 533, 0, 0,
    534, 0, 535, 536, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0,
    0, 0, 0, 0, 0, 543, 0, 544, 545, 0, 546, 0, 0, 547, 0, 0, 548, 0, 549, 550, 551, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0,
    554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 557, 558, 0, 559, 0, 0, 560, 0, 0, 561, 0, 562,
    563, 564, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569,
    0, 570, 571, 0, 572, 0, 0, 573, 0, 0, 574, 0, 575, 576, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 583, 584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 588, 589, 590, 0, 0, 591, 0,
    0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 595, 0, 596, 597, 0, 598, 0,
    0, 599, 0, 0, 600, 0, 601, 602, 603, 0, 0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0,
    0, 0, 0, 0, 0, 0, 608, 0, 609, 610, 0, 611, 0, 0, 612, 0, 0, 613, 0, 614, 615, 616, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 622, 0, 623, 0, 0, 624, 0, 0, 625,
    0, 626, 627, 628, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0,
    0, 0, 632, 0, 633, 634, 0, 635, 0, 0, 636, 0, 0, 637, 0, 638, 639, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 646, 0, 647, 0, 0, 648, 0, 0, 649, 0, 650, 651, 652,
    0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 656, 0,
    657, 658, 0, 659, 0, 0, 660, 0, 0, 661, 0, 662, 663, 664, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 668, 0, 669, 670, 0, 671, 0, 0, 672, 0, 0, 673, 0, 674, 675, 676, 0, 0, 677, 0,
    0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 682, 0, 683,
    0, 0, 684, 0, 0, 685, 0, 686, 687, 688, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 696, 0, 697, 0, 0, 698, 0, 0, 699, 0, 700, 701, 702,
    0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 706, 0, 707, 708,
    0, 709, 0, 0, 710, 0, 0, 711, 0, 712, 713, 714, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    717, 0, 0, 0, 0, 0, 0, 0, 718, 0, 719, 720, 0, 721, 0, 0, 722, 0, 0, 723, 0, 724, 725, 726, 0, 0, 727, 0, 0, 0, 0, 0,
    0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 732, 0, 0, 733, 0,
    734, 0, 0, 735, 0, 736, 0, 737, 0, 0, 738, 0, 739, 0, 740, 0, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 746, 0, 0, 747, 0, 748, 749, 0, 750, 0, 0, 751, 0, 0, 752, 0, 753,
    754, 755, 0, 0, 756, 0, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0,
    0, 0, 0, 0, 761, 0, 762, 763, 0, 764, 0, 0, 765, 0, 0, 766, 0, 767, 768, 769, 0, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0, 774, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 778, 779, 0, 0, 780,
    0, 781, 0, 0, 782, 0, 783, 0, 784, 0, 0, 785, 0, 786, 0, 787, 0, 0, 788, 0, 789, 0, 790, 0, 0, 791, 0, 792, 0, 793, 0, 0,
    794, 0, 795, 0, 796, 0, 0, 797, 0, 798, 0, 799, 0, 0, 800, 0, 801, 0, 802, 0, 0, 803, 0, 804, 0, 805, 0, 0, 806, 0, 807, 0,
    808, 0, 0, 809, 0, 810, 0, 811, 0, 0, 812, 0, 813, 0, 814, 815, 0, 816, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820,
    0, 821, 0, 822, 0, 0, 0, 823, 0, 0, 824, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0,
    0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 830, 0, 0, 831, 0, 832, 0, 833, 0, 834,
    0, 835, 0, 0, 836, 0, 0, 0, 837, 0, 0, 838, 0, 0, 839, 0, 0, 0, 840, 0, 0, 841, 0, 842, 0, 843, 0, 0, 844, 0, 845, 0,
    0, 0, 0, 0, 0, 0, 0, 846, 0, 0, 847, 0, 848, 0, 849, 0, 850, 0, 0, 0, 851, 0, 0, 0, 852, 0, 853, 0, 854, 0, 855, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 859, 0, 860, 0,
    861, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 863, 0, 0, 864, 0, 0, 865, 0, 866, 867, 0, 868, 0, 869, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 870, 0, 871, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0,
    0, 0, 874, 0, 0, 0, 875, 0, 876, 0, 877, 0, 878, 0, 0, 0, 0, 0, 0, 0, 879, 0, 0, 880, 0, 0, 881, 0, 0, 882, 0, 883,
    884, 0, 885, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 891, 0, 0, 892, 0,
    893, 0, 894, 0, 0, 895, 0, 896, 0, 897, 0, 0, 898, 0, 0, 899, 0, 0, 900, 901, 902, 0, 903, 0, 0, 904, 0, 0, 905, 0, 0, 906,
    907, 908, 0, 909, 0, 0, 910, 0, 0, 911, 0, 0, 912, 913, 914, 0, 915, 0, 0, 916, 0, 917, 0, 918, 0, 0, 919, 0, 920, 0, 921, 0,
    0, 922, 0, 923, 0, 924, 0, 0, 925, 0, 926, 0, 927, 0, 0, 928, 0, 0, 929, 0, 0, 930, 931, 932, 0, 933, 0, 0, 934, 0, 0, 935,
    0, 0, 936, 937, 938, 0, 939, 0, 0, 940, 0, 0, 0, 941, 0, 0, 0, 0, 0, 0, 0, 0, 942, 0, 943, 0, 0, 0, 0, 944, 0, 0,
    0, 0, 0, 945, 0, 946, 947, 0, 0, 948, 0, 0, 0, 0, 0, 0, 949, 0, 0, 950, 0, 0, 0, 0, 0, 0, 0, 951, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 952, 0, 0, 0, 953, 0, 954, 0, 955, 0, 956, 0, 0, 957, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    958, 959, 0, 960, 0, 0, 961, 0, 0, 0, 0, 0, 0, 0, 0, 0, 962, 963, 0, 964, 0, 0, 965, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    966, 967, 0, 968, 0, 0, 969, 0, 0, 0, 0, 0, 0, 0, 0, 0, 970, 971, 0, 972, 0, 0, 973, 0, 974, 975, 0, 976, 0, 0, 977, 0,
    978, 979, 0, 980, 0, 0, 981, 0, 982, 983, 0, 984, 0, 0, 985, 0, 986, 987, 0, 988, 0, 0, 989, 0, 0, 990, 0, 0, 991, 992, 0, 993,
    0, 0, 994, 0, 0, 995, 996, 997, 0, 998, 0, 0, 999, 0, 0, 1000, 0, 0, 1001, 1002, 0, 1003, 0, 0, 1004, 0, 0, 1005, 1006, 1007, 0, 1008,
    0, 0, 1009, 0, 0, 1010, 0, 0, 1011, 1012, 0, 1013, 0, 0, 1014, 0, 0, 1015, 1016, 1017, 0, 1018, 0, 0, 1019, 0, 0, 1020, 0, 0, 1021, 1022,
    0, 1023, 0, 0, 1024, 0, 0, 1025, 1026, 1027, 0, 1028, 0, 0, 0, 0, 0, 0, 0, 0, 1029, 0, 0, 0, 1030, 0, 1031, 0, 1032, 0, 1033, 0,
    0, 0, 1034, 0, 0, 0, 1035, 0, 1036, 0, 1037, 0, 1038, 1039, 0, 0, 0, 0, 1040, 0, 0, 0, 0, 1041, 0, 1042, 0, 1043, 0, 1044, 0, 1045,
    1046, 0, 0, 0, 1047, 0, 0, 0, 0, 1048, 0, 1049, 0, 1050, 0, 1051, 0, 1052, 1053, 0, 0, 0, 1054, 0, 0, 0, 0, 1055, 0, 1056, 0, 1057,
    0, 1058, 0, 1059, 1060, 0, 0, 0, 1061, 0, 0, 0, 0, 1062, 0, 1063, 0, 1064, 0, 1065, 0, 1066, 1067, 0, 0, 0, 1068, 0, 0, 1069,
};
void recomp_unit_0097_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08988000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0097[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08988000;
    case 2u: goto L_08988040;
    case 3u: goto L_0898804C;
    case 4u: goto L_08988060;
    case 5u: goto L_08988068;
    case 6u: goto L_08988080;
    case 7u: goto L_089880AC;
    case 8u: goto L_089880B4;
    case 9u: goto L_089880BC;
    case 10u: goto L_089880C4;
    case 11u: goto L_089880C8;
    case 12u: goto L_089880D8;
    case 13u: goto L_089880F4;
    case 14u: goto L_08988108;
    case 15u: goto L_0898812C;
    case 16u: goto L_08988134;
    case 17u: goto L_0898813C;
    case 18u: goto L_08988144;
    case 19u: goto L_08988158;
    case 20u: goto L_08988170;
    case 21u: goto L_08988178;
    case 22u: goto L_08988194;
    case 23u: goto L_0898819C;
    case 24u: goto L_089881C0;
    case 25u: goto L_089881E8;
    case 26u: goto L_08988204;
    case 27u: goto L_0898820C;
    case 28u: goto L_08988214;
    case 29u: goto L_0898821C;
    case 30u: goto L_0898822C;
    case 31u: goto L_08988240;
    case 32u: goto L_08988280;
    case 33u: goto L_08988284;
    case 34u: goto L_08988298;
    case 35u: goto L_089882C4;
    case 36u: goto L_08988300;
    case 37u: goto L_08988304;
    case 38u: goto L_08988314;
    case 39u: goto L_08988334;
    case 40u: goto L_08988344;
    case 41u: goto L_08988354;
    case 42u: goto L_0898836C;
    case 43u: goto L_08988378;
    case 44u: goto L_089883B4;
    case 45u: goto L_089883C0;
    case 46u: goto L_089883DC;
    case 47u: goto L_08988420;
    case 48u: goto L_08988450;
    case 49u: goto L_08988454;
    case 50u: goto L_08988464;
    case 51u: goto L_089884A0;
    case 52u: goto L_089884B4;
    case 53u: goto L_089884B8;
    case 54u: goto L_089884D0;
    case 55u: goto L_089884E8;
    case 56u: goto L_089884FC;
    case 57u: goto L_08988510;
    case 58u: goto L_08988554;
    case 59u: goto L_089885B8;
    case 60u: goto L_089885C4;
    case 61u: goto L_089885FC;
    case 62u: goto L_0898862C;
    case 63u: goto L_0898863C;
    case 64u: goto L_0898864C;
    case 65u: goto L_08988654;
    case 66u: goto L_0898866C;
    case 67u: goto L_08988678;
    case 68u: goto L_089886AC;
    case 69u: goto L_089886C4;
    case 70u: goto L_089886E0;
    case 71u: goto L_089886F4;
    case 72u: goto L_08988708;
    case 73u: goto L_08988710;
    case 74u: goto L_08988728;
    case 75u: goto L_08988830;
    case 76u: goto L_08988848;
    case 77u: goto L_08988890;
    case 78u: goto L_089888A4;
    case 79u: goto L_089888B4;
    case 80u: goto L_089888BC;
    case 81u: goto L_089888C0;
    case 82u: goto L_089888D0;
    case 83u: goto L_089888DC;
    case 84u: goto L_089888E8;
    case 85u: goto L_089888F8;
    case 86u: goto L_08988900;
    case 87u: goto L_0898891C;
    case 88u: goto L_0898892C;
    case 89u: goto L_0898897C;
    case 90u: goto L_08988980;
    case 91u: goto L_08988988;
    case 92u: goto L_08988998;
    case 93u: goto L_089889A8;
    case 94u: goto L_089889B0;
    case 95u: goto L_089889BC;
    case 96u: goto L_089889D8;
    case 97u: goto L_089889DC;
    case 98u: goto L_089889E8;
    case 99u: goto L_08988A2C;
    case 100u: goto L_08988A38;
    case 101u: goto L_08988A64;
    case 102u: goto L_08988AA0;
    case 103u: goto L_08988AA8;
    case 104u: goto L_08988AB8;
    case 105u: goto L_08988B08;
    case 106u: goto L_08988B1C;
    case 107u: goto L_08988B2C;
    case 108u: goto L_08988B34;
    case 109u: goto L_08988B38;
    case 110u: goto L_08988B48;
    case 111u: goto L_08988B54;
    case 112u: goto L_08988B60;
    case 113u: goto L_08988B70;
    case 114u: goto L_08988B78;
    case 115u: goto L_08988B94;
    case 116u: goto L_08988BA4;
    case 117u: goto L_08988BF4;
    case 118u: goto L_08988BF8;
    case 119u: goto L_08988C00;
    case 120u: goto L_08988C10;
    case 121u: goto L_08988C20;
    case 122u: goto L_08988C28;
    case 123u: goto L_08988C34;
    case 124u: goto L_08988C50;
    case 125u: goto L_08988C54;
    case 126u: goto L_08988C60;
    case 127u: goto L_08988CA8;
    case 128u: goto L_08988CB4;
    case 129u: goto L_08988CE0;
    case 130u: goto L_08988CF0;
    case 131u: goto L_08988CF8;
    case 132u: goto L_08988D24;
    case 133u: goto L_08988D54;
    case 134u: goto L_08988D64;
    case 135u: goto L_08988D78;
    case 136u: goto L_08988D84;
    case 137u: goto L_08988D8C;
    case 138u: goto L_08988D9C;
    case 139u: goto L_08988DA4;
    case 140u: goto L_08988DB8;
    case 141u: goto L_08988DC0;
    case 142u: goto L_08988DC4;
    case 143u: goto L_08988DCC;
    case 144u: goto L_08988DE8;
    case 145u: goto L_08988DFC;
    case 146u: goto L_08988E04;
    case 147u: goto L_08988E20;
    case 148u: goto L_08988E28;
    case 149u: goto L_08988E34;
    case 150u: goto L_08988E3C;
    case 151u: goto L_08988E44;
    case 152u: goto L_08988E4C;
    case 153u: goto L_08988E50;
    case 154u: goto L_08988E58;
    case 155u: goto L_08988E64;
    case 156u: goto L_08988E70;
    case 157u: goto L_08988E78;
    case 158u: goto L_08988E7C;
    case 159u: goto L_08988E80;
    case 160u: goto L_08988E8C;
    case 161u: goto L_08988EA8;
    case 162u: goto L_08988EB8;
    case 163u: goto L_08988EC8;
    case 164u: goto L_08988ED8;
    case 165u: goto L_08988EE8;
    case 166u: goto L_08988EF8;
    case 167u: goto L_08988F08;
    case 168u: goto L_08988F18;
    case 169u: goto L_08988F28;
    case 170u: goto L_08988F38;
    case 171u: goto L_08988F40;
    case 172u: goto L_08988F48;
    case 173u: goto L_08988F5C;
    case 174u: goto L_08988F64;
    case 175u: goto L_08988F78;
    case 176u: goto L_08988F80;
    case 177u: goto L_08988F94;
    case 178u: goto L_08988F9C;
    case 179u: goto L_08988FB0;
    case 180u: goto L_08988FB8;
    case 181u: goto L_08988FCC;
    case 182u: goto L_08988FD4;
    case 183u: goto L_08988FE8;
    case 184u: goto L_08988FF0;
    case 185u: goto L_08989004;
    case 186u: goto L_0898900C;
    case 187u: goto L_08989020;
    case 188u: goto L_08989028;
    case 189u: goto L_0898903C;
    case 190u: goto L_08989044;
    case 191u: goto L_0898904C;
    case 192u: goto L_08989054;
    case 193u: goto L_0898905C;
    case 194u: goto L_08989064;
    case 195u: goto L_0898906C;
    case 196u: goto L_08989074;
    case 197u: goto L_0898907C;
    case 198u: goto L_08989084;
    case 199u: goto L_08989094;
    case 200u: goto L_089890AC;
    case 201u: goto L_089890C8;
    case 202u: goto L_089890D0;
    case 203u: goto L_089890DC;
    case 204u: goto L_089890E4;
    case 205u: goto L_089890EC;
    case 206u: goto L_089890F4;
    case 207u: goto L_089890F8;
    case 208u: goto L_08989100;
    case 209u: goto L_0898910C;
    case 210u: goto L_08989118;
    case 211u: goto L_08989120;
    case 212u: goto L_08989124;
    case 213u: goto L_08989128;
    case 214u: goto L_08989134;
    case 215u: goto L_08989150;
    case 216u: goto L_08989160;
    case 217u: goto L_08989170;
    case 218u: goto L_08989180;
    case 219u: goto L_08989190;
    case 220u: goto L_089891A0;
    case 221u: goto L_089891B0;
    case 222u: goto L_089891C0;
    case 223u: goto L_089891D0;
    case 224u: goto L_089891E0;
    case 225u: goto L_089891E8;
    case 226u: goto L_089891F0;
    case 227u: goto L_08989204;
    case 228u: goto L_0898920C;
    case 229u: goto L_08989220;
    case 230u: goto L_08989228;
    case 231u: goto L_0898923C;
    case 232u: goto L_08989244;
    case 233u: goto L_08989258;
    case 234u: goto L_08989260;
    case 235u: goto L_08989274;
    case 236u: goto L_0898927C;
    case 237u: goto L_08989290;
    case 238u: goto L_08989298;
    case 239u: goto L_089892AC;
    case 240u: goto L_089892B4;
    case 241u: goto L_089892C8;
    case 242u: goto L_089892D0;
    case 243u: goto L_089892D8;
    case 244u: goto L_089892E0;
    case 245u: goto L_089892E8;
    case 246u: goto L_089892F0;
    case 247u: goto L_089892F8;
    case 248u: goto L_08989300;
    case 249u: goto L_08989308;
    case 250u: goto L_08989310;
    case 251u: goto L_08989320;
    case 252u: goto L_08989338;
    case 253u: goto L_08989354;
    case 254u: goto L_0898935C;
    case 255u: goto L_08989368;
    case 256u: goto L_08989370;
    case 257u: goto L_08989378;
    case 258u: goto L_08989380;
    case 259u: goto L_08989384;
    case 260u: goto L_0898938C;
    case 261u: goto L_08989398;
    case 262u: goto L_089893A4;
    case 263u: goto L_089893AC;
    case 264u: goto L_089893B0;
    case 265u: goto L_089893B4;
    case 266u: goto L_089893C0;
    case 267u: goto L_089893DC;
    case 268u: goto L_089893EC;
    case 269u: goto L_089893FC;
    case 270u: goto L_0898940C;
    case 271u: goto L_0898941C;
    case 272u: goto L_0898942C;
    case 273u: goto L_0898943C;
    case 274u: goto L_0898944C;
    case 275u: goto L_0898945C;
    case 276u: goto L_0898946C;
    case 277u: goto L_08989474;
    case 278u: goto L_0898947C;
    case 279u: goto L_08989490;
    case 280u: goto L_08989498;
    case 281u: goto L_089894AC;
    case 282u: goto L_089894B4;
    case 283u: goto L_089894C8;
    case 284u: goto L_089894D0;
    case 285u: goto L_089894E4;
    case 286u: goto L_089894EC;
    case 287u: goto L_08989500;
    case 288u: goto L_08989508;
    case 289u: goto L_0898951C;
    case 290u: goto L_08989524;
    case 291u: goto L_08989538;
    case 292u: goto L_08989540;
    case 293u: goto L_08989554;
    case 294u: goto L_0898955C;
    case 295u: goto L_08989564;
    case 296u: goto L_0898956C;
    case 297u: goto L_08989574;
    case 298u: goto L_0898957C;
    case 299u: goto L_08989584;
    case 300u: goto L_0898958C;
    case 301u: goto L_08989594;
    case 302u: goto L_0898959C;
    case 303u: goto L_089895AC;
    case 304u: goto L_089895C4;
    case 305u: goto L_089895E4;
    case 306u: goto L_089895EC;
    case 307u: goto L_089895F0;
    case 308u: goto L_089895F8;
    case 309u: goto L_08989604;
    case 310u: goto L_08989610;
    case 311u: goto L_08989618;
    case 312u: goto L_0898961C;
    case 313u: goto L_08989620;
    case 314u: goto L_0898962C;
    case 315u: goto L_08989648;
    case 316u: goto L_0898967C;
    case 317u: goto L_089896A0;
    case 318u: goto L_089896AC;
    case 319u: goto L_089896B4;
    case 320u: goto L_089896B8;
    case 321u: goto L_089896C0;
    case 322u: goto L_089896CC;
    case 323u: goto L_089896D8;
    case 324u: goto L_089896E0;
    case 325u: goto L_089896E4;
    case 326u: goto L_089896E8;
    case 327u: goto L_089896F4;
    case 328u: goto L_0898970C;
    case 329u: goto L_08989710;
    case 330u: goto L_08989724;
    case 331u: goto L_0898972C;
    case 332u: goto L_08989734;
    case 333u: goto L_0898973C;
    case 334u: goto L_08989744;
    case 335u: goto L_0898974C;
    case 336u: goto L_08989758;
    case 337u: goto L_08989760;
    case 338u: goto L_0898976C;
    case 339u: goto L_08989774;
    case 340u: goto L_08989784;
    case 341u: goto L_0898978C;
    case 342u: goto L_0898979C;
    case 343u: goto L_089897A4;
    case 344u: goto L_089897B4;
    case 345u: goto L_089897BC;
    case 346u: goto L_089897CC;
    case 347u: goto L_089897FC;
    case 348u: goto L_0898982C;
    case 349u: goto L_08989834;
    case 350u: goto L_08989840;
    case 351u: goto L_0898984C;
    case 352u: goto L_08989858;
    case 353u: goto L_08989860;
    case 354u: goto L_08989864;
    case 355u: goto L_08989868;
    case 356u: goto L_08989874;
    case 357u: goto L_0898988C;
    case 358u: goto L_08989894;
    case 359u: goto L_089898A8;
    case 360u: goto L_089898B0;
    case 361u: goto L_089898B8;
    case 362u: goto L_089898C0;
    case 363u: goto L_089898CC;
    case 364u: goto L_089898D4;
    case 365u: goto L_089898D8;
    case 366u: goto L_089898E0;
    case 367u: goto L_089898EC;
    case 368u: goto L_089898F8;
    case 369u: goto L_08989900;
    case 370u: goto L_08989904;
    case 371u: goto L_08989908;
    case 372u: goto L_08989914;
    case 373u: goto L_0898992C;
    case 374u: goto L_08989938;
    case 375u: goto L_08989940;
    case 376u: goto L_08989948;
    case 377u: goto L_08989954;
    case 378u: goto L_08989980;
    case 379u: goto L_0898998C;
    case 380u: goto L_08989998;
    case 381u: goto L_089899A4;
    case 382u: goto L_089899B4;
    case 383u: goto L_089899B8;
    case 384u: goto L_089899C0;
    case 385u: goto L_08989A68;
    case 386u: goto L_08989A7C;
    case 387u: goto L_08989AA0;
    case 388u: goto L_08989AD8;
    case 389u: goto L_08989AE8;
    case 390u: goto L_08989AF4;
    case 391u: goto L_08989B04;
    case 392u: goto L_08989B10;
    case 393u: goto L_08989B34;
    case 394u: goto L_08989B3C;
    case 395u: goto L_08989B40;
    case 396u: goto L_08989B48;
    case 397u: goto L_08989B54;
    case 398u: goto L_08989B60;
    case 399u: goto L_08989B68;
    case 400u: goto L_08989B6C;
    case 401u: goto L_08989B70;
    case 402u: goto L_08989B7C;
    case 403u: goto L_08989B94;
    case 404u: goto L_08989BA8;
    case 405u: goto L_08989BB8;
    case 406u: goto L_08989BC0;
    case 407u: goto L_08989BD0;
    case 408u: goto L_08989BD8;
    case 409u: goto L_08989BEC;
    case 410u: goto L_08989BF4;
    case 411u: goto L_08989BF8;
    case 412u: goto L_08989C04;
    case 413u: goto L_08989C28;
    case 414u: goto L_08989C3C;
    case 415u: goto L_08989C58;
    case 416u: goto L_08989C80;
    case 417u: goto L_08989C88;
    case 418u: goto L_08989C94;
    case 419u: goto L_08989CA0;
    case 420u: goto L_08989CAC;
    case 421u: goto L_08989CB4;
    case 422u: goto L_08989CB8;
    case 423u: goto L_08989CBC;
    case 424u: goto L_08989CC8;
    case 425u: goto L_08989CE0;
    case 426u: goto L_08989CF4;
    case 427u: goto L_08989D04;
    case 428u: goto L_08989D0C;
    case 429u: goto L_08989D10;
    case 430u: goto L_08989D20;
    case 431u: goto L_08989D28;
    case 432u: goto L_08989D54;
    case 433u: goto L_08989D74;
    case 434u: goto L_08989D7C;
    case 435u: goto L_08989D80;
    case 436u: goto L_08989D88;
    case 437u: goto L_08989D94;
    case 438u: goto L_08989DA0;
    case 439u: goto L_08989DA8;
    case 440u: goto L_08989DAC;
    case 441u: goto L_08989DB0;
    case 442u: goto L_08989DBC;
    case 443u: goto L_08989DD4;
    case 444u: goto L_08989DDC;
    case 445u: goto L_08989E04;
    case 446u: goto L_08989E0C;
    case 447u: goto L_08989E38;
    case 448u: goto L_08989E58;
    case 449u: goto L_08989E60;
    case 450u: goto L_08989E64;
    case 451u: goto L_08989E6C;
    case 452u: goto L_08989E78;
    case 453u: goto L_08989E84;
    case 454u: goto L_08989E8C;
    case 455u: goto L_08989E90;
    case 456u: goto L_08989E94;
    case 457u: goto L_08989EA0;
    case 458u: goto L_08989EBC;
    case 459u: goto L_08989EF0;
    case 460u: goto L_08989F10;
    case 461u: goto L_08989F18;
    case 462u: goto L_08989F1C;
    case 463u: goto L_08989F24;
    case 464u: goto L_08989F30;
    case 465u: goto L_08989F3C;
    case 466u: goto L_08989F44;
    case 467u: goto L_08989F48;
    case 468u: goto L_08989F4C;
    case 469u: goto L_08989F58;
    case 470u: goto L_08989F70;
    case 471u: goto L_08989F8C;
    case 472u: goto L_08989F9C;
    case 473u: goto L_08989FC8;
    case 474u: goto L_08989FE8;
    case 475u: goto L_08989FF0;
    case 476u: goto L_08989FF4;
    case 477u: goto L_08989FFC;
    case 478u: goto L_0898A008;
    case 479u: goto L_0898A014;
    case 480u: goto L_0898A01C;
    case 481u: goto L_0898A020;
    case 482u: goto L_0898A024;
    case 483u: goto L_0898A030;
    case 484u: goto L_0898A048;
    case 485u: goto L_0898A064;
    case 486u: goto L_0898A074;
    case 487u: goto L_0898A0A0;
    case 488u: goto L_0898A0C0;
    case 489u: goto L_0898A0C8;
    case 490u: goto L_0898A0CC;
    case 491u: goto L_0898A0D4;
    case 492u: goto L_0898A0E0;
    case 493u: goto L_0898A0EC;
    case 494u: goto L_0898A0F4;
    case 495u: goto L_0898A0F8;
    case 496u: goto L_0898A0FC;
    case 497u: goto L_0898A108;
    case 498u: goto L_0898A124;
    case 499u: goto L_0898A184;
    case 500u: goto L_0898A1A8;
    case 501u: goto L_0898A1B0;
    case 502u: goto L_0898A1B4;
    case 503u: goto L_0898A1BC;
    case 504u: goto L_0898A1C8;
    case 505u: goto L_0898A1D4;
    case 506u: goto L_0898A1DC;
    case 507u: goto L_0898A1E0;
    case 508u: goto L_0898A1E4;
    case 509u: goto L_0898A1F0;
    case 510u: goto L_0898A20C;
    case 511u: goto L_0898A224;
    case 512u: goto L_0898A254;
    case 513u: goto L_0898A274;
    case 514u: goto L_0898A27C;
    case 515u: goto L_0898A280;
    case 516u: goto L_0898A288;
    case 517u: goto L_0898A294;
    case 518u: goto L_0898A2A0;
    case 519u: goto L_0898A2A8;
    case 520u: goto L_0898A2AC;
    case 521u: goto L_0898A2B0;
    case 522u: goto L_0898A2BC;
    case 523u: goto L_0898A2D4;
    case 524u: goto L_0898A2DC;
    case 525u: goto L_0898A2E4;
    case 526u: goto L_0898A2FC;
    case 527u: goto L_0898A308;
    case 528u: goto L_0898A334;
    case 529u: goto L_0898A354;
    case 530u: goto L_0898A35C;
    case 531u: goto L_0898A360;
    case 532u: goto L_0898A368;
    case 533u: goto L_0898A374;
    case 534u: goto L_0898A380;
    case 535u: goto L_0898A388;
    case 536u: goto L_0898A38C;
    case 537u: goto L_0898A390;
    case 538u: goto L_0898A39C;
    case 539u: goto L_0898A3B8;
    case 540u: goto L_0898A3C0;
    case 541u: goto L_0898A3CC;
    case 542u: goto L_0898A3F4;
    case 543u: goto L_0898A414;
    case 544u: goto L_0898A41C;
    case 545u: goto L_0898A420;
    case 546u: goto L_0898A428;
    case 547u: goto L_0898A434;
    case 548u: goto L_0898A440;
    case 549u: goto L_0898A448;
    case 550u: goto L_0898A44C;
    case 551u: goto L_0898A450;
    case 552u: goto L_0898A45C;
    case 553u: goto L_0898A478;
    case 554u: goto L_0898A480;
    case 555u: goto L_0898A4A8;
    case 556u: goto L_0898A4C8;
    case 557u: goto L_0898A4D0;
    case 558u: goto L_0898A4D4;
    case 559u: goto L_0898A4DC;
    case 560u: goto L_0898A4E8;
    case 561u: goto L_0898A4F4;
    case 562u: goto L_0898A4FC;
    case 563u: goto L_0898A500;
    case 564u: goto L_0898A504;
    case 565u: goto L_0898A510;
    case 566u: goto L_0898A52C;
    case 567u: goto L_0898A534;
    case 568u: goto L_0898A55C;
    case 569u: goto L_0898A57C;
    case 570u: goto L_0898A584;
    case 571u: goto L_0898A588;
    case 572u: goto L_0898A590;
    case 573u: goto L_0898A59C;
    case 574u: goto L_0898A5A8;
    case 575u: goto L_0898A5B0;
    case 576u: goto L_0898A5B4;
    case 577u: goto L_0898A5B8;
    case 578u: goto L_0898A5C4;
    case 579u: goto L_0898A5E0;
    case 580u: goto L_0898A5E8;
    case 581u: goto L_0898A610;
    case 582u: goto L_0898A630;
    case 583u: goto L_0898A638;
    case 584u: goto L_0898A63C;
    case 585u: goto L_0898A644;
    case 586u: goto L_0898A650;
    case 587u: goto L_0898A65C;
    case 588u: goto L_0898A664;
    case 589u: goto L_0898A668;
    case 590u: goto L_0898A66C;
    case 591u: goto L_0898A678;
    case 592u: goto L_0898A694;
    case 593u: goto L_0898A69C;
    case 594u: goto L_0898A6C4;
    case 595u: goto L_0898A6E4;
    case 596u: goto L_0898A6EC;
    case 597u: goto L_0898A6F0;
    case 598u: goto L_0898A6F8;
    case 599u: goto L_0898A704;
    case 600u: goto L_0898A710;
    case 601u: goto L_0898A718;
    case 602u: goto L_0898A71C;
    case 603u: goto L_0898A720;
    case 604u: goto L_0898A72C;
    case 605u: goto L_0898A748;
    case 606u: goto L_0898A750;
    case 607u: goto L_0898A778;
    case 608u: goto L_0898A798;
    case 609u: goto L_0898A7A0;
    case 610u: goto L_0898A7A4;
    case 611u: goto L_0898A7AC;
    case 612u: goto L_0898A7B8;
    case 613u: goto L_0898A7C4;
    case 614u: goto L_0898A7CC;
    case 615u: goto L_0898A7D0;
    case 616u: goto L_0898A7D4;
    case 617u: goto L_0898A7E0;
    case 618u: goto L_0898A7FC;
    case 619u: goto L_0898A830;
    case 620u: goto L_0898A850;
    case 621u: goto L_0898A858;
    case 622u: goto L_0898A85C;
    case 623u: goto L_0898A864;
    case 624u: goto L_0898A870;
    case 625u: goto L_0898A87C;
    case 626u: goto L_0898A884;
    case 627u: goto L_0898A888;
    case 628u: goto L_0898A88C;
    case 629u: goto L_0898A898;
    case 630u: goto L_0898A8B4;
    case 631u: goto L_0898A8E8;
    case 632u: goto L_0898A908;
    case 633u: goto L_0898A910;
    case 634u: goto L_0898A914;
    case 635u: goto L_0898A91C;
    case 636u: goto L_0898A928;
    case 637u: goto L_0898A934;
    case 638u: goto L_0898A93C;
    case 639u: goto L_0898A940;
    case 640u: goto L_0898A944;
    case 641u: goto L_0898A950;
    case 642u: goto L_0898A96C;
    case 643u: goto L_0898A9A0;
    case 644u: goto L_0898A9C0;
    case 645u: goto L_0898A9C8;
    case 646u: goto L_0898A9CC;
    case 647u: goto L_0898A9D4;
    case 648u: goto L_0898A9E0;
    case 649u: goto L_0898A9EC;
    case 650u: goto L_0898A9F4;
    case 651u: goto L_0898A9F8;
    case 652u: goto L_0898A9FC;
    case 653u: goto L_0898AA08;
    case 654u: goto L_0898AA24;
    case 655u: goto L_0898AA58;
    case 656u: goto L_0898AA78;
    case 657u: goto L_0898AA80;
    case 658u: goto L_0898AA84;
    case 659u: goto L_0898AA8C;
    case 660u: goto L_0898AA98;
    case 661u: goto L_0898AAA4;
    case 662u: goto L_0898AAAC;
    case 663u: goto L_0898AAB0;
    case 664u: goto L_0898AAB4;
    case 665u: goto L_0898AAC0;
    case 666u: goto L_0898AADC;
    case 667u: goto L_0898AB10;
    case 668u: goto L_0898AB30;
    case 669u: goto L_0898AB38;
    case 670u: goto L_0898AB3C;
    case 671u: goto L_0898AB44;
    case 672u: goto L_0898AB50;
    case 673u: goto L_0898AB5C;
    case 674u: goto L_0898AB64;
    case 675u: goto L_0898AB68;
    case 676u: goto L_0898AB6C;
    case 677u: goto L_0898AB78;
    case 678u: goto L_0898AB94;
    case 679u: goto L_0898ABC8;
    case 680u: goto L_0898ABE8;
    case 681u: goto L_0898ABF0;
    case 682u: goto L_0898ABF4;
    case 683u: goto L_0898ABFC;
    case 684u: goto L_0898AC08;
    case 685u: goto L_0898AC14;
    case 686u: goto L_0898AC1C;
    case 687u: goto L_0898AC20;
    case 688u: goto L_0898AC24;
    case 689u: goto L_0898AC30;
    case 690u: goto L_0898AC4C;
    case 691u: goto L_0898AC54;
    case 692u: goto L_0898AC78;
    case 693u: goto L_0898ACA0;
    case 694u: goto L_0898ACC0;
    case 695u: goto L_0898ACC8;
    case 696u: goto L_0898ACCC;
    case 697u: goto L_0898ACD4;
    case 698u: goto L_0898ACE0;
    case 699u: goto L_0898ACEC;
    case 700u: goto L_0898ACF4;
    case 701u: goto L_0898ACF8;
    case 702u: goto L_0898ACFC;
    case 703u: goto L_0898AD08;
    case 704u: goto L_0898AD24;
    case 705u: goto L_0898AD50;
    case 706u: goto L_0898AD70;
    case 707u: goto L_0898AD78;
    case 708u: goto L_0898AD7C;
    case 709u: goto L_0898AD84;
    case 710u: goto L_0898AD90;
    case 711u: goto L_0898AD9C;
    case 712u: goto L_0898ADA4;
    case 713u: goto L_0898ADA8;
    case 714u: goto L_0898ADAC;
    case 715u: goto L_0898ADB8;
    case 716u: goto L_0898ADD4;
    case 717u: goto L_0898AE00;
    case 718u: goto L_0898AE20;
    case 719u: goto L_0898AE28;
    case 720u: goto L_0898AE2C;
    case 721u: goto L_0898AE34;
    case 722u: goto L_0898AE40;
    case 723u: goto L_0898AE4C;
    case 724u: goto L_0898AE54;
    case 725u: goto L_0898AE58;
    case 726u: goto L_0898AE5C;
    case 727u: goto L_0898AE68;
    case 728u: goto L_0898AE84;
    case 729u: goto L_0898AEB4;
    case 730u: goto L_0898AEDC;
    case 731u: goto L_0898AEE4;
    case 732u: goto L_0898AEEC;
    case 733u: goto L_0898AEF8;
    case 734u: goto L_0898AF00;
    case 735u: goto L_0898AF0C;
    case 736u: goto L_0898AF14;
    case 737u: goto L_0898AF1C;
    case 738u: goto L_0898AF28;
    case 739u: goto L_0898AF30;
    case 740u: goto L_0898AF38;
    case 741u: goto L_0898AF44;
    case 742u: goto L_0898AF54;
    case 743u: goto L_0898AF70;
    case 744u: goto L_0898AFA0;
    case 745u: goto L_0898AFAC;
    case 746u: goto L_0898AFBC;
    case 747u: goto L_0898AFC8;
    case 748u: goto L_0898AFD0;
    case 749u: goto L_0898AFD4;
    case 750u: goto L_0898AFDC;
    case 751u: goto L_0898AFE8;
    case 752u: goto L_0898AFF4;
    case 753u: goto L_0898AFFC;
    case 754u: goto L_0898B000;
    case 755u: goto L_0898B004;
    case 756u: goto L_0898B010;
    case 757u: goto L_0898B028;
    case 758u: goto L_0898B038;
    case 759u: goto L_0898B04C;
    case 760u: goto L_0898B070;
    case 761u: goto L_0898B090;
    case 762u: goto L_0898B098;
    case 763u: goto L_0898B09C;
    case 764u: goto L_0898B0A4;
    case 765u: goto L_0898B0B0;
    case 766u: goto L_0898B0BC;
    case 767u: goto L_0898B0C4;
    case 768u: goto L_0898B0C8;
    case 769u: goto L_0898B0CC;
    case 770u: goto L_0898B0D8;
    case 771u: goto L_0898B0F4;
    case 772u: goto L_0898B120;
    case 773u: goto L_0898B128;
    case 774u: goto L_0898B130;
    case 775u: goto L_0898B13C;
    case 776u: goto L_0898B158;
    case 777u: goto L_0898B160;
    case 778u: goto L_0898B16C;
    case 779u: goto L_0898B170;
    case 780u: goto L_0898B17C;
    case 781u: goto L_0898B184;
    case 782u: goto L_0898B190;
    case 783u: goto L_0898B198;
    case 784u: goto L_0898B1A0;
    case 785u: goto L_0898B1AC;
    case 786u: goto L_0898B1B4;
    case 787u: goto L_0898B1BC;
    case 788u: goto L_0898B1C8;
    case 789u: goto L_0898B1D0;
    case 790u: goto L_0898B1D8;
    case 791u: goto L_0898B1E4;
    case 792u: goto L_0898B1EC;
    case 793u: goto L_0898B1F4;
    case 794u: goto L_0898B200;
    case 795u: goto L_0898B208;
    case 796u: goto L_0898B210;
    case 797u: goto L_0898B21C;
    case 798u: goto L_0898B224;
    case 799u: goto L_0898B22C;
    case 800u: goto L_0898B238;
    case 801u: goto L_0898B240;
    case 802u: goto L_0898B248;
    case 803u: goto L_0898B254;
    case 804u: goto L_0898B25C;
    case 805u: goto L_0898B264;
    case 806u: goto L_0898B270;
    case 807u: goto L_0898B278;
    case 808u: goto L_0898B280;
    case 809u: goto L_0898B28C;
    case 810u: goto L_0898B294;
    case 811u: goto L_0898B29C;
    case 812u: goto L_0898B2A8;
    case 813u: goto L_0898B2B0;
    case 814u: goto L_0898B2B8;
    case 815u: goto L_0898B2BC;
    case 816u: goto L_0898B2C4;
    case 817u: goto L_0898B328;
    case 818u: goto L_0898B340;
    case 819u: goto L_0898B354;
    case 820u: goto L_0898B37C;
    case 821u: goto L_0898B384;
    case 822u: goto L_0898B38C;
    case 823u: goto L_0898B39C;
    case 824u: goto L_0898B3A8;
    case 825u: goto L_0898B3C4;
    case 826u: goto L_0898B3F0;
    case 827u: goto L_0898B408;
    case 828u: goto L_0898B428;
    case 829u: goto L_0898B448;
    case 830u: goto L_0898B458;
    case 831u: goto L_0898B464;
    case 832u: goto L_0898B46C;
    case 833u: goto L_0898B474;
    case 834u: goto L_0898B47C;
    case 835u: goto L_0898B484;
    case 836u: goto L_0898B490;
    case 837u: goto L_0898B4A0;
    case 838u: goto L_0898B4AC;
    case 839u: goto L_0898B4B8;
    case 840u: goto L_0898B4C8;
    case 841u: goto L_0898B4D4;
    case 842u: goto L_0898B4DC;
    case 843u: goto L_0898B4E4;
    case 844u: goto L_0898B4F0;
    case 845u: goto L_0898B4F8;
    case 846u: goto L_0898B51C;
    case 847u: goto L_0898B528;
    case 848u: goto L_0898B530;
    case 849u: goto L_0898B538;
    case 850u: goto L_0898B540;
    case 851u: goto L_0898B550;
    case 852u: goto L_0898B560;
    case 853u: goto L_0898B568;
    case 854u: goto L_0898B570;
    case 855u: goto L_0898B578;
    case 856u: goto L_0898B5BC;
    case 857u: goto L_0898B5D8;
    case 858u: goto L_0898B5E8;
    case 859u: goto L_0898B5F0;
    case 860u: goto L_0898B5F8;
    case 861u: goto L_0898B600;
    case 862u: goto L_0898B620;
    case 863u: goto L_0898B62C;
    case 864u: goto L_0898B638;
    case 865u: goto L_0898B644;
    case 866u: goto L_0898B64C;
    case 867u: goto L_0898B650;
    case 868u: goto L_0898B658;
    case 869u: goto L_0898B660;
    case 870u: goto L_0898B694;
    case 871u: goto L_0898B69C;
    case 872u: goto L_0898B6A8;
    case 873u: goto L_0898B6EC;
    case 874u: goto L_0898B708;
    case 875u: goto L_0898B718;
    case 876u: goto L_0898B720;
    case 877u: goto L_0898B728;
    case 878u: goto L_0898B730;
    case 879u: goto L_0898B750;
    case 880u: goto L_0898B75C;
    case 881u: goto L_0898B768;
    case 882u: goto L_0898B774;
    case 883u: goto L_0898B77C;
    case 884u: goto L_0898B780;
    case 885u: goto L_0898B788;
    case 886u: goto L_0898B790;
    case 887u: goto L_0898B7C4;
    case 888u: goto L_0898B7D8;
    case 889u: goto L_0898B7E8;
    case 890u: goto L_0898B854;
    case 891u: goto L_0898B86C;
    case 892u: goto L_0898B878;
    case 893u: goto L_0898B880;
    case 894u: goto L_0898B888;
    case 895u: goto L_0898B894;
    case 896u: goto L_0898B89C;
    case 897u: goto L_0898B8A4;
    case 898u: goto L_0898B8B0;
    case 899u: goto L_0898B8BC;
    case 900u: goto L_0898B8C8;
    case 901u: goto L_0898B8CC;
    case 902u: goto L_0898B8D0;
    case 903u: goto L_0898B8D8;
    case 904u: goto L_0898B8E4;
    case 905u: goto L_0898B8F0;
    case 906u: goto L_0898B8FC;
    case 907u: goto L_0898B900;
    case 908u: goto L_0898B904;
    case 909u: goto L_0898B90C;
    case 910u: goto L_0898B918;
    case 911u: goto L_0898B924;
    case 912u: goto L_0898B930;
    case 913u: goto L_0898B934;
    case 914u: goto L_0898B938;
    case 915u: goto L_0898B940;
    case 916u: goto L_0898B94C;
    case 917u: goto L_0898B954;
    case 918u: goto L_0898B95C;
    case 919u: goto L_0898B968;
    case 920u: goto L_0898B970;
    case 921u: goto L_0898B978;
    case 922u: goto L_0898B984;
    case 923u: goto L_0898B98C;
    case 924u: goto L_0898B994;
    case 925u: goto L_0898B9A0;
    case 926u: goto L_0898B9A8;
    case 927u: goto L_0898B9B0;
    case 928u: goto L_0898B9BC;
    case 929u: goto L_0898B9C8;
    case 930u: goto L_0898B9D4;
    case 931u: goto L_0898B9D8;
    case 932u: goto L_0898B9DC;
    case 933u: goto L_0898B9E4;
    case 934u: goto L_0898B9F0;
    case 935u: goto L_0898B9FC;
    case 936u: goto L_0898BA08;
    case 937u: goto L_0898BA0C;
    case 938u: goto L_0898BA10;
    case 939u: goto L_0898BA18;
    case 940u: goto L_0898BA24;
    case 941u: goto L_0898BA34;
    case 942u: goto L_0898BA58;
    case 943u: goto L_0898BA60;
    case 944u: goto L_0898BA74;
    case 945u: goto L_0898BA8C;
    case 946u: goto L_0898BA94;
    case 947u: goto L_0898BA98;
    case 948u: goto L_0898BAA4;
    case 949u: goto L_0898BAC0;
    case 950u: goto L_0898BACC;
    case 951u: goto L_0898BAEC;
    case 952u: goto L_0898BB24;
    case 953u: goto L_0898BB34;
    case 954u: goto L_0898BB3C;
    case 955u: goto L_0898BB44;
    case 956u: goto L_0898BB4C;
    case 957u: goto L_0898BB58;
    case 958u: goto L_0898BB80;
    case 959u: goto L_0898BB84;
    case 960u: goto L_0898BB8C;
    case 961u: goto L_0898BB98;
    case 962u: goto L_0898BBC0;
    case 963u: goto L_0898BBC4;
    case 964u: goto L_0898BBCC;
    case 965u: goto L_0898BBD8;
    case 966u: goto L_0898BC00;
    case 967u: goto L_0898BC04;
    case 968u: goto L_0898BC0C;
    case 969u: goto L_0898BC18;
    case 970u: goto L_0898BC40;
    case 971u: goto L_0898BC44;
    case 972u: goto L_0898BC4C;
    case 973u: goto L_0898BC58;
    case 974u: goto L_0898BC60;
    case 975u: goto L_0898BC64;
    case 976u: goto L_0898BC6C;
    case 977u: goto L_0898BC78;
    case 978u: goto L_0898BC80;
    case 979u: goto L_0898BC84;
    case 980u: goto L_0898BC8C;
    case 981u: goto L_0898BC98;
    case 982u: goto L_0898BCA0;
    case 983u: goto L_0898BCA4;
    case 984u: goto L_0898BCAC;
    case 985u: goto L_0898BCB8;
    case 986u: goto L_0898BCC0;
    case 987u: goto L_0898BCC4;
    case 988u: goto L_0898BCCC;
    case 989u: goto L_0898BCD8;
    case 990u: goto L_0898BCE4;
    case 991u: goto L_0898BCF0;
    case 992u: goto L_0898BCF4;
    case 993u: goto L_0898BCFC;
    case 994u: goto L_0898BD08;
    case 995u: goto L_0898BD14;
    case 996u: goto L_0898BD18;
    case 997u: goto L_0898BD1C;
    case 998u: goto L_0898BD24;
    case 999u: goto L_0898BD30;
    case 1000u: goto L_0898BD3C;
    case 1001u: goto L_0898BD48;
    case 1002u: goto L_0898BD4C;
    case 1003u: goto L_0898BD54;
    case 1004u: goto L_0898BD60;
    case 1005u: goto L_0898BD6C;
    case 1006u: goto L_0898BD70;
    case 1007u: goto L_0898BD74;
    case 1008u: goto L_0898BD7C;
    case 1009u: goto L_0898BD88;
    case 1010u: goto L_0898BD94;
    case 1011u: goto L_0898BDA0;
    case 1012u: goto L_0898BDA4;
    case 1013u: goto L_0898BDAC;
    case 1014u: goto L_0898BDB8;
    case 1015u: goto L_0898BDC4;
    case 1016u: goto L_0898BDC8;
    case 1017u: goto L_0898BDCC;
    case 1018u: goto L_0898BDD4;
    case 1019u: goto L_0898BDE0;
    case 1020u: goto L_0898BDEC;
    case 1021u: goto L_0898BDF8;
    case 1022u: goto L_0898BDFC;
    case 1023u: goto L_0898BE04;
    case 1024u: goto L_0898BE10;
    case 1025u: goto L_0898BE1C;
    case 1026u: goto L_0898BE20;
    case 1027u: goto L_0898BE24;
    case 1028u: goto L_0898BE2C;
    case 1029u: goto L_0898BE50;
    case 1030u: goto L_0898BE60;
    case 1031u: goto L_0898BE68;
    case 1032u: goto L_0898BE70;
    case 1033u: goto L_0898BE78;
    case 1034u: goto L_0898BE88;
    case 1035u: goto L_0898BE98;
    case 1036u: goto L_0898BEA0;
    case 1037u: goto L_0898BEA8;
    case 1038u: goto L_0898BEB0;
    case 1039u: goto L_0898BEB4;
    case 1040u: goto L_0898BEC8;
    case 1041u: goto L_0898BEDC;
    case 1042u: goto L_0898BEE4;
    case 1043u: goto L_0898BEEC;
    case 1044u: goto L_0898BEF4;
    case 1045u: goto L_0898BEFC;
    case 1046u: goto L_0898BF00;
    case 1047u: goto L_0898BF10;
    case 1048u: goto L_0898BF24;
    case 1049u: goto L_0898BF2C;
    case 1050u: goto L_0898BF34;
    case 1051u: goto L_0898BF3C;
    case 1052u: goto L_0898BF44;
    case 1053u: goto L_0898BF48;
    case 1054u: goto L_0898BF58;
    case 1055u: goto L_0898BF6C;
    case 1056u: goto L_0898BF74;
    case 1057u: goto L_0898BF7C;
    case 1058u: goto L_0898BF84;
    case 1059u: goto L_0898BF8C;
    case 1060u: goto L_0898BF90;
    case 1061u: goto L_0898BFA0;
    case 1062u: goto L_0898BFB4;
    case 1063u: goto L_0898BFBC;
    case 1064u: goto L_0898BFC4;
    case 1065u: goto L_0898BFCC;
    case 1066u: goto L_0898BFD4;
    case 1067u: goto L_0898BFD8;
    case 1068u: goto L_0898BFE8;
    case 1069u: goto L_0898BFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08988000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(31984));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(31984)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0898804C;
      }
      goto L_08988040;
    }
L_08988040:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0898804Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 736u, 0x0887F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0898804Cu) goto L_0898804C;
    return;
L_0898804C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08988060u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 728u, 0x0887F5E4u>(ctx, &aot_mem) && ctx.pc == 0x08988060u) goto L_08988060;
    return;
L_08988060:
    ctx.gpr[31] = (0x08988068u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 744u, 0x0887F7E8u>(ctx, &aot_mem) && ctx.pc == 0x08988068u) goto L_08988068;
    return;
L_08988068:
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
L_08988080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089880BC;
      }
      goto L_089880AC;
    }
L_089880AC:
    ctx.gpr[31] = (0x089880B4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 744u, 0x0887F7E8u>(ctx, &aot_mem) && ctx.pc == 0x089880B4u) goto L_089880B4;
    return;
L_089880B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_089880C8;
      }
      goto L_089880BC;
    }
L_089880BC:
    ctx.gpr[31] = (0x089880C4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 744u, 0x0887F7E8u>(ctx, &aot_mem) && ctx.pc == 0x089880C4u) goto L_089880C4;
    return;
L_089880C4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_089880C8;
L_089880C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089880D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x089880F4u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08988080;
L_089880F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988134;
      }
      goto L_08988108;
    }
L_08988108:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[10] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[10];
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08988158;
      }
      goto L_0898812C;
    }
L_0898812C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898813C;
      }
      goto L_08988134;
    }
L_08988134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08988284;
      }
      goto L_0898813C;
    }
L_0898813C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988178;
      }
      goto L_08988144;
    }
L_08988144:
    ctx.gpr[10] = (ctx.gpr[5] << 4u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08988194;
      }
      goto L_08988158;
    }
L_08988158:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08988170u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08988678;
L_08988170:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08988284;
      }
      goto L_08988178;
    }
L_08988178:
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[10] << 3u);
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[10] = (ctx.gpr[7] + static_cast<std::uint32_t>(10));
    goto L_08988194;
L_08988194:
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    goto L_0898819C;
L_0898819C:
    ctx.gpr[3] = (ctx.gpr[2] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[3]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08988240;
      }
      goto L_089881C0;
    }
L_089881C0:
    ctx.gpr[8] = (ctx.gpr[2] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898822C;
      }
      goto L_089881E8;
    }
L_089881E8:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[8] & 2u);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988214;
      }
      goto L_08988204;
    }
L_08988204:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[11] = (ctx.gpr[7] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898822C;
      }
      goto L_0898820C;
    }
L_0898820C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[7] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898822C;
      }
      goto L_08988214;
    }
L_08988214:
    ctx.gpr[31] = (0x0898821Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08988678;
L_0898821C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08988284;
      }
      goto L_0898822C;
    }
L_0898822C:
    ctx.gpr[8] = (ctx.gpr[11] | 0u);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0898819C;
      }
      goto L_08988240;
    }
L_08988240:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[10] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08988280u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08988678;
L_08988280:
    ctx.gpr[2] = (0u | 1u);
    goto L_08988284;
L_08988284:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988298:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089882C4u);
    // nop
    goto L_08988080;
L_089882C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988304;
      }
      goto L_08988300;
    }
L_08988300:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08988304;
L_08988304:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089883C0;
      }
      goto L_08988314;
    }
L_08988314:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[7] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
      if (branch_taken) {
          goto L_08988344;
      }
      goto L_08988334;
    }
L_08988334:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08988354;
      }
      goto L_08988344;
    }
L_08988344:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_08988354;
L_08988354:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089883C0;
      }
      goto L_0898836C;
    }
L_0898836C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08988378u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 946u, 0x08987DD0u>(ctx, &aot_mem) && ctx.pc == 0x08988378u) goto L_08988378;
    return;
L_08988378:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089883C0;
      }
      goto L_089883B4;
    }
L_089883B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089883C0;
L_089883C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089883DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[31] = (0x08988420u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08988080;
L_08988420:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08988454;
      }
      goto L_08988450;
    }
L_08988450:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08988454;
L_08988454:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089885C4;
      }
      goto L_08988464;
    }
L_08988464:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[12])) && ctx.fpr[22] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089884B4;
      }
      goto L_089884A0;
    }
L_089884A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.fpr[22] = ctx.fpr[12] / ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089884B8;
      }
      goto L_089884B4;
    }
L_089884B4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089884B8;
L_089884B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089885C4;
      }
      goto L_089884D0;
    }
L_089884D0:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089884E8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 945u, 0x08987D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089884E8u) goto L_089884E8;
    return;
L_089884E8:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(82));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x089884FCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 945u, 0x08987D6Cu>(ctx, &aot_mem) && ctx.pc == 0x089884FCu) goto L_089884FC;
    return;
L_089884FC:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(14));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(14));
    ctx.gpr[31] = (0x08988510u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 945u, 0x08987D6Cu>(ctx, &aot_mem) && ctx.pc == 0x08988510u) goto L_08988510;
    return;
L_08988510:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[20] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[20]));
    ctx.gpr[20] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(3), ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[20]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08988554u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 946u, 0x08987DD0u>(ctx, &aot_mem) && ctx.pc == 0x08988554u) goto L_08988554;
    return;
L_08988554:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089885C4;
      }
      goto L_089885B8;
    }
L_089885B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089885C4;
L_089885C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089885FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 32768u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0898863C;
      }
      goto L_0898862C;
    }
L_0898862C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[9] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08988654;
      }
      goto L_0898863C;
    }
L_0898863C:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0898864Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_08988848;
L_0898864C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898866C;
      }
      goto L_08988654;
    }
L_08988654:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x0898866Cu);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_08988AB8;
L_0898866C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988710;
      }
      goto L_089886AC;
    }
L_089886AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988830;
      }
      goto L_089886C4;
    }
L_089886C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[31] = (0x089886E0u);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 514u, 0x089FB44Cu>(ctx, &aot_mem) && ctx.pc == 0x089886E0u) goto L_089886E0;
    return;
L_089886E0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089886F4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 514u, 0x089FB44Cu>(ctx, &aot_mem) && ctx.pc == 0x089886F4u) goto L_089886F4;
    return;
L_089886F4:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08988708u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 936u, 0x08987C88u>(ctx, &aot_mem) && ctx.pc == 0x08988708u) goto L_08988708;
    return;
L_08988708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08988830;
      }
      goto L_08988710;
    }
L_08988710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988830;
      }
      goto L_08988728;
    }
L_08988728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08988830u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 936u, 0x08987C88u>(ctx, &aot_mem) && ctx.pc == 0x08988830u) goto L_08988830;
    return;
L_08988830:
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
L_08988848:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_vfpu_scalar_bits_ct<24u>(ctx.gpr[16]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[13]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[25] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08988998;
      }
      goto L_08988890;
    }
L_08988890:
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 7u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
        goto L_08988998;
    }
    goto L_089888A4;
L_089888A4:
    ctx.gpr[14] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[14]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
      if (branch_taken) {
          goto L_08988998;
      }
      goto L_089888B4;
    }
L_089888B4:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(10));
        goto L_089888C0;
    }
    goto L_089888BC;
L_089888BC:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(16));
    goto L_089888C0;
L_089888C0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
    goto L_089888D0;
L_089888D0:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[16]);
    if (ctx.gpr[12] != ctx.gpr[14]) {
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_08988900;
    }
    goto L_089888DC;
L_089888DC:
    ctx.gpr[9] = (ctx.gpr[3] & 2u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_089888F8;
    }
    goto L_089888E8;
L_089888E8:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<28u>());
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[12] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08988988;
      }
      goto L_089888F8;
    }
L_089888F8:
    ctx.gpr[12] = (ctx.gpr[13] | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08988900;
L_08988900:
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f(1u, 32u, 1u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 2u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
        goto L_089888D0;
    }
    goto L_0898891C;
L_0898891C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
      if (branch_taken) {
          goto L_08988988;
      }
      goto L_0898892C;
    }
L_0898892C:
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<16u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<48u>(ctx.gpr[9]);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<80u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<112u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(1u, 16u, 2u);
    ctx.execute_vfpu_vh2f(2u, 80u, 2u);
    ctx.execute_vfpu_vdot_ct<16u, 1u, 2u, 4u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vocp(16u, 16u, 1u);
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_d); }
      if (branch_taken) {
          goto L_08988980;
      }
      goto L_0898897C;
    }
L_0898897C:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_d); }
    goto L_08988980;
L_08988980:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<16u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<48u>());
    goto L_08988988;
L_08988988:
    ctx.gpr[8] = (ctx.gpr[12] - ctx.gpr[13]);
    ctx.gpr[9] = (ctx.gpr[15] - ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    goto L_08988998;
L_08988998:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089889B0;
      }
      goto L_089889A8;
    }
L_089889A8:
    ctx.set_vfpu_scalar_bits_ct<44u>(ctx.gpr[8]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<44u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    goto L_089889B0;
L_089889B0:
    ctx.execute_vfpu_vcmp_ct<12u, 28u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089889DC;
      }
      goto L_089889BC;
    }
L_089889BC:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f(20u, 32u, 1u);
    ctx.execute_vfpu_vcmp_ct<20u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<52u, 1u>(vfpu_d); }
      if (branch_taken) {
          goto L_089889DC;
      }
      goto L_089889D8;
    }
L_089889D8:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 1u>(vfpu_d); }
    goto L_089889DC;
L_089889DC:
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988A2C;
      }
      goto L_089889E8;
    }
L_089889E8:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    ctx.execute_vfpu_vh2f(2u, 64u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<2u, 2u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08988A2C;
L_08988A2C:
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988AA8;
      }
      goto L_08988A38;
    }
L_08988A38:
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
      if (branch_taken) {
          goto L_08988AA0;
      }
      goto L_08988A64;
    }
L_08988A64:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(2u, 64u, 2u);
    ctx.execute_vfpu_vocp(52u, 20u, 1u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<36u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 2u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<4u, 8u, 48u, 2u>();
    ctx.execute_vfpu_vscl_ct<2u, 2u, 4u, 4u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 36u, 4u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 4u>(vfpu_d); }
    goto L_08988AA0;
L_08988AA0:
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 4u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08988AA8;
L_08988AA8:
    ctx.gpr[16] = (ctx.vfpu_scalar_bits_ct<24u>());
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988AB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_vfpu_scalar_bits_ct<24u>(ctx.gpr[16]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[13]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[25] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[24] = (ctx.gpr[24] & 255u);
    ctx.gpr[10] = (ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08988C10;
      }
      goto L_08988B08;
    }
L_08988B08:
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 7u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
        goto L_08988C10;
    }
    goto L_08988B1C;
L_08988B1C:
    ctx.gpr[14] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[14]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
      if (branch_taken) {
          goto L_08988C10;
      }
      goto L_08988B2C;
    }
L_08988B2C:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(10));
        goto L_08988B38;
    }
    goto L_08988B34;
L_08988B34:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(16));
    goto L_08988B38;
L_08988B38:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
    goto L_08988B48;
L_08988B48:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[16]);
    if (ctx.gpr[12] != ctx.gpr[14]) {
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_08988B78;
    }
    goto L_08988B54;
L_08988B54:
    ctx.gpr[9] = (ctx.gpr[3] & 2u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_08988B70;
    }
    goto L_08988B60;
L_08988B60:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<28u>());
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[12] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08988C00;
      }
      goto L_08988B70;
    }
L_08988B70:
    ctx.gpr[12] = (ctx.gpr[13] | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08988B78;
L_08988B78:
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f(1u, 32u, 1u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 2u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
        goto L_08988B48;
    }
    goto L_08988B94;
L_08988B94:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
      if (branch_taken) {
          goto L_08988C00;
      }
      goto L_08988BA4;
    }
L_08988BA4:
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<16u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<48u>(ctx.gpr[9]);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<80u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<112u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(1u, 16u, 2u);
    ctx.execute_vfpu_vh2f(2u, 80u, 2u);
    ctx.execute_vfpu_vdot_ct<16u, 1u, 2u, 4u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vocp(16u, 16u, 1u);
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_d); }
      if (branch_taken) {
          goto L_08988BF8;
      }
      goto L_08988BF4;
    }
L_08988BF4:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_d); }
    goto L_08988BF8;
L_08988BF8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<16u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<48u>());
    goto L_08988C00;
L_08988C00:
    ctx.gpr[8] = (ctx.gpr[12] - ctx.gpr[13]);
    ctx.gpr[9] = (ctx.gpr[15] - ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    goto L_08988C10;
L_08988C10:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08988C28;
      }
      goto L_08988C20;
    }
L_08988C20:
    ctx.set_vfpu_scalar_bits_ct<44u>(ctx.gpr[8]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<44u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    goto L_08988C28;
L_08988C28:
    ctx.execute_vfpu_vcmp_ct<12u, 28u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08988C54;
      }
      goto L_08988C34;
    }
L_08988C34:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f(20u, 32u, 1u);
    ctx.execute_vfpu_vcmp_ct<20u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<52u, 1u>(vfpu_d); }
      if (branch_taken) {
          goto L_08988C54;
      }
      goto L_08988C50;
    }
L_08988C50:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 1u>(vfpu_d); }
    goto L_08988C54;
L_08988C54:
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988CA8;
      }
      goto L_08988C60;
    }
L_08988C60:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    ctx.execute_vfpu_vh2f(2u, 64u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<2u, 2u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08988CA8;
L_08988CA8:
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988D54;
      }
      goto L_08988CB4;
    }
L_08988CB4:
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
      if (branch_taken) {
          goto L_08988CF8;
      }
      goto L_08988CE0;
    }
L_08988CE0:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 4u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08988CF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 947u, 0x08987DF4u>(ctx, &aot_mem) && ctx.pc == 0x08988CF0u) goto L_08988CF0;
    return;
L_08988CF0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 4u>(vfpu_d); }
    goto L_08988CF8;
L_08988CF8:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(2u, 64u, 2u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 4u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08988D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 947u, 0x08987DF4u>(ctx, &aot_mem) && ctx.pc == 0x08988D24u) goto L_08988D24;
    return;
L_08988D24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 4u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vocp(52u, 20u, 1u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<36u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 2u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<4u, 8u, 48u, 2u>();
    ctx.execute_vfpu_vscl_ct<2u, 2u, 4u, 4u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 36u, 4u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 4u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 4u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08988D54;
L_08988D54:
    ctx.gpr[16] = (ctx.vfpu_scalar_bits_ct<24u>());
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988D64:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08988DFC;
      }
      goto L_08988D78;
    }
L_08988D78:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    goto L_08988D84;
L_08988D84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08988D9C;
      }
      goto L_08988D8C;
    }
L_08988D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
        goto L_08988DA4;
    }
    goto L_08988D9C;
L_08988D9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08988DC4;
      }
      goto L_08988DA4;
    }
L_08988DA4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_08988DC0;
    }
    goto L_08988DB8;
L_08988DB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08988DC4;
      }
      goto L_08988DC0;
    }
L_08988DC0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08988DC4;
L_08988DC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988DE8;
      }
      goto L_08988DCC;
    }
L_08988DCC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1360)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(684), ctx.gpr[9]);
    goto L_08988DE8;
L_08988DE8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3344));
      if (branch_taken) {
          goto L_08988D84;
      }
      goto L_08988DFC;
    }
L_08988DFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08988E04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08988E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem) && ctx.pc == 0x08988E20u) goto L_08988E20;
    return;
L_08988E20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08988E3C;
      }
      goto L_08988E28;
    }
L_08988E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988E44;
      }
      goto L_08988E34;
    }
L_08988E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08988E50;
      }
      goto L_08988E3C;
    }
L_08988E3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989094;
      }
      goto L_08988E44;
    }
L_08988E44:
    ctx.gpr[31] = (0x08988E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08988E4Cu) goto L_08988E4C;
    return;
L_08988E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08988E50;
L_08988E50:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08988E80;
      }
      goto L_08988E58;
    }
L_08988E58:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08988E64u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08988E64u) goto L_08988E64;
    return;
L_08988E64:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08988E7C;
      }
      goto L_08988E70;
    }
L_08988E70:
    ctx.gpr[31] = (0x08988E78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08988E78u) goto L_08988E78;
    return;
L_08988E78:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08988E7C;
L_08988E7C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08988E80;
L_08988E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08988E8Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08988E8Cu) goto L_08988E8C;
    return;
L_08988E8C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08988EA8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08988EA8u) goto L_08988EA8;
    return;
L_08988EA8:
    ctx.gpr[4] = (0u | 331u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08988EB8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08988EB8u) goto L_08988EB8;
    return;
L_08988EB8:
    ctx.gpr[4] = (0u | 335u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08988EC8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08988EC8u) goto L_08988EC8;
    return;
L_08988EC8:
    ctx.gpr[4] = (0u | 344u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08988ED8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08988ED8u) goto L_08988ED8;
    return;
L_08988ED8:
    ctx.gpr[4] = (0u | 346u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08988EE8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08988EE8u) goto L_08988EE8;
    return;
L_08988EE8:
    ctx.gpr[4] = (0u | 349u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08988EF8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08988EF8u) goto L_08988EF8;
    return;
L_08988EF8:
    ctx.gpr[4] = (0u | 353u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08988F08u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08988F08u) goto L_08988F08;
    return;
L_08988F08:
    ctx.gpr[4] = (0u | 348u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08988F18u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08988F18u) goto L_08988F18;
    return;
L_08988F18:
    ctx.gpr[4] = (0u | 357u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08988F28u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08988F28u) goto L_08988F28;
    return;
L_08988F28:
    ctx.gpr[4] = (0u | 360u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08988F38u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08988F38u) goto L_08988F38;
    return;
L_08988F38:
    ctx.gpr[31] = (0x08988F40u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08988F40u) goto L_08988F40;
    return;
L_08988F40:
    ctx.gpr[31] = (0x08988F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08988F48u) goto L_08988F48;
    return;
L_08988F48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08988F5Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08988F5Cu) goto L_08988F5C;
    return;
L_08988F5C:
    ctx.gpr[31] = (0x08988F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08988F64u) goto L_08988F64;
    return;
L_08988F64:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08988F78u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08988F78u) goto L_08988F78;
    return;
L_08988F78:
    ctx.gpr[31] = (0x08988F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08988F80u) goto L_08988F80;
    return;
L_08988F80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08988F94u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08988F94u) goto L_08988F94;
    return;
L_08988F94:
    ctx.gpr[31] = (0x08988F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08988F9Cu) goto L_08988F9C;
    return;
L_08988F9C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08988FB0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08988FB0u) goto L_08988FB0;
    return;
L_08988FB0:
    ctx.gpr[31] = (0x08988FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08988FB8u) goto L_08988FB8;
    return;
L_08988FB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[31] = (0x08988FCCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08988FCCu) goto L_08988FCC;
    return;
L_08988FCC:
    ctx.gpr[31] = (0x08988FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08988FD4u) goto L_08988FD4;
    return;
L_08988FD4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[31] = (0x08988FE8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08988FE8u) goto L_08988FE8;
    return;
L_08988FE8:
    ctx.gpr[31] = (0x08988FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08988FF0u) goto L_08988FF0;
    return;
L_08988FF0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[6] = (0u | 120u);
    ctx.gpr[31] = (0x08989004u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08989004u) goto L_08989004;
    return;
L_08989004:
    ctx.gpr[31] = (0x0898900Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0898900Cu) goto L_0898900C;
    return;
L_0898900C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (0u | 25u);
    ctx.gpr[31] = (0x08989020u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08989020u) goto L_08989020;
    return;
L_08989020:
    ctx.gpr[31] = (0x08989028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08989028u) goto L_08989028;
    return;
L_08989028:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 33u);
    ctx.gpr[6] = (0u | 250u);
    ctx.gpr[31] = (0x0898903Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x0898903Cu) goto L_0898903C;
    return;
L_0898903C:
    ctx.gpr[31] = (0x08989044u);
    ctx.gpr[4] = (0u | 331u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989044u) goto L_08989044;
    return;
L_08989044:
    ctx.gpr[31] = (0x0898904Cu);
    ctx.gpr[4] = (0u | 346u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0898904Cu) goto L_0898904C;
    return;
L_0898904C:
    ctx.gpr[31] = (0x08989054u);
    ctx.gpr[4] = (0u | 353u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989054u) goto L_08989054;
    return;
L_08989054:
    ctx.gpr[31] = (0x0898905Cu);
    ctx.gpr[4] = (0u | 335u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0898905Cu) goto L_0898905C;
    return;
L_0898905C:
    ctx.gpr[31] = (0x08989064u);
    ctx.gpr[4] = (0u | 344u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989064u) goto L_08989064;
    return;
L_08989064:
    ctx.gpr[31] = (0x0898906Cu);
    ctx.gpr[4] = (0u | 349u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0898906Cu) goto L_0898906C;
    return;
L_0898906C:
    ctx.gpr[31] = (0x08989074u);
    ctx.gpr[4] = (0u | 348u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989074u) goto L_08989074;
    return;
L_08989074:
    ctx.gpr[31] = (0x0898907Cu);
    ctx.gpr[4] = (0u | 357u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0898907Cu) goto L_0898907C;
    return;
L_0898907C:
    ctx.gpr[31] = (0x08989084u);
    ctx.gpr[4] = (0u | 360u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989084u) goto L_08989084;
    return;
L_08989084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
    goto L_08989094;
L_08989094:
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
L_089890AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089890C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem) && ctx.pc == 0x089890C8u) goto L_089890C8;
    return;
L_089890C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089890E4;
      }
      goto L_089890D0;
    }
L_089890D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089890EC;
      }
      goto L_089890DC;
    }
L_089890DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_089890F8;
      }
      goto L_089890E4;
    }
L_089890E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08989320;
      }
      goto L_089890EC;
    }
L_089890EC:
    ctx.gpr[31] = (0x089890F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x089890F4u) goto L_089890F4;
    return;
L_089890F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_089890F8;
L_089890F8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989128;
      }
      goto L_08989100;
    }
L_08989100:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898910Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898910Cu) goto L_0898910C;
    return;
L_0898910C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989124;
      }
      goto L_08989118;
    }
L_08989118:
    ctx.gpr[31] = (0x08989120u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08989120u) goto L_08989120;
    return;
L_08989120:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08989124;
L_08989124:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989128;
L_08989128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08989134u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08989134u) goto L_08989134;
    return;
L_08989134:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08989150u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08989150u) goto L_08989150;
    return;
L_08989150:
    ctx.gpr[4] = (0u | 340u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08989160u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08989160u) goto L_08989160;
    return;
L_08989160:
    ctx.gpr[4] = (0u | 342u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08989170u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08989170u) goto L_08989170;
    return;
L_08989170:
    ctx.gpr[4] = (0u | 363u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08989180u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08989180u) goto L_08989180;
    return;
L_08989180:
    ctx.gpr[4] = (0u | 347u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08989190u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x08989190u) goto L_08989190;
    return;
L_08989190:
    ctx.gpr[4] = (0u | 351u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089891A0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x089891A0u) goto L_089891A0;
    return;
L_089891A0:
    ctx.gpr[4] = (0u | 355u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089891B0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x089891B0u) goto L_089891B0;
    return;
L_089891B0:
    ctx.gpr[4] = (0u | 352u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089891C0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x089891C0u) goto L_089891C0;
    return;
L_089891C0:
    ctx.gpr[4] = (0u | 358u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089891D0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x089891D0u) goto L_089891D0;
    return;
L_089891D0:
    ctx.gpr[4] = (0u | 359u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089891E0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x089891E0u) goto L_089891E0;
    return;
L_089891E0:
    ctx.gpr[31] = (0x089891E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x089891E8u) goto L_089891E8;
    return;
L_089891E8:
    ctx.gpr[31] = (0x089891F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089891F0u) goto L_089891F0;
    return;
L_089891F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08989204u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08989204u) goto L_08989204;
    return;
L_08989204:
    ctx.gpr[31] = (0x0898920Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0898920Cu) goto L_0898920C;
    return;
L_0898920C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08989220u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08989220u) goto L_08989220;
    return;
L_08989220:
    ctx.gpr[31] = (0x08989228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08989228u) goto L_08989228;
    return;
L_08989228:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x0898923Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x0898923Cu) goto L_0898923C;
    return;
L_0898923C:
    ctx.gpr[31] = (0x08989244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08989244u) goto L_08989244;
    return;
L_08989244:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[6] = (0u | 25u);
    ctx.gpr[31] = (0x08989258u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08989258u) goto L_08989258;
    return;
L_08989258:
    ctx.gpr[31] = (0x08989260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08989260u) goto L_08989260;
    return;
L_08989260:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 26u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08989274u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08989274u) goto L_08989274;
    return;
L_08989274:
    ctx.gpr[31] = (0x0898927Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0898927Cu) goto L_0898927C;
    return;
L_0898927C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[31] = (0x08989290u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08989290u) goto L_08989290;
    return;
L_08989290:
    ctx.gpr[31] = (0x08989298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08989298u) goto L_08989298;
    return;
L_08989298:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x089892ACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x089892ACu) goto L_089892AC;
    return;
L_089892AC:
    ctx.gpr[31] = (0x089892B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089892B4u) goto L_089892B4;
    return;
L_089892B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089892C8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x089892C8u) goto L_089892C8;
    return;
L_089892C8:
    ctx.gpr[31] = (0x089892D0u);
    ctx.gpr[4] = (0u | 340u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x089892D0u) goto L_089892D0;
    return;
L_089892D0:
    ctx.gpr[31] = (0x089892D8u);
    ctx.gpr[4] = (0u | 342u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x089892D8u) goto L_089892D8;
    return;
L_089892D8:
    ctx.gpr[31] = (0x089892E0u);
    ctx.gpr[4] = (0u | 363u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x089892E0u) goto L_089892E0;
    return;
L_089892E0:
    ctx.gpr[31] = (0x089892E8u);
    ctx.gpr[4] = (0u | 347u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x089892E8u) goto L_089892E8;
    return;
L_089892E8:
    ctx.gpr[31] = (0x089892F0u);
    ctx.gpr[4] = (0u | 351u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x089892F0u) goto L_089892F0;
    return;
L_089892F0:
    ctx.gpr[31] = (0x089892F8u);
    ctx.gpr[4] = (0u | 355u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x089892F8u) goto L_089892F8;
    return;
L_089892F8:
    ctx.gpr[31] = (0x08989300u);
    ctx.gpr[4] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989300u) goto L_08989300;
    return;
L_08989300:
    ctx.gpr[31] = (0x08989308u);
    ctx.gpr[4] = (0u | 358u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989308u) goto L_08989308;
    return;
L_08989308:
    ctx.gpr[31] = (0x08989310u);
    ctx.gpr[4] = (0u | 359u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989310u) goto L_08989310;
    return;
L_08989310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
    goto L_08989320;
L_08989320:
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
L_08989338:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08989354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem) && ctx.pc == 0x08989354u) goto L_08989354;
    return;
L_08989354:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989370;
      }
      goto L_0898935C;
    }
L_0898935C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989378;
      }
      goto L_08989368;
    }
L_08989368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_08989384;
      }
      goto L_08989370;
    }
L_08989370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089895AC;
      }
      goto L_08989378;
    }
L_08989378:
    ctx.gpr[31] = (0x08989380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08989380u) goto L_08989380;
    return;
L_08989380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08989384;
L_08989384:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_089893B4;
      }
      goto L_0898938C;
    }
L_0898938C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08989398u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08989398u) goto L_08989398;
    return;
L_08989398:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089893B0;
      }
      goto L_089893A4;
    }
L_089893A4:
    ctx.gpr[31] = (0x089893ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089893ACu) goto L_089893AC;
    return;
L_089893AC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089893B0;
L_089893B0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_089893B4;
L_089893B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x089893C0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089893C0u) goto L_089893C0;
    return;
L_089893C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089893DCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x089893DCu) goto L_089893DC;
    return;
L_089893DC:
    ctx.gpr[4] = (0u | 341u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089893ECu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x089893ECu) goto L_089893EC;
    return;
L_089893EC:
    ctx.gpr[4] = (0u | 342u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089893FCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x089893FCu) goto L_089893FC;
    return;
L_089893FC:
    ctx.gpr[4] = (0u | 347u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0898940Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0898940Cu) goto L_0898940C;
    return;
L_0898940C:
    ctx.gpr[4] = (0u | 350u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0898941Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0898941Cu) goto L_0898941C;
    return;
L_0898941C:
    ctx.gpr[4] = (0u | 356u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0898942Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0898942Cu) goto L_0898942C;
    return;
L_0898942C:
    ctx.gpr[4] = (0u | 352u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0898943Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0898943Cu) goto L_0898943C;
    return;
L_0898943C:
    ctx.gpr[4] = (0u | 358u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0898944Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0898944Cu) goto L_0898944C;
    return;
L_0898944C:
    ctx.gpr[4] = (0u | 362u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0898945Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0898945Cu) goto L_0898945C;
    return;
L_0898945C:
    ctx.gpr[4] = (0u | 366u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0898946Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x0898946Cu) goto L_0898946C;
    return;
L_0898946C:
    ctx.gpr[31] = (0x08989474u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x08989474u) goto L_08989474;
    return;
L_08989474:
    ctx.gpr[31] = (0x0898947Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0898947Cu) goto L_0898947C;
    return;
L_0898947C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08989490u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08989490u) goto L_08989490;
    return;
L_08989490:
    ctx.gpr[31] = (0x08989498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08989498u) goto L_08989498;
    return;
L_08989498:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x089894ACu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x089894ACu) goto L_089894AC;
    return;
L_089894AC:
    ctx.gpr[31] = (0x089894B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089894B4u) goto L_089894B4;
    return;
L_089894B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x089894C8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x089894C8u) goto L_089894C8;
    return;
L_089894C8:
    ctx.gpr[31] = (0x089894D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089894D0u) goto L_089894D0;
    return;
L_089894D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x089894E4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x089894E4u) goto L_089894E4;
    return;
L_089894E4:
    ctx.gpr[31] = (0x089894ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x089894ECu) goto L_089894EC;
    return;
L_089894EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08989500u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08989500u) goto L_08989500;
    return;
L_08989500:
    ctx.gpr[31] = (0x08989508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08989508u) goto L_08989508;
    return;
L_08989508:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[31] = (0x0898951Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x0898951Cu) goto L_0898951C;
    return;
L_0898951C:
    ctx.gpr[31] = (0x08989524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08989524u) goto L_08989524;
    return;
L_08989524:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x08989538u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08989538u) goto L_08989538;
    return;
L_08989538:
    ctx.gpr[31] = (0x08989540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08989540u) goto L_08989540;
    return;
L_08989540:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[6] = (0u | 500u);
    ctx.gpr[31] = (0x08989554u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem) && ctx.pc == 0x08989554u) goto L_08989554;
    return;
L_08989554:
    ctx.gpr[31] = (0x0898955Cu);
    ctx.gpr[4] = (0u | 341u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0898955Cu) goto L_0898955C;
    return;
L_0898955C:
    ctx.gpr[31] = (0x08989564u);
    ctx.gpr[4] = (0u | 342u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989564u) goto L_08989564;
    return;
L_08989564:
    ctx.gpr[31] = (0x0898956Cu);
    ctx.gpr[4] = (0u | 347u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0898956Cu) goto L_0898956C;
    return;
L_0898956C:
    ctx.gpr[31] = (0x08989574u);
    ctx.gpr[4] = (0u | 350u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989574u) goto L_08989574;
    return;
L_08989574:
    ctx.gpr[31] = (0x0898957Cu);
    ctx.gpr[4] = (0u | 356u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0898957Cu) goto L_0898957C;
    return;
L_0898957C:
    ctx.gpr[31] = (0x08989584u);
    ctx.gpr[4] = (0u | 352u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989584u) goto L_08989584;
    return;
L_08989584:
    ctx.gpr[31] = (0x0898958Cu);
    ctx.gpr[4] = (0u | 358u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0898958Cu) goto L_0898958C;
    return;
L_0898958C:
    ctx.gpr[31] = (0x08989594u);
    ctx.gpr[4] = (0u | 362u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989594u) goto L_08989594;
    return;
L_08989594:
    ctx.gpr[31] = (0x0898959Cu);
    ctx.gpr[4] = (0u | 366u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0898959Cu) goto L_0898959C;
    return;
L_0898959C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
    goto L_089895AC;
L_089895AC:
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
L_089895C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_089895F0;
    }
    goto L_089895E4;
L_089895E4:
    ctx.gpr[31] = (0x089895ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x089895ECu) goto L_089895EC;
    return;
L_089895EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_089895F0;
L_089895F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989620;
      }
      goto L_089895F8;
    }
L_089895F8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08989604u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08989604u) goto L_08989604;
    return;
L_08989604:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898961C;
      }
      goto L_08989610;
    }
L_08989610:
    ctx.gpr[31] = (0x08989618u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08989618u) goto L_08989618;
    return;
L_08989618:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898961C;
L_0898961C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989620;
L_08989620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898962Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898962Cu) goto L_0898962C;
    return;
L_0898962C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08989648u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08989648u) goto L_08989648;
    return;
L_08989648:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17674)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17674), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898967C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2238u << 16u);
      if (branch_taken) {
          goto L_08989710;
      }
      goto L_089896A0;
    }
L_089896A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_089896B8;
    }
    goto L_089896AC;
L_089896AC:
    ctx.gpr[31] = (0x089896B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x089896B4u) goto L_089896B4;
    return;
L_089896B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_089896B8;
L_089896B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_089896E8;
      }
      goto L_089896C0;
    }
L_089896C0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089896CCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089896CCu) goto L_089896CC;
    return;
L_089896CC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089896E4;
      }
      goto L_089896D8;
    }
L_089896D8:
    ctx.gpr[31] = (0x089896E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x089896E0u) goto L_089896E0;
    return;
L_089896E0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089896E4;
L_089896E4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_089896E8;
L_089896E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x089896F4u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16096));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x089896F4u) goto L_089896F4;
    return;
L_089896F4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898970Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898970Cu) goto L_0898970C;
    return;
L_0898970C:
    ctx.gpr[4] = (2238u << 16u);
    goto L_08989710;
L_08989710:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08989724u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08989724u) goto L_08989724;
    return;
L_08989724:
    ctx.gpr[31] = (0x0898972Cu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0898972Cu) goto L_0898972C;
    return;
L_0898972C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089897CC;
      }
      goto L_08989734;
    }
L_08989734:
    ctx.gpr[31] = (0x0898973Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0898973Cu) goto L_0898973C;
    return;
L_0898973C:
    ctx.gpr[31] = (0x08989744u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(632)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08989744u) goto L_08989744;
    return;
L_08989744:
    ctx.gpr[31] = (0x0898974Cu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0898974Cu) goto L_0898974C;
    return;
L_0898974C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089897CC;
      }
      goto L_08989758;
    }
L_08989758:
    ctx.gpr[31] = (0x08989760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08989760u) goto L_08989760;
    return;
L_08989760:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(944));
    ctx.gpr[31] = (0x0898976Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 383u, 0x08B0D94Cu>(ctx, &aot_mem) && ctx.pc == 0x0898976Cu) goto L_0898976C;
    return;
L_0898976C:
    ctx.gpr[31] = (0x08989774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x08989774u) goto L_08989774;
    return;
L_08989774:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(944));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08989784u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem) && ctx.pc == 0x08989784u) goto L_08989784;
    return;
L_08989784:
    ctx.gpr[31] = (0x0898978Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0898978Cu) goto L_0898978C;
    return;
L_0898978C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(944));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0898979Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem) && ctx.pc == 0x0898979Cu) goto L_0898979C;
    return;
L_0898979C:
    ctx.gpr[31] = (0x089897A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089897A4u) goto L_089897A4;
    return;
L_089897A4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(944));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089897B4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem) && ctx.pc == 0x089897B4u) goto L_089897B4;
    return;
L_089897B4:
    ctx.gpr[31] = (0x089897BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x089897BCu) goto L_089897BC;
    return;
L_089897BC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(944));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x089897CCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 375u, 0x08B0D8ECu>(ctx, &aot_mem) && ctx.pc == 0x089897CCu) goto L_089897CC;
    return;
L_089897CC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_089897FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08989834;
      }
      goto L_0898982C;
    }
L_0898982C:
    ctx.gpr[31] = (0x08989834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08989834u) goto L_08989834;
    return;
L_08989834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989868;
      }
      goto L_08989840;
    }
L_08989840:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898984Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898984Cu) goto L_0898984C;
    return;
L_0898984C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989864;
      }
      goto L_08989858;
    }
L_08989858:
    ctx.gpr[31] = (0x08989860u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08989860u) goto L_08989860;
    return;
L_08989860:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    goto L_08989864;
L_08989864:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989868;
L_08989868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08989874u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08989874u) goto L_08989874;
    return;
L_08989874:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898988Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898988Cu) goto L_0898988C;
    return;
L_0898988C:
    ctx.gpr[31] = (0x08989894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem) && ctx.pc == 0x08989894u) goto L_08989894;
    return;
L_08989894:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089898A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem) && ctx.pc == 0x089898A8u) goto L_089898A8;
    return;
L_089898A8:
    ctx.gpr[31] = (0x089898B0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem) && ctx.pc == 0x089898B0u) goto L_089898B0;
    return;
L_089898B0:
    ctx.gpr[31] = (0x089898B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem) && ctx.pc == 0x089898B8u) goto L_089898B8;
    return;
L_089898B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989AA0;
      }
      goto L_089898C0;
    }
L_089898C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_089898D8;
    }
    goto L_089898CC;
L_089898CC:
    ctx.gpr[31] = (0x089898D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x089898D4u) goto L_089898D4;
    return;
L_089898D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_089898D8;
L_089898D8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989908;
      }
      goto L_089898E0;
    }
L_089898E0:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x089898ECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x089898ECu) goto L_089898EC;
    return;
L_089898EC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989904;
      }
      goto L_089898F8;
    }
L_089898F8:
    ctx.gpr[31] = (0x08989900u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08989900u) goto L_08989900;
    return;
L_08989900:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08989904;
L_08989904:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    goto L_08989908;
L_08989908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08989914u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08989914u) goto L_08989914;
    return;
L_08989914:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898992Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898992Cu) goto L_0898992C;
    return;
L_0898992C:
    ctx.gpr[4] = (ctx.gpr[19] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08989948;
      }
      goto L_08989938;
    }
L_08989938:
    ctx.gpr[31] = (0x08989940u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08989940u) goto L_08989940;
    return;
L_08989940:
    ctx.gpr[31] = (0x08989948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 623u, 0x08AD37A0u>(ctx, &aot_mem) && ctx.pc == 0x08989948u) goto L_08989948;
    return;
L_08989948:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[31] = (0x08989954u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem) && ctx.pc == 0x08989954u) goto L_08989954;
    return;
L_08989954:
    ctx.gpr[2] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08989980u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem) && ctx.pc == 0x08989980u) goto L_08989980;
    return;
L_08989980:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08989AA0;
      }
      goto L_0898998C;
    }
L_0898998C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08989998u);
    ctx.gpr[4] = (0u | 1920u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem) && ctx.pc == 0x08989998u) goto L_08989998;
    return;
L_08989998:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089899B8;
      }
      goto L_089899A4;
    }
L_089899A4:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089899B4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem) && ctx.pc == 0x089899B4u) goto L_089899B4;
    return;
L_089899B4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089899B8;
L_089899B8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989AA0;
      }
      goto L_089899C0;
    }
L_089899C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[5]);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16479u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08989A68u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem) && ctx.pc == 0x08989A68u) goto L_08989A68;
    return;
L_08989A68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08989A7Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem) && ctx.pc == 0x08989A7Cu) goto L_08989A7C;
    return;
L_08989A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(680), ctx.gpr[4]);
    ctx.gpr[31] = (0x08989AA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08989AA0u) goto L_08989AA0;
    return;
L_08989AA0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989AD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08989AE8u);
    ctx.gpr[4] = (0u | 246u);
    goto L_089897FC;
L_08989AE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989AF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08989B04u);
    ctx.gpr[4] = (0u | 241u);
    goto L_089897FC;
L_08989B04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08989B10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08989B40;
    }
    goto L_08989B34;
L_08989B34:
    ctx.gpr[31] = (0x08989B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08989B3Cu) goto L_08989B3C;
    return;
L_08989B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08989B40;
L_08989B40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989B70;
      }
      goto L_08989B48;
    }
L_08989B48:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08989B54u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08989B54u) goto L_08989B54;
    return;
L_08989B54:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989B6C;
      }
      goto L_08989B60;
    }
L_08989B60:
    ctx.gpr[31] = (0x08989B68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08989B68u) goto L_08989B68;
    return;
L_08989B68:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08989B6C;
L_08989B6C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989B70;
L_08989B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08989B7Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08989B7Cu) goto L_08989B7C;
    return;
L_08989B7C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08989B94u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08989B94u) goto L_08989B94;
    return;
L_08989B94:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08989C3C;
      }
      goto L_08989BA8;
    }
L_08989BA8:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[19] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08989BB8;
L_08989BB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08989BD0;
      }
      goto L_08989BC0;
    }
L_08989BC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08989BD8;
    }
    goto L_08989BD0;
L_08989BD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08989BF8;
      }
      goto L_08989BD8;
    }
L_08989BD8:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08989BF4;
    }
    goto L_08989BEC;
L_08989BEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08989BF8;
      }
      goto L_08989BF4;
    }
L_08989BF4:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    goto L_08989BF8;
L_08989BF8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989C28;
      }
      goto L_08989C04;
    }
L_08989C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x08989C28u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08989C28u) goto L_08989C28;
    return;
L_08989C28:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08989BB8;
      }
      goto L_08989C3C;
    }
L_08989C3C:
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
L_08989C58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16151)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16151), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08989C88;
      }
      goto L_08989C80;
    }
L_08989C80:
    ctx.gpr[31] = (0x08989C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08989C88u) goto L_08989C88;
    return;
L_08989C88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989CBC;
      }
      goto L_08989C94;
    }
L_08989C94:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08989CA0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08989CA0u) goto L_08989CA0;
    return;
L_08989CA0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989CB8;
      }
      goto L_08989CAC;
    }
L_08989CAC:
    ctx.gpr[31] = (0x08989CB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08989CB4u) goto L_08989CB4;
    return;
L_08989CB4:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08989CB8;
L_08989CB8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08989CBC;
L_08989CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08989CC8u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08989CC8u) goto L_08989CC8;
    return;
L_08989CC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08989CE0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08989CE0u) goto L_08989CE0;
    return;
L_08989CE0:
    ctx.gpr[4] = (16u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16151)));
    ctx.gpr[16] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_08989CF4;
L_08989CF4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08989D0C;
      }
      goto L_08989D04;
    }
L_08989D04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08989D10;
      }
      goto L_08989D0C;
    }
L_08989D0C:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    goto L_08989D10;
L_08989D10:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08989CF4;
      }
      goto L_08989D20;
    }
L_08989D20:
    ctx.gpr[31] = (0x08989D28u);
    // nop
    goto L_08988D64;
L_08989D28:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_08989D54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08989D80;
    }
    goto L_08989D74;
L_08989D74:
    ctx.gpr[31] = (0x08989D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08989D7Cu) goto L_08989D7C;
    return;
L_08989D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08989D80;
L_08989D80:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989DB0;
      }
      goto L_08989D88;
    }
L_08989D88:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08989D94u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08989D94u) goto L_08989D94;
    return;
L_08989D94:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989DAC;
      }
      goto L_08989DA0;
    }
L_08989DA0:
    ctx.gpr[31] = (0x08989DA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08989DA8u) goto L_08989DA8;
    return;
L_08989DA8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08989DAC;
L_08989DAC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08989DB0;
L_08989DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08989DBCu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08989DBCu) goto L_08989DBC;
    return;
L_08989DBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08989DD4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08989DD4u) goto L_08989DD4;
    return;
L_08989DD4:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[16] = (0u | 16u);
    goto L_08989DDC;
L_08989DDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08989DDC;
      }
      goto L_08989E04;
    }
L_08989E04:
    ctx.gpr[31] = (0x08989E0Cu);
    // nop
    goto L_08988D64;
L_08989E0C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_08989E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08989E64;
    }
    goto L_08989E58;
L_08989E58:
    ctx.gpr[31] = (0x08989E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08989E60u) goto L_08989E60;
    return;
L_08989E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08989E64;
L_08989E64:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989E94;
      }
      goto L_08989E6C;
    }
L_08989E6C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08989E78u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08989E78u) goto L_08989E78;
    return;
L_08989E78:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989E90;
      }
      goto L_08989E84;
    }
L_08989E84:
    ctx.gpr[31] = (0x08989E8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08989E8Cu) goto L_08989E8C;
    return;
L_08989E8C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08989E90;
L_08989E90:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989E94;
L_08989E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08989EA0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08989EA0u) goto L_08989EA0;
    return;
L_08989EA0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08989EBCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08989EBCu) goto L_08989EBC;
    return;
L_08989EBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-11828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-11828), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_08989EF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08989F1C;
    }
    goto L_08989F10;
L_08989F10:
    ctx.gpr[31] = (0x08989F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08989F18u) goto L_08989F18;
    return;
L_08989F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08989F1C;
L_08989F1C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08989F4C;
      }
      goto L_08989F24;
    }
L_08989F24:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08989F30u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x08989F30u) goto L_08989F30;
    return;
L_08989F30:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08989F48;
      }
      goto L_08989F3C;
    }
L_08989F3C:
    ctx.gpr[31] = (0x08989F44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x08989F44u) goto L_08989F44;
    return;
L_08989F44:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08989F48;
L_08989F48:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08989F4C;
L_08989F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x08989F58u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x08989F58u) goto L_08989F58;
    return;
L_08989F58:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08989F70u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08989F70u) goto L_08989F70;
    return;
L_08989F70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7672)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08989F9C;
      }
      goto L_08989F8C;
    }
L_08989F8C:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08989F9C;
L_08989F9C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_08989FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08989FF4;
    }
    goto L_08989FE8;
L_08989FE8:
    ctx.gpr[31] = (0x08989FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08989FF0u) goto L_08989FF0;
    return;
L_08989FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08989FF4;
L_08989FF4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A024;
      }
      goto L_08989FFC;
    }
L_08989FFC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A008u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A008u) goto L_0898A008;
    return;
L_0898A008:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A020;
      }
      goto L_0898A014;
    }
L_0898A014:
    ctx.gpr[31] = (0x0898A01Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A01Cu) goto L_0898A01C;
    return;
L_0898A01C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A020;
L_0898A020:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A024;
L_0898A024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A030u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A030u) goto L_0898A030;
    return;
L_0898A030:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A048u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A048u) goto L_0898A048;
    return;
L_0898A048:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7672)));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898A074;
      }
      goto L_0898A064;
    }
L_0898A064:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898A074;
L_0898A074:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A0A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A0CC;
    }
    goto L_0898A0C0;
L_0898A0C0:
    ctx.gpr[31] = (0x0898A0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A0C8u) goto L_0898A0C8;
    return;
L_0898A0C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A0CC;
L_0898A0CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A0FC;
      }
      goto L_0898A0D4;
    }
L_0898A0D4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A0E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A0E0u) goto L_0898A0E0;
    return;
L_0898A0E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A0F8;
      }
      goto L_0898A0EC;
    }
L_0898A0EC:
    ctx.gpr[31] = (0x0898A0F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A0F4u) goto L_0898A0F4;
    return;
L_0898A0F4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A0F8;
L_0898A0F8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A0FC;
L_0898A0FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A108u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16072));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A108u) goto L_0898A108;
    return;
L_0898A108:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A124u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A124u) goto L_0898A124;
    return;
L_0898A124:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (2238u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A184:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A1B4;
    }
    goto L_0898A1A8;
L_0898A1A8:
    ctx.gpr[31] = (0x0898A1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A1B0u) goto L_0898A1B0;
    return;
L_0898A1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A1B4;
L_0898A1B4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A1E4;
      }
      goto L_0898A1BC;
    }
L_0898A1BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A1C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A1C8u) goto L_0898A1C8;
    return;
L_0898A1C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A1E0;
      }
      goto L_0898A1D4;
    }
L_0898A1D4:
    ctx.gpr[31] = (0x0898A1DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A1DCu) goto L_0898A1DC;
    return;
L_0898A1DC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A1E0;
L_0898A1E0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A1E4;
L_0898A1E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A1F0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16064));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A1F0u) goto L_0898A1F0;
    return;
L_0898A1F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A20Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A20Cu) goto L_0898A20C;
    return;
L_0898A20C:
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(337)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898A224u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0898A224u) goto L_0898A224;
    return;
L_0898A224:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A254:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A280;
    }
    goto L_0898A274;
L_0898A274:
    ctx.gpr[31] = (0x0898A27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A27Cu) goto L_0898A27C;
    return;
L_0898A27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A280;
L_0898A280:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A2B0;
      }
      goto L_0898A288;
    }
L_0898A288:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898A294u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A294u) goto L_0898A294;
    return;
L_0898A294:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A2AC;
      }
      goto L_0898A2A0;
    }
L_0898A2A0:
    ctx.gpr[31] = (0x0898A2A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A2A8u) goto L_0898A2A8;
    return;
L_0898A2A8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0898A2AC;
L_0898A2AC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_0898A2B0;
L_0898A2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A2BCu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16056));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A2BCu) goto L_0898A2BC;
    return;
L_0898A2BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A2D4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A2D4u) goto L_0898A2D4;
    return;
L_0898A2D4:
    ctx.gpr[31] = (0x0898A2DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0898A2DCu) goto L_0898A2DC;
    return;
L_0898A2DC:
    ctx.gpr[31] = (0x0898A2E4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0898A2E4u) goto L_0898A2E4;
    return;
L_0898A2E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2320)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_0898A2FC;
    }
    goto L_0898A2FC;
L_0898A2FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0898A308u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 657u, 0x0894748Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A308u) goto L_0898A308;
    return;
L_0898A308:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A360;
    }
    goto L_0898A354;
L_0898A354:
    ctx.gpr[31] = (0x0898A35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A35Cu) goto L_0898A35C;
    return;
L_0898A35C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A360;
L_0898A360:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A390;
      }
      goto L_0898A368;
    }
L_0898A368:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A374u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A374u) goto L_0898A374;
    return;
L_0898A374:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A38C;
      }
      goto L_0898A380;
    }
L_0898A380:
    ctx.gpr[31] = (0x0898A388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A388u) goto L_0898A388;
    return;
L_0898A388:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A38C;
L_0898A38C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A390;
L_0898A390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A39Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16056));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A39Cu) goto L_0898A39C;
    return;
L_0898A39C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A3B8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A3B8u) goto L_0898A3B8;
    return;
L_0898A3B8:
    ctx.gpr[31] = (0x0898A3C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0898A3C0u) goto L_0898A3C0;
    return;
L_0898A3C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898A3CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 657u, 0x0894748Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A3CCu) goto L_0898A3CC;
    return;
L_0898A3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A3F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A420;
    }
    goto L_0898A414;
L_0898A414:
    ctx.gpr[31] = (0x0898A41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A41Cu) goto L_0898A41C;
    return;
L_0898A41C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A420;
L_0898A420:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A450;
      }
      goto L_0898A428;
    }
L_0898A428:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A434u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A434u) goto L_0898A434;
    return;
L_0898A434:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A44C;
      }
      goto L_0898A440;
    }
L_0898A440:
    ctx.gpr[31] = (0x0898A448u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A448u) goto L_0898A448;
    return;
L_0898A448:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A44C;
L_0898A44C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A450;
L_0898A450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A45Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16048));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A45Cu) goto L_0898A45C;
    return;
L_0898A45C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A478u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A478u) goto L_0898A478;
    return;
L_0898A478:
    ctx.gpr[31] = (0x0898A480u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A480u) goto L_0898A480;
    return;
L_0898A480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A4A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A4D4;
    }
    goto L_0898A4C8;
L_0898A4C8:
    ctx.gpr[31] = (0x0898A4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A4D0u) goto L_0898A4D0;
    return;
L_0898A4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A4D4;
L_0898A4D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A504;
      }
      goto L_0898A4DC;
    }
L_0898A4DC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A4E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A4E8u) goto L_0898A4E8;
    return;
L_0898A4E8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A500;
      }
      goto L_0898A4F4;
    }
L_0898A4F4:
    ctx.gpr[31] = (0x0898A4FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A4FCu) goto L_0898A4FC;
    return;
L_0898A4FC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A500;
L_0898A500:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A504;
L_0898A504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A510u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16048));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A510u) goto L_0898A510;
    return;
L_0898A510:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A52Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A52Cu) goto L_0898A52C;
    return;
L_0898A52C:
    ctx.gpr[31] = (0x0898A534u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A534u) goto L_0898A534;
    return;
L_0898A534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A55C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A588;
    }
    goto L_0898A57C;
L_0898A57C:
    ctx.gpr[31] = (0x0898A584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A584u) goto L_0898A584;
    return;
L_0898A584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A588;
L_0898A588:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A5B8;
      }
      goto L_0898A590;
    }
L_0898A590:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A59Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A59Cu) goto L_0898A59C;
    return;
L_0898A59C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A5B4;
      }
      goto L_0898A5A8;
    }
L_0898A5A8:
    ctx.gpr[31] = (0x0898A5B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A5B0u) goto L_0898A5B0;
    return;
L_0898A5B0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A5B4;
L_0898A5B4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A5B8;
L_0898A5B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A5C4u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16048));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A5C4u) goto L_0898A5C4;
    return;
L_0898A5C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A5E0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A5E0u) goto L_0898A5E0;
    return;
L_0898A5E0:
    ctx.gpr[31] = (0x0898A5E8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A5E8u) goto L_0898A5E8;
    return;
L_0898A5E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A610:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A63C;
    }
    goto L_0898A630;
L_0898A630:
    ctx.gpr[31] = (0x0898A638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A638u) goto L_0898A638;
    return;
L_0898A638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A63C;
L_0898A63C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A66C;
      }
      goto L_0898A644;
    }
L_0898A644:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A650u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A650u) goto L_0898A650;
    return;
L_0898A650:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A668;
      }
      goto L_0898A65C;
    }
L_0898A65C:
    ctx.gpr[31] = (0x0898A664u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A664u) goto L_0898A664;
    return;
L_0898A664:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A668;
L_0898A668:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A66C;
L_0898A66C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A678u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16048));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A678u) goto L_0898A678;
    return;
L_0898A678:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A694u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A694u) goto L_0898A694;
    return;
L_0898A694:
    ctx.gpr[31] = (0x0898A69Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A69Cu) goto L_0898A69C;
    return;
L_0898A69C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A6C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A6F0;
    }
    goto L_0898A6E4;
L_0898A6E4:
    ctx.gpr[31] = (0x0898A6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A6ECu) goto L_0898A6EC;
    return;
L_0898A6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A6F0;
L_0898A6F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A720;
      }
      goto L_0898A6F8;
    }
L_0898A6F8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A704u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A704u) goto L_0898A704;
    return;
L_0898A704:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A71C;
      }
      goto L_0898A710;
    }
L_0898A710:
    ctx.gpr[31] = (0x0898A718u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A718u) goto L_0898A718;
    return;
L_0898A718:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A71C;
L_0898A71C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A720;
L_0898A720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A72Cu);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16048));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A72Cu) goto L_0898A72C;
    return;
L_0898A72C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A748u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A748u) goto L_0898A748;
    return;
L_0898A748:
    ctx.gpr[31] = (0x0898A750u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A750u) goto L_0898A750;
    return;
L_0898A750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A7A4;
    }
    goto L_0898A798;
L_0898A798:
    ctx.gpr[31] = (0x0898A7A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A7A0u) goto L_0898A7A0;
    return;
L_0898A7A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A7A4;
L_0898A7A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A7D4;
      }
      goto L_0898A7AC;
    }
L_0898A7AC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A7B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A7B8u) goto L_0898A7B8;
    return;
L_0898A7B8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A7D0;
      }
      goto L_0898A7C4;
    }
L_0898A7C4:
    ctx.gpr[31] = (0x0898A7CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A7CCu) goto L_0898A7CC;
    return;
L_0898A7CC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A7D0;
L_0898A7D0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A7D4;
L_0898A7D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A7E0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A7E0u) goto L_0898A7E0;
    return;
L_0898A7E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A7FCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A7FCu) goto L_0898A7FC;
    return;
L_0898A7FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4180)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4180), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A85C;
    }
    goto L_0898A850;
L_0898A850:
    ctx.gpr[31] = (0x0898A858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A858u) goto L_0898A858;
    return;
L_0898A858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A85C;
L_0898A85C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A88C;
      }
      goto L_0898A864;
    }
L_0898A864:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A870u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A870u) goto L_0898A870;
    return;
L_0898A870:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A888;
      }
      goto L_0898A87C;
    }
L_0898A87C:
    ctx.gpr[31] = (0x0898A884u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A884u) goto L_0898A884;
    return;
L_0898A884:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A888;
L_0898A888:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A88C;
L_0898A88C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A898u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A898u) goto L_0898A898;
    return;
L_0898A898:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A8B4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A8B4u) goto L_0898A8B4;
    return;
L_0898A8B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1778)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1778), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A8E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A914;
    }
    goto L_0898A908;
L_0898A908:
    ctx.gpr[31] = (0x0898A910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A910u) goto L_0898A910;
    return;
L_0898A910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A914;
L_0898A914:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A944;
      }
      goto L_0898A91C;
    }
L_0898A91C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A928u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A928u) goto L_0898A928;
    return;
L_0898A928:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A940;
      }
      goto L_0898A934;
    }
L_0898A934:
    ctx.gpr[31] = (0x0898A93Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A93Cu) goto L_0898A93C;
    return;
L_0898A93C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A940;
L_0898A940:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A944;
L_0898A944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898A950u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898A950u) goto L_0898A950;
    return;
L_0898A950:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898A96Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898A96Cu) goto L_0898A96C;
    return;
L_0898A96C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-9200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-9200), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898A9A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898A9CC;
    }
    goto L_0898A9C0;
L_0898A9C0:
    ctx.gpr[31] = (0x0898A9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898A9C8u) goto L_0898A9C8;
    return;
L_0898A9C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898A9CC;
L_0898A9CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898A9FC;
      }
      goto L_0898A9D4;
    }
L_0898A9D4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898A9E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898A9E0u) goto L_0898A9E0;
    return;
L_0898A9E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898A9F8;
      }
      goto L_0898A9EC;
    }
L_0898A9EC:
    ctx.gpr[31] = (0x0898A9F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898A9F4u) goto L_0898A9F4;
    return;
L_0898A9F4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898A9F8;
L_0898A9F8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898A9FC;
L_0898A9FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898AA08u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898AA08u) goto L_0898AA08;
    return;
L_0898AA08:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898AA24u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898AA24u) goto L_0898AA24;
    return;
L_0898AA24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-9199)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-9199), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898AA58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898AA84;
    }
    goto L_0898AA78;
L_0898AA78:
    ctx.gpr[31] = (0x0898AA80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898AA80u) goto L_0898AA80;
    return;
L_0898AA80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898AA84;
L_0898AA84:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898AAB4;
      }
      goto L_0898AA8C;
    }
L_0898AA8C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898AA98u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898AA98u) goto L_0898AA98;
    return;
L_0898AA98:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AAB0;
      }
      goto L_0898AAA4;
    }
L_0898AAA4:
    ctx.gpr[31] = (0x0898AAACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AAACu) goto L_0898AAAC;
    return;
L_0898AAAC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898AAB0;
L_0898AAB0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898AAB4;
L_0898AAB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898AAC0u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898AAC0u) goto L_0898AAC0;
    return;
L_0898AAC0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898AADCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898AADCu) goto L_0898AADC;
    return;
L_0898AADC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-9198)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-9198), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898AB10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898AB3C;
    }
    goto L_0898AB30;
L_0898AB30:
    ctx.gpr[31] = (0x0898AB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898AB38u) goto L_0898AB38;
    return;
L_0898AB38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898AB3C;
L_0898AB3C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898AB6C;
      }
      goto L_0898AB44;
    }
L_0898AB44:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898AB50u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898AB50u) goto L_0898AB50;
    return;
L_0898AB50:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AB68;
      }
      goto L_0898AB5C;
    }
L_0898AB5C:
    ctx.gpr[31] = (0x0898AB64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AB64u) goto L_0898AB64;
    return;
L_0898AB64:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898AB68;
L_0898AB68:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898AB6C;
L_0898AB6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898AB78u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898AB78u) goto L_0898AB78;
    return;
L_0898AB78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898AB94u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898AB94u) goto L_0898AB94;
    return;
L_0898AB94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-9197)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-9197), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898ABC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898ABF4;
    }
    goto L_0898ABE8;
L_0898ABE8:
    ctx.gpr[31] = (0x0898ABF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898ABF0u) goto L_0898ABF0;
    return;
L_0898ABF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898ABF4;
L_0898ABF4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898AC24;
      }
      goto L_0898ABFC;
    }
L_0898ABFC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898AC08u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898AC08u) goto L_0898AC08;
    return;
L_0898AC08:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AC20;
      }
      goto L_0898AC14;
    }
L_0898AC14:
    ctx.gpr[31] = (0x0898AC1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AC1Cu) goto L_0898AC1C;
    return;
L_0898AC1C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898AC20;
L_0898AC20:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898AC24;
L_0898AC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898AC30u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898AC30u) goto L_0898AC30;
    return;
L_0898AC30:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898AC4Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898AC4Cu) goto L_0898AC4C;
    return;
L_0898AC4C:
    ctx.gpr[31] = (0x0898AC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0898AC54u) goto L_0898AC54;
    return;
L_0898AC54:
    ctx.gpr[10] = (17530u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x0898AC78u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem) && ctx.pc == 0x0898AC78u) goto L_0898AC78;
    return;
L_0898AC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898ACA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898ACCC;
    }
    goto L_0898ACC0;
L_0898ACC0:
    ctx.gpr[31] = (0x0898ACC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898ACC8u) goto L_0898ACC8;
    return;
L_0898ACC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898ACCC;
L_0898ACCC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898ACFC;
      }
      goto L_0898ACD4;
    }
L_0898ACD4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898ACE0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898ACE0u) goto L_0898ACE0;
    return;
L_0898ACE0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898ACF8;
      }
      goto L_0898ACEC;
    }
L_0898ACEC:
    ctx.gpr[31] = (0x0898ACF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898ACF4u) goto L_0898ACF4;
    return;
L_0898ACF4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898ACF8;
L_0898ACF8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898ACFC;
L_0898ACFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898AD08u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898AD08u) goto L_0898AD08;
    return;
L_0898AD08:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898AD24u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898AD24u) goto L_0898AD24;
    return;
L_0898AD24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8160), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898AD50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898AD7C;
    }
    goto L_0898AD70;
L_0898AD70:
    ctx.gpr[31] = (0x0898AD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898AD78u) goto L_0898AD78;
    return;
L_0898AD78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898AD7C;
L_0898AD7C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898ADAC;
      }
      goto L_0898AD84;
    }
L_0898AD84:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898AD90u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898AD90u) goto L_0898AD90;
    return;
L_0898AD90:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898ADA8;
      }
      goto L_0898AD9C;
    }
L_0898AD9C:
    ctx.gpr[31] = (0x0898ADA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898ADA4u) goto L_0898ADA4;
    return;
L_0898ADA4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898ADA8;
L_0898ADA8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898ADAC;
L_0898ADAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898ADB8u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898ADB8u) goto L_0898ADB8;
    return;
L_0898ADB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898ADD4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898ADD4u) goto L_0898ADD4;
    return;
L_0898ADD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5480), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898AE00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898AE2C;
    }
    goto L_0898AE20;
L_0898AE20:
    ctx.gpr[31] = (0x0898AE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898AE28u) goto L_0898AE28;
    return;
L_0898AE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898AE2C;
L_0898AE2C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898AE5C;
      }
      goto L_0898AE34;
    }
L_0898AE34:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898AE40u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898AE40u) goto L_0898AE40;
    return;
L_0898AE40:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AE58;
      }
      goto L_0898AE4C;
    }
L_0898AE4C:
    ctx.gpr[31] = (0x0898AE54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AE54u) goto L_0898AE54;
    return;
L_0898AE54:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898AE58;
L_0898AE58:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898AE5C;
L_0898AE5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898AE68u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898AE68u) goto L_0898AE68;
    return;
L_0898AE68:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898AE84u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898AE84u) goto L_0898AE84;
    return;
L_0898AE84:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-3212), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-3211), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898AEB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898AEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0898AEDCu) goto L_0898AEDC;
    return;
L_0898AEDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B04C;
      }
      goto L_0898AEE4;
    }
L_0898AEE4:
    ctx.gpr[31] = (0x0898AEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0898AEECu) goto L_0898AEEC;
    return;
L_0898AEEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 6u);
      if (branch_taken) {
          goto L_0898AF0C;
      }
      goto L_0898AEF8;
    }
L_0898AEF8:
    ctx.gpr[31] = (0x0898AF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0898AF00u) goto L_0898AF00;
    return;
L_0898AF00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0898B04C;
      }
      goto L_0898AF0C;
    }
L_0898AF0C:
    ctx.gpr[31] = (0x0898AF14u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0898AF14u) goto L_0898AF14;
    return;
L_0898AF14:
    ctx.gpr[31] = (0x0898AF1Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem) && ctx.pc == 0x0898AF1Cu) goto L_0898AF1C;
    return;
L_0898AF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0898AF54;
      }
      goto L_0898AF28;
    }
L_0898AF28:
    ctx.gpr[31] = (0x0898AF30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AF30u) goto L_0898AF30;
    return;
L_0898AF30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898AF54;
      }
      goto L_0898AF38;
    }
L_0898AF38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898AF44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AF44u) goto L_0898AF44;
    return;
L_0898AF44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x0898AF54u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x0898AF54u) goto L_0898AF54;
    return;
L_0898AF54:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16576u << 16u);
    ctx.gpr[31] = (0x0898AF70u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x0898AF70u) goto L_0898AF70;
    return;
L_0898AF70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0898AFA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem) && ctx.pc == 0x0898AFA0u) goto L_0898AFA0;
    return;
L_0898AFA0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B04C;
      }
      goto L_0898AFAC;
    }
L_0898AFAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898B04C;
      }
      goto L_0898AFBC;
    }
L_0898AFBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898AFD4;
    }
    goto L_0898AFC8;
L_0898AFC8:
    ctx.gpr[31] = (0x0898AFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898AFD0u) goto L_0898AFD0;
    return;
L_0898AFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898AFD4;
L_0898AFD4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898B004;
      }
      goto L_0898AFDC;
    }
L_0898AFDC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898AFE8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898AFE8u) goto L_0898AFE8;
    return;
L_0898AFE8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B000;
      }
      goto L_0898AFF4;
    }
L_0898AFF4:
    ctx.gpr[31] = (0x0898AFFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898AFFCu) goto L_0898AFFC;
    return;
L_0898AFFC:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_0898B000;
L_0898B000:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_0898B004;
L_0898B004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898B010u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898B010u) goto L_0898B010;
    return;
L_0898B010:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898B028u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898B028u) goto L_0898B028;
    return;
L_0898B028:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x0898B038u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x0898B038u) goto L_0898B038;
    return;
L_0898B038:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
    goto L_0898B04C;
L_0898B04C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_0898B09C;
    }
    goto L_0898B090;
L_0898B090:
    ctx.gpr[31] = (0x0898B098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x0898B098u) goto L_0898B098;
    return;
L_0898B098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_0898B09C;
L_0898B09C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_0898B0CC;
      }
      goto L_0898B0A4;
    }
L_0898B0A4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0898B0B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898B0B0u) goto L_0898B0B0;
    return;
L_0898B0B0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B0C8;
      }
      goto L_0898B0BC;
    }
L_0898B0BC:
    ctx.gpr[31] = (0x0898B0C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B0C4u) goto L_0898B0C4;
    return;
L_0898B0C4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0898B0C8;
L_0898B0C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0898B0CC;
L_0898B0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[31] = (0x0898B0D8u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898B0D8u) goto L_0898B0D8;
    return;
L_0898B0D8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898B0F4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x0898B0F4u) goto L_0898B0F4;
    return;
L_0898B0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9288)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-20331), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16130), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9288), ctx.gpr[4]);
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
L_0898B120:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_0898B128;
L_0898B128:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B158;
      }
      goto L_0898B130;
    }
L_0898B130:
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898B2B8;
      }
      goto L_0898B13C;
    }
L_0898B13C:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5056)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    jump_target = ctx.gpr[1];
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B160;
    }
L_0898B160:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B17C;
      }
      goto L_0898B16C;
    }
L_0898B16C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_0898B170;
L_0898B170:
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_0898B128;
      }
      goto L_0898B17C;
    }
L_0898B17C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B184;
    }
L_0898B184:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B198;
      }
      goto L_0898B190;
    }
L_0898B190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B198;
    }
L_0898B198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B1A0;
    }
L_0898B1A0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B1B4;
      }
      goto L_0898B1AC;
    }
L_0898B1AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B1B4;
    }
L_0898B1B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B1BC;
    }
L_0898B1BC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B1D0;
      }
      goto L_0898B1C8;
    }
L_0898B1C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B1D0;
    }
L_0898B1D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B1D8;
    }
L_0898B1D8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B1EC;
      }
      goto L_0898B1E4;
    }
L_0898B1E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B1EC;
    }
L_0898B1EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B1F4;
    }
L_0898B1F4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B208;
      }
      goto L_0898B200;
    }
L_0898B200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B208;
    }
L_0898B208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B210;
    }
L_0898B210:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B224;
      }
      goto L_0898B21C;
    }
L_0898B21C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B224;
    }
L_0898B224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B22C;
    }
L_0898B22C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B240;
      }
      goto L_0898B238;
    }
L_0898B238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B240;
    }
L_0898B240:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B248;
    }
L_0898B248:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B25C;
      }
      goto L_0898B254;
    }
L_0898B254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B25C;
    }
L_0898B25C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B264;
    }
L_0898B264:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B278;
      }
      goto L_0898B270;
    }
L_0898B270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B278;
    }
L_0898B278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B280;
    }
L_0898B280:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B294;
      }
      goto L_0898B28C;
    }
L_0898B28C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B294;
    }
L_0898B294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B29C;
    }
L_0898B29C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0898B2B0;
      }
      goto L_0898B2A8;
    }
L_0898B2A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0898B170;
      }
      goto L_0898B2B0;
    }
L_0898B2B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898B2BC;
      }
      goto L_0898B2B8;
    }
L_0898B2B8:
    ctx.gpr[2] = (0u | 1u);
    goto L_0898B2BC;
L_0898B2BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B2C4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(30), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B328:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898B340u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0898BA34;
L_0898B340:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2238u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6640));
      if (branch_taken) {
          goto L_0898B384;
      }
      goto L_0898B37C;
    }
L_0898B37C:
    ctx.gpr[31] = (0x0898B384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 46u, 0x08B6833Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B384u) goto L_0898B384;
    return;
L_0898B384:
    ctx.gpr[31] = (0x0898B38Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5900)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 541u, 0x0889E57Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B38Cu) goto L_0898B38C;
    return;
L_0898B38C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_0898B39C;
L_0898B39C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898B3A8u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0898BA34;
L_0898B3A8:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(150), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
      if (branch_taken) {
          goto L_0898B39C;
      }
      goto L_0898B3C4;
    }
L_0898B3C4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9287), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9286), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9285), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16132), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-16131), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0898B3F0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0898B428;
L_0898B3F0:
    ctx.gpr[5] = (16262u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0898B408u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0898B428;
L_0898B408:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
L_0898B428:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6640));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898B458u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0898B428;
L_0898B458:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898B464u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 761u, 0x0898E288u>(ctx, &aot_mem) && ctx.pc == 0x0898B464u) goto L_0898B464;
    return;
L_0898B464:
    ctx.gpr[31] = (0x0898B46Cu);
    ctx.gpr[4] = (0u | 1u);
    goto L_0898B428;
L_0898B46C:
    ctx.gpr[31] = (0x0898B474u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    goto L_0898B2C4;
L_0898B474:
    ctx.gpr[31] = (0x0898B47Cu);
    ctx.gpr[4] = (0u | 1u);
    goto L_0898B428;
L_0898B47C:
    ctx.gpr[31] = (0x0898B484u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(52));
    goto L_0898B2C4;
L_0898B484:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B490:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898B4A0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0898B428;
L_0898B4A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898B4ACu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0898B854;
L_0898B4AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B4B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898B4C8u);
    // nop
    goto L_0898B448;
L_0898B4C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9287)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B4E4;
      }
      goto L_0898B4D4;
    }
L_0898B4D4:
    ctx.gpr[31] = (0x0898B4DCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0898B428;
L_0898B4DC:
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9287), static_cast<std::uint8_t>(0u));
    goto L_0898B4E4;
L_0898B4E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B4F0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B4F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2052)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B530;
      }
      goto L_0898B51C;
    }
L_0898B51C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9285)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1036)));
        goto L_0898B538;
    }
    goto L_0898B528;
L_0898B528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B69C;
      }
      goto L_0898B530;
    }
L_0898B530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B7C4;
      }
      goto L_0898B538;
    }
L_0898B538:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B69C;
      }
      goto L_0898B540;
    }
L_0898B540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[16] = (2237u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_0898B568;
      }
      goto L_0898B550;
    }
L_0898B550:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x0898B560u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x0898B560u) goto L_0898B560;
    return;
L_0898B560:
    ctx.gpr[31] = (0x0898B568u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16124));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0898B568u) goto L_0898B568;
    return;
L_0898B568:
    ctx.gpr[31] = (0x0898B570u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x0898B570u) goto L_0898B570;
    return;
L_0898B570:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898B69C;
      }
      goto L_0898B578;
    }
L_0898B578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (17172u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (ctx.gpr[4] | 37450u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17184u << 16u);
    ctx.gpr[31] = (0x0898B5BCu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B5BCu) goto L_0898B5BC;
    return;
L_0898B5BC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x0898B5D8u);
    ctx.gpr[8] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B5D8u) goto L_0898B5D8;
    return;
L_0898B5D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898B5E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x0898B5E8u) goto L_0898B5E8;
    return;
L_0898B5E8:
    ctx.gpr[31] = (0x0898B5F0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x0898B5F0u) goto L_0898B5F0;
    return;
L_0898B5F0:
    ctx.gpr[31] = (0x0898B5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B5F8u) goto L_0898B5F8;
    return;
L_0898B5F8:
    ctx.gpr[31] = (0x0898B600u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x0898B600u) goto L_0898B600;
    return;
L_0898B600:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 200u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0898B620u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0898B620u) goto L_0898B620;
    return;
L_0898B620:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16040));
      if (branch_taken) {
          goto L_0898B658;
      }
      goto L_0898B62C;
    }
L_0898B62C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0898B638u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898B638u) goto L_0898B638;
    return;
L_0898B638:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B650;
      }
      goto L_0898B644;
    }
L_0898B644:
    ctx.gpr[31] = (0x0898B64Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B64Cu) goto L_0898B64C;
    return;
L_0898B64C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0898B650;
L_0898B650:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16040));
    goto L_0898B658;
L_0898B658:
    ctx.gpr[31] = (0x0898B660u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898B660u) goto L_0898B660;
    return;
L_0898B660:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] >> 31u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-40));
    ctx.gpr[31] = (0x0898B694u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0898B694u) goto L_0898B694;
    return;
L_0898B694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B7C4;
      }
      goto L_0898B69C;
    }
L_0898B69C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9287)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B7C4;
      }
      goto L_0898B6A8;
    }
L_0898B6A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (17172u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[5] = (ctx.gpr[5] | 37450u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17184u << 16u);
    ctx.gpr[31] = (0x0898B6ECu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B6ECu) goto L_0898B6EC;
    return;
L_0898B6EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x0898B708u);
    ctx.gpr[8] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B708u) goto L_0898B708;
    return;
L_0898B708:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898B718u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem) && ctx.pc == 0x0898B718u) goto L_0898B718;
    return;
L_0898B718:
    ctx.gpr[31] = (0x0898B720u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem) && ctx.pc == 0x0898B720u) goto L_0898B720;
    return;
L_0898B720:
    ctx.gpr[31] = (0x0898B728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B728u) goto L_0898B728;
    return;
L_0898B728:
    ctx.gpr[31] = (0x0898B730u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem) && ctx.pc == 0x0898B730u) goto L_0898B730;
    return;
L_0898B730:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 200u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0898B750u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem) && ctx.pc == 0x0898B750u) goto L_0898B750;
    return;
L_0898B750:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16032));
      if (branch_taken) {
          goto L_0898B788;
      }
      goto L_0898B75C;
    }
L_0898B75C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0898B768u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x0898B768u) goto L_0898B768;
    return;
L_0898B768:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B780;
      }
      goto L_0898B774;
    }
L_0898B774:
    ctx.gpr[31] = (0x0898B77Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x0898B77Cu) goto L_0898B77C;
    return;
L_0898B77C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0898B780;
L_0898B780:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16032));
    goto L_0898B788;
L_0898B788:
    ctx.gpr[31] = (0x0898B790u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x0898B790u) goto L_0898B790;
    return;
L_0898B790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] >> 31u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-40));
    ctx.gpr[31] = (0x0898B7C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem) && ctx.pc == 0x0898B7C4u) goto L_0898B7C4;
    return;
L_0898B7C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B7D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898B7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 475u, 0x08AFB4F8u>(ctx, &aot_mem) && ctx.pc == 0x0898B7E8u) goto L_0898B7E8;
    return;
L_0898B7E8:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4180), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-11828), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1776), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1777), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1778), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1779), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1780), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1781), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1782), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1783), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1784), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1785), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-3212), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-3211), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5480), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-8160), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9292), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-20332), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-20329), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-20331), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-20330), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898B854:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0898B880;
      }
      goto L_0898B86C;
    }
L_0898B86C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0898B888;
      }
      goto L_0898B878;
    }
L_0898B878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0898B89C;
      }
      goto L_0898B880;
    }
L_0898B880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BA24;
      }
      goto L_0898B888;
    }
L_0898B888:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0898B89C;
      }
      goto L_0898B894;
    }
L_0898B894:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0898B89C;
L_0898B89C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B8B0;
      }
      goto L_0898B8A4;
    }
L_0898B8A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898B8B0u);
    ctx.gpr[5] = (0u | 84u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem) && ctx.pc == 0x0898B8B0u) goto L_0898B8B0;
    return;
L_0898B8B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0898B8CC;
      }
      goto L_0898B8BC;
    }
L_0898B8BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0898B8D0;
      }
      goto L_0898B8C8;
    }
L_0898B8C8:
    ctx.gpr[4] = (0u | 1u);
    goto L_0898B8CC;
L_0898B8CC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0898B8D0;
L_0898B8D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B8E4;
      }
      goto L_0898B8D8;
    }
L_0898B8D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898B8E4u);
    ctx.gpr[5] = (0u | 67u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem) && ctx.pc == 0x0898B8E4u) goto L_0898B8E4;
    return;
L_0898B8E4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0898B900;
      }
      goto L_0898B8F0;
    }
L_0898B8F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0898B904;
      }
      goto L_0898B8FC;
    }
L_0898B8FC:
    ctx.gpr[4] = (0u | 1u);
    goto L_0898B900;
L_0898B900:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0898B904;
L_0898B904:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B918;
      }
      goto L_0898B90C;
    }
L_0898B90C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898B918u);
    ctx.gpr[5] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem) && ctx.pc == 0x0898B918u) goto L_0898B918;
    return;
L_0898B918:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0898B934;
      }
      goto L_0898B924;
    }
L_0898B924:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0898B938;
      }
      goto L_0898B930;
    }
L_0898B930:
    ctx.gpr[4] = (0u | 1u);
    goto L_0898B934;
L_0898B934:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0898B938;
L_0898B938:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B94C;
      }
      goto L_0898B940;
    }
L_0898B940:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898B94Cu);
    ctx.gpr[5] = (0u | 83u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem) && ctx.pc == 0x0898B94Cu) goto L_0898B94C;
    return;
L_0898B94C:
    ctx.gpr[31] = (0x0898B954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0898BCCC;
L_0898B954:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B968;
      }
      goto L_0898B95C;
    }
L_0898B95C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898B968u);
    ctx.gpr[5] = (0u | 85u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem) && ctx.pc == 0x0898B968u) goto L_0898B968;
    return;
L_0898B968:
    ctx.gpr[31] = (0x0898B970u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0898BD24;
L_0898B970:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B984;
      }
      goto L_0898B978;
    }
L_0898B978:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898B984u);
    ctx.gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem) && ctx.pc == 0x0898B984u) goto L_0898B984;
    return;
L_0898B984:
    ctx.gpr[31] = (0x0898B98Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0898BD7C;
L_0898B98C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B9A0;
      }
      goto L_0898B994;
    }
L_0898B994:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898B9A0u);
    ctx.gpr[5] = (0u | 76u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem) && ctx.pc == 0x0898B9A0u) goto L_0898B9A0;
    return;
L_0898B9A0:
    ctx.gpr[31] = (0x0898B9A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0898BDD4;
L_0898B9A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B9BC;
      }
      goto L_0898B9B0;
    }
L_0898B9B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898B9BCu);
    ctx.gpr[5] = (0u | 82u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem) && ctx.pc == 0x0898B9BCu) goto L_0898B9BC;
    return;
L_0898B9BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0898B9D8;
      }
      goto L_0898B9C8;
    }
L_0898B9C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0898B9DC;
      }
      goto L_0898B9D4;
    }
L_0898B9D4:
    ctx.gpr[4] = (0u | 1u);
    goto L_0898B9D8;
L_0898B9D8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0898B9DC;
L_0898B9DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898B9F0;
      }
      goto L_0898B9E4;
    }
L_0898B9E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898B9F0u);
    ctx.gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem) && ctx.pc == 0x0898B9F0u) goto L_0898B9F0;
    return;
L_0898B9F0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0898BA0C;
      }
      goto L_0898B9FC;
    }
L_0898B9FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0898BA10;
      }
      goto L_0898BA08;
    }
L_0898BA08:
    ctx.gpr[4] = (0u | 1u);
    goto L_0898BA0C;
L_0898BA0C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0898BA10;
L_0898BA10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BA24;
      }
      goto L_0898BA18;
    }
L_0898BA18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898BA24u);
    ctx.gpr[5] = (0u | 50u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 915u, 0x0898EBBCu>(ctx, &aot_mem) && ctx.pc == 0x0898BA24u) goto L_0898BA24;
    return;
L_0898BA24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BA34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x0898BA58u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    goto L_0898B2C4;
L_0898BA58:
    ctx.gpr[31] = (0x0898BA60u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    goto L_0898B2C4;
L_0898BA60:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(148), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(157), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0898BA74;
L_0898BA74:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(102), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(122), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898BA74;
      }
      goto L_0898BA8C;
    }
L_0898BA8C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), 0u);
      if (branch_taken) {
          goto L_0898BA98;
      }
      goto L_0898BA94;
    }
L_0898BA94:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(0u));
    goto L_0898BA98;
L_0898BA98:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(167), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 0u);
    goto L_0898BAA4;
L_0898BAA4:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(158), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BAA4;
      }
      goto L_0898BAC0;
    }
L_0898BAC0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(166), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u | 32u);
    goto L_0898BACC;
L_0898BACC:
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BACC;
      }
      goto L_0898BAEC;
    }
L_0898BAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-10000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BB24:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BB34:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BB3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BB44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BB4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BB80;
      }
      goto L_0898BB58;
    }
L_0898BB58:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0898BB84;
      }
      goto L_0898BB80;
    }
L_0898BB80:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    goto L_0898BB84;
L_0898BB84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BB8C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BBC0;
      }
      goto L_0898BB98;
    }
L_0898BB98:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0898BBC4;
      }
      goto L_0898BBC0;
    }
L_0898BBC0:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    goto L_0898BBC4;
L_0898BBC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BBCC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC00;
      }
      goto L_0898BBD8;
    }
L_0898BBD8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(74))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0898BC04;
      }
      goto L_0898BC00;
    }
L_0898BC00:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52))))));
    goto L_0898BC04;
L_0898BC04:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BC0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC40;
      }
      goto L_0898BC18;
    }
L_0898BC18:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(70))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(68))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_0898BC44;
      }
      goto L_0898BC40;
    }
L_0898BC40:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(54))))));
    goto L_0898BC44;
L_0898BC44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BC4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC60;
      }
      goto L_0898BC58;
    }
L_0898BC58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
      if (branch_taken) {
          goto L_0898BC64;
      }
      goto L_0898BC60;
    }
L_0898BC60:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    goto L_0898BC64;
L_0898BC64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BC6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BC80;
      }
      goto L_0898BC78;
    }
L_0898BC78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
      if (branch_taken) {
          goto L_0898BC84;
      }
      goto L_0898BC80;
    }
L_0898BC80:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    goto L_0898BC84;
L_0898BC84:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BC8C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BCA0;
      }
      goto L_0898BC98;
    }
L_0898BC98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
      if (branch_taken) {
          goto L_0898BCA4;
      }
      goto L_0898BCA0;
    }
L_0898BCA0:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    goto L_0898BCA4;
L_0898BCA4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BCAC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BCC0;
      }
      goto L_0898BCB8;
    }
L_0898BCB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_0898BCC4;
      }
      goto L_0898BCC0;
    }
L_0898BCC0:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    goto L_0898BCC4;
L_0898BCC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BCCC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BCFC;
      }
      goto L_0898BCD8;
    }
L_0898BCD8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(26))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0898BCF4;
      }
      goto L_0898BCE4;
    }
L_0898BCE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(76))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BCF4;
      }
      goto L_0898BCF0;
    }
L_0898BCF0:
    ctx.gpr[5] = (0u | 1u);
    goto L_0898BCF4;
L_0898BCF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0898BD1C;
      }
      goto L_0898BCFC;
    }
L_0898BCFC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0898BD18;
      }
      goto L_0898BD08;
    }
L_0898BD08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(68))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BD18;
      }
      goto L_0898BD14;
    }
L_0898BD14:
    ctx.gpr[5] = (0u | 1u);
    goto L_0898BD18;
L_0898BD18:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_0898BD1C;
L_0898BD1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD24:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BD54;
      }
      goto L_0898BD30;
    }
L_0898BD30:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0898BD4C;
      }
      goto L_0898BD3C;
    }
L_0898BD3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(78))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BD4C;
      }
      goto L_0898BD48;
    }
L_0898BD48:
    ctx.gpr[5] = (0u | 1u);
    goto L_0898BD4C;
L_0898BD4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0898BD74;
      }
      goto L_0898BD54;
    }
L_0898BD54:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0898BD70;
      }
      goto L_0898BD60;
    }
L_0898BD60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(70))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BD70;
      }
      goto L_0898BD6C;
    }
L_0898BD6C:
    ctx.gpr[5] = (0u | 1u);
    goto L_0898BD70;
L_0898BD70:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_0898BD74;
L_0898BD74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BD7C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BDAC;
      }
      goto L_0898BD88;
    }
L_0898BD88:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0898BDA4;
      }
      goto L_0898BD94;
    }
L_0898BD94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BDA4;
      }
      goto L_0898BDA0;
    }
L_0898BDA0:
    ctx.gpr[5] = (0u | 1u);
    goto L_0898BDA4;
L_0898BDA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0898BDCC;
      }
      goto L_0898BDAC;
    }
L_0898BDAC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0898BDC8;
      }
      goto L_0898BDB8;
    }
L_0898BDB8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(72))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BDC8;
      }
      goto L_0898BDC4;
    }
L_0898BDC4:
    ctx.gpr[5] = (0u | 1u);
    goto L_0898BDC8;
L_0898BDC8:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_0898BDCC;
L_0898BDCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BDD4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16128)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BE04;
      }
      goto L_0898BDE0;
    }
L_0898BDE0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0898BDFC;
      }
      goto L_0898BDEC;
    }
L_0898BDEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(82))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BDFC;
      }
      goto L_0898BDF8;
    }
L_0898BDF8:
    ctx.gpr[5] = (0u | 1u);
    goto L_0898BDFC;
L_0898BDFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0898BE24;
      }
      goto L_0898BE04;
    }
L_0898BE04:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0898BE20;
      }
      goto L_0898BE10;
    }
L_0898BE10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BE20;
      }
      goto L_0898BE1C;
    }
L_0898BE1C:
    ctx.gpr[5] = (0u | 1u);
    goto L_0898BE20;
L_0898BE20:
    ctx.gpr[2] = (ctx.gpr[5] & 255u);
    goto L_0898BE24;
L_0898BE24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BE2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0898BE68;
      }
      goto L_0898BE50;
    }
L_0898BE50:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[4]);
    ctx.gpr[31] = (0x0898BE60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem) && ctx.pc == 0x0898BE60u) goto L_0898BE60;
    return;
L_0898BE60:
    ctx.gpr[31] = (0x0898BE68u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-16124));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x0898BE68u) goto L_0898BE68;
    return;
L_0898BE68:
    ctx.gpr[31] = (0x0898BE70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 611u, 0x0882E9B4u>(ctx, &aot_mem) && ctx.pc == 0x0898BE70u) goto L_0898BE70;
    return;
L_0898BE70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_0898BE88;
      }
      goto L_0898BE78;
    }
L_0898BE78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(321) ? 1u : 0u);
      if (branch_taken) {
          goto L_0898BE98;
      }
      goto L_0898BE88;
    }
L_0898BE88:
    ctx.gpr[4] = (2201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7552));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(321) ? 1u : 0u);
    goto L_0898BE98;
L_0898BE98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0898BEB0;
      }
      goto L_0898BEA0;
    }
L_0898BEA0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898BEB0;
      }
      goto L_0898BEA8;
    }
L_0898BEA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898BEB4;
      }
      goto L_0898BEB0;
    }
L_0898BEB0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0898BEB4;
L_0898BEB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BEC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898BEDCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 591u, 0x0898DA00u>(ctx, &aot_mem) && ctx.pc == 0x0898BEDCu) goto L_0898BEDC;
    return;
L_0898BEDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BEF4;
      }
      goto L_0898BEE4;
    }
L_0898BEE4:
    ctx.gpr[31] = (0x0898BEECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0898BD7C;
L_0898BEEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BEFC;
      }
      goto L_0898BEF4;
    }
L_0898BEF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898BF00;
      }
      goto L_0898BEFC;
    }
L_0898BEFC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0898BF00;
L_0898BF00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BF10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898BF24u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 598u, 0x0898DA58u>(ctx, &aot_mem) && ctx.pc == 0x0898BF24u) goto L_0898BF24;
    return;
L_0898BF24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BF3C;
      }
      goto L_0898BF2C;
    }
L_0898BF2C:
    ctx.gpr[31] = (0x0898BF34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0898BDD4;
L_0898BF34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BF44;
      }
      goto L_0898BF3C;
    }
L_0898BF3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898BF48;
      }
      goto L_0898BF44;
    }
L_0898BF44:
    ctx.gpr[2] = (0u | 0u);
    goto L_0898BF48;
L_0898BF48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BF58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898BF6Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 577u, 0x0898D950u>(ctx, &aot_mem) && ctx.pc == 0x0898BF6Cu) goto L_0898BF6C;
    return;
L_0898BF6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BF84;
      }
      goto L_0898BF74;
    }
L_0898BF74:
    ctx.gpr[31] = (0x0898BF7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0898BCCC;
L_0898BF7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BF8C;
      }
      goto L_0898BF84;
    }
L_0898BF84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898BF90;
      }
      goto L_0898BF8C;
    }
L_0898BF8C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0898BF90;
L_0898BF90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BFA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898BFB4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 584u, 0x0898D9A8u>(ctx, &aot_mem) && ctx.pc == 0x0898BFB4u) goto L_0898BFB4;
    return;
L_0898BFB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898BFCC;
      }
      goto L_0898BFBC;
    }
L_0898BFBC:
    ctx.gpr[31] = (0x0898BFC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0898BD24;
L_0898BFC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898BFD4;
      }
      goto L_0898BFCC;
    }
L_0898BFCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0898BFD8;
      }
      goto L_0898BFD4;
    }
L_0898BFD4:
    ctx.gpr[2] = (0u | 0u);
    goto L_0898BFD8;
L_0898BFD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BFE8:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(42))))));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898BFF4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[2] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.pc = 0x0898C000u; return;
}

void recomp_unit_0097(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0097_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_97(Runtime &runtime) {
    runtime.register_generated_unit(97u, 0x08988000u, 16384u, &recomp_unit_0097, &recomp_unit_0097_entry);
    runtime.register_function(0x08988000u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988040u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898804Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988060u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988068u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988080u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089880F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988108u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898812Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988134u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898813Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988144u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988158u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988170u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988178u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988194u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898819Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089881E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988204u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898820Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988214u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898821Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898822Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988240u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988280u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988284u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988298u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089882C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988300u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988304u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988314u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988334u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988344u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988354u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898836Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988378u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089883DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988420u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988450u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988454u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988464u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089884FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988510u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988554u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089885FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898862Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898863Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898864Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988654u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898866Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988678u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089886F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988708u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988710u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988728u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988830u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988848u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988890u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089888F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988900u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898891Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898892Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898897Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988980u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988988u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988998u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089889E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988A64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988AB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988B94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988BF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988C60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988CF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988D9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988DFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988E8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988ED8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988EF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988F9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08988FF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989004u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898900Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989020u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989028u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898903Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989044u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898904Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989054u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898905Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989064u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898906Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989074u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898907Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989084u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989094u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089890F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989100u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898910Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989118u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989120u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989124u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989128u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989134u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989150u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989160u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989170u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989180u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989190u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089891F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989204u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898920Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989220u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989228u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898923Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989244u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989258u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989260u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989274u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898927Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989290u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989298u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089892F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989300u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989308u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989310u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989320u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989338u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989354u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898935Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989368u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989370u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989378u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989380u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989384u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898938Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989398u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089893FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898940Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898941Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898942Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898943Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898944Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898945Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898946Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989474u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898947Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989490u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989498u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089894ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989500u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989508u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898951Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989524u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989538u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989540u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989554u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898955Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989564u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898956Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989574u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898957Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989584u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898958Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989594u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898959Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089895F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989604u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989610u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989618u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898961Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989620u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898962Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989648u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898967Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089896F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898970Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989710u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989724u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898972Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989734u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898973Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989744u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898974Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989758u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989760u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898976Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989774u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989784u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898978Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898979Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089897FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898982Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989834u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989840u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898984Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989858u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989860u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989864u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989868u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989874u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898988Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989894u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089898F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989900u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989904u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989908u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989914u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898992Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989938u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989940u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989948u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989954u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989980u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898998Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989998u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x089899C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989A7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989AF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989B94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989BF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989C94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989CF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989D94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989DDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989E94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989EF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989F9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x08989FFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A008u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A014u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A01Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A020u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A024u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A030u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A048u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A064u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A074u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A0FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A108u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A124u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A184u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A1F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A20Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A224u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A254u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A274u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A27Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A280u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A288u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A294u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A2FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A308u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A334u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A354u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A35Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A360u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A368u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A374u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A380u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A388u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A38Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A390u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A39Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A3F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A414u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A41Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A420u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A428u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A434u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A440u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A448u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A44Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A450u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A45Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A478u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A480u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A4FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A500u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A504u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A510u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A52Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A534u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A55Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A57Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A584u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A588u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A590u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A59Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A5E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A610u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A630u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A638u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A63Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A644u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A650u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A65Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A664u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A668u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A66Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A678u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A694u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A69Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A6F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A704u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A710u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A718u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A71Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A720u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A72Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A748u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A750u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A778u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A798u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A7FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A830u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A850u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A858u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A85Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A864u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A870u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A87Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A884u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A888u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A88Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A898u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A8E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A908u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A910u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A914u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A91Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A928u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A934u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A93Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A940u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A944u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A950u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A96Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9C0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9E0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898A9FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AA98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AAC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AADCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AB94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ABFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AC78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ACFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AD9Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898ADD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE5Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AE84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AEF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF28u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF38u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AF70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFD0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898AFFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B000u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B004u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B010u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B028u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B038u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B04Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B070u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B090u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B098u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B09Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B0F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B120u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B128u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B130u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B13Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B158u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B160u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B16Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B170u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B17Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B184u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B190u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B198u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1B4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B1F4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B200u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B208u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B210u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B21Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B224u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B22Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B238u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B240u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B248u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B254u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B25Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B264u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B270u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B278u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B280u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B28Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B294u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B29Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B2C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B328u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B340u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B354u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B37Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B384u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B38Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B39Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B3F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B408u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B428u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B448u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B458u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B464u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B46Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B474u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B47Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B484u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B490u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4ACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4B8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B4F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B51Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B528u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B530u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B538u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B540u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B550u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B560u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B568u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B570u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B578u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B5F8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B600u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B620u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B62Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B638u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B644u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B64Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B650u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B658u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B660u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B694u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B69Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B6A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B6ECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B708u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B718u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B720u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B728u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B730u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B750u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B75Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B768u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B774u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B77Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B780u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B788u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B790u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7C4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B7E8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B854u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B86Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B878u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B880u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B888u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B894u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B89Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8A4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8CCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8D0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B8FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B900u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B904u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B90Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B918u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B924u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B930u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B934u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B938u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B940u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B94Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B954u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B95Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B968u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B970u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B978u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B984u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B98Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B994u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9A0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9A8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9B0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9BCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9C8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9D4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9D8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9DCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9E4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9F0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898B9FCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BA98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BACCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BAECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BB98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BBD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC0Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC40u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC64u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC80u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BC98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCC0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCF0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BCFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD08u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD14u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD18u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD30u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD4Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD54u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BD94u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDA4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDACu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDB8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDE0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDF8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BDFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE04u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE1Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE20u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE50u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE60u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE68u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE70u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE78u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE88u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BE98u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEA8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEB0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEC8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEDCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEE4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEECu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEF4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BEFCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF00u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF10u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF24u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF2Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF34u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF3Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF44u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF48u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF58u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF6Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF74u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF7Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF84u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF8Cu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BF90u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFA0u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFB4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFBCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFC4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFCCu, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFD4u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFD8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFE8u, &recomp_unit_0097, "recomp_unit_0097");
    runtime.register_function(0x0898BFF4u, &recomp_unit_0097, "recomp_unit_0097");
}
} // namespace psprecomp
