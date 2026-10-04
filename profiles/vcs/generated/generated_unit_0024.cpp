#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0024[4093] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 0,
    0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15,
    0, 16, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 24,
    0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0,
    0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 54, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 69,
    0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 0,
    0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 82, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0,
    0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    90, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0,
    0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103,
    0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112,
    0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0,
    123, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 0, 133, 0,
    134, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151,
    0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0, 172,
    0, 0, 173, 174, 0, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 0, 178, 0, 179, 0, 0, 180, 0, 181, 182, 0, 183, 0, 0, 184, 0, 185,
    0, 186, 187, 0, 188, 0, 0, 189, 0, 190, 0, 191, 192, 0, 193, 194, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 0,
    0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0,
    0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0,
    225, 0, 226, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 230, 0, 231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 241,
    0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0, 249, 250, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0,
    0, 254, 0, 0, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0,
    268, 0, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 0, 274, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279,
    280, 0, 0, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0,
    0, 290, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 0, 0, 302,
    0, 0, 0, 303, 0, 304, 0, 305, 0, 306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 312, 313, 0, 314, 0, 315,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 325,
    0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 342,
    0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 347, 0, 0, 348, 0, 349, 0, 350, 0, 0, 351, 0, 0, 352,
    0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 356, 0, 0, 357, 0, 358, 0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 380, 0, 381, 0,
    0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0,
    389, 0, 0, 0, 0, 0, 390, 0, 391, 0, 392, 0, 0, 393, 0, 0, 394, 0, 395, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402,
    0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 406, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0,
    412, 0, 413, 0, 0, 414, 0, 415, 0, 416, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0,
    422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0,
    0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0, 0, 0,
    0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0,
    443, 0, 0, 444, 0, 445, 0, 446, 447, 0, 448, 0, 449, 0, 450, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0,
    0, 0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 458, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0,
    461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 469, 0,
    470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 473, 0, 0, 474, 475, 0, 476, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 0, 0,
    481, 0, 0, 482, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 487, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0,
    0, 491, 0, 0, 0, 492, 0, 0, 493, 494, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0,
    0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0, 0,
    0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 508, 509, 0, 510, 0, 0, 0, 511,
    0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 515, 516, 0, 517, 0, 518, 0, 519, 520, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522,
    0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 527, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 539, 540, 0, 541, 0,
    0, 0, 0, 542, 0, 543, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 546, 0, 0, 547, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0,
    0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0,
    0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0,
    0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 568, 569, 0, 570,
    0, 0, 0, 571, 0, 0, 572, 0, 573, 0, 574, 0, 575, 0, 0, 576, 0, 577, 0, 578, 579, 0, 580, 0, 581, 0, 582, 583, 0, 584, 0, 0,
    0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 590, 0, 591, 0,
    592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 596, 0, 597, 0, 598, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 601,
    0, 0, 602, 603, 0, 604, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 611, 0, 0, 612,
    0, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 616, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0,
    0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0,
    0, 624, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0,
    0, 630, 0, 631, 632, 0, 633, 0, 0, 0, 634, 0, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 639, 0, 640, 0, 641, 642, 0, 643, 0, 644,
    0, 645, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0,
    0, 0, 652, 653, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0,
    0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 663, 0, 0, 664, 0, 0, 665, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 670, 0, 671, 0, 672,
    0, 673, 0, 674, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 682, 0, 683, 0, 0, 0, 0,
    0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0,
    0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 695, 696, 0,
    0, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 702, 0, 703,
    0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 709, 0, 710, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 0, 0, 715,
    0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0,
    0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 727, 0,
    0, 0, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 732, 0, 0, 0, 0, 0, 0, 0, 0, 733,
    0, 734, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 737, 738, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0,
    0, 741, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 749, 0, 750, 0, 0, 751, 0, 0, 752, 0, 753, 0,
    0, 0, 754, 0, 0, 0, 755, 0, 0, 756, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0, 0, 761, 0, 0, 762, 0,
    0, 763, 0, 764, 0, 765, 0, 766, 0, 767, 0, 0, 768, 0, 769, 0, 770, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0, 0, 0, 0, 0, 775,
    0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 778, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 0, 0, 782, 0, 783, 0, 784, 0, 0,
    785, 0, 0, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0,
    792, 0, 793, 0, 0, 0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0, 0, 0, 0, 797, 0, 798, 799, 0, 800, 0, 0, 801, 0,
    0, 802, 0, 0, 803, 0, 804, 0, 805, 0, 0, 0, 0, 0, 806, 0, 807, 0, 808, 809, 0, 810, 0, 811, 0, 812, 813, 0, 814, 0, 0, 0,
    0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 0, 817, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 0, 0, 819, 820, 0, 821, 0, 822,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 829, 0, 830, 0, 0,
    831, 0, 0, 832, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 837, 0, 838, 0, 839, 0, 840, 0, 0, 841,
    0, 842, 0, 843, 0, 844, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 848, 0, 0, 849, 0, 0, 0, 850,
    0, 851, 0, 0, 0, 852, 0, 853, 0, 854, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 856, 0, 0, 0, 0, 857, 0, 0, 0, 0, 858, 0,
    0, 0, 0, 859, 0, 0, 0, 0, 860, 0, 0, 0, 0, 861, 0, 862, 0, 0, 0, 0, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 865, 0,
    0, 0, 0, 866, 867, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 871, 0, 0, 0, 0, 0,
    0, 0, 872, 873, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 0, 876, 0, 877, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 879, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 882, 0, 883, 0, 0, 0, 0, 884,
    0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 888, 0, 889, 0, 0, 890, 0, 0, 0, 891, 0,
    892, 0, 0, 0, 893, 0, 894, 0, 0, 0, 0, 0, 895, 0, 0, 0, 0, 896, 0, 0, 0, 0, 897, 0, 0, 0, 0, 898, 0, 0, 0, 0,
    899, 0, 0, 0, 0, 900, 0, 0, 0, 0, 901, 0, 902, 0, 0, 0, 0, 903, 0, 0, 0, 0, 904, 0, 0, 0, 0, 905, 0, 0, 0, 0,
    906, 907, 0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 909, 0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 0, 912,
    913, 0, 914, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 917, 0, 0, 0, 0, 0, 0, 0, 918, 0, 0, 919, 0, 0, 0, 0,
    0, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 922,
    0, 923, 0, 0, 0, 0, 924, 0, 0, 0, 0, 0, 0, 0, 925, 0, 0, 0, 0, 0, 0, 0, 0, 0, 926, 0, 0, 0, 0, 0, 927, 0,
    928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 930, 0, 0, 0, 0, 931, 0, 0,
    0, 0, 0, 0, 0, 932, 0, 933, 0, 934, 0, 0, 0, 0, 0, 935, 0, 0, 936, 0, 937, 0, 0, 938, 0, 939, 0, 940, 0, 941, 0, 0,
    942, 0, 943, 0, 944, 0, 945, 0, 946, 0, 0, 947, 0, 0, 0, 0, 948, 0, 0, 0, 0, 949, 0, 0, 0, 0, 950, 0, 0, 0, 0, 951,
    0, 0, 0, 0, 952, 0, 0, 0, 0, 953, 0, 954, 0, 955, 0, 0, 0, 0, 956, 0, 0, 0, 0, 957, 0, 0, 0, 0, 958,
};
void recomp_unit_0024_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08864000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0024[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08864000;
    case 2u: goto L_08864008;
    case 3u: goto L_08864020;
    case 4u: goto L_08864030;
    case 5u: goto L_08864040;
    case 6u: goto L_08864058;
    case 7u: goto L_08864064;
    case 8u: goto L_08864070;
    case 9u: goto L_08864084;
    case 10u: goto L_0886408C;
    case 11u: goto L_088640A4;
    case 12u: goto L_088640E4;
    case 13u: goto L_088640EC;
    case 14u: goto L_088640F4;
    case 15u: goto L_088640FC;
    case 16u: goto L_08864104;
    case 17u: goto L_08864110;
    case 18u: goto L_08864128;
    case 19u: goto L_08864130;
    case 20u: goto L_0886413C;
    case 21u: goto L_08864144;
    case 22u: goto L_08864150;
    case 23u: goto L_0886415C;
    case 24u: goto L_0886417C;
    case 25u: goto L_08864190;
    case 26u: goto L_088641A0;
    case 27u: goto L_088641B8;
    case 28u: goto L_088641D8;
    case 29u: goto L_088641E8;
    case 30u: goto L_088641F0;
    case 31u: goto L_08864200;
    case 32u: goto L_08864240;
    case 33u: goto L_08864248;
    case 34u: goto L_08864328;
    case 35u: goto L_0886432C;
    case 36u: goto L_0886433C;
    case 37u: goto L_0886436C;
    case 38u: goto L_0886438C;
    case 39u: goto L_08864394;
    case 40u: goto L_088643C0;
    case 41u: goto L_088643CC;
    case 42u: goto L_088643E8;
    case 43u: goto L_08864400;
    case 44u: goto L_0886441C;
    case 45u: goto L_08864540;
    case 46u: goto L_08864544;
    case 47u: goto L_0886457C;
    case 48u: goto L_08864584;
    case 49u: goto L_088645A8;
    case 50u: goto L_088645C0;
    case 51u: goto L_088645D4;
    case 52u: goto L_088645DC;
    case 53u: goto L_088645E8;
    case 54u: goto L_08864610;
    case 55u: goto L_08864618;
    case 56u: goto L_08864620;
    case 57u: goto L_08864628;
    case 58u: goto L_0886466C;
    case 59u: goto L_08864678;
    case 60u: goto L_08864688;
    case 61u: goto L_088646AC;
    case 62u: goto L_088646B4;
    case 63u: goto L_088646BC;
    case 64u: goto L_088646F0;
    case 65u: goto L_088646F8;
    case 66u: goto L_0886472C;
    case 67u: goto L_0886473C;
    case 68u: goto L_08864760;
    case 69u: goto L_0886477C;
    case 70u: goto L_08864788;
    case 71u: goto L_08864790;
    case 72u: goto L_0886479C;
    case 73u: goto L_088647C4;
    case 74u: goto L_088647D0;
    case 75u: goto L_088647E0;
    case 76u: goto L_088647F0;
    case 77u: goto L_088647F8;
    case 78u: goto L_08864810;
    case 79u: goto L_0886481C;
    case 80u: goto L_08864884;
    case 81u: goto L_0886489C;
    case 82u: goto L_088648A8;
    case 83u: goto L_088648AC;
    case 84u: goto L_088648C0;
    case 85u: goto L_088648E0;
    case 86u: goto L_088648E8;
    case 87u: goto L_08864904;
    case 88u: goto L_08864944;
    case 89u: goto L_08864950;
    case 90u: goto L_08864980;
    case 91u: goto L_0886498C;
    case 92u: goto L_088649A4;
    case 93u: goto L_088649E4;
    case 94u: goto L_088649F8;
    case 95u: goto L_08864A14;
    case 96u: goto L_08864A68;
    case 97u: goto L_08864A70;
    case 98u: goto L_08864A88;
    case 99u: goto L_08864A90;
    case 100u: goto L_08864A9C;
    case 101u: goto L_08864AB0;
    case 102u: goto L_08864AE8;
    case 103u: goto L_08864AFC;
    case 104u: goto L_08864B04;
    case 105u: goto L_08864B0C;
    case 106u: goto L_08864B28;
    case 107u: goto L_08864B30;
    case 108u: goto L_08864B3C;
    case 109u: goto L_08864B44;
    case 110u: goto L_08864B4C;
    case 111u: goto L_08864B68;
    case 112u: goto L_08864B7C;
    case 113u: goto L_08864B84;
    case 114u: goto L_08864B8C;
    case 115u: goto L_08864B94;
    case 116u: goto L_08864B9C;
    case 117u: goto L_08864BB8;
    case 118u: goto L_08864BC0;
    case 119u: goto L_08864BCC;
    case 120u: goto L_08864BD4;
    case 121u: goto L_08864BDC;
    case 122u: goto L_08864BF8;
    case 123u: goto L_08864C00;
    case 124u: goto L_08864C18;
    case 125u: goto L_08864C20;
    case 126u: goto L_08864C28;
    case 127u: goto L_08864C3C;
    case 128u: goto L_08864C44;
    case 129u: goto L_08864C50;
    case 130u: goto L_08864C58;
    case 131u: goto L_08864C60;
    case 132u: goto L_08864C68;
    case 133u: goto L_08864C78;
    case 134u: goto L_08864C80;
    case 135u: goto L_08864C88;
    case 136u: goto L_08864C90;
    case 137u: goto L_08864C98;
    case 138u: goto L_08864CAC;
    case 139u: goto L_08864CB4;
    case 140u: goto L_08864CC0;
    case 141u: goto L_08864CC8;
    case 142u: goto L_08864CD0;
    case 143u: goto L_08864CDC;
    case 144u: goto L_08864CE4;
    case 145u: goto L_08864D0C;
    case 146u: goto L_08864D28;
    case 147u: goto L_08864D30;
    case 148u: goto L_08864D3C;
    case 149u: goto L_08864D50;
    case 150u: goto L_08864D6C;
    case 151u: goto L_08864D7C;
    case 152u: goto L_08864D90;
    case 153u: goto L_08864DA0;
    case 154u: goto L_08864DB4;
    case 155u: goto L_08864DBC;
    case 156u: goto L_08864DE8;
    case 157u: goto L_08864DF4;
    case 158u: goto L_08864E50;
    case 159u: goto L_08864E58;
    case 160u: goto L_08864E60;
    case 161u: goto L_08864E98;
    case 162u: goto L_08864EA0;
    case 163u: goto L_08864EA8;
    case 164u: goto L_08864EB4;
    case 165u: goto L_08864EBC;
    case 166u: goto L_08864EC4;
    case 167u: goto L_08864ECC;
    case 168u: goto L_08864ED8;
    case 169u: goto L_08864EE0;
    case 170u: goto L_08864EE8;
    case 171u: goto L_08864EF0;
    case 172u: goto L_08864EFC;
    case 173u: goto L_08864F08;
    case 174u: goto L_08864F0C;
    case 175u: goto L_08864F18;
    case 176u: goto L_08864F2C;
    case 177u: goto L_08864F34;
    case 178u: goto L_08864F40;
    case 179u: goto L_08864F48;
    case 180u: goto L_08864F54;
    case 181u: goto L_08864F5C;
    case 182u: goto L_08864F60;
    case 183u: goto L_08864F68;
    case 184u: goto L_08864F74;
    case 185u: goto L_08864F7C;
    case 186u: goto L_08864F84;
    case 187u: goto L_08864F88;
    case 188u: goto L_08864F90;
    case 189u: goto L_08864F9C;
    case 190u: goto L_08864FA4;
    case 191u: goto L_08864FAC;
    case 192u: goto L_08864FB0;
    case 193u: goto L_08864FB8;
    case 194u: goto L_08864FBC;
    case 195u: goto L_08864FC4;
    case 196u: goto L_08864FCC;
    case 197u: goto L_08864FD4;
    case 198u: goto L_08864FE8;
    case 199u: goto L_0886502C;
    case 200u: goto L_0886504C;
    case 201u: goto L_08865058;
    case 202u: goto L_08865070;
    case 203u: goto L_08865084;
    case 204u: goto L_08865094;
    case 205u: goto L_088650B4;
    case 206u: goto L_088650C0;
    case 207u: goto L_088650C8;
    case 208u: goto L_088650D0;
    case 209u: goto L_088650DC;
    case 210u: goto L_088650E8;
    case 211u: goto L_088650F0;
    case 212u: goto L_088650F8;
    case 213u: goto L_08865104;
    case 214u: goto L_0886510C;
    case 215u: goto L_08865114;
    case 216u: goto L_0886511C;
    case 217u: goto L_08865128;
    case 218u: goto L_08865130;
    case 219u: goto L_0886513C;
    case 220u: goto L_08865144;
    case 221u: goto L_08865150;
    case 222u: goto L_08865160;
    case 223u: goto L_0886516C;
    case 224u: goto L_08865174;
    case 225u: goto L_08865180;
    case 226u: goto L_08865188;
    case 227u: goto L_08865194;
    case 228u: goto L_088651A8;
    case 229u: goto L_088651BC;
    case 230u: goto L_088651C0;
    case 231u: goto L_088651C8;
    case 232u: goto L_088651D4;
    case 233u: goto L_088651DC;
    case 234u: goto L_088651E8;
    case 235u: goto L_088651F0;
    case 236u: goto L_088651F8;
    case 237u: goto L_08865220;
    case 238u: goto L_0886525C;
    case 239u: goto L_08865268;
    case 240u: goto L_08865274;
    case 241u: goto L_0886527C;
    case 242u: goto L_08865284;
    case 243u: goto L_0886528C;
    case 244u: goto L_08865294;
    case 245u: goto L_0886529C;
    case 246u: goto L_088652A8;
    case 247u: goto L_088652B4;
    case 248u: goto L_088652C0;
    case 249u: goto L_088652CC;
    case 250u: goto L_088652D0;
    case 251u: goto L_088652D8;
    case 252u: goto L_088652E4;
    case 253u: goto L_088652EC;
    case 254u: goto L_08865304;
    case 255u: goto L_08865314;
    case 256u: goto L_0886531C;
    case 257u: goto L_08865324;
    case 258u: goto L_0886532C;
    case 259u: goto L_08865334;
    case 260u: goto L_0886533C;
    case 261u: goto L_08865348;
    case 262u: goto L_08865350;
    case 263u: goto L_08865358;
    case 264u: goto L_08865360;
    case 265u: goto L_08865368;
    case 266u: goto L_08865370;
    case 267u: goto L_08865378;
    case 268u: goto L_08865380;
    case 269u: goto L_08865390;
    case 270u: goto L_088653A0;
    case 271u: goto L_088653A8;
    case 272u: goto L_088653B0;
    case 273u: goto L_088653B8;
    case 274u: goto L_088653C4;
    case 275u: goto L_088653CC;
    case 276u: goto L_088653D8;
    case 277u: goto L_088653E4;
    case 278u: goto L_088653F0;
    case 279u: goto L_088653FC;
    case 280u: goto L_08865400;
    case 281u: goto L_08865410;
    case 282u: goto L_08865418;
    case 283u: goto L_08865428;
    case 284u: goto L_08865438;
    case 285u: goto L_08865440;
    case 286u: goto L_08865448;
    case 287u: goto L_08865450;
    case 288u: goto L_08865458;
    case 289u: goto L_08865474;
    case 290u: goto L_08865484;
    case 291u: goto L_0886548C;
    case 292u: goto L_08865494;
    case 293u: goto L_0886549C;
    case 294u: goto L_088654A4;
    case 295u: goto L_088654AC;
    case 296u: goto L_088654BC;
    case 297u: goto L_088654CC;
    case 298u: goto L_088654D4;
    case 299u: goto L_088654DC;
    case 300u: goto L_088654E4;
    case 301u: goto L_088654EC;
    case 302u: goto L_088654FC;
    case 303u: goto L_0886550C;
    case 304u: goto L_08865514;
    case 305u: goto L_0886551C;
    case 306u: goto L_08865524;
    case 307u: goto L_08865530;
    case 308u: goto L_08865538;
    case 309u: goto L_08865544;
    case 310u: goto L_08865550;
    case 311u: goto L_0886555C;
    case 312u: goto L_08865568;
    case 313u: goto L_0886556C;
    case 314u: goto L_08865574;
    case 315u: goto L_0886557C;
    case 316u: goto L_0886558C;
    case 317u: goto L_088655A4;
    case 318u: goto L_088655B4;
    case 319u: goto L_088655BC;
    case 320u: goto L_088655C4;
    case 321u: goto L_088655CC;
    case 322u: goto L_088655D4;
    case 323u: goto L_088655E4;
    case 324u: goto L_088655F4;
    case 325u: goto L_088655FC;
    case 326u: goto L_08865604;
    case 327u: goto L_0886560C;
    case 328u: goto L_08865618;
    case 329u: goto L_08865620;
    case 330u: goto L_08865634;
    case 331u: goto L_0886565C;
    case 332u: goto L_0886569C;
    case 333u: goto L_088656A8;
    case 334u: goto L_088656B4;
    case 335u: goto L_088656BC;
    case 336u: goto L_088656C8;
    case 337u: goto L_088656D0;
    case 338u: goto L_088656D8;
    case 339u: goto L_088656E0;
    case 340u: goto L_088656E8;
    case 341u: goto L_088656F0;
    case 342u: goto L_088656FC;
    case 343u: goto L_08865708;
    case 344u: goto L_08865718;
    case 345u: goto L_08865730;
    case 346u: goto L_08865740;
    case 347u: goto L_08865748;
    case 348u: goto L_08865754;
    case 349u: goto L_0886575C;
    case 350u: goto L_08865764;
    case 351u: goto L_08865770;
    case 352u: goto L_0886577C;
    case 353u: goto L_0886578C;
    case 354u: goto L_088657A4;
    case 355u: goto L_088657B4;
    case 356u: goto L_088657BC;
    case 357u: goto L_088657C8;
    case 358u: goto L_088657D0;
    case 359u: goto L_088657D8;
    case 360u: goto L_088657E4;
    case 361u: goto L_088657F0;
    case 362u: goto L_08865800;
    case 363u: goto L_08865818;
    case 364u: goto L_08865828;
    case 365u: goto L_08865830;
    case 366u: goto L_0886583C;
    case 367u: goto L_08865844;
    case 368u: goto L_0886584C;
    case 369u: goto L_08865860;
    case 370u: goto L_08865874;
    case 371u: goto L_0886589C;
    case 372u: goto L_088658B8;
    case 373u: goto L_088658C8;
    case 374u: goto L_088658DC;
    case 375u: goto L_08865908;
    case 376u: goto L_08865938;
    case 377u: goto L_08865940;
    case 378u: goto L_08865950;
    case 379u: goto L_08865958;
    case 380u: goto L_08865970;
    case 381u: goto L_08865978;
    case 382u: goto L_08865994;
    case 383u: goto L_0886599C;
    case 384u: goto L_088659B8;
    case 385u: goto L_088659C0;
    case 386u: goto L_088659D4;
    case 387u: goto L_088659DC;
    case 388u: goto L_088659F8;
    case 389u: goto L_08865A00;
    case 390u: goto L_08865A18;
    case 391u: goto L_08865A20;
    case 392u: goto L_08865A28;
    case 393u: goto L_08865A34;
    case 394u: goto L_08865A40;
    case 395u: goto L_08865A48;
    case 396u: goto L_08865A4C;
    case 397u: goto L_08865A64;
    case 398u: goto L_08865AC8;
    case 399u: goto L_08865AD4;
    case 400u: goto L_08865ADC;
    case 401u: goto L_08865AEC;
    case 402u: goto L_08865AFC;
    case 403u: goto L_08865B08;
    case 404u: goto L_08865B10;
    case 405u: goto L_08865B20;
    case 406u: goto L_08865B28;
    case 407u: goto L_08865B30;
    case 408u: goto L_08865B3C;
    case 409u: goto L_08865B54;
    case 410u: goto L_08865B60;
    case 411u: goto L_08865B68;
    case 412u: goto L_08865B80;
    case 413u: goto L_08865B88;
    case 414u: goto L_08865B94;
    case 415u: goto L_08865B9C;
    case 416u: goto L_08865BA4;
    case 417u: goto L_08865BAC;
    case 418u: goto L_08865BBC;
    case 419u: goto L_08865BD8;
    case 420u: goto L_08865BEC;
    case 421u: goto L_08865BF8;
    case 422u: goto L_08865C00;
    case 423u: goto L_08865C14;
    case 424u: goto L_08865C20;
    case 425u: goto L_08865C2C;
    case 426u: goto L_08865C3C;
    case 427u: goto L_08865C54;
    case 428u: goto L_08865C70;
    case 429u: goto L_08865C8C;
    case 430u: goto L_08865CA8;
    case 431u: goto L_08865CC4;
    case 432u: goto L_08865CE0;
    case 433u: goto L_08865CE8;
    case 434u: goto L_08865CF0;
    case 435u: goto L_08865D04;
    case 436u: goto L_08865D1C;
    case 437u: goto L_08865D34;
    case 438u: goto L_08865D4C;
    case 439u: goto L_08865D54;
    case 440u: goto L_08865D58;
    case 441u: goto L_08865D60;
    case 442u: goto L_08865D68;
    case 443u: goto L_08865D80;
    case 444u: goto L_08865D8C;
    case 445u: goto L_08865D94;
    case 446u: goto L_08865D9C;
    case 447u: goto L_08865DA0;
    case 448u: goto L_08865DA8;
    case 449u: goto L_08865DB0;
    case 450u: goto L_08865DB8;
    case 451u: goto L_08865DBC;
    case 452u: goto L_08865DC4;
    case 453u: goto L_08865DE8;
    case 454u: goto L_08865DF0;
    case 455u: goto L_08865E08;
    case 456u: goto L_08865E1C;
    case 457u: goto L_08865E3C;
    case 458u: goto L_08865E40;
    case 459u: goto L_08865E48;
    case 460u: goto L_08865E64;
    case 461u: goto L_08865E80;
    case 462u: goto L_08865E94;
    case 463u: goto L_08865EA0;
    case 464u: goto L_08865EA8;
    case 465u: goto L_08865EC0;
    case 466u: goto L_08865EC8;
    case 467u: goto L_08865EE4;
    case 468u: goto L_08865EF0;
    case 469u: goto L_08865EF8;
    case 470u: goto L_08865F00;
    case 471u: goto L_08865F48;
    case 472u: goto L_08865F94;
    case 473u: goto L_08865FA0;
    case 474u: goto L_08865FAC;
    case 475u: goto L_08865FB0;
    case 476u: goto L_08865FB8;
    case 477u: goto L_08865FCC;
    case 478u: goto L_08865FD4;
    case 479u: goto L_08865FE4;
    case 480u: goto L_08865FF0;
    case 481u: goto L_08866000;
    case 482u: goto L_0886600C;
    case 483u: goto L_08866014;
    case 484u: goto L_08866020;
    case 485u: goto L_08866038;
    case 486u: goto L_08866044;
    case 487u: goto L_0886604C;
    case 488u: goto L_08866054;
    case 489u: goto L_08866060;
    case 490u: goto L_08866078;
    case 491u: goto L_08866084;
    case 492u: goto L_08866094;
    case 493u: goto L_088660A0;
    case 494u: goto L_088660A4;
    case 495u: goto L_088660B0;
    case 496u: goto L_088660CC;
    case 497u: goto L_088660E8;
    case 498u: goto L_08866104;
    case 499u: goto L_08866120;
    case 500u: goto L_0886613C;
    case 501u: goto L_08866158;
    case 502u: goto L_08866160;
    case 503u: goto L_08866168;
    case 504u: goto L_08866184;
    case 505u: goto L_088661A0;
    case 506u: goto L_088661BC;
    case 507u: goto L_088661D8;
    case 508u: goto L_088661E0;
    case 509u: goto L_088661E4;
    case 510u: goto L_088661EC;
    case 511u: goto L_088661FC;
    case 512u: goto L_08866214;
    case 513u: goto L_08866220;
    case 514u: goto L_08866228;
    case 515u: goto L_08866230;
    case 516u: goto L_08866234;
    case 517u: goto L_0886623C;
    case 518u: goto L_08866244;
    case 519u: goto L_0886624C;
    case 520u: goto L_08866250;
    case 521u: goto L_08866258;
    case 522u: goto L_0886627C;
    case 523u: goto L_08866284;
    case 524u: goto L_0886629C;
    case 525u: goto L_088662B0;
    case 526u: goto L_088662D0;
    case 527u: goto L_088662D4;
    case 528u: goto L_088662DC;
    case 529u: goto L_088662E4;
    case 530u: goto L_0886630C;
    case 531u: goto L_08866314;
    case 532u: goto L_08866340;
    case 533u: goto L_0886634C;
    case 534u: goto L_08866354;
    case 535u: goto L_0886635C;
    case 536u: goto L_0886638C;
    case 537u: goto L_088663D4;
    case 538u: goto L_088663E0;
    case 539u: goto L_088663EC;
    case 540u: goto L_088663F0;
    case 541u: goto L_088663F8;
    case 542u: goto L_0886640C;
    case 543u: goto L_08866414;
    case 544u: goto L_08866424;
    case 545u: goto L_08866430;
    case 546u: goto L_08866440;
    case 547u: goto L_0886644C;
    case 548u: goto L_08866454;
    case 549u: goto L_08866460;
    case 550u: goto L_08866478;
    case 551u: goto L_08866484;
    case 552u: goto L_088664A4;
    case 553u: goto L_088664B0;
    case 554u: goto L_088664B4;
    case 555u: goto L_088664C0;
    case 556u: goto L_088664DC;
    case 557u: goto L_088664F8;
    case 558u: goto L_08866514;
    case 559u: goto L_08866530;
    case 560u: goto L_0886654C;
    case 561u: goto L_08866568;
    case 562u: goto L_08866570;
    case 563u: goto L_08866578;
    case 564u: goto L_08866594;
    case 565u: goto L_088665B0;
    case 566u: goto L_088665CC;
    case 567u: goto L_088665E8;
    case 568u: goto L_088665F0;
    case 569u: goto L_088665F4;
    case 570u: goto L_088665FC;
    case 571u: goto L_0886660C;
    case 572u: goto L_08866618;
    case 573u: goto L_08866620;
    case 574u: goto L_08866628;
    case 575u: goto L_08866630;
    case 576u: goto L_0886663C;
    case 577u: goto L_08866644;
    case 578u: goto L_0886664C;
    case 579u: goto L_08866650;
    case 580u: goto L_08866658;
    case 581u: goto L_08866660;
    case 582u: goto L_08866668;
    case 583u: goto L_0886666C;
    case 584u: goto L_08866674;
    case 585u: goto L_08866698;
    case 586u: goto L_088666A0;
    case 587u: goto L_088666B8;
    case 588u: goto L_088666CC;
    case 589u: goto L_088666EC;
    case 590u: goto L_088666F0;
    case 591u: goto L_088666F8;
    case 592u: goto L_08866700;
    case 593u: goto L_08866728;
    case 594u: goto L_08866730;
    case 595u: goto L_0886675C;
    case 596u: goto L_08866768;
    case 597u: goto L_08866770;
    case 598u: goto L_08866778;
    case 599u: goto L_088667A8;
    case 600u: goto L_088667F0;
    case 601u: goto L_088667FC;
    case 602u: goto L_08866808;
    case 603u: goto L_0886680C;
    case 604u: goto L_08866814;
    case 605u: goto L_08866828;
    case 606u: goto L_08866830;
    case 607u: goto L_08866840;
    case 608u: goto L_0886684C;
    case 609u: goto L_0886685C;
    case 610u: goto L_08866868;
    case 611u: goto L_08866870;
    case 612u: goto L_0886687C;
    case 613u: goto L_08866894;
    case 614u: goto L_088668A0;
    case 615u: goto L_088668C0;
    case 616u: goto L_088668CC;
    case 617u: goto L_088668D0;
    case 618u: goto L_088668DC;
    case 619u: goto L_088668F8;
    case 620u: goto L_08866914;
    case 621u: goto L_08866930;
    case 622u: goto L_0886694C;
    case 623u: goto L_08866968;
    case 624u: goto L_08866984;
    case 625u: goto L_0886698C;
    case 626u: goto L_08866994;
    case 627u: goto L_088669B0;
    case 628u: goto L_088669CC;
    case 629u: goto L_088669E8;
    case 630u: goto L_08866A04;
    case 631u: goto L_08866A0C;
    case 632u: goto L_08866A10;
    case 633u: goto L_08866A18;
    case 634u: goto L_08866A28;
    case 635u: goto L_08866A34;
    case 636u: goto L_08866A3C;
    case 637u: goto L_08866A44;
    case 638u: goto L_08866A4C;
    case 639u: goto L_08866A58;
    case 640u: goto L_08866A60;
    case 641u: goto L_08866A68;
    case 642u: goto L_08866A6C;
    case 643u: goto L_08866A74;
    case 644u: goto L_08866A7C;
    case 645u: goto L_08866A84;
    case 646u: goto L_08866A88;
    case 647u: goto L_08866A90;
    case 648u: goto L_08866AB4;
    case 649u: goto L_08866ABC;
    case 650u: goto L_08866AD4;
    case 651u: goto L_08866AE8;
    case 652u: goto L_08866B08;
    case 653u: goto L_08866B0C;
    case 654u: goto L_08866B14;
    case 655u: goto L_08866B1C;
    case 656u: goto L_08866B44;
    case 657u: goto L_08866B4C;
    case 658u: goto L_08866B78;
    case 659u: goto L_08866B84;
    case 660u: goto L_08866B8C;
    case 661u: goto L_08866B94;
    case 662u: goto L_08866BC4;
    case 663u: goto L_08866C08;
    case 664u: goto L_08866C14;
    case 665u: goto L_08866C20;
    case 666u: goto L_08866C28;
    case 667u: goto L_08866C3C;
    case 668u: goto L_08866C4C;
    case 669u: goto L_08866C60;
    case 670u: goto L_08866C6C;
    case 671u: goto L_08866C74;
    case 672u: goto L_08866C7C;
    case 673u: goto L_08866C84;
    case 674u: goto L_08866C8C;
    case 675u: goto L_08866C90;
    case 676u: goto L_08866C98;
    case 677u: goto L_08866CA0;
    case 678u: goto L_08866CA8;
    case 679u: goto L_08866CB0;
    case 680u: goto L_08866CC0;
    case 681u: goto L_08866CD8;
    case 682u: goto L_08866CE4;
    case 683u: goto L_08866CEC;
    case 684u: goto L_08866D04;
    case 685u: goto L_08866D18;
    case 686u: goto L_08866D30;
    case 687u: goto L_08866D48;
    case 688u: goto L_08866D60;
    case 689u: goto L_08866D78;
    case 690u: goto L_08866D90;
    case 691u: goto L_08866D98;
    case 692u: goto L_08866DAC;
    case 693u: goto L_08866DC4;
    case 694u: goto L_08866DDC;
    case 695u: goto L_08866DF4;
    case 696u: goto L_08866DF8;
    case 697u: goto L_08866E1C;
    case 698u: goto L_08866E24;
    case 699u: goto L_08866E3C;
    case 700u: goto L_08866E50;
    case 701u: goto L_08866E70;
    case 702u: goto L_08866E74;
    case 703u: goto L_08866E7C;
    case 704u: goto L_08866E98;
    case 705u: goto L_08866EB4;
    case 706u: goto L_08866EBC;
    case 707u: goto L_08866EDC;
    case 708u: goto L_08866EE8;
    case 709u: goto L_08866EF0;
    case 710u: goto L_08866EF8;
    case 711u: goto L_08866F20;
    case 712u: goto L_08866F54;
    case 713u: goto L_08866F60;
    case 714u: goto L_08866F68;
    case 715u: goto L_08866F7C;
    case 716u: goto L_08866F8C;
    case 717u: goto L_08866FA0;
    case 718u: goto L_08866FBC;
    case 719u: goto L_08866FCC;
    case 720u: goto L_08866FE4;
    case 721u: goto L_08866FF8;
    case 722u: goto L_08867010;
    case 723u: goto L_08867028;
    case 724u: goto L_08867040;
    case 725u: goto L_08867058;
    case 726u: goto L_08867070;
    case 727u: goto L_08867078;
    case 728u: goto L_0886708C;
    case 729u: goto L_088670A4;
    case 730u: goto L_088670BC;
    case 731u: goto L_088670D4;
    case 732u: goto L_088670D8;
    case 733u: goto L_088670FC;
    case 734u: goto L_08867104;
    case 735u: goto L_0886711C;
    case 736u: goto L_08867130;
    case 737u: goto L_08867150;
    case 738u: goto L_08867154;
    case 739u: goto L_0886715C;
    case 740u: goto L_08867170;
    case 741u: goto L_08867184;
    case 742u: goto L_0886718C;
    case 743u: goto L_088671A4;
    case 744u: goto L_088671B0;
    case 745u: goto L_088671B8;
    case 746u: goto L_088671C0;
    case 747u: goto L_088671E0;
    case 748u: goto L_08867244;
    case 749u: goto L_08867250;
    case 750u: goto L_08867258;
    case 751u: goto L_08867264;
    case 752u: goto L_08867270;
    case 753u: goto L_08867278;
    case 754u: goto L_08867288;
    case 755u: goto L_08867298;
    case 756u: goto L_088672A4;
    case 757u: goto L_088672AC;
    case 758u: goto L_088672B8;
    case 759u: goto L_088672D0;
    case 760u: goto L_088672DC;
    case 761u: goto L_088672EC;
    case 762u: goto L_088672F8;
    case 763u: goto L_08867304;
    case 764u: goto L_0886730C;
    case 765u: goto L_08867314;
    case 766u: goto L_0886731C;
    case 767u: goto L_08867324;
    case 768u: goto L_08867330;
    case 769u: goto L_08867338;
    case 770u: goto L_08867340;
    case 771u: goto L_0886734C;
    case 772u: goto L_08867354;
    case 773u: goto L_0886735C;
    case 774u: goto L_08867364;
    case 775u: goto L_0886737C;
    case 776u: goto L_088673A0;
    case 777u: goto L_088673A8;
    case 778u: goto L_088673B0;
    case 779u: goto L_088673BC;
    case 780u: goto L_088673CC;
    case 781u: goto L_088673D4;
    case 782u: goto L_088673E4;
    case 783u: goto L_088673EC;
    case 784u: goto L_088673F4;
    case 785u: goto L_08867400;
    case 786u: goto L_08867414;
    case 787u: goto L_08867428;
    case 788u: goto L_0886743C;
    case 789u: goto L_08867450;
    case 790u: goto L_08867464;
    case 791u: goto L_08867478;
    case 792u: goto L_08867480;
    case 793u: goto L_08867488;
    case 794u: goto L_0886749C;
    case 795u: goto L_088674B0;
    case 796u: goto L_088674C4;
    case 797u: goto L_088674D8;
    case 798u: goto L_088674E0;
    case 799u: goto L_088674E4;
    case 800u: goto L_088674EC;
    case 801u: goto L_088674F8;
    case 802u: goto L_08867504;
    case 803u: goto L_08867510;
    case 804u: goto L_08867518;
    case 805u: goto L_08867520;
    case 806u: goto L_08867538;
    case 807u: goto L_08867540;
    case 808u: goto L_08867548;
    case 809u: goto L_0886754C;
    case 810u: goto L_08867554;
    case 811u: goto L_0886755C;
    case 812u: goto L_08867564;
    case 813u: goto L_08867568;
    case 814u: goto L_08867570;
    case 815u: goto L_08867594;
    case 816u: goto L_0886759C;
    case 817u: goto L_088675B4;
    case 818u: goto L_088675C8;
    case 819u: goto L_088675E8;
    case 820u: goto L_088675EC;
    case 821u: goto L_088675F4;
    case 822u: goto L_088675FC;
    case 823u: goto L_08867624;
    case 824u: goto L_0886762C;
    case 825u: goto L_0886764C;
    case 826u: goto L_08867658;
    case 827u: goto L_0886769C;
    case 828u: goto L_088676E0;
    case 829u: goto L_088676EC;
    case 830u: goto L_088676F4;
    case 831u: goto L_08867700;
    case 832u: goto L_0886770C;
    case 833u: goto L_08867714;
    case 834u: goto L_08867728;
    case 835u: goto L_08867738;
    case 836u: goto L_0886774C;
    case 837u: goto L_08867758;
    case 838u: goto L_08867760;
    case 839u: goto L_08867768;
    case 840u: goto L_08867770;
    case 841u: goto L_0886777C;
    case 842u: goto L_08867784;
    case 843u: goto L_0886778C;
    case 844u: goto L_08867794;
    case 845u: goto L_088677AC;
    case 846u: goto L_088677D0;
    case 847u: goto L_088677D8;
    case 848u: goto L_088677E0;
    case 849u: goto L_088677EC;
    case 850u: goto L_088677FC;
    case 851u: goto L_08867804;
    case 852u: goto L_08867814;
    case 853u: goto L_0886781C;
    case 854u: goto L_08867824;
    case 855u: goto L_0886783C;
    case 856u: goto L_08867850;
    case 857u: goto L_08867864;
    case 858u: goto L_08867878;
    case 859u: goto L_0886788C;
    case 860u: goto L_088678A0;
    case 861u: goto L_088678B4;
    case 862u: goto L_088678BC;
    case 863u: goto L_088678D0;
    case 864u: goto L_088678E4;
    case 865u: goto L_088678F8;
    case 866u: goto L_0886790C;
    case 867u: goto L_08867910;
    case 868u: goto L_08867934;
    case 869u: goto L_0886793C;
    case 870u: goto L_08867954;
    case 871u: goto L_08867968;
    case 872u: goto L_08867988;
    case 873u: goto L_0886798C;
    case 874u: goto L_08867994;
    case 875u: goto L_0886799C;
    case 876u: goto L_088679C4;
    case 877u: goto L_088679CC;
    case 878u: goto L_088679EC;
    case 879u: goto L_088679F8;
    case 880u: goto L_08867A20;
    case 881u: goto L_08867A54;
    case 882u: goto L_08867A60;
    case 883u: goto L_08867A68;
    case 884u: goto L_08867A7C;
    case 885u: goto L_08867A8C;
    case 886u: goto L_08867AA8;
    case 887u: goto L_08867ACC;
    case 888u: goto L_08867AD4;
    case 889u: goto L_08867ADC;
    case 890u: goto L_08867AE8;
    case 891u: goto L_08867AF8;
    case 892u: goto L_08867B00;
    case 893u: goto L_08867B10;
    case 894u: goto L_08867B18;
    case 895u: goto L_08867B30;
    case 896u: goto L_08867B44;
    case 897u: goto L_08867B58;
    case 898u: goto L_08867B6C;
    case 899u: goto L_08867B80;
    case 900u: goto L_08867B94;
    case 901u: goto L_08867BA8;
    case 902u: goto L_08867BB0;
    case 903u: goto L_08867BC4;
    case 904u: goto L_08867BD8;
    case 905u: goto L_08867BEC;
    case 906u: goto L_08867C00;
    case 907u: goto L_08867C04;
    case 908u: goto L_08867C28;
    case 909u: goto L_08867C30;
    case 910u: goto L_08867C48;
    case 911u: goto L_08867C5C;
    case 912u: goto L_08867C7C;
    case 913u: goto L_08867C80;
    case 914u: goto L_08867C88;
    case 915u: goto L_08867C90;
    case 916u: goto L_08867CB8;
    case 917u: goto L_08867CC0;
    case 918u: goto L_08867CE0;
    case 919u: goto L_08867CEC;
    case 920u: goto L_08867D0C;
    case 921u: goto L_08867D70;
    case 922u: goto L_08867D7C;
    case 923u: goto L_08867D84;
    case 924u: goto L_08867D98;
    case 925u: goto L_08867DB8;
    case 926u: goto L_08867DE0;
    case 927u: goto L_08867DF8;
    case 928u: goto L_08867E00;
    case 929u: goto L_08867E30;
    case 930u: goto L_08867E60;
    case 931u: goto L_08867E74;
    case 932u: goto L_08867E94;
    case 933u: goto L_08867E9C;
    case 934u: goto L_08867EA4;
    case 935u: goto L_08867EBC;
    case 936u: goto L_08867EC8;
    case 937u: goto L_08867ED0;
    case 938u: goto L_08867EDC;
    case 939u: goto L_08867EE4;
    case 940u: goto L_08867EEC;
    case 941u: goto L_08867EF4;
    case 942u: goto L_08867F00;
    case 943u: goto L_08867F08;
    case 944u: goto L_08867F10;
    case 945u: goto L_08867F18;
    case 946u: goto L_08867F20;
    case 947u: goto L_08867F2C;
    case 948u: goto L_08867F40;
    case 949u: goto L_08867F54;
    case 950u: goto L_08867F68;
    case 951u: goto L_08867F7C;
    case 952u: goto L_08867F90;
    case 953u: goto L_08867FA4;
    case 954u: goto L_08867FAC;
    case 955u: goto L_08867FB4;
    case 956u: goto L_08867FC8;
    case 957u: goto L_08867FDC;
    case 958u: goto L_08867FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08864000:
    ctx.gpr[31] = (0x08864008u);
    ctx.gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08864008u) goto L_08864008;
    return;
L_08864008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08864040;
      }
      goto L_08864020;
    }
L_08864020:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08864030u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem) && ctx.pc == 0x08864030u) goto L_08864030;
    return;
L_08864030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    goto L_08864040;
L_08864040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08864064;
      }
      goto L_08864058;
    }
L_08864058:
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08864070;
      }
      goto L_08864064;
    }
L_08864064:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08864070;
L_08864070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886408C;
      }
      goto L_08864084;
    }
L_08864084:
    ctx.gpr[31] = (0x0886408Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem) && ctx.pc == 0x0886408Cu) goto L_0886408C;
    return;
L_0886408C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088640A4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem) && ctx.pc == 0x088640A4u) goto L_088640A4;
    return;
L_088640A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    ctx.gpr[31] = (0x088640E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 452u, 0x08882930u>(ctx, &aot_mem) && ctx.pc == 0x088640E4u) goto L_088640E4;
    return;
L_088640E4:
    ctx.gpr[31] = (0x088640ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem) && ctx.pc == 0x088640ECu) goto L_088640EC;
    return;
L_088640EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886413C;
      }
      goto L_088640F4;
    }
L_088640F4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886413C;
      }
      goto L_088640FC;
    }
L_088640FC:
    ctx.gpr[31] = (0x08864104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem) && ctx.pc == 0x08864104u) goto L_08864104;
    return;
L_08864104:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08864128;
    }
    goto L_08864110;
L_08864110:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_08864130;
      }
      goto L_08864128;
    }
L_08864128:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_08864130;
L_08864130:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0886413Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem) && ctx.pc == 0x0886413Cu) goto L_0886413C;
    return;
L_0886413C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886415C;
      }
      goto L_08864144;
    }
L_08864144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08864150u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem) && ctx.pc == 0x08864150u) goto L_08864150;
    return;
L_08864150:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0886415Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem) && ctx.pc == 0x0886415Cu) goto L_0886415C;
    return;
L_0886415C:
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
L_0886417C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088641D8;
      }
      goto L_08864190;
    }
L_08864190:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088641D8;
      }
      goto L_088641A0;
    }
L_088641A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088641B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 369u, 0x08B41658u>(ctx, &aot_mem) && ctx.pc == 0x088641B8u) goto L_088641B8;
    return;
L_088641B8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5444)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5436), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5444), ctx.gpr[4]);
    goto L_088641D8;
L_088641D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088641E8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864240;
      }
      goto L_088641F0;
    }
L_088641F0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08864240;
      }
      goto L_08864200;
    }
L_08864200:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[6] = (305u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11520));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(482))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-30396)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-30396), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08864240;
L_08864240:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864248:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7964), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-29144), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(7984), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = ((ctx.gpr[5] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7984)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2239u << 16u);
      if (branch_taken) {
          goto L_0886438C;
      }
      goto L_08864328;
    }
L_08864328:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23008));
    goto L_0886432C;
L_0886432C:
    ctx.gpr[5] = (ctx.gpr[7] << 5u);
    ctx.gpr[9] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[9]);
    goto L_0886433C;
L_0886433C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886433C;
      }
      goto L_0886436C;
    }
L_0886436C:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7984)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886432C;
      }
      goto L_0886438C;
    }
L_0886438C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864394:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7984)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2239u << 16u);
      if (branch_taken) {
          goto L_08864400;
      }
      goto L_088643C0;
    }
L_088643C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(23008));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    goto L_088643CC;
L_088643CC:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[31] = (0x088643E8u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 146u, 0x08AEC930u>(ctx, &aot_mem) && ctx.pc == 0x088643E8u) goto L_088643E8;
    return;
L_088643E8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(7984)));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088643CC;
      }
      goto L_08864400;
    }
L_08864400:
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
L_0886441C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8012), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8014), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8016), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8020), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8022), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8020))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2240u << 16u);
      if (branch_taken) {
          goto L_0886457C;
      }
      goto L_08864540;
    }
L_08864540:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28496));
    goto L_08864544;
L_08864544:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8020))))));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864544;
      }
      goto L_0886457C;
    }
L_0886457C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864584:
    ctx.gpr[6] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(31552));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 65534u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088645C0;
      }
      goto L_088645A8;
    }
L_088645A8:
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_088645D4;
      }
      goto L_088645C0;
    }
L_088645C0:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[2] = (ctx.gpr[5] << 16u);
    ctx.gpr[2] = (ctx.gpr[4] | ctx.gpr[2]);
    goto L_088645D4;
L_088645D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088645DC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08864618;
      }
      goto L_088645E8;
    }
L_088645E8:
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[7] = (2239u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(31552));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] >> 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08864620;
      }
      goto L_08864610;
    }
L_08864610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08864620;
      }
      goto L_08864618;
    }
L_08864618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08864620;
      }
      goto L_08864620;
    }
L_08864620:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (15820u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[18] = (2239u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 6u);
    ctx.gpr[16] = (0u | 7u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(31552));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_0886466C;
L_0886466C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886472C;
      }
      goto L_08864678;
    }
L_08864678:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088646B4;
      }
      goto L_08864688;
    }
L_08864688:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29168)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29167)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29166)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 228u);
    ctx.gpr[11] = (0u | 2048u);
    ctx.gpr[31] = (0x088646ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 572u, 0x088ABA2Cu>(ctx, &aot_mem) && ctx.pc == 0x088646ACu) goto L_088646AC;
    return;
L_088646AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886472C;
      }
      goto L_088646B4;
    }
L_088646B4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088646F8;
      }
      goto L_088646BC;
    }
L_088646BC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29164)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29163)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29162)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 228u);
    ctx.gpr[11] = (0u | 1024u);
    ctx.gpr[31] = (0x088646F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem) && ctx.pc == 0x088646F0u) goto L_088646F0;
    return;
L_088646F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886472C;
      }
      goto L_088646F8;
    }
L_088646F8:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29160)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29159)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-29158)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 228u);
    ctx.gpr[11] = (0u | 2048u);
    ctx.gpr[31] = (0x0886472Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem) && ctx.pc == 0x0886472Cu) goto L_0886472C;
    return;
L_0886472C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0886466C;
      }
      goto L_0886473C;
    }
L_0886473C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08864760:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31552));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    goto L_0886477C;
L_0886477C:
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
      if (branch_taken) {
          goto L_0886479C;
      }
      goto L_08864788;
    }
L_08864788:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886479C;
      }
      goto L_08864790;
    }
L_08864790:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0886477C;
      }
      goto L_0886479C;
    }
L_0886479C:
    ctx.gpr[9] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[31] = (0x088647C4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08864584;
L_088647C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088647D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088647E0u);
    // nop
    goto L_088645DC;
L_088647E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088647F8;
      }
      goto L_088647F0;
    }
L_088647F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08864810;
      }
      goto L_088647F8;
    }
L_088647F8:
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31552));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_08864810;
L_08864810:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886481C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49864u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[21]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[12])) && ctx.fpr[24] == ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0886489C;
      }
      goto L_08864884;
    }
L_08864884:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088648AC;
      }
      goto L_0886489C;
    }
L_0886489C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088648A8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x088648A8u) goto L_088648A8;
    return;
L_088648A8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088648AC;
L_088648AC:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
      if (branch_taken) {
          goto L_088648E0;
      }
      goto L_088648C0;
    }
L_088648C0:
    ctx.gpr[4] = (0u - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23008));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_088648E0;
L_088648E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08864904;
      }
      goto L_088648E8;
    }
L_088648E8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2239u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23008));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08864904;
L_08864904:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08864944u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 327u, 0x08899BB4u>(ctx, &aot_mem) && ctx.pc == 0x08864944u) goto L_08864944;
    return;
L_08864944:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864980;
      }
      goto L_08864950;
    }
L_08864950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25488)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 16u);
    ctx.gpr[31] = (0x08864980u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem) && ctx.pc == 0x08864980u) goto L_08864980;
    return;
L_08864980:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088649E4;
      }
      goto L_0886498C;
    }
L_0886498C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x088649A4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x088649A4u) goto L_088649A4;
    return;
L_088649A4:
    ctx.gpr[4] = (ctx.gpr[2] << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25488)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 16u);
    ctx.gpr[31] = (0x088649E4u);
    ctx.gpr[10] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem) && ctx.pc == 0x088649E4u) goto L_088649E4;
    return;
L_088649E4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864A88;
      }
      goto L_088649F8;
    }
L_088649F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08864A14;
L_08864A14:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08864A70;
      }
      goto L_08864A68;
    }
L_08864A68:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08864A70;
L_08864A70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864A14;
      }
      goto L_08864A88;
    }
L_08864A88:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864AB0;
      }
      goto L_08864A90;
    }
L_08864A90:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08864A9Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 164u, 0x08A3CC2Cu>(ctx, &aot_mem) && ctx.pc == 0x08864A9Cu) goto L_08864A9C;
    return;
L_08864A9C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08864AB0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08864AE8;
L_08864AB0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864AE8:
    ctx.gpr[7] = (2240u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-29664));
    goto L_08864AFC;
L_08864AFC:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864B44;
      }
      goto L_08864B04;
    }
L_08864B04:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864B44;
      }
      goto L_08864B0C;
    }
L_08864B0C:
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08864B30;
      }
      goto L_08864B28;
    }
L_08864B28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08864B3C;
      }
      goto L_08864B30;
    }
L_08864B30:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 80 ? 1u : 0u);
    goto L_08864B3C;
L_08864B3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08864AFC;
      }
      goto L_08864B44;
    }
L_08864B44:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864B84;
      }
      goto L_08864B4C;
    }
L_08864B4C:
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08864B7C;
      }
      goto L_08864B68;
    }
L_08864B68:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08864BF8;
      }
      goto L_08864B7C;
    }
L_08864B7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08864BF8;
      }
      goto L_08864B84;
    }
L_08864B84:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08864B8C;
L_08864B8C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864BD4;
      }
      goto L_08864B94;
    }
L_08864B94:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864BD4;
      }
      goto L_08864B9C;
    }
L_08864B9C:
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864BC0;
      }
      goto L_08864BB8;
    }
L_08864BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08864BCC;
      }
      goto L_08864BC0;
    }
L_08864BC0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 80 ? 1u : 0u);
    goto L_08864BCC;
L_08864BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08864B8C;
      }
      goto L_08864BD4;
    }
L_08864BD4:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864BF8;
      }
      goto L_08864BDC;
    }
L_08864BDC:
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08864BF8;
L_08864BF8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864C00:
    ctx.gpr[9] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28704));
    goto L_08864C18;
L_08864C18:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864C58;
      }
      goto L_08864C20;
    }
L_08864C20:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864C58;
      }
      goto L_08864C28;
    }
L_08864C28:
    ctx.gpr[10] = (ctx.gpr[8] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08864C44;
      }
      goto L_08864C3C;
    }
L_08864C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08864C50;
      }
      goto L_08864C44;
    }
L_08864C44:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 52 ? 1u : 0u);
    goto L_08864C50;
L_08864C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08864C18;
      }
      goto L_08864C58;
    }
L_08864C58:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864C78;
      }
      goto L_08864C60;
    }
L_08864C60:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864CDC;
      }
      goto L_08864C68;
    }
L_08864C68:
    ctx.gpr[4] = (ctx.gpr[8] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08864CDC;
      }
      goto L_08864C78;
    }
L_08864C78:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864CDC;
      }
      goto L_08864C80;
    }
L_08864C80:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08864C88;
L_08864C88:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864CC8;
      }
      goto L_08864C90;
    }
L_08864C90:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864CC8;
      }
      goto L_08864C98;
    }
L_08864C98:
    ctx.gpr[9] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864CB4;
      }
      goto L_08864CAC;
    }
L_08864CAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08864CC0;
      }
      goto L_08864CB4;
    }
L_08864CB4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 52 ? 1u : 0u);
    goto L_08864CC0;
L_08864CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08864C88;
      }
      goto L_08864CC8;
    }
L_08864CC8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864CDC;
      }
      goto L_08864CD0;
    }
L_08864CD0:
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08864CDC;
L_08864CDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864CE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2240u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-29664));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    goto L_08864D0C;
L_08864D0C:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864D3C;
      }
      goto L_08864D28;
    }
L_08864D28:
    ctx.gpr[31] = (0x08864D30u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 164u, 0x08A3CC2Cu>(ctx, &aot_mem) && ctx.pc == 0x08864D30u) goto L_08864D30;
    return;
L_08864D30:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_08864D3C;
L_08864D3C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 80 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864D0C;
      }
      goto L_08864D50;
    }
L_08864D50:
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
L_08864D6C:
    ctx.gpr[7] = (2240u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-28704));
    ctx.gpr[4] = (8u << 16u);
    goto L_08864D7C;
L_08864D7C:
    ctx.gpr[6] = (ctx.gpr[8] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08864DA0;
      }
      goto L_08864D90;
    }
L_08864D90:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[9] = (ctx.gpr[9] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_08864DA0;
L_08864DA0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864D7C;
      }
      goto L_08864DB4;
    }
L_08864DB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29728));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08864DE8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17104));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x08864DE8u) goto L_08864DE8;
    return;
L_08864DE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08864DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8040), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8044), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13364), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13362), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11836), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5432), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08864E50u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem) && ctx.pc == 0x08864E50u) goto L_08864E50;
    return;
L_08864E50:
    ctx.gpr[31] = (0x08864E58u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2308), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 645u, 0x08B2331Cu>(ctx, &aot_mem) && ctx.pc == 0x08864E58u) goto L_08864E58;
    return;
L_08864E58:
    ctx.gpr[31] = (0x08864E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 144u, 0x08AB4B00u>(ctx, &aot_mem) && ctx.pc == 0x08864E60u) goto L_08864E60;
    return;
L_08864E60:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (2238u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32304));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08864EA0;
      }
      goto L_08864E98;
    }
L_08864E98:
    ctx.gpr[31] = (0x08864EA0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 110u, 0x08A1CA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08864EA0u) goto L_08864EA0;
    return;
L_08864EA0:
    ctx.gpr[31] = (0x08864EA8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 203u, 0x08A1D1F8u>(ctx, &aot_mem) && ctx.pc == 0x08864EA8u) goto L_08864EA8;
    return;
L_08864EA8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08864EC4;
      }
      goto L_08864EB4;
    }
L_08864EB4:
    ctx.gpr[31] = (0x08864EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08864EBCu) goto L_08864EBC;
    return;
L_08864EBC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08864EC4;
L_08864EC4:
    ctx.gpr[31] = (0x08864ECCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 643u, 0x089BB010u>(ctx, &aot_mem) && ctx.pc == 0x08864ECCu) goto L_08864ECC;
    return;
L_08864ECC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08864EE8;
      }
      goto L_08864ED8;
    }
L_08864ED8:
    ctx.gpr[31] = (0x08864EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08864EE0u) goto L_08864EE0;
    return;
L_08864EE0:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08864EE8;
L_08864EE8:
    ctx.gpr[31] = (0x08864EF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 640u, 0x089BAFF8u>(ctx, &aot_mem) && ctx.pc == 0x08864EF0u) goto L_08864EF0;
    return;
L_08864EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864F08;
      }
      goto L_08864EFC;
    }
L_08864EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[31] = (0x08864F08u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 350u, 0x088DE1D4u>(ctx, &aot_mem) && ctx.pc == 0x08864F08u) goto L_08864F08;
    return;
L_08864F08:
    ctx.gpr[21] = (0u | 0u);
    goto L_08864F0C;
L_08864F0C:
    ctx.gpr[5] = (ctx.gpr[21] & 255u);
    ctx.gpr[31] = (0x08864F18u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 622u, 0x08A06744u>(ctx, &aot_mem) && ctx.pc == 0x08864F18u) goto L_08864F18;
    return;
L_08864F18:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864F0C;
      }
      goto L_08864F2C;
    }
L_08864F2C:
    ctx.gpr[31] = (0x08864F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 475u, 0x08AFB4F8u>(ctx, &aot_mem) && ctx.pc == 0x08864F34u) goto L_08864F34;
    return;
L_08864F34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864F48;
      }
      goto L_08864F40;
    }
L_08864F40:
    ctx.gpr[31] = (0x08864F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 538u, 0x08AD31E8u>(ctx, &aot_mem) && ctx.pc == 0x08864F48u) goto L_08864F48;
    return;
L_08864F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864F60;
      }
      goto L_08864F54;
    }
L_08864F54:
    ctx.gpr[31] = (0x08864F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08864F5Cu) goto L_08864F5C;
    return;
L_08864F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08864F60;
L_08864F60:
    ctx.gpr[31] = (0x08864F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 555u, 0x089BAA70u>(ctx, &aot_mem) && ctx.pc == 0x08864F68u) goto L_08864F68;
    return;
L_08864F68:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08864FBC;
      }
      goto L_08864F74;
    }
L_08864F74:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864F88;
      }
      goto L_08864F7C;
    }
L_08864F7C:
    ctx.gpr[31] = (0x08864F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08864F84u) goto L_08864F84;
    return;
L_08864F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08864F88;
L_08864F88:
    ctx.gpr[31] = (0x08864F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 555u, 0x089BAA70u>(ctx, &aot_mem) && ctx.pc == 0x08864F90u) goto L_08864F90;
    return;
L_08864F90:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
      if (branch_taken) {
          goto L_08864FBC;
      }
      goto L_08864F9C;
    }
L_08864F9C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08864FB0;
      }
      goto L_08864FA4;
    }
L_08864FA4:
    ctx.gpr[31] = (0x08864FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08864FACu) goto L_08864FAC;
    return;
L_08864FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08864FB0;
L_08864FB0:
    ctx.gpr[31] = (0x08864FB8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 669u, 0x089BB19Cu>(ctx, &aot_mem) && ctx.pc == 0x08864FB8u) goto L_08864FB8;
    return;
L_08864FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08864FBC;
L_08864FBC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08864FD4;
      }
      goto L_08864FC4;
    }
L_08864FC4:
    ctx.gpr[31] = (0x08864FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem) && ctx.pc == 0x08864FCCu) goto L_08864FCC;
    return;
L_08864FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    ctx.gpr[21] = (0u | 1u);
    goto L_08864FD4;
L_08864FD4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08864FE8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 646u, 0x089BB028u>(ctx, &aot_mem) && ctx.pc == 0x08864FE8u) goto L_08864FE8;
    return;
L_08864FE8:
    ctx.gpr[4] = (2240u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25888));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-2988), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2318))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2318), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2318))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2318), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x0886502Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem) && ctx.pc == 0x0886502Cu) goto L_0886502C;
    return;
L_0886502C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3261))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0886504Cu);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3259), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x0886504Cu) goto L_0886504C;
    return;
L_0886504C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08865058u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 953u, 0x0898BB34u>(ctx, &aot_mem) && ctx.pc == 0x08865058u) goto L_08865058;
    return;
L_08865058:
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[31] = (0x08865070u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08865070u) goto L_08865070;
    return;
L_08865070:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (16128u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08865084u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem) && ctx.pc == 0x08865084u) goto L_08865084;
    return;
L_08865084:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08865094u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 635u, 0x08A06824u>(ctx, &aot_mem) && ctx.pc == 0x08865094u) goto L_08865094;
    return;
L_08865094:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1786), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1787), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8002), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7996), ctx.gpr[18]);
    ctx.gpr[4] = (2239u << 16u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7992), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[31] = (0x088650B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22192));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 293u, 0x08861DF8u>(ctx, &aot_mem) && ctx.pc == 0x088650B4u) goto L_088650B4;
    return;
L_088650B4:
    ctx.gpr[4] = (2239u << 16u);
    ctx.gpr[31] = (0x088650C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22240));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 329u, 0x08862038u>(ctx, &aot_mem) && ctx.pc == 0x088650C0u) goto L_088650C0;
    return;
L_088650C0:
    ctx.gpr[31] = (0x088650C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 66u, 0x088807A8u>(ctx, &aot_mem) && ctx.pc == 0x088650C8u) goto L_088650C8;
    return;
L_088650C8:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_088650D0;
L_088650D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088651A8;
      }
      goto L_088650DC;
    }
L_088650DC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088650F8;
      }
      goto L_088650E8;
    }
L_088650E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08865194;
      }
      goto L_088650F0;
    }
L_088650F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865114;
      }
      goto L_088650F8;
    }
L_088650F8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886513C;
      }
      goto L_08865104;
    }
L_08865104:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886516C;
      }
      goto L_0886510C;
    }
L_0886510C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865194;
      }
      goto L_08865114;
    }
L_08865114:
    ctx.gpr[31] = (0x0886511Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x0886511Cu) goto L_0886511C;
    return;
L_0886511C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865130;
      }
      goto L_08865128;
    }
L_08865128:
    ctx.gpr[31] = (0x08865130u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_0886417C;
L_08865130:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08865194;
      }
      goto L_0886513C;
    }
L_0886513C:
    ctx.gpr[31] = (0x08865144u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08865144u) goto L_08865144;
    return;
L_08865144:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865160;
      }
      goto L_08865150;
    }
L_08865150:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08865160u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 786u, 0x08863EF0u>(ctx, &aot_mem) && ctx.pc == 0x08865160u) goto L_08865160;
    return;
L_08865160:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08865194;
      }
      goto L_0886516C;
    }
L_0886516C:
    ctx.gpr[31] = (0x08865174u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x08865174u) goto L_08865174;
    return;
L_08865174:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865188;
      }
      goto L_08865180;
    }
L_08865180:
    ctx.gpr[31] = (0x08865188u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088641E8;
L_08865188:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08865194;
      }
      goto L_08865194;
    }
L_08865194:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088651A8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0886565C;
L_088651A8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088650D0;
      }
      goto L_088651BC;
    }
L_088651BC:
    ctx.gpr[16] = (0u | 1u);
    goto L_088651C0;
L_088651C0:
    ctx.gpr[31] = (0x088651C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 606u, 0x08AD368Cu>(ctx, &aot_mem) && ctx.pc == 0x088651C8u) goto L_088651C8;
    return;
L_088651C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088651F8;
      }
      goto L_088651D4;
    }
L_088651D4:
    ctx.gpr[31] = (0x088651DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem) && ctx.pc == 0x088651DCu) goto L_088651DC;
    return;
L_088651DC:
    ctx.gpr[4] = (ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088651F0;
      }
      goto L_088651E8;
    }
L_088651E8:
    ctx.gpr[31] = (0x088651F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 625u, 0x08AD37C0u>(ctx, &aot_mem) && ctx.pc == 0x088651F0u) goto L_088651F0;
    return;
L_088651F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088651C0;
      }
      goto L_088651F8;
    }
L_088651F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865220:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[21] = (0u | 5u);
    ctx.gpr[22] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0886525C;
L_0886525C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_08865268;
    }
L_08865268:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08865284;
      }
      goto L_08865274;
    }
L_08865274:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_0886527C;
    }
L_0886527C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886529C;
      }
      goto L_08865284;
    }
L_08865284:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088653CC;
      }
      goto L_0886528C;
    }
L_0886528C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865538;
      }
      goto L_08865294;
    }
L_08865294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_0886529C;
    }
L_0886529C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x088652A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x088652A8u) goto L_088652A8;
    return;
L_088652A8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_088652B4;
    }
L_088652B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x088652C0u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x088652C0u) goto L_088652C0;
    return;
L_088652C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088652D0;
      }
      goto L_088652CC;
    }
L_088652CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_088652D0;
L_088652D0:
    ctx.gpr[31] = (0x088652D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 325u, 0x088099A0u>(ctx, &aot_mem) && ctx.pc == 0x088652D8u) goto L_088652D8;
    return;
L_088652D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
      if (branch_taken) {
          goto L_08865334;
      }
      goto L_088652E4;
    }
L_088652E4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_088652EC;
    }
L_088652EC:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08865314;
      }
      goto L_08865304;
    }
L_08865304:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0886531C;
      }
      goto L_08865314;
    }
L_08865314:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0886531C;
L_0886531C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865324;
    }
L_08865324:
    ctx.gpr[31] = (0x0886532Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem) && ctx.pc == 0x0886532Cu) goto L_0886532C;
    return;
L_0886532C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865334;
    }
L_08865334:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_0886533C;
    }
L_0886533C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865348;
    }
L_08865348:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865350;
    }
L_08865350:
    ctx.gpr[31] = (0x08865358u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08865358u) goto L_08865358;
    return;
L_08865358:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865360;
    }
L_08865360:
    ctx.gpr[31] = (0x08865368u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08865368u) goto L_08865368;
    return;
L_08865368:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865370;
    }
L_08865370:
    ctx.gpr[31] = (0x08865378u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem) && ctx.pc == 0x08865378u) goto L_08865378;
    return;
L_08865378:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088653C4;
      }
      goto L_08865380;
    }
L_08865380:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088653A0;
      }
      goto L_08865390;
    }
L_08865390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088653A8;
      }
      goto L_088653A0;
    }
L_088653A0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088653A8;
L_088653A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088653B8;
      }
      goto L_088653B0;
    }
L_088653B0:
    ctx.gpr[31] = (0x088653B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem) && ctx.pc == 0x088653B8u) goto L_088653B8;
    return;
L_088653B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_088653C4;
L_088653C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_088653CC;
    }
L_088653CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x088653D8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x088653D8u) goto L_088653D8;
    return;
L_088653D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_088653E4;
    }
L_088653E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x088653F0u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x088653F0u) goto L_088653F0;
    return;
L_088653F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2120)));
      if (branch_taken) {
          goto L_08865400;
      }
      goto L_088653FC;
    }
L_088653FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_08865400;
L_08865400:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088654A4;
      }
      goto L_08865410;
    }
L_08865410:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865448;
      }
      goto L_08865418;
    }
L_08865418:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 2048u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08865438;
      }
      goto L_08865428;
    }
L_08865428:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08865440;
      }
      goto L_08865438;
    }
L_08865438:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_08865440;
L_08865440:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865458;
      }
      goto L_08865448;
    }
L_08865448:
    ctx.gpr[31] = (0x08865450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 325u, 0x088099A0u>(ctx, &aot_mem) && ctx.pc == 0x08865450u) goto L_08865450;
    return;
L_08865450:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_08865458;
    }
L_08865458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08865484;
      }
      goto L_08865474;
    }
L_08865474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0886548C;
      }
      goto L_08865484;
    }
L_08865484:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0886548C;
L_0886548C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_08865494;
    }
L_08865494:
    ctx.gpr[31] = (0x0886549Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem) && ctx.pc == 0x0886549Cu) goto L_0886549C;
    return;
L_0886549C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_088654A4;
    }
L_088654A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088654DC;
      }
      goto L_088654AC;
    }
L_088654AC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & 2048u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088654CC;
      }
      goto L_088654BC;
    }
L_088654BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_088654D4;
      }
      goto L_088654CC;
    }
L_088654CC:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_088654D4;
L_088654D4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_088654DC;
    }
L_088654DC:
    ctx.gpr[31] = (0x088654E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 325u, 0x088099A0u>(ctx, &aot_mem) && ctx.pc == 0x088654E4u) goto L_088654E4;
    return;
L_088654E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865530;
      }
      goto L_088654EC;
    }
L_088654EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0886550C;
      }
      goto L_088654FC;
    }
L_088654FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08865514;
      }
      goto L_0886550C;
    }
L_0886550C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08865514;
L_08865514:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865524;
      }
      goto L_0886551C;
    }
L_0886551C:
    ctx.gpr[31] = (0x08865524u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem) && ctx.pc == 0x08865524u) goto L_08865524;
    return;
L_08865524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08865530;
L_08865530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_08865538;
    }
L_08865538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[31] = (0x08865544u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x08865544u) goto L_08865544;
    return;
L_08865544:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865618;
      }
      goto L_08865550;
    }
L_08865550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[31] = (0x0886555Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 382u, 0x08A8DF08u>(ctx, &aot_mem) && ctx.pc == 0x0886555Cu) goto L_0886555C;
    return;
L_0886555C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886556C;
      }
      goto L_08865568;
    }
L_08865568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_0886556C;
L_0886556C:
    ctx.gpr[31] = (0x08865574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 325u, 0x088099A0u>(ctx, &aot_mem) && ctx.pc == 0x08865574u) goto L_08865574;
    return;
L_08865574:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088655D4;
      }
      goto L_0886557C;
    }
L_0886557C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865618;
      }
      goto L_0886558C;
    }
L_0886558C:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088655B4;
      }
      goto L_088655A4;
    }
L_088655A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088655BC;
      }
      goto L_088655B4;
    }
L_088655B4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088655BC;
L_088655BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865618;
      }
      goto L_088655C4;
    }
L_088655C4:
    ctx.gpr[31] = (0x088655CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem) && ctx.pc == 0x088655CCu) goto L_088655CC;
    return;
L_088655CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865618;
      }
      goto L_088655D4;
    }
L_088655D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088655F4;
      }
      goto L_088655E4;
    }
L_088655E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088655FC;
      }
      goto L_088655F4;
    }
L_088655F4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088655FC;
L_088655FC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886560C;
      }
      goto L_08865604;
    }
L_08865604:
    ctx.gpr[31] = (0x0886560Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem) && ctx.pc == 0x0886560Cu) goto L_0886560C;
    return;
L_0886560C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (ctx.gpr[4] | 2048u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08865618;
L_08865618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865620;
      }
      goto L_08865620;
    }
L_08865620:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886525C;
      }
      goto L_08865634;
    }
L_08865634:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886565C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0886569C;
L_0886569C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08865860;
      }
      goto L_088656A8;
    }
L_088656A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08865860;
      }
      goto L_088656B4;
    }
L_088656B4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_088656BC;
    }
L_088656BC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088656D8;
      }
      goto L_088656C8;
    }
L_088656C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_088656D0;
    }
L_088656D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088656F0;
      }
      goto L_088656D8;
    }
L_088656D8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08865764;
      }
      goto L_088656E0;
    }
L_088656E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088657D8;
      }
      goto L_088656E8;
    }
L_088656E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_088656F0;
    }
L_088656F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088656FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x088656FCu) goto L_088656FC;
    return;
L_088656FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886575C;
      }
      goto L_08865708;
    }
L_08865708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886575C;
      }
      goto L_08865718;
    }
L_08865718:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08865740;
      }
      goto L_08865730;
    }
L_08865730:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08865748;
      }
      goto L_08865740;
    }
L_08865740:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08865748;
L_08865748:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886575C;
      }
      goto L_08865754;
    }
L_08865754:
    ctx.gpr[31] = (0x0886575Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem) && ctx.pc == 0x0886575Cu) goto L_0886575C;
    return;
L_0886575C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_08865764;
    }
L_08865764:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08865770u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08865770u) goto L_08865770;
    return;
L_08865770:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088657D0;
      }
      goto L_0886577C;
    }
L_0886577C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088657D0;
      }
      goto L_0886578C;
    }
L_0886578C:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088657B4;
      }
      goto L_088657A4;
    }
L_088657A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_088657BC;
      }
      goto L_088657B4;
    }
L_088657B4:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_088657BC;
L_088657BC:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088657D0;
      }
      goto L_088657C8;
    }
L_088657C8:
    ctx.gpr[31] = (0x088657D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem) && ctx.pc == 0x088657D0u) goto L_088657D0;
    return;
L_088657D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_088657D8;
    }
L_088657D8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088657E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x088657E4u) goto L_088657E4;
    return;
L_088657E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865844;
      }
      goto L_088657F0;
    }
L_088657F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865844;
      }
      goto L_08865800;
    }
L_08865800:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08865828;
      }
      goto L_08865818;
    }
L_08865818:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08865830;
      }
      goto L_08865828;
    }
L_08865828:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08865830;
L_08865830:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865844;
      }
      goto L_0886583C;
    }
L_0886583C:
    ctx.gpr[31] = (0x08865844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem) && ctx.pc == 0x08865844u) goto L_08865844;
    return;
L_08865844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886584C;
      }
      goto L_0886584C;
    }
L_0886584C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08865860;
L_08865860:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0886569C;
      }
      goto L_08865874;
    }
L_08865874:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886589C:
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<29u>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[12] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26424));
    goto L_088658B8;
L_088658B8:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088658DC;
      }
      goto L_088658C8;
    }
L_088658C8:
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[12]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[10];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088658DC:
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.set_vfpu_scalar_bits_ct<93u>(ctx.gpr[31]);
    ctx.set_vfpu_scalar_bits_ct<92u>(ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<124u>(ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<30u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<62u>(ctx.gpr[12]);
    ctx.gpr[8] = (ctx.gpr[5] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<29u>());
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[31] = (0x08865908u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 247u, 0x08861A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08865908u) goto L_08865908;
    return;
L_08865908:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<29u>());
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<92u>());
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<124u>());
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<30u>());
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<62u>());
    ctx.gpr[31] = (ctx.vfpu_scalar_bits_ct<93u>());
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865938;
    }
L_08865938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865940;
    }
L_08865940:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), 0u);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865950;
    }
L_08865950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865958;
    }
L_08865958:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865970;
    }
L_08865970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865978;
    }
L_08865978:
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865994;
    }
L_08865994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_0886599C;
    }
L_0886599C:
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_088659B8;
    }
L_088659B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_088659C0;
    }
L_088659C0:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_088659D4;
    }
L_088659D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_088659DC;
    }
L_088659DC:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFFFFFF00u) | ((ctx.gpr[11] & 0x00FFFFFFu) << 8u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_088659F8;
    }
L_088659F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865A00;
    }
L_08865A00:
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865A18;
    }
L_08865A18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865A20;
    }
L_08865A20:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[5] - ctx.gpr[9]);
    goto L_08865A28;
L_08865A28:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08865A28;
      }
      goto L_08865A34;
    }
L_08865A34:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_088658B8;
      }
      goto L_08865A40;
    }
L_08865A40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865A4C;
      }
      goto L_08865A48;
    }
L_08865A48:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08865A4C;
L_08865A4C:
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<29u>());
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-137));
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08865AD4;
      }
      goto L_08865AC8;
    }
L_08865AC8:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08865ADC;
      }
      goto L_08865AD4;
    }
L_08865AD4:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08865ADC;
L_08865ADC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08865AECu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem) && ctx.pc == 0x08865AECu) goto L_08865AEC;
    return;
L_08865AEC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08865AFCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08865AFCu) goto L_08865AFC;
    return;
L_08865AFC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865B28;
      }
      goto L_08865B08;
    }
L_08865B08:
    ctx.gpr[31] = (0x08865B10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08865B10u) goto L_08865B10;
    return;
L_08865B10:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(-128));
    ctx.gpr[23] = (ctx.gpr[21] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
      if (branch_taken) {
          goto L_08865B30;
      }
      goto L_08865B20;
    }
L_08865B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865B54;
      }
      goto L_08865B28;
    }
L_08865B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865F00;
      }
      goto L_08865B30;
    }
L_08865B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865B54;
      }
      goto L_08865B3C;
    }
L_08865B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865B60;
      }
      goto L_08865B54;
    }
L_08865B54:
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
    goto L_08865B60;
L_08865B60:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865BAC;
      }
      goto L_08865B68;
    }
L_08865B68:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25776)));
    jump_target = ctx.gpr[1];
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865B80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865BAC;
      }
      goto L_08865B88;
    }
L_08865B88:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08865B94u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 745u, 0x08863CB4u>(ctx, &aot_mem) && ctx.pc == 0x08865B94u) goto L_08865B94;
    return;
L_08865B94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865BA4;
      }
      goto L_08865B9C;
    }
L_08865B9C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[20] = (0u | 1u);
    goto L_08865BA4;
L_08865BA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865BAC;
      }
      goto L_08865BAC;
    }
L_08865BAC:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865C14;
      }
      goto L_08865BBC;
    }
L_08865BBC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[12])) && ctx.fpr[24] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (50042u << 16u);
      if (branch_taken) {
          goto L_08865BEC;
      }
      goto L_08865BD8;
    }
L_08865BD8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08865C00;
    }
    goto L_08865BEC;
L_08865BEC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08865BF8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08865BF8u) goto L_08865BF8;
    return;
L_08865BF8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08865C00;
L_08865C00:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08865C20;
      }
      goto L_08865C14;
    }
L_08865C14:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08865C20;
L_08865C20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865C2C;
    }
L_08865C2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[24];
      if (branch_taken) {
          goto L_08865CF0;
      }
      goto L_08865C3C;
    }
L_08865C3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865C54;
    }
L_08865C54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[30];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865C70;
    }
L_08865C70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[28] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865C8C;
    }
L_08865C8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[20] + ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865CA8;
    }
L_08865CA8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865CC4;
    }
L_08865CC4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865CE8;
      }
      goto L_08865CE0;
    }
L_08865CE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08865D58;
      }
      goto L_08865CE8;
    }
L_08865CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08865D58;
      }
      goto L_08865CF0;
    }
L_08865CF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865D54;
      }
      goto L_08865D04;
    }
L_08865D04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[30];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865D54;
      }
      goto L_08865D1C;
    }
L_08865D1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865D54;
      }
      goto L_08865D34;
    }
L_08865D34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08865D54;
      }
      goto L_08865D4C;
    }
L_08865D4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08865D58;
      }
      goto L_08865D54;
    }
L_08865D54:
    ctx.gpr[4] = (0u | 0u);
    goto L_08865D58;
L_08865D58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865D60;
    }
L_08865D60:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865D68;
    }
L_08865D68:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25712)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865D80:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865D8C;
    }
L_08865D8C:
    ctx.gpr[31] = (0x08865D94u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08865D94u) goto L_08865D94;
    return;
L_08865D94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08865DA0;
      }
      goto L_08865D9C;
    }
L_08865D9C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08865DA0;
L_08865DA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865DA8;
    }
L_08865DA8:
    ctx.gpr[31] = (0x08865DB0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08865DB0u) goto L_08865DB0;
    return;
L_08865DB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865DBC;
      }
      goto L_08865DB8;
    }
L_08865DB8:
    ctx.gpr[17] = (0u | 1u);
    goto L_08865DBC;
L_08865DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865DC4;
      }
      goto L_08865DC4;
    }
L_08865DC4:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08865DF0;
      }
      goto L_08865DE8;
    }
L_08865DE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08865E40;
      }
      goto L_08865DF0;
    }
L_08865DF0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08865E1C;
      }
      goto L_08865E08;
    }
L_08865E08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08865E40;
      }
      goto L_08865E1C;
    }
L_08865E1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865E40;
      }
      goto L_08865E3C;
    }
L_08865E3C:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08865E40;
L_08865E40:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865EE4;
      }
      goto L_08865E48;
    }
L_08865E48:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[26] = ctx.fpr[30] - ctx.fpr[24];
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[30];
    ctx.fpr[22] = ctx.fpr[28] - ctx.fpr[20];
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[28];
      if (branch_taken) {
          goto L_08865EC8;
      }
      goto L_08865E64;
    }
L_08865E64:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (50042u << 16u);
      if (branch_taken) {
          goto L_08865E94;
      }
      goto L_08865E80;
    }
L_08865E80:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08865EA8;
    }
    goto L_08865E94;
L_08865E94:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08865EA0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08865EA0u) goto L_08865EA0;
    return;
L_08865EA0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08865EA8;
L_08865EA8:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08865EC0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08865EC0u) goto L_08865EC0;
    return;
L_08865EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865EE4;
      }
      goto L_08865EC8;
    }
L_08865EC8:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08865EE4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08865EE4u) goto L_08865EE4;
    return;
L_08865EE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865F00;
      }
      goto L_08865EF0;
    }
L_08865EF0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865F00;
      }
      goto L_08865EF8;
    }
L_08865EF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865F00;
      }
      goto L_08865F00;
    }
L_08865F00:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08865F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 143 ? 1u : 0u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08865FAC;
      }
      goto L_08865F94;
    }
L_08865F94:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 146 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08865FAC;
      }
      goto L_08865FA0;
    }
L_08865FA0:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865FB0;
      }
      goto L_08865FAC;
    }
L_08865FAC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08865FB0;
L_08865FB0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08865FD4;
      }
      goto L_08865FB8;
    }
L_08865FB8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08865FCCu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_08865FCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08865FE4;
      }
      goto L_08865FD4;
    }
L_08865FD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08865FE4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_08865FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08865FF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08865FF0u) goto L_08865FF0;
    return;
L_08865FF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08866000u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08866000u) goto L_08866000;
    return;
L_08866000:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0886600Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0886600Cu) goto L_0886600C;
    return;
L_0886600C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866038;
      }
      goto L_08866014;
    }
L_08866014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866038;
      }
      goto L_08866020;
    }
L_08866020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866044;
      }
      goto L_08866038;
    }
L_08866038:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    goto L_08866044;
L_08866044:
    ctx.gpr[31] = (0x0886604Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0886604Cu) goto L_0886604C;
    return;
L_0886604C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866078;
      }
      goto L_08866054;
    }
L_08866054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866078;
      }
      goto L_08866060;
    }
L_08866060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866084;
      }
      goto L_08866078;
    }
L_08866078:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    goto L_08866084;
L_08866084:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088660A0;
      }
      goto L_08866094;
    }
L_08866094:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088660A4;
      }
      goto L_088660A0;
    }
L_088660A0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_088660A4;
L_088660A4:
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866168;
      }
      goto L_088660B0;
    }
L_088660B0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_088660CC;
    }
L_088660CC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_088660E8;
    }
L_088660E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_08866104;
    }
L_08866104:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_08866120;
    }
L_08866120:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_0886613C;
    }
L_0886613C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866160;
      }
      goto L_08866158;
    }
L_08866158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088661E4;
      }
      goto L_08866160;
    }
L_08866160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088661E4;
      }
      goto L_08866168;
    }
L_08866168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088661E0;
      }
      goto L_08866184;
    }
L_08866184:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088661E0;
      }
      goto L_088661A0;
    }
L_088661A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088661E0;
      }
      goto L_088661BC;
    }
L_088661BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088661E0;
      }
      goto L_088661D8;
    }
L_088661D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088661E4;
      }
      goto L_088661E0;
    }
L_088661E0:
    ctx.gpr[4] = (0u | 0u);
    goto L_088661E4;
L_088661E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866258;
      }
      goto L_088661EC;
    }
L_088661EC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-134));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866258;
      }
      goto L_088661FC;
    }
L_088661FC:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25648)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866214:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866258;
      }
      goto L_08866220;
    }
L_08866220:
    ctx.gpr[31] = (0x08866228u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08866228u) goto L_08866228;
    return;
L_08866228:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08866234;
      }
      goto L_08866230;
    }
L_08866230:
    ctx.gpr[22] = (0u | 1u);
    goto L_08866234;
L_08866234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866258;
      }
      goto L_0886623C;
    }
L_0886623C:
    ctx.gpr[31] = (0x08866244u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08866244u) goto L_08866244;
    return;
L_08866244:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866250;
      }
      goto L_0886624C;
    }
L_0886624C:
    ctx.gpr[22] = (0u | 1u);
    goto L_08866250;
L_08866250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866258;
      }
      goto L_08866258;
    }
L_08866258:
    ctx.gpr[4] = (0u < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u < ctx.gpr[22] ? 1u : 0u);
      if (branch_taken) {
          goto L_08866284;
      }
      goto L_0886627C;
    }
L_0886627C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_088662D4;
      }
      goto L_08866284;
    }
L_08866284:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088662B0;
      }
      goto L_0886629C;
    }
L_0886629C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[22] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088662D4;
      }
      goto L_088662B0;
    }
L_088662B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[22] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088662D4;
      }
      goto L_088662D0;
    }
L_088662D0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088662D4;
L_088662D4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866340;
      }
      goto L_088662DC;
    }
L_088662DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08866314;
      }
      goto L_088662E4;
    }
L_088662E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[31] = (0x0886630Cu);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x0886630Cu) goto L_0886630C;
    return;
L_0886630C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866340;
      }
      goto L_08866314;
    }
L_08866314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x08866340u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08866340u) goto L_08866340;
    return;
L_08866340:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886635C;
      }
      goto L_0886634C;
    }
L_0886634C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886635C;
      }
      goto L_08866354;
    }
L_08866354:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886635C;
      }
      goto L_0886635C;
    }
L_0886635C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0886638C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 309 ? 1u : 0u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088663EC;
      }
      goto L_088663D4;
    }
L_088663D4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 312 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088663EC;
      }
      goto L_088663E0;
    }
L_088663E0:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088663F0;
      }
      goto L_088663EC;
    }
L_088663EC:
    ctx.gpr[18] = (0u | 0u);
    goto L_088663F0;
L_088663F0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08866414;
      }
      goto L_088663F8;
    }
L_088663F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0886640Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_0886640C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866424;
      }
      goto L_08866414;
    }
L_08866414:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08866424u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_08866424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08866430u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08866430u) goto L_08866430;
    return;
L_08866430:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08866440u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08866440u) goto L_08866440;
    return;
L_08866440:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0886644Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0886644Cu) goto L_0886644C;
    return;
L_0886644C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866478;
      }
      goto L_08866454;
    }
L_08866454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866478;
      }
      goto L_08866460;
    }
L_08866460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866484;
      }
      goto L_08866478;
    }
L_08866478:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    goto L_08866484;
L_08866484:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088664B0;
      }
      goto L_088664A4;
    }
L_088664A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088664B4;
      }
      goto L_088664B0;
    }
L_088664B0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_088664B4;
L_088664B4:
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866578;
      }
      goto L_088664C0;
    }
L_088664C0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_088664DC;
    }
L_088664DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_088664F8;
    }
L_088664F8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_08866514;
    }
L_08866514:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_08866530;
    }
L_08866530:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_0886654C;
    }
L_0886654C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866570;
      }
      goto L_08866568;
    }
L_08866568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088665F4;
      }
      goto L_08866570;
    }
L_08866570:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088665F4;
      }
      goto L_08866578;
    }
L_08866578:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088665F0;
      }
      goto L_08866594;
    }
L_08866594:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088665F0;
      }
      goto L_088665B0;
    }
L_088665B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088665F0;
      }
      goto L_088665CC;
    }
L_088665CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088665F0;
      }
      goto L_088665E8;
    }
L_088665E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088665F4;
      }
      goto L_088665F0;
    }
L_088665F0:
    ctx.gpr[4] = (0u | 0u);
    goto L_088665F4;
L_088665F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866674;
      }
      goto L_088665FC;
    }
L_088665FC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-306));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866674;
      }
      goto L_0886660C;
    }
L_0886660C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0886663C;
      }
      goto L_08866618;
    }
L_08866618:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08866658;
      }
      goto L_08866620;
    }
L_08866620:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0886663C;
      }
      goto L_08866628;
    }
L_08866628:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08866658;
      }
      goto L_08866630;
    }
L_08866630:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866674;
      }
      goto L_0886663C;
    }
L_0886663C:
    ctx.gpr[31] = (0x08866644u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08866644u) goto L_08866644;
    return;
L_08866644:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08866650;
      }
      goto L_0886664C;
    }
L_0886664C:
    ctx.gpr[22] = (0u | 1u);
    goto L_08866650;
L_08866650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866674;
      }
      goto L_08866658;
    }
L_08866658:
    ctx.gpr[31] = (0x08866660u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08866660u) goto L_08866660;
    return;
L_08866660:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886666C;
      }
      goto L_08866668;
    }
L_08866668:
    ctx.gpr[22] = (0u | 1u);
    goto L_0886666C;
L_0886666C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866674;
      }
      goto L_08866674;
    }
L_08866674:
    ctx.gpr[4] = (0u < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u < ctx.gpr[22] ? 1u : 0u);
      if (branch_taken) {
          goto L_088666A0;
      }
      goto L_08866698;
    }
L_08866698:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_088666F0;
      }
      goto L_088666A0;
    }
L_088666A0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088666CC;
      }
      goto L_088666B8;
    }
L_088666B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[22] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088666F0;
      }
      goto L_088666CC;
    }
L_088666CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[22] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088666F0;
      }
      goto L_088666EC;
    }
L_088666EC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088666F0;
L_088666F0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886675C;
      }
      goto L_088666F8;
    }
L_088666F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08866730;
      }
      goto L_08866700;
    }
L_08866700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[31] = (0x08866728u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08866728u) goto L_08866728;
    return;
L_08866728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886675C;
      }
      goto L_08866730;
    }
L_08866730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x0886675Cu);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x0886675Cu) goto L_0886675C;
    return;
L_0886675C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866778;
      }
      goto L_08866768;
    }
L_08866768:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866778;
      }
      goto L_08866770;
    }
L_08866770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866778;
      }
      goto L_08866778;
    }
L_08866778:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088667A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 708 ? 1u : 0u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08866808;
      }
      goto L_088667F0;
    }
L_088667F0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 711 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866808;
      }
      goto L_088667FC;
    }
L_088667FC:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886680C;
      }
      goto L_08866808;
    }
L_08866808:
    ctx.gpr[18] = (0u | 0u);
    goto L_0886680C;
L_0886680C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08866830;
      }
      goto L_08866814;
    }
L_08866814:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08866828u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_08866828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866840;
      }
      goto L_08866830;
    }
L_08866830:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08866840u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    goto L_0886589C;
L_08866840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x0886684Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x0886684Cu) goto L_0886684C;
    return;
L_0886684C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[31] = (0x0886685Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x0886685Cu) goto L_0886685C;
    return;
L_0886685C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08866868u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08866868u) goto L_08866868;
    return;
L_08866868:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866894;
      }
      goto L_08866870;
    }
L_08866870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866894;
      }
      goto L_0886687C;
    }
L_0886687C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088668A0;
      }
      goto L_08866894;
    }
L_08866894:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    goto L_088668A0;
L_088668A0:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088668CC;
      }
      goto L_088668C0;
    }
L_088668C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088668D0;
      }
      goto L_088668CC;
    }
L_088668CC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_088668D0;
L_088668D0:
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866994;
      }
      goto L_088668DC;
    }
L_088668DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_088668F8;
    }
L_088668F8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_08866914;
    }
L_08866914:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_08866930;
    }
L_08866930:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_0886694C;
    }
L_0886694C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_08866968;
    }
L_08866968:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886698C;
      }
      goto L_08866984;
    }
L_08866984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08866A10;
      }
      goto L_0886698C;
    }
L_0886698C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08866A10;
      }
      goto L_08866994;
    }
L_08866994:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866A0C;
      }
      goto L_088669B0;
    }
L_088669B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866A0C;
      }
      goto L_088669CC;
    }
L_088669CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866A0C;
      }
      goto L_088669E8;
    }
L_088669E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866A0C;
      }
      goto L_08866A04;
    }
L_08866A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08866A10;
      }
      goto L_08866A0C;
    }
L_08866A0C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08866A10;
L_08866A10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866A90;
      }
      goto L_08866A18;
    }
L_08866A18:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-705));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866A90;
      }
      goto L_08866A28;
    }
L_08866A28:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08866A58;
      }
      goto L_08866A34;
    }
L_08866A34:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08866A74;
      }
      goto L_08866A3C;
    }
L_08866A3C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08866A58;
      }
      goto L_08866A44;
    }
L_08866A44:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08866A74;
      }
      goto L_08866A4C;
    }
L_08866A4C:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866A90;
      }
      goto L_08866A58;
    }
L_08866A58:
    ctx.gpr[31] = (0x08866A60u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08866A60u) goto L_08866A60;
    return;
L_08866A60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08866A6C;
      }
      goto L_08866A68;
    }
L_08866A68:
    ctx.gpr[22] = (0u | 1u);
    goto L_08866A6C;
L_08866A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866A90;
      }
      goto L_08866A74;
    }
L_08866A74:
    ctx.gpr[31] = (0x08866A7Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08866A7Cu) goto L_08866A7C;
    return;
L_08866A7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866A88;
      }
      goto L_08866A84;
    }
L_08866A84:
    ctx.gpr[22] = (0u | 1u);
    goto L_08866A88;
L_08866A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866A90;
      }
      goto L_08866A90;
    }
L_08866A90:
    ctx.gpr[4] = (0u < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u < ctx.gpr[22] ? 1u : 0u);
      if (branch_taken) {
          goto L_08866ABC;
      }
      goto L_08866AB4;
    }
L_08866AB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08866B0C;
      }
      goto L_08866ABC;
    }
L_08866ABC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08866AE8;
      }
      goto L_08866AD4;
    }
L_08866AD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[22] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08866B0C;
      }
      goto L_08866AE8;
    }
L_08866AE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[22] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866B0C;
      }
      goto L_08866B08;
    }
L_08866B08:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08866B0C;
L_08866B0C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866B78;
      }
      goto L_08866B14;
    }
L_08866B14:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08866B4C;
      }
      goto L_08866B1C;
    }
L_08866B1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[31] = (0x08866B44u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08866B44u) goto L_08866B44;
    return;
L_08866B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866B78;
      }
      goto L_08866B4C;
    }
L_08866B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x08866B78u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08866B78u) goto L_08866B78;
    return;
L_08866B78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866B94;
      }
      goto L_08866B84;
    }
L_08866B84:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866B94;
      }
      goto L_08866B8C;
    }
L_08866B8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866B94;
      }
      goto L_08866B94;
    }
L_08866B94:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08866BC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 260 ? 1u : 0u);
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08866C20;
      }
      goto L_08866C08;
    }
L_08866C08:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 262 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866C20;
      }
      goto L_08866C14;
    }
L_08866C14:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08866C28;
      }
      goto L_08866C20;
    }
L_08866C20:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08866C28;
L_08866C28:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08866C3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem) && ctx.pc == 0x08866C3Cu) goto L_08866C3C;
    return;
L_08866C3C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08866C4Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08866C4Cu) goto L_08866C4C;
    return;
L_08866C4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 260 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 261 ? 1u : 0u);
      if (branch_taken) {
          goto L_08866C7C;
      }
      goto L_08866C60;
    }
L_08866C60:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 258 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 259 ? 1u : 0u);
      if (branch_taken) {
          goto L_08866CB0;
      }
      goto L_08866C6C;
    }
L_08866C6C:
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
        goto L_08866C90;
    }
    goto L_08866C74;
L_08866C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866CB0;
      }
      goto L_08866C7C;
    }
L_08866C7C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 262 ? 1u : 0u);
      if (branch_taken) {
          goto L_08866C74;
      }
      goto L_08866C84;
    }
L_08866C84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866CB0;
      }
      goto L_08866C8C;
    }
L_08866C8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08866C90;
L_08866C90:
    ctx.gpr[31] = (0x08866C98u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 761u, 0x08863D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08866C98u) goto L_08866C98;
    return;
L_08866C98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08866CA8;
      }
      goto L_08866CA0;
    }
L_08866CA0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_08866CA8;
L_08866CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866CB0;
      }
      goto L_08866CB0;
    }
L_08866CB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866CD8;
      }
      goto L_08866CC0;
    }
L_08866CC0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08866CE4;
      }
      goto L_08866CD8;
    }
L_08866CD8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_08866CE4;
L_08866CE4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866CEC;
    }
L_08866CEC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[18] = ctx.fpr[12] - ctx.fpr[15];
      if (branch_taken) {
          goto L_08866D98;
      }
      goto L_08866D04;
    }
L_08866D04:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D18;
    }
L_08866D18:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D30;
    }
L_08866D30:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D48;
    }
L_08866D48:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = ctx.fpr[16] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D60;
    }
L_08866D60:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[19] = ctx.fpr[14] - ctx.fpr[17];
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D78;
    }
L_08866D78:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D90;
    }
L_08866D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866D98;
    }
L_08866D98:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866DAC;
    }
L_08866DAC:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866DC4;
    }
L_08866DC4:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866DDC;
    }
L_08866DDC:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08866DF8;
      }
      goto L_08866DF4;
    }
L_08866DF4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08866DF8;
L_08866DF8:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08866E24;
      }
      goto L_08866E1C;
    }
L_08866E1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08866E74;
      }
      goto L_08866E24;
    }
L_08866E24:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08866E50;
      }
      goto L_08866E3C;
    }
L_08866E3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08866E74;
      }
      goto L_08866E50;
    }
L_08866E50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866E74;
      }
      goto L_08866E70;
    }
L_08866E70:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08866E74;
L_08866E74:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866EDC;
      }
      goto L_08866E7C;
    }
L_08866E7C:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
      if (branch_taken) {
          goto L_08866EBC;
      }
      goto L_08866E98;
    }
L_08866E98:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x08866EB4u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08866EB4u) goto L_08866EB4;
    return;
L_08866EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866EDC;
      }
      goto L_08866EBC;
    }
L_08866EBC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x08866EDCu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08866EDCu) goto L_08866EDC;
    return;
L_08866EDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866EF8;
      }
      goto L_08866EE8;
    }
L_08866EE8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866EF8;
      }
      goto L_08866EF0;
    }
L_08866EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08866EF8;
      }
      goto L_08866EF8;
    }
L_08866EF8:
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
L_08866F20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[7] = (0u | 773u);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08866F60;
      }
      goto L_08866F54;
    }
L_08866F54:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08866F68;
      }
      goto L_08866F60;
    }
L_08866F60:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08866F68;
L_08866F68:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08866F7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem) && ctx.pc == 0x08866F7Cu) goto L_08866F7C;
    return;
L_08866F7C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[31] = (0x08866F8Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x08866F8Cu) goto L_08866F8C;
    return;
L_08866F8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08866FBC;
      }
      goto L_08866FA0;
    }
L_08866FA0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[17] = ctx.fpr[12] - ctx.fpr[15];
      if (branch_taken) {
          goto L_08866FCC;
      }
      goto L_08866FBC;
    }
L_08866FBC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = ctx.fpr[12] - ctx.fpr[15];
    goto L_08866FCC;
L_08866FCC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867078;
      }
      goto L_08866FE4;
    }
L_08866FE4:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08866FF8;
    }
L_08866FF8:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867010;
    }
L_08867010:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[13] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867028;
    }
L_08867028:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[16] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867040;
    }
L_08867040:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[14] - ctx.fpr[18];
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867058;
    }
L_08867058:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867070;
    }
L_08867070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_08867078;
    }
L_08867078:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_0886708C;
    }
L_0886708C:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_088670A4;
    }
L_088670A4:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_088670BC;
    }
L_088670BC:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = ctx.fpr[16] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088670D8;
      }
      goto L_088670D4;
    }
L_088670D4:
    ctx.gpr[4] = (0u | 1u);
    goto L_088670D8;
L_088670D8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08867104;
      }
      goto L_088670FC;
    }
L_088670FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08867154;
      }
      goto L_08867104;
    }
L_08867104:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08867130;
      }
      goto L_0886711C;
    }
L_0886711C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08867154;
      }
      goto L_08867130;
    }
L_08867130:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867154;
      }
      goto L_08867150;
    }
L_08867150:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08867154;
L_08867154:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088671A4;
      }
      goto L_0886715C;
    }
L_0886715C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[18] - ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[18];
      if (branch_taken) {
          goto L_0886718C;
      }
      goto L_08867170;
    }
L_08867170:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08867184u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08867184u) goto L_08867184;
    return;
L_08867184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088671A4;
      }
      goto L_0886718C;
    }
L_0886718C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088671A4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x088671A4u) goto L_088671A4;
    return;
L_088671A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088671C0;
      }
      goto L_088671B0;
    }
L_088671B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088671C0;
      }
      goto L_088671B8;
    }
L_088671B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088671C0;
      }
      goto L_088671C0;
    }
L_088671C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088671E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 251 ? 1u : 0u);
    ctx.gpr[21] = (2236u << 16u);
    ctx.gpr[23] = (ctx.gpr[21] + static_cast<std::uint32_t>(29704));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08867258;
      }
      goto L_08867244;
    }
L_08867244:
    ctx.gpr[5] = (0u | 71u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08867264;
      }
      goto L_08867250;
    }
L_08867250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867270;
      }
      goto L_08867258;
    }
L_08867258:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867270;
      }
      goto L_08867264;
    }
L_08867264:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08867278;
      }
      goto L_08867270;
    }
L_08867270:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08867278;
L_08867278:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08867288u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem) && ctx.pc == 0x08867288u) goto L_08867288;
    return;
L_08867288:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08867298u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08867298u) goto L_08867298;
    return;
L_08867298:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088672A4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x088672A4u) goto L_088672A4;
    return;
L_088672A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088672D0;
      }
      goto L_088672AC;
    }
L_088672AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088672D0;
      }
      goto L_088672B8;
    }
L_088672B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088672DC;
      }
      goto L_088672D0;
    }
L_088672D0:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    goto L_088672DC;
L_088672DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 248 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 253 ? 1u : 0u);
      if (branch_taken) {
          goto L_0886731C;
      }
      goto L_088672EC;
    }
L_088672EC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 72 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 246 ? 1u : 0u);
        goto L_0886730C;
    }
    goto L_088672F8;
L_088672F8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 70 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08867364;
      }
      goto L_08867304;
    }
L_08867304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867364;
      }
      goto L_0886730C;
    }
L_0886730C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867304;
      }
      goto L_08867314;
    }
L_08867314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867364;
      }
      goto L_0886731C;
    }
L_0886731C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
        goto L_08867338;
    }
    goto L_08867324;
L_08867324:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 251 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867304;
      }
      goto L_08867330;
    }
L_08867330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867340;
      }
      goto L_08867338;
    }
L_08867338:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867364;
      }
      goto L_08867340;
    }
L_08867340:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0886734Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 745u, 0x08863CB4u>(ctx, &aot_mem) && ctx.pc == 0x0886734Cu) goto L_0886734C;
    return;
L_0886734C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886735C;
      }
      goto L_08867354;
    }
L_08867354:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0886735C;
L_0886735C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867364;
      }
      goto L_08867364;
    }
L_08867364:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088673B0;
      }
      goto L_0886737C;
    }
L_0886737C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088673A8;
      }
      goto L_088673A0;
    }
L_088673A0:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_088673A8;
L_088673A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088673BC;
      }
      goto L_088673B0;
    }
L_088673B0:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    goto L_088673BC;
L_088673BC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088673D4;
      }
      goto L_088673CC;
    }
L_088673CC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088673D4;
L_088673D4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088673EC;
      }
      goto L_088673E4;
    }
L_088673E4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_088673EC;
L_088673EC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_088673F4;
    }
L_088673F4:
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867488;
      }
      goto L_08867400;
    }
L_08867400:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_08867414;
    }
L_08867414:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_08867428;
    }
L_08867428:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_0886743C;
    }
L_0886743C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_08867450;
    }
L_08867450:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_08867464;
    }
L_08867464:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867480;
      }
      goto L_08867478;
    }
L_08867478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088674E4;
      }
      goto L_08867480;
    }
L_08867480:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088674E4;
      }
      goto L_08867488;
    }
L_08867488:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088674E0;
      }
      goto L_0886749C;
    }
L_0886749C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088674E0;
      }
      goto L_088674B0;
    }
L_088674B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088674E0;
      }
      goto L_088674C4;
    }
L_088674C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088674E0;
      }
      goto L_088674D8;
    }
L_088674D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088674E4;
      }
      goto L_088674E0;
    }
L_088674E0:
    ctx.gpr[4] = (0u | 0u);
    goto L_088674E4;
L_088674E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_088674EC;
    }
L_088674EC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 72 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 246 ? 1u : 0u);
      if (branch_taken) {
          goto L_08867510;
      }
      goto L_088674F8;
    }
L_088674F8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 70 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867504;
    }
L_08867504:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867510;
    }
L_08867510:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867518;
    }
L_08867518:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-246));
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867520;
    }
L_08867520:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25600)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867538:
    ctx.gpr[31] = (0x08867540u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08867540u) goto L_08867540;
    return;
L_08867540:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886754C;
      }
      goto L_08867548;
    }
L_08867548:
    ctx.gpr[22] = (0u | 1u);
    goto L_0886754C;
L_0886754C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867554;
    }
L_08867554:
    ctx.gpr[31] = (0x0886755Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x0886755Cu) goto L_0886755C;
    return;
L_0886755C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867568;
      }
      goto L_08867564;
    }
L_08867564:
    ctx.gpr[22] = (0u | 1u);
    goto L_08867568;
L_08867568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867570;
      }
      goto L_08867570;
    }
L_08867570:
    ctx.gpr[4] = (0u < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u < ctx.gpr[22] ? 1u : 0u);
      if (branch_taken) {
          goto L_0886759C;
      }
      goto L_08867594;
    }
L_08867594:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_088675EC;
      }
      goto L_0886759C;
    }
L_0886759C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088675C8;
      }
      goto L_088675B4;
    }
L_088675B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[22] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088675EC;
      }
      goto L_088675C8;
    }
L_088675C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[22] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088675EC;
      }
      goto L_088675E8;
    }
L_088675E8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088675EC;
L_088675EC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886764C;
      }
      goto L_088675F4;
    }
L_088675F4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886762C;
      }
      goto L_088675FC;
    }
L_088675FC:
    ctx.fpr[16] = ctx.fpr[24] + ctx.fpr[30];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08867624u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08867624u) goto L_08867624;
    return;
L_08867624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0886764C;
      }
      goto L_0886762C;
    }
L_0886762C:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0886764Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x0886764Cu) goto L_0886764C;
    return;
L_0886764C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867658;
      }
      goto L_08867658;
    }
L_08867658:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_0886769C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 85 ? 1u : 0u);
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088676F4;
      }
      goto L_088676E0;
    }
L_088676E0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 84 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0886770C;
      }
      goto L_088676EC;
    }
L_088676EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867700;
      }
      goto L_088676F4;
    }
L_088676F4:
    ctx.gpr[6] = (0u | 257u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0886770C;
      }
      goto L_08867700;
    }
L_08867700:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08867714;
      }
      goto L_0886770C;
    }
L_0886770C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08867714;
L_08867714:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08867728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem) && ctx.pc == 0x08867728u) goto L_08867728;
    return;
L_08867728:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    ctx.gpr[31] = (0x08867738u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem) && ctx.pc == 0x08867738u) goto L_08867738;
    return;
L_08867738:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 85 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08867760;
      }
      goto L_0886774C;
    }
L_0886774C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 83 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08867794;
      }
      goto L_08867758;
    }
L_08867758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867794;
      }
      goto L_08867760;
    }
L_08867760:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 258 ? 1u : 0u);
      if (branch_taken) {
          goto L_08867794;
      }
      goto L_08867768;
    }
L_08867768:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867794;
      }
      goto L_08867770;
    }
L_08867770:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x0886777Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 761u, 0x08863D9Cu>(ctx, &aot_mem) && ctx.pc == 0x0886777Cu) goto L_0886777C;
    return;
L_0886777C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0886778C;
      }
      goto L_08867784;
    }
L_08867784:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0886778C;
L_0886778C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867794;
      }
      goto L_08867794;
    }
L_08867794:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088677E0;
      }
      goto L_088677AC;
    }
L_088677AC:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088677D8;
      }
      goto L_088677D0;
    }
L_088677D0:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_088677D8;
L_088677D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088677EC;
      }
      goto L_088677E0;
    }
L_088677E0:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_088677EC;
L_088677EC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867804;
      }
      goto L_088677FC;
    }
L_088677FC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08867804;
L_08867804:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0886781C;
      }
      goto L_08867814;
    }
L_08867814:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0886781C;
L_0886781C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_08867824;
    }
L_08867824:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088678BC;
      }
      goto L_0886783C;
    }
L_0886783C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_08867850;
    }
L_08867850:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_08867864;
    }
L_08867864:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_08867878;
    }
L_08867878:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_0886788C;
    }
L_0886788C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678A0;
    }
L_088678A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678B4;
    }
L_088678B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678BC;
    }
L_088678BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678D0;
    }
L_088678D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678E4;
    }
L_088678E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_088678F8;
    }
L_088678F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867910;
      }
      goto L_0886790C;
    }
L_0886790C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08867910;
L_08867910:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0886793C;
      }
      goto L_08867934;
    }
L_08867934:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0886798C;
      }
      goto L_0886793C;
    }
L_0886793C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08867968;
      }
      goto L_08867954;
    }
L_08867954:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0886798C;
      }
      goto L_08867968;
    }
L_08867968:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0886798C;
      }
      goto L_08867988;
    }
L_08867988:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_0886798C;
L_0886798C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088679EC;
      }
      goto L_08867994;
    }
L_08867994:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088679CC;
      }
      goto L_0886799C;
    }
L_0886799C:
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[0];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x088679C4u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x088679C4u) goto L_088679C4;
    return;
L_088679C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088679EC;
      }
      goto L_088679CC;
    }
L_088679CC:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x088679ECu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x088679ECu) goto L_088679EC;
    return;
L_088679EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088679F8;
      }
      goto L_088679F8;
    }
L_088679F8:
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
L_08867A20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[7] = (0u | 776u);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08867A60;
      }
      goto L_08867A54;
    }
L_08867A54:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08867A68;
      }
      goto L_08867A60;
    }
L_08867A60:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08867A68;
L_08867A68:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08867A7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem) && ctx.pc == 0x08867A7Cu) goto L_08867A7C;
    return;
L_08867A7C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    ctx.gpr[31] = (0x08867A8Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem) && ctx.pc == 0x08867A8Cu) goto L_08867A8C;
    return;
L_08867A8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867ADC;
      }
      goto L_08867AA8;
    }
L_08867AA8:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867AD4;
      }
      goto L_08867ACC;
    }
L_08867ACC:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08867AD4;
L_08867AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08867AE8;
      }
      goto L_08867ADC;
    }
L_08867ADC:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    goto L_08867AE8;
L_08867AE8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867B00;
      }
      goto L_08867AF8;
    }
L_08867AF8:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08867B00;
L_08867B00:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867B18;
      }
      goto L_08867B10;
    }
L_08867B10:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08867B18;
L_08867B18:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867BB0;
      }
      goto L_08867B30;
    }
L_08867B30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867B44;
    }
L_08867B44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867B58;
    }
L_08867B58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867B6C;
    }
L_08867B6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867B80;
    }
L_08867B80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867B94;
    }
L_08867B94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867BA8;
    }
L_08867BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867BB0;
    }
L_08867BB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867BC4;
    }
L_08867BC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867BD8;
    }
L_08867BD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867BEC;
    }
L_08867BEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867C04;
      }
      goto L_08867C00;
    }
L_08867C00:
    ctx.gpr[4] = (0u | 1u);
    goto L_08867C04;
L_08867C04:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08867C30;
      }
      goto L_08867C28;
    }
L_08867C28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08867C80;
      }
      goto L_08867C30;
    }
L_08867C30:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08867C5C;
      }
      goto L_08867C48;
    }
L_08867C48:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08867C80;
      }
      goto L_08867C5C;
    }
L_08867C5C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867C80;
      }
      goto L_08867C7C;
    }
L_08867C7C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08867C80;
L_08867C80:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867CE0;
      }
      goto L_08867C88;
    }
L_08867C88:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867CC0;
      }
      goto L_08867C90;
    }
L_08867C90:
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[0];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x08867CB8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08867CB8u) goto L_08867CB8;
    return;
L_08867CB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867CE0;
      }
      goto L_08867CC0;
    }
L_08867CC0:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x08867CE0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem) && ctx.pc == 0x08867CE0u) goto L_08867CE0;
    return;
L_08867CE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867CEC;
      }
      goto L_08867CEC;
    }
L_08867CEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08867D0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(-400));
    ctx.gpr[21] = (ctx.gpr[20] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08867D7C;
      }
      goto L_08867D70;
    }
L_08867D70:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08867D84;
      }
      goto L_08867D7C;
    }
L_08867D7C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08867D84;
L_08867D84:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[31] = (0x08867D98u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 437u, 0x0886292Cu>(ctx, &aot_mem) && ctx.pc == 0x08867D98u) goto L_08867D98;
    return;
L_08867D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08867DE0;
      }
      goto L_08867DB8;
    }
L_08867DB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08867DF8;
      }
      goto L_08867DE0;
    }
L_08867DE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08867DF8;
L_08867DF8:
    ctx.gpr[31] = (0x08867E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem) && ctx.pc == 0x08867E00u) goto L_08867E00;
    return;
L_08867E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(260));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 21u, 0x088680A8u>(ctx, &aot_mem); return;
      }
      goto L_08867E30;
    }
L_08867E30:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = ctx.fpr[13] - ctx.fpr[20];
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[14] - ctx.fpr[28];
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[14];
    goto L_08867E60;
L_08867E60:
    ctx.gpr[5] = (2236u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08867E74u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 96u, 0x08818B00u>(ctx, &aot_mem) && ctx.pc == 0x08867E74u) goto L_08867E74;
    return;
L_08867E74:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 20u, 0x08868098u>(ctx, &aot_mem); return;
      }
      goto L_08867E94;
    }
L_08867E94:
    ctx.gpr[31] = (0x08867E9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem) && ctx.pc == 0x08867E9Cu) goto L_08867E9C;
    return;
L_08867E9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867EBC;
      }
      goto L_08867EA4;
    }
L_08867EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867EC8;
      }
      goto L_08867EBC;
    }
L_08867EBC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    goto L_08867EC8;
L_08867EC8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867F18;
      }
      goto L_08867ED0;
    }
L_08867ED0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08867EF4;
      }
      goto L_08867EDC;
    }
L_08867EDC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08867EF4;
      }
      goto L_08867EE4;
    }
L_08867EE4:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08867EF4;
      }
      goto L_08867EEC;
    }
L_08867EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867F18;
      }
      goto L_08867EF4;
    }
L_08867EF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08867F00u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 745u, 0x08863CB4u>(ctx, &aot_mem) && ctx.pc == 0x08867F00u) goto L_08867F00;
    return;
L_08867F00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08867F10;
      }
      goto L_08867F08;
    }
L_08867F08:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    goto L_08867F10;
L_08867F10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08867F18;
      }
      goto L_08867F18;
    }
L_08867F18:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 20u, 0x08868098u>(ctx, &aot_mem); return;
      }
      goto L_08867F20;
    }
L_08867F20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08867FB4;
      }
      goto L_08867F2C;
    }
L_08867F2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867F40;
    }
L_08867F40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867F54;
    }
L_08867F54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867F68;
    }
L_08867F68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867F7C;
    }
L_08867F7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867F90;
    }
L_08867F90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08867FAC;
      }
      goto L_08867FA4;
    }
L_08867FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868010u>(ctx, &aot_mem); return;
      }
      goto L_08867FAC;
    }
L_08867FAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868010u>(ctx, &aot_mem); return;
      }
      goto L_08867FB4;
    }
L_08867FB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 2u, 0x0886800Cu>(ctx, &aot_mem); return;
      }
      goto L_08867FC8;
    }
L_08867FC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 2u, 0x0886800Cu>(ctx, &aot_mem); return;
      }
      goto L_08867FDC;
    }
L_08867FDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 2u, 0x0886800Cu>(ctx, &aot_mem); return;
      }
      goto L_08867FF0;
    }
L_08867FF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 2u, 0x0886800Cu>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 1u, 0x08868004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0024(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0024_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_24(Runtime &runtime) {
    runtime.register_generated_unit(24u, 0x08864000u, 16384u, &recomp_unit_0024, &recomp_unit_0024_entry);
    runtime.register_function(0x08864000u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864008u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864020u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864030u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864040u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864058u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864064u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864070u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864084u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886408Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088640A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088640E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088640ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088640F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088640FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864104u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864110u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864128u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864130u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886413Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864144u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864150u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886415Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886417Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864190u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088641A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088641B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088641D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088641E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088641F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864200u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864240u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864248u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864328u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886432Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886433Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886436Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886438Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864394u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088643C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088643CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088643E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864400u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886441Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864540u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864544u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886457Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864584u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088645A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088645C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088645D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088645DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088645E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864610u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864618u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864620u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864628u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886466Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864678u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864688u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088646F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886472Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886473Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864760u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886477Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864788u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864790u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886479Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088647C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088647D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088647E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088647F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088647F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864810u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886481Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864884u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886489Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088648A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088648ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088648C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088648E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088648E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864904u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864944u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864950u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864980u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886498Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088649A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088649E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088649F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864A14u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864A68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864A70u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864A88u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864A90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864A9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864AB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864AE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864AFCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B04u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B44u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864B9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BC0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BCCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BDCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864BF8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C00u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C18u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C44u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C50u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C58u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C78u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C88u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864C98u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864CACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864CB4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864CC0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864CC8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864CD0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864CDCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864CE4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D50u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D6Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864D90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864DA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864DB4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864DBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864DE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864DF4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E50u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E58u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864E98u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EB4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864ECCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864ED8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864EFCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F08u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F18u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F2Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F34u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F40u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F54u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F5Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F74u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F88u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864F9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FA4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FCCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08864FE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886502Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886504Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865058u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865070u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865084u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865094u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088650F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865104u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886510Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865114u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886511Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865128u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865130u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886513Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865144u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865150u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865160u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886516Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865174u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865180u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865188u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865194u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088651F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865220u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886525Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865268u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865274u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886527Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865284u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886528Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865294u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886529Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088652A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088652B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088652C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088652CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088652D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088652D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088652E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088652ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865304u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865314u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886531Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865324u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886532Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865334u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886533Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865348u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865350u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865358u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865360u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865368u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865370u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865378u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865380u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865390u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088653FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865400u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865410u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865418u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865428u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865438u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865440u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865448u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865450u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865458u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865474u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865484u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886548Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865494u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886549Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088654FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886550Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865514u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886551Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865524u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865530u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865538u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865544u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865550u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886555Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865568u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886556Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865574u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886557Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886558Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088655FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865604u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886560Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865618u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865620u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865634u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886565Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886569Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088656FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865708u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865718u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865730u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865740u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865748u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865754u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886575Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865764u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865770u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886577Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886578Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088657A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088657B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088657BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088657C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088657D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088657D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088657E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088657F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865800u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865818u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865828u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865830u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886583Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865844u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886584Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865860u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865874u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886589Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088658B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088658C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088658DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865908u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865938u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865940u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865950u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865958u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865970u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865978u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865994u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886599Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088659B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088659C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088659D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088659DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088659F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A00u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A18u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A34u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A40u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865A64u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865AC8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865AD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865ADCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865AECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865AFCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B08u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B54u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B88u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865B9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865BA4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865BACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865BBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865BD8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865BECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865BF8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C00u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C14u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C2Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C54u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C70u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865C8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865CA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865CC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865CE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865CE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865CF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D04u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D1Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D34u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D54u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D58u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865D9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865DF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E08u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E1Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E40u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E64u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865E94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865EA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865EA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865EC0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865EC8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865EE4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865EF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865EF8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865F00u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865F48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865F94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865FA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865FACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865FB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865FB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865FCCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865FD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865FE4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08865FF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866000u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886600Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866014u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866020u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866038u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866044u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886604Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866054u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866060u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866078u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866084u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866094u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088660A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088660A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088660B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088660CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088660E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866104u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866120u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886613Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866158u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866160u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866168u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866184u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088661A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088661BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088661D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088661E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088661E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088661ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088661FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866214u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866220u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866228u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866230u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866234u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886623Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866244u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886624Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866250u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866258u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886627Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866284u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886629Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088662B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088662D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088662D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088662DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088662E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886630Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866314u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866340u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886634Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866354u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886635Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886638Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088663D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088663E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088663ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088663F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088663F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886640Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866414u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866424u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866430u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866440u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886644Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866454u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866460u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866478u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866484u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088664A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088664B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088664B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088664C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088664DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088664F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866514u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866530u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886654Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866568u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866570u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866578u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866594u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088665B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088665CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088665E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088665F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088665F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088665FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886660Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866618u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866620u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866628u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866630u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886663Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866644u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886664Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866650u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866658u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866660u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866668u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886666Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866674u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866698u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088666A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088666B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088666CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088666ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088666F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088666F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866700u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866728u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866730u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886675Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866768u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866770u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866778u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088667A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088667F0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088667FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866808u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886680Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866814u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866828u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866830u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866840u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886684Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886685Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866868u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866870u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886687Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866894u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088668A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088668C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088668CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088668D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088668DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088668F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866914u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866930u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886694Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866968u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866984u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886698Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866994u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088669B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088669CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088669E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A04u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A18u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A34u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A44u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A58u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A6Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A74u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A88u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866A90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866AB4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866ABCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866AD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866AE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B08u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B14u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B1Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B44u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B78u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866B94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866BC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C08u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C14u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C4Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C6Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C74u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866C98u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866CA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866CA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866CB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866CC0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866CD8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866CE4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866CECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866D04u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866D18u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866D30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866D48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866D60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866D78u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866D90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866D98u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866DACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866DC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866DDCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866DF4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866DF8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E1Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E24u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E3Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E50u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E70u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E74u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866E98u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EB4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EDCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EF0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866EF8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F54u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866F8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866FA0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866FBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866FCCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866FE4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08866FF8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867010u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867028u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867040u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867058u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867070u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867078u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886708Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088670A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088670BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088670D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088670D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088670FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867104u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886711Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867130u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867150u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867154u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886715Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867170u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867184u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886718Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671C0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088671E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867244u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867250u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867258u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867264u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867270u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867278u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867288u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867298u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672A4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672B8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672DCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088672F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867304u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886730Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867314u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886731Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867324u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867330u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867338u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867340u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886734Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867354u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886735Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867364u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886737Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673A8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673D4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088673F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867400u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867414u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867428u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886743Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867450u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867464u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867478u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867480u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867488u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886749Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674B0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088674F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867504u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867510u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867518u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867520u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867538u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867540u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867548u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886754Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867554u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886755Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867564u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867568u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867570u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867594u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886759Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675C8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675E8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088675FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867624u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886762Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886764Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867658u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886769Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088676E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088676ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088676F4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867700u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886770Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867714u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867728u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867738u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886774Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867758u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867760u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867768u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867770u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886777Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867784u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886778Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867794u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088677ACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088677D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088677D8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088677E0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088677ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088677FCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867804u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867814u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886781Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867824u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886783Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867850u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867864u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867878u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886788Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088678A0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088678B4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088678BCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088678D0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088678E4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088678F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886790Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867910u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867934u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886793Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867954u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867968u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867988u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886798Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867994u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x0886799Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088679C4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088679CCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088679ECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x088679F8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867A20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867A54u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867A60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867A68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867A7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867A8Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867ACCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AD4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867ADCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AE8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867AF8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B00u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B18u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B44u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B58u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B6Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867B94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867BA8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867BB0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867BC4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867BD8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867BECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C00u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C04u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C28u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C48u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C5Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C80u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C88u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867C90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867CB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867CC0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867CE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867CECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D0Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D70u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D84u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867D98u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867DB8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867DE0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867DF8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E00u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E30u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E60u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E74u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E94u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867E9Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EA4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EBCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EC8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867ED0u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EDCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EE4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EECu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867EF4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F00u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F08u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F10u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F18u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F20u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F2Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F40u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F54u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F68u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F7Cu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867F90u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867FA4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867FACu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867FB4u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867FC8u, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867FDCu, &recomp_unit_0024, "recomp_unit_0024");
    runtime.register_function(0x08867FF0u, &recomp_unit_0024, "recomp_unit_0024");
}
} // namespace psprecomp
