#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0032[4094] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 10, 0, 0, 11, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 23, 0,
    24, 0, 25, 26, 0, 27, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 33, 0, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 39, 0, 40, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0,
    0, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 56, 0, 57, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0,
    0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 77, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0, 84, 85, 0, 86, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0,
    0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 91, 92, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100,
    0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 104, 0, 105, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 117, 0,
    118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 124, 0, 125, 126, 0, 127, 0, 128, 0, 0, 129,
    0, 130, 0, 0, 0, 0, 0, 131, 0, 132, 133, 0, 134, 0, 135, 0, 136, 137, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 148, 0, 149, 150, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0,
    0, 0, 0, 157, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0,
    0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 188, 0, 189, 0, 0, 190, 0, 191,
    192, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0, 203, 204, 0, 205, 0, 0, 0, 0, 206,
    0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 219, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0,
    0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0,
    234, 235, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0,
    0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0,
    248, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0,
    0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 0, 263, 0,
    0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0,
    0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0,
    0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282, 283, 0, 284, 0,
    0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 0, 292, 293, 0, 294, 0,
    295, 296, 0, 297, 0, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305,
    0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 0, 314, 0, 0, 315,
    0, 316, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0,
    325, 0, 0, 0, 326, 0, 0, 327, 0, 0, 328, 0, 329, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 334, 0, 0, 0, 335, 0,
    0, 336, 0, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0,
    345, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 351, 0, 0,
    352, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 359, 360, 0, 361, 0, 362, 0, 0,
    363, 0, 0, 364, 0, 0, 365, 0, 366, 0, 0, 367, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 373, 0, 0, 374,
    375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0,
    0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 391,
    0, 0, 392, 0, 0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0,
    0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 408,
    0, 409, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0, 0, 0, 417, 0, 0, 418, 0, 0, 419,
    0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 0, 424, 425, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 431,
    0, 0, 0, 432, 0, 0, 0, 433, 0, 434, 435, 0, 0, 436, 0, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0,
    445, 0, 0, 446, 0, 0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0,
    456, 0, 457, 0, 0, 458, 0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0, 467, 0,
    0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 474, 0, 0, 475, 0, 476, 0, 477, 0, 0, 0,
    0, 478, 0, 0, 479, 0, 0, 480, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 486, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0,
    0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494,
    0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0,
    500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0,
    0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0,
    0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0,
    0, 0, 516, 0, 0, 517, 0, 518, 0, 519, 0, 520, 0, 0, 521, 0, 0, 522, 0, 523, 524, 0, 525, 0, 526, 0, 0, 0, 527, 0, 0, 0,
    528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 0,
    0, 0, 535, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0,
    549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 554, 0,
    555, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0,
    0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 566,
    0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0,
    0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0,
    0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0,
    0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0,
    0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0,
    0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 605, 0, 0,
    0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0,
    0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0,
    0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0,
    624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0,
    0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0, 0, 636,
    0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0,
    0, 642, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0,
    0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0,
    654, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0,
    0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 666,
    0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0,
    0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 686,
    0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 0, 0, 0,
    0, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0,
    0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 705,
    0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0,
    0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 719, 0,
    0, 0, 0, 720, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 725, 0, 0, 0, 0, 0,
    726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729,
    0, 0, 0, 730, 0, 731, 0, 732, 0, 733, 0, 734, 0, 735, 0, 736, 0, 737, 0, 0, 738, 739, 0, 740, 0, 741, 0, 0, 742, 743, 0, 744,
    0, 0, 745, 0, 0, 746, 747, 0, 748, 0, 0, 749, 0, 750, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0,
    0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 757,
    0, 0, 0, 0, 758, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 0, 766, 0, 767,
    0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 772, 0, 0, 0, 773, 0, 0, 774, 0, 0, 775, 0, 776,
    0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 781, 0,
    782, 0, 0, 783, 0, 784, 0, 0, 785, 0, 0, 0, 786, 0, 787, 0, 0, 0, 788, 0, 789, 0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 0,
    0, 0, 0, 0, 0, 0, 792, 0, 793, 794, 0, 0, 795, 0, 796, 0, 0, 0, 797, 0, 798, 0, 799, 800, 0, 0, 0, 0, 0, 801, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 804, 0, 805, 0, 806, 0, 807, 0, 0,
    0, 808, 0, 0, 0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 811, 0, 812, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0,
    0, 0, 816, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0, 822, 0, 0, 0,
    0, 823, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 826, 0, 0, 827, 0, 828, 0, 829, 0, 0, 0, 0, 830, 0, 0, 0, 0, 831,
    0, 0, 0, 0, 832, 0, 0, 0, 833, 0, 0, 0, 834, 0, 0, 835, 0, 0, 836, 0, 837, 0, 0, 838, 0, 839, 0, 840, 0, 841, 0, 842,
    0, 843, 0, 0, 844, 0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0, 0, 847, 0, 0, 0, 848, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0,
    851, 0, 0, 852, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 0, 0, 855, 0, 0, 0, 856, 0, 0, 857, 0, 0, 0, 0, 0, 0, 858, 0,
    0, 0, 0, 859, 0, 860, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 863, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865,
    0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 868, 0, 869, 0, 0, 870, 0, 0, 0, 0, 0, 871, 0, 872,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 873, 0, 0, 0, 0, 874, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 0, 876, 0, 0, 877, 0, 0, 0, 0,
    878, 879, 0, 880, 0, 881, 0, 882, 0, 883, 0, 884, 885, 0, 886, 0, 887, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 889, 0, 890, 0, 891,
    0, 892, 893, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 895, 0, 0, 896, 0, 897, 0, 0, 898, 0, 0, 0, 0, 0, 899, 0, 900,
    0, 901, 0, 0, 902, 0, 903, 0, 0, 0, 904, 0, 905, 0, 0, 906, 0, 907, 0, 0, 908, 0, 909, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    910, 0, 911, 0, 912, 0, 913, 0, 914, 0, 915, 0, 916, 0, 917, 0, 918, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 919,
};
void recomp_unit_0032_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08884000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0032[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08884000;
    case 2u: goto L_08884008;
    case 3u: goto L_08884014;
    case 4u: goto L_08884028;
    case 5u: goto L_08884054;
    case 6u: goto L_08884074;
    case 7u: goto L_08884094;
    case 8u: goto L_088840C4;
    case 9u: goto L_088840EC;
    case 10u: goto L_08884104;
    case 11u: goto L_08884110;
    case 12u: goto L_08884114;
    case 13u: goto L_08884124;
    case 14u: goto L_0888413C;
    case 15u: goto L_08884144;
    case 16u: goto L_0888415C;
    case 17u: goto L_0888417C;
    case 18u: goto L_0888419C;
    case 19u: goto L_088841B8;
    case 20u: goto L_088841DC;
    case 21u: goto L_088841E8;
    case 22u: goto L_088841F0;
    case 23u: goto L_088841F8;
    case 24u: goto L_08884200;
    case 25u: goto L_08884208;
    case 26u: goto L_0888420C;
    case 27u: goto L_08884214;
    case 28u: goto L_08884220;
    case 29u: goto L_0888422C;
    case 30u: goto L_08884234;
    case 31u: goto L_08884240;
    case 32u: goto L_08884258;
    case 33u: goto L_08884284;
    case 34u: goto L_08884290;
    case 35u: goto L_08884298;
    case 36u: goto L_088842A0;
    case 37u: goto L_088842A8;
    case 38u: goto L_088842B0;
    case 39u: goto L_088842B4;
    case 40u: goto L_088842BC;
    case 41u: goto L_088842C8;
    case 42u: goto L_088842CC;
    case 43u: goto L_088842F0;
    case 44u: goto L_088842F8;
    case 45u: goto L_08884318;
    case 46u: goto L_08884324;
    case 47u: goto L_0888433C;
    case 48u: goto L_08884340;
    case 49u: goto L_0888435C;
    case 50u: goto L_08884378;
    case 51u: goto L_08884384;
    case 52u: goto L_0888438C;
    case 53u: goto L_08884394;
    case 54u: goto L_0888439C;
    case 55u: goto L_088843A4;
    case 56u: goto L_088843A8;
    case 57u: goto L_088843B0;
    case 58u: goto L_088843B8;
    case 59u: goto L_088843CC;
    case 60u: goto L_088843EC;
    case 61u: goto L_088843F4;
    case 62u: goto L_08884408;
    case 63u: goto L_08884428;
    case 64u: goto L_08884430;
    case 65u: goto L_08884444;
    case 66u: goto L_08884478;
    case 67u: goto L_08884484;
    case 68u: goto L_08884490;
    case 69u: goto L_08884498;
    case 70u: goto L_088844A8;
    case 71u: goto L_088844B8;
    case 72u: goto L_088844C0;
    case 73u: goto L_088844E8;
    case 74u: goto L_08884504;
    case 75u: goto L_0888450C;
    case 76u: goto L_08884528;
    case 77u: goto L_0888452C;
    case 78u: goto L_08884534;
    case 79u: goto L_08884548;
    case 80u: goto L_08884574;
    case 81u: goto L_0888457C;
    case 82u: goto L_0888459C;
    case 83u: goto L_088845A8;
    case 84u: goto L_088845C0;
    case 85u: goto L_088845C4;
    case 86u: goto L_088845CC;
    case 87u: goto L_088845E0;
    case 88u: goto L_088845E8;
    case 89u: goto L_08884608;
    case 90u: goto L_08884614;
    case 91u: goto L_0888462C;
    case 92u: goto L_08884630;
    case 93u: goto L_08884650;
    case 94u: goto L_08884680;
    case 95u: goto L_0888468C;
    case 96u: goto L_088846A4;
    case 97u: goto L_088846C0;
    case 98u: goto L_088846E8;
    case 99u: goto L_088846F4;
    case 100u: goto L_088846FC;
    case 101u: goto L_08884704;
    case 102u: goto L_08884724;
    case 103u: goto L_0888472C;
    case 104u: goto L_08884730;
    case 105u: goto L_08884738;
    case 106u: goto L_08884744;
    case 107u: goto L_0888474C;
    case 108u: goto L_08884754;
    case 109u: goto L_0888475C;
    case 110u: goto L_08884774;
    case 111u: goto L_088847B0;
    case 112u: goto L_088847BC;
    case 113u: goto L_088847C4;
    case 114u: goto L_088847CC;
    case 115u: goto L_088847EC;
    case 116u: goto L_088847F4;
    case 117u: goto L_088847F8;
    case 118u: goto L_08884800;
    case 119u: goto L_08884818;
    case 120u: goto L_08884820;
    case 121u: goto L_08884828;
    case 122u: goto L_08884838;
    case 123u: goto L_08884840;
    case 124u: goto L_08884854;
    case 125u: goto L_0888485C;
    case 126u: goto L_08884860;
    case 127u: goto L_08884868;
    case 128u: goto L_08884870;
    case 129u: goto L_0888487C;
    case 130u: goto L_08884884;
    case 131u: goto L_0888489C;
    case 132u: goto L_088848A4;
    case 133u: goto L_088848A8;
    case 134u: goto L_088848B0;
    case 135u: goto L_088848B8;
    case 136u: goto L_088848C0;
    case 137u: goto L_088848C4;
    case 138u: goto L_088848D4;
    case 139u: goto L_088848E0;
    case 140u: goto L_088848E8;
    case 141u: goto L_088848F0;
    case 142u: goto L_088848F8;
    case 143u: goto L_08884924;
    case 144u: goto L_0888494C;
    case 145u: goto L_08884958;
    case 146u: goto L_08884960;
    case 147u: goto L_08884968;
    case 148u: goto L_08884988;
    case 149u: goto L_08884990;
    case 150u: goto L_08884994;
    case 151u: goto L_0888499C;
    case 152u: goto L_088849A4;
    case 153u: goto L_088849C0;
    case 154u: goto L_088849C8;
    case 155u: goto L_088849E8;
    case 156u: goto L_088849F4;
    case 157u: goto L_08884A0C;
    case 158u: goto L_08884A10;
    case 159u: goto L_08884A28;
    case 160u: goto L_08884A58;
    case 161u: goto L_08884A64;
    case 162u: goto L_08884A74;
    case 163u: goto L_08884A84;
    case 164u: goto L_08884A90;
    case 165u: goto L_08884A98;
    case 166u: goto L_08884AB8;
    case 167u: goto L_08884AC4;
    case 168u: goto L_08884ADC;
    case 169u: goto L_08884AE4;
    case 170u: goto L_08884AEC;
    case 171u: goto L_08884AF4;
    case 172u: goto L_08884B14;
    case 173u: goto L_08884B20;
    case 174u: goto L_08884B38;
    case 175u: goto L_08884B3C;
    case 176u: goto L_08884B58;
    case 177u: goto L_08884B98;
    case 178u: goto L_08884BA4;
    case 179u: goto L_08884BBC;
    case 180u: goto L_08884BC8;
    case 181u: goto L_08884BD0;
    case 182u: goto L_08884BE8;
    case 183u: goto L_08884C10;
    case 184u: goto L_08884C18;
    case 185u: goto L_08884C38;
    case 186u: goto L_08884C44;
    case 187u: goto L_08884C5C;
    case 188u: goto L_08884C60;
    case 189u: goto L_08884C68;
    case 190u: goto L_08884C74;
    case 191u: goto L_08884C7C;
    case 192u: goto L_08884C80;
    case 193u: goto L_08884C8C;
    case 194u: goto L_08884C9C;
    case 195u: goto L_08884CA4;
    case 196u: goto L_08884CD0;
    case 197u: goto L_08884CD8;
    case 198u: goto L_08884CE8;
    case 199u: goto L_08884D10;
    case 200u: goto L_08884D18;
    case 201u: goto L_08884D38;
    case 202u: goto L_08884D44;
    case 203u: goto L_08884D5C;
    case 204u: goto L_08884D60;
    case 205u: goto L_08884D68;
    case 206u: goto L_08884D7C;
    case 207u: goto L_08884D84;
    case 208u: goto L_08884DA4;
    case 209u: goto L_08884DB0;
    case 210u: goto L_08884DC8;
    case 211u: goto L_08884DCC;
    case 212u: goto L_08884DF8;
    case 213u: goto L_08884E20;
    case 214u: goto L_08884E2C;
    case 215u: goto L_08884E40;
    case 216u: goto L_08884E68;
    case 217u: goto L_08884E90;
    case 218u: goto L_08884E9C;
    case 219u: goto L_08884EB0;
    case 220u: goto L_08884EB4;
    case 221u: goto L_08884ED0;
    case 222u: goto L_08884EE4;
    case 223u: goto L_08884EF0;
    case 224u: goto L_08884F08;
    case 225u: goto L_08884F34;
    case 226u: goto L_08884F40;
    case 227u: goto L_08884F54;
    case 228u: goto L_08884F60;
    case 229u: goto L_08884F78;
    case 230u: goto L_08884F94;
    case 231u: goto L_08884FD0;
    case 232u: goto L_08884FDC;
    case 233u: goto L_08884FF4;
    case 234u: goto L_08885000;
    case 235u: goto L_08885004;
    case 236u: goto L_0888501C;
    case 237u: goto L_08885040;
    case 238u: goto L_0888506C;
    case 239u: goto L_08885078;
    case 240u: goto L_0888508C;
    case 241u: goto L_08885098;
    case 242u: goto L_088850A0;
    case 243u: goto L_088850BC;
    case 244u: goto L_088850CC;
    case 245u: goto L_088850E0;
    case 246u: goto L_088850EC;
    case 247u: goto L_088850F8;
    case 248u: goto L_08885100;
    case 249u: goto L_0888510C;
    case 250u: goto L_08885124;
    case 251u: goto L_0888513C;
    case 252u: goto L_08885148;
    case 253u: goto L_08885154;
    case 254u: goto L_08885164;
    case 255u: goto L_08885170;
    case 256u: goto L_08885184;
    case 257u: goto L_08885190;
    case 258u: goto L_088851A4;
    case 259u: goto L_088851BC;
    case 260u: goto L_088851D0;
    case 261u: goto L_088851E4;
    case 262u: goto L_088851EC;
    case 263u: goto L_088851F8;
    case 264u: goto L_0888520C;
    case 265u: goto L_08885214;
    case 266u: goto L_08885220;
    case 267u: goto L_0888524C;
    case 268u: goto L_08885260;
    case 269u: goto L_0888526C;
    case 270u: goto L_08885284;
    case 271u: goto L_088852A8;
    case 272u: goto L_088852B8;
    case 273u: goto L_088852C4;
    case 274u: goto L_088852D0;
    case 275u: goto L_088852E4;
    case 276u: goto L_088852F0;
    case 277u: goto L_08885304;
    case 278u: goto L_08885328;
    case 279u: goto L_08885330;
    case 280u: goto L_0888535C;
    case 281u: goto L_08885364;
    case 282u: goto L_0888536C;
    case 283u: goto L_08885370;
    case 284u: goto L_08885378;
    case 285u: goto L_08885388;
    case 286u: goto L_08885394;
    case 287u: goto L_088853AC;
    case 288u: goto L_088853BC;
    case 289u: goto L_088853C8;
    case 290u: goto L_088853D4;
    case 291u: goto L_088853E0;
    case 292u: goto L_088853EC;
    case 293u: goto L_088853F0;
    case 294u: goto L_088853F8;
    case 295u: goto L_08885400;
    case 296u: goto L_08885404;
    case 297u: goto L_0888540C;
    case 298u: goto L_0888541C;
    case 299u: goto L_08885424;
    case 300u: goto L_0888543C;
    case 301u: goto L_0888544C;
    case 302u: goto L_08885458;
    case 303u: goto L_08885464;
    case 304u: goto L_08885470;
    case 305u: goto L_0888547C;
    case 306u: goto L_08885498;
    case 307u: goto L_088854AC;
    case 308u: goto L_088854B8;
    case 309u: goto L_088854C0;
    case 310u: goto L_088854C8;
    case 311u: goto L_088854D0;
    case 312u: goto L_088854DC;
    case 313u: goto L_088854E4;
    case 314u: goto L_088854F0;
    case 315u: goto L_088854FC;
    case 316u: goto L_08885504;
    case 317u: goto L_0888550C;
    case 318u: goto L_08885514;
    case 319u: goto L_08885528;
    case 320u: goto L_08885548;
    case 321u: goto L_08885554;
    case 322u: goto L_08885564;
    case 323u: goto L_08885570;
    case 324u: goto L_08885578;
    case 325u: goto L_08885580;
    case 326u: goto L_08885590;
    case 327u: goto L_0888559C;
    case 328u: goto L_088855A8;
    case 329u: goto L_088855B0;
    case 330u: goto L_088855B4;
    case 331u: goto L_088855C4;
    case 332u: goto L_088855D0;
    case 333u: goto L_088855E0;
    case 334u: goto L_088855E8;
    case 335u: goto L_088855F8;
    case 336u: goto L_08885604;
    case 337u: goto L_08885610;
    case 338u: goto L_08885620;
    case 339u: goto L_0888562C;
    case 340u: goto L_08885638;
    case 341u: goto L_08885648;
    case 342u: goto L_08885654;
    case 343u: goto L_08885660;
    case 344u: goto L_08885674;
    case 345u: goto L_08885680;
    case 346u: goto L_08885690;
    case 347u: goto L_0888569C;
    case 348u: goto L_088856B8;
    case 349u: goto L_088856D8;
    case 350u: goto L_088856E4;
    case 351u: goto L_088856F4;
    case 352u: goto L_08885700;
    case 353u: goto L_0888570C;
    case 354u: goto L_08885720;
    case 355u: goto L_0888572C;
    case 356u: goto L_0888573C;
    case 357u: goto L_0888574C;
    case 358u: goto L_08885758;
    case 359u: goto L_08885760;
    case 360u: goto L_08885764;
    case 361u: goto L_0888576C;
    case 362u: goto L_08885774;
    case 363u: goto L_08885780;
    case 364u: goto L_0888578C;
    case 365u: goto L_08885798;
    case 366u: goto L_088857A0;
    case 367u: goto L_088857AC;
    case 368u: goto L_088857B4;
    case 369u: goto L_088857C4;
    case 370u: goto L_088857D0;
    case 371u: goto L_088857DC;
    case 372u: goto L_088857E8;
    case 373u: goto L_088857F0;
    case 374u: goto L_088857FC;
    case 375u: goto L_08885800;
    case 376u: goto L_08885818;
    case 377u: goto L_08885830;
    case 378u: goto L_08885838;
    case 379u: goto L_08885848;
    case 380u: goto L_08885858;
    case 381u: goto L_0888586C;
    case 382u: goto L_08885878;
    case 383u: goto L_08885888;
    case 384u: goto L_0888589C;
    case 385u: goto L_088858A8;
    case 386u: goto L_088858B8;
    case 387u: goto L_088858CC;
    case 388u: goto L_088858D8;
    case 389u: goto L_088858E8;
    case 390u: goto L_088858F0;
    case 391u: goto L_088858FC;
    case 392u: goto L_08885908;
    case 393u: goto L_08885914;
    case 394u: goto L_08885920;
    case 395u: goto L_08885930;
    case 396u: goto L_08885940;
    case 397u: goto L_0888594C;
    case 398u: goto L_08885978;
    case 399u: goto L_08885984;
    case 400u: goto L_08885994;
    case 401u: goto L_088859A0;
    case 402u: goto L_088859B0;
    case 403u: goto L_088859C0;
    case 404u: goto L_088859D0;
    case 405u: goto L_088859E0;
    case 406u: goto L_088859EC;
    case 407u: goto L_088859F4;
    case 408u: goto L_088859FC;
    case 409u: goto L_08885A04;
    case 410u: goto L_08885A0C;
    case 411u: goto L_08885A18;
    case 412u: goto L_08885A24;
    case 413u: goto L_08885A30;
    case 414u: goto L_08885A40;
    case 415u: goto L_08885A48;
    case 416u: goto L_08885A54;
    case 417u: goto L_08885A64;
    case 418u: goto L_08885A70;
    case 419u: goto L_08885A7C;
    case 420u: goto L_08885A84;
    case 421u: goto L_08885A94;
    case 422u: goto L_08885A9C;
    case 423u: goto L_08885AA8;
    case 424u: goto L_08885AB4;
    case 425u: goto L_08885AB8;
    case 426u: goto L_08885AC0;
    case 427u: goto L_08885ACC;
    case 428u: goto L_08885AD8;
    case 429u: goto L_08885AE4;
    case 430u: goto L_08885AF4;
    case 431u: goto L_08885AFC;
    case 432u: goto L_08885B0C;
    case 433u: goto L_08885B1C;
    case 434u: goto L_08885B24;
    case 435u: goto L_08885B28;
    case 436u: goto L_08885B34;
    case 437u: goto L_08885B40;
    case 438u: goto L_08885B48;
    case 439u: goto L_08885B50;
    case 440u: goto L_08885B58;
    case 441u: goto L_08885B60;
    case 442u: goto L_08885B68;
    case 443u: goto L_08885B70;
    case 444u: goto L_08885B78;
    case 445u: goto L_08885B80;
    case 446u: goto L_08885B8C;
    case 447u: goto L_08885B9C;
    case 448u: goto L_08885BA8;
    case 449u: goto L_08885BB4;
    case 450u: goto L_08885BBC;
    case 451u: goto L_08885BC8;
    case 452u: goto L_08885BD4;
    case 453u: goto L_08885BE0;
    case 454u: goto L_08885BE8;
    case 455u: goto L_08885BF8;
    case 456u: goto L_08885C00;
    case 457u: goto L_08885C08;
    case 458u: goto L_08885C14;
    case 459u: goto L_08885C20;
    case 460u: goto L_08885C28;
    case 461u: goto L_08885C30;
    case 462u: goto L_08885C40;
    case 463u: goto L_08885C4C;
    case 464u: goto L_08885C54;
    case 465u: goto L_08885C64;
    case 466u: goto L_08885C70;
    case 467u: goto L_08885C78;
    case 468u: goto L_08885C88;
    case 469u: goto L_08885C94;
    case 470u: goto L_08885CA0;
    case 471u: goto L_08885CB0;
    case 472u: goto L_08885CB8;
    case 473u: goto L_08885CCC;
    case 474u: goto L_08885CD4;
    case 475u: goto L_08885CE0;
    case 476u: goto L_08885CE8;
    case 477u: goto L_08885CF0;
    case 478u: goto L_08885D04;
    case 479u: goto L_08885D10;
    case 480u: goto L_08885D1C;
    case 481u: goto L_08885D20;
    case 482u: goto L_08885D44;
    case 483u: goto L_08885D64;
    case 484u: goto L_08885D98;
    case 485u: goto L_08885DA0;
    case 486u: goto L_08885DB0;
    case 487u: goto L_08885DB4;
    case 488u: goto L_08885DC8;
    case 489u: goto L_08885DE8;
    case 490u: goto L_08885E0C;
    case 491u: goto L_08885E2C;
    case 492u: goto L_08885E44;
    case 493u: goto L_08885E5C;
    case 494u: goto L_08885E7C;
    case 495u: goto L_08885E94;
    case 496u: goto L_08885EAC;
    case 497u: goto L_08885ECC;
    case 498u: goto L_08885EE0;
    case 499u: goto L_08885EE8;
    case 500u: goto L_08885F00;
    case 501u: goto L_08885F20;
    case 502u: goto L_08885F34;
    case 503u: goto L_08885F3C;
    case 504u: goto L_08885F54;
    case 505u: goto L_08885F74;
    case 506u: goto L_08885F88;
    case 507u: goto L_08885F90;
    case 508u: goto L_08885FA8;
    case 509u: goto L_08885FBC;
    case 510u: goto L_08885FDC;
    case 511u: goto L_08885FF8;
    case 512u: goto L_0888600C;
    case 513u: goto L_0888602C;
    case 514u: goto L_08886050;
    case 515u: goto L_08886064;
    case 516u: goto L_08886088;
    case 517u: goto L_08886094;
    case 518u: goto L_0888609C;
    case 519u: goto L_088860A4;
    case 520u: goto L_088860AC;
    case 521u: goto L_088860B8;
    case 522u: goto L_088860C4;
    case 523u: goto L_088860CC;
    case 524u: goto L_088860D0;
    case 525u: goto L_088860D8;
    case 526u: goto L_088860E0;
    case 527u: goto L_088860F0;
    case 528u: goto L_08886100;
    case 529u: goto L_0888610C;
    case 530u: goto L_08886128;
    case 531u: goto L_08886138;
    case 532u: goto L_08886148;
    case 533u: goto L_08886158;
    case 534u: goto L_08886168;
    case 535u: goto L_08886188;
    case 536u: goto L_08886190;
    case 537u: goto L_088861A4;
    case 538u: goto L_088861B4;
    case 539u: goto L_088861C4;
    case 540u: goto L_088861E0;
    case 541u: goto L_088861F0;
    case 542u: goto L_0888622C;
    case 543u: goto L_08886238;
    case 544u: goto L_08886240;
    case 545u: goto L_08886284;
    case 546u: goto L_088862C4;
    case 547u: goto L_088862E4;
    case 548u: goto L_088862EC;
    case 549u: goto L_08886300;
    case 550u: goto L_08886320;
    case 551u: goto L_08886328;
    case 552u: goto L_0888633C;
    case 553u: goto L_0888636C;
    case 554u: goto L_08886378;
    case 555u: goto L_08886380;
    case 556u: goto L_088863A4;
    case 557u: goto L_088863C0;
    case 558u: goto L_088863D4;
    case 559u: goto L_088863F8;
    case 560u: goto L_0888640C;
    case 561u: goto L_08886424;
    case 562u: goto L_08886430;
    case 563u: goto L_08886440;
    case 564u: goto L_08886460;
    case 565u: goto L_08886468;
    case 566u: goto L_0888647C;
    case 567u: goto L_0888649C;
    case 568u: goto L_088864B8;
    case 569u: goto L_088864D4;
    case 570u: goto L_088864E4;
    case 571u: goto L_088864F8;
    case 572u: goto L_08886518;
    case 573u: goto L_08886530;
    case 574u: goto L_08886548;
    case 575u: goto L_08886568;
    case 576u: goto L_0888658C;
    case 577u: goto L_088865AC;
    case 578u: goto L_088865C8;
    case 579u: goto L_088865E8;
    case 580u: goto L_088865F4;
    case 581u: goto L_08886608;
    case 582u: goto L_0888663C;
    case 583u: goto L_08886650;
    case 584u: goto L_08886658;
    case 585u: goto L_08886674;
    case 586u: goto L_08886698;
    case 587u: goto L_088866B8;
    case 588u: goto L_088866D4;
    case 589u: goto L_088866F4;
    case 590u: goto L_08886710;
    case 591u: goto L_0888672C;
    case 592u: goto L_0888673C;
    case 593u: goto L_08886764;
    case 594u: goto L_0888678C;
    case 595u: goto L_088867A0;
    case 596u: goto L_088867C0;
    case 597u: goto L_088867CC;
    case 598u: goto L_088867E0;
    case 599u: goto L_08886808;
    case 600u: goto L_08886824;
    case 601u: goto L_0888682C;
    case 602u: goto L_0888683C;
    case 603u: goto L_08886844;
    case 604u: goto L_08886860;
    case 605u: goto L_08886874;
    case 606u: goto L_08886888;
    case 607u: goto L_0888689C;
    case 608u: goto L_088868B0;
    case 609u: goto L_088868D0;
    case 610u: goto L_088868E4;
    case 611u: goto L_088868EC;
    case 612u: goto L_08886904;
    case 613u: goto L_08886924;
    case 614u: goto L_08886938;
    case 615u: goto L_08886940;
    case 616u: goto L_08886958;
    case 617u: goto L_08886978;
    case 618u: goto L_0888698C;
    case 619u: goto L_08886994;
    case 620u: goto L_088869AC;
    case 621u: goto L_088869CC;
    case 622u: goto L_088869E0;
    case 623u: goto L_088869E8;
    case 624u: goto L_08886A00;
    case 625u: goto L_08886A20;
    case 626u: goto L_08886A34;
    case 627u: goto L_08886A3C;
    case 628u: goto L_08886A54;
    case 629u: goto L_08886A74;
    case 630u: goto L_08886A88;
    case 631u: goto L_08886A90;
    case 632u: goto L_08886AA8;
    case 633u: goto L_08886AC8;
    case 634u: goto L_08886ADC;
    case 635u: goto L_08886AE4;
    case 636u: goto L_08886AFC;
    case 637u: goto L_08886B1C;
    case 638u: goto L_08886B30;
    case 639u: goto L_08886B38;
    case 640u: goto L_08886B50;
    case 641u: goto L_08886B70;
    case 642u: goto L_08886B84;
    case 643u: goto L_08886B8C;
    case 644u: goto L_08886BA4;
    case 645u: goto L_08886BC4;
    case 646u: goto L_08886BD8;
    case 647u: goto L_08886BE0;
    case 648u: goto L_08886BF8;
    case 649u: goto L_08886C18;
    case 650u: goto L_08886C2C;
    case 651u: goto L_08886C34;
    case 652u: goto L_08886C4C;
    case 653u: goto L_08886C6C;
    case 654u: goto L_08886C80;
    case 655u: goto L_08886C88;
    case 656u: goto L_08886CA0;
    case 657u: goto L_08886CC0;
    case 658u: goto L_08886CD4;
    case 659u: goto L_08886CDC;
    case 660u: goto L_08886CF4;
    case 661u: goto L_08886D14;
    case 662u: goto L_08886D28;
    case 663u: goto L_08886D30;
    case 664u: goto L_08886D48;
    case 665u: goto L_08886D70;
    case 666u: goto L_08886D7C;
    case 667u: goto L_08886D94;
    case 668u: goto L_08886DBC;
    case 669u: goto L_08886DC8;
    case 670u: goto L_08886DE0;
    case 671u: goto L_08886E08;
    case 672u: goto L_08886E14;
    case 673u: goto L_08886E2C;
    case 674u: goto L_08886E54;
    case 675u: goto L_08886E60;
    case 676u: goto L_08886E78;
    case 677u: goto L_08886EA0;
    case 678u: goto L_08886EAC;
    case 679u: goto L_08886EC4;
    case 680u: goto L_08886EEC;
    case 681u: goto L_08886EF8;
    case 682u: goto L_08886F10;
    case 683u: goto L_08886F38;
    case 684u: goto L_08886F44;
    case 685u: goto L_08886F5C;
    case 686u: goto L_08886F7C;
    case 687u: goto L_08886F90;
    case 688u: goto L_08886F98;
    case 689u: goto L_08886FB0;
    case 690u: goto L_08886FD0;
    case 691u: goto L_08886FE4;
    case 692u: goto L_08886FEC;
    case 693u: goto L_08887004;
    case 694u: goto L_08887024;
    case 695u: goto L_0888705C;
    case 696u: goto L_08887074;
    case 697u: goto L_08887094;
    case 698u: goto L_088870CC;
    case 699u: goto L_088870E4;
    case 700u: goto L_0888710C;
    case 701u: goto L_08887118;
    case 702u: goto L_08887130;
    case 703u: goto L_08887158;
    case 704u: goto L_08887164;
    case 705u: goto L_0888717C;
    case 706u: goto L_0888719C;
    case 707u: goto L_088871D4;
    case 708u: goto L_088871EC;
    case 709u: goto L_08887214;
    case 710u: goto L_08887220;
    case 711u: goto L_08887238;
    case 712u: goto L_08887260;
    case 713u: goto L_0888726C;
    case 714u: goto L_08887284;
    case 715u: goto L_088872A4;
    case 716u: goto L_088872B8;
    case 717u: goto L_088872C0;
    case 718u: goto L_088872D8;
    case 719u: goto L_088872F8;
    case 720u: goto L_0888730C;
    case 721u: goto L_08887314;
    case 722u: goto L_0888732C;
    case 723u: goto L_0888734C;
    case 724u: goto L_08887360;
    case 725u: goto L_08887368;
    case 726u: goto L_08887380;
    case 727u: goto L_088873A0;
    case 728u: goto L_088873D4;
    case 729u: goto L_088873FC;
    case 730u: goto L_0888740C;
    case 731u: goto L_08887414;
    case 732u: goto L_0888741C;
    case 733u: goto L_08887424;
    case 734u: goto L_0888742C;
    case 735u: goto L_08887434;
    case 736u: goto L_0888743C;
    case 737u: goto L_08887444;
    case 738u: goto L_08887450;
    case 739u: goto L_08887454;
    case 740u: goto L_0888745C;
    case 741u: goto L_08887464;
    case 742u: goto L_08887470;
    case 743u: goto L_08887474;
    case 744u: goto L_0888747C;
    case 745u: goto L_08887488;
    case 746u: goto L_08887494;
    case 747u: goto L_08887498;
    case 748u: goto L_088874A0;
    case 749u: goto L_088874AC;
    case 750u: goto L_088874B4;
    case 751u: goto L_088874BC;
    case 752u: goto L_088874D4;
    case 753u: goto L_088874F4;
    case 754u: goto L_08887518;
    case 755u: goto L_08887538;
    case 756u: goto L_0888755C;
    case 757u: goto L_0888757C;
    case 758u: goto L_08887590;
    case 759u: goto L_08887598;
    case 760u: goto L_088875B0;
    case 761u: goto L_088875D0;
    case 762u: goto L_088875F4;
    case 763u: goto L_0888761C;
    case 764u: goto L_08887654;
    case 765u: goto L_08887664;
    case 766u: goto L_08887674;
    case 767u: goto L_0888767C;
    case 768u: goto L_08887688;
    case 769u: goto L_088876A0;
    case 770u: goto L_088876B4;
    case 771u: goto L_088876BC;
    case 772u: goto L_088876CC;
    case 773u: goto L_088876DC;
    case 774u: goto L_088876E8;
    case 775u: goto L_088876F4;
    case 776u: goto L_088876FC;
    case 777u: goto L_08887708;
    case 778u: goto L_08887740;
    case 779u: goto L_08887758;
    case 780u: goto L_08887770;
    case 781u: goto L_08887778;
    case 782u: goto L_08887780;
    case 783u: goto L_0888778C;
    case 784u: goto L_08887794;
    case 785u: goto L_088877A0;
    case 786u: goto L_088877B0;
    case 787u: goto L_088877B8;
    case 788u: goto L_088877C8;
    case 789u: goto L_088877D0;
    case 790u: goto L_088877D8;
    case 791u: goto L_088877F4;
    case 792u: goto L_08887818;
    case 793u: goto L_08887820;
    case 794u: goto L_08887824;
    case 795u: goto L_08887830;
    case 796u: goto L_08887838;
    case 797u: goto L_08887848;
    case 798u: goto L_08887850;
    case 799u: goto L_08887858;
    case 800u: goto L_0888785C;
    case 801u: goto L_08887874;
    case 802u: goto L_088878A4;
    case 803u: goto L_088878C0;
    case 804u: goto L_088878DC;
    case 805u: goto L_088878E4;
    case 806u: goto L_088878EC;
    case 807u: goto L_088878F4;
    case 808u: goto L_08887904;
    case 809u: goto L_08887918;
    case 810u: goto L_08887930;
    case 811u: goto L_0888793C;
    case 812u: goto L_08887944;
    case 813u: goto L_0888794C;
    case 814u: goto L_08887968;
    case 815u: goto L_08887970;
    case 816u: goto L_08887988;
    case 817u: goto L_08887998;
    case 818u: goto L_088879A0;
    case 819u: goto L_088879B8;
    case 820u: goto L_088879D0;
    case 821u: goto L_088879E0;
    case 822u: goto L_088879F0;
    case 823u: goto L_08887A04;
    case 824u: goto L_08887A0C;
    case 825u: goto L_08887A30;
    case 826u: goto L_08887A38;
    case 827u: goto L_08887A44;
    case 828u: goto L_08887A4C;
    case 829u: goto L_08887A54;
    case 830u: goto L_08887A68;
    case 831u: goto L_08887A7C;
    case 832u: goto L_08887A90;
    case 833u: goto L_08887AA0;
    case 834u: goto L_08887AB0;
    case 835u: goto L_08887ABC;
    case 836u: goto L_08887AC8;
    case 837u: goto L_08887AD0;
    case 838u: goto L_08887ADC;
    case 839u: goto L_08887AE4;
    case 840u: goto L_08887AEC;
    case 841u: goto L_08887AF4;
    case 842u: goto L_08887AFC;
    case 843u: goto L_08887B04;
    case 844u: goto L_08887B10;
    case 845u: goto L_08887B28;
    case 846u: goto L_08887B30;
    case 847u: goto L_08887B44;
    case 848u: goto L_08887B54;
    case 849u: goto L_08887B5C;
    case 850u: goto L_08887B74;
    case 851u: goto L_08887B80;
    case 852u: goto L_08887B8C;
    case 853u: goto L_08887BA4;
    case 854u: goto L_08887BB0;
    case 855u: goto L_08887BC0;
    case 856u: goto L_08887BD0;
    case 857u: goto L_08887BDC;
    case 858u: goto L_08887BF8;
    case 859u: goto L_08887C0C;
    case 860u: goto L_08887C14;
    case 861u: goto L_08887C20;
    case 862u: goto L_08887C48;
    case 863u: goto L_08887C54;
    case 864u: goto L_08887C74;
    case 865u: goto L_08887C7C;
    case 866u: goto L_08887C88;
    case 867u: goto L_08887CB0;
    case 868u: goto L_08887CC8;
    case 869u: goto L_08887CD0;
    case 870u: goto L_08887CDC;
    case 871u: goto L_08887CF4;
    case 872u: goto L_08887CFC;
    case 873u: goto L_08887D4C;
    case 874u: goto L_08887D60;
    case 875u: goto L_08887DC4;
    case 876u: goto L_08887DE0;
    case 877u: goto L_08887DEC;
    case 878u: goto L_08887E00;
    case 879u: goto L_08887E04;
    case 880u: goto L_08887E0C;
    case 881u: goto L_08887E14;
    case 882u: goto L_08887E1C;
    case 883u: goto L_08887E24;
    case 884u: goto L_08887E2C;
    case 885u: goto L_08887E30;
    case 886u: goto L_08887E38;
    case 887u: goto L_08887E40;
    case 888u: goto L_08887E54;
    case 889u: goto L_08887E6C;
    case 890u: goto L_08887E74;
    case 891u: goto L_08887E7C;
    case 892u: goto L_08887E84;
    case 893u: goto L_08887E88;
    case 894u: goto L_08887E98;
    case 895u: goto L_08887EBC;
    case 896u: goto L_08887EC8;
    case 897u: goto L_08887ED0;
    case 898u: goto L_08887EDC;
    case 899u: goto L_08887EF4;
    case 900u: goto L_08887EFC;
    case 901u: goto L_08887F04;
    case 902u: goto L_08887F10;
    case 903u: goto L_08887F18;
    case 904u: goto L_08887F28;
    case 905u: goto L_08887F30;
    case 906u: goto L_08887F3C;
    case 907u: goto L_08887F44;
    case 908u: goto L_08887F50;
    case 909u: goto L_08887F58;
    case 910u: goto L_08887F80;
    case 911u: goto L_08887F88;
    case 912u: goto L_08887F90;
    case 913u: goto L_08887F98;
    case 914u: goto L_08887FA0;
    case 915u: goto L_08887FA8;
    case 916u: goto L_08887FB0;
    case 917u: goto L_08887FB8;
    case 918u: goto L_08887FC0;
    case 919u: goto L_08887FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08884000:
    ctx.gpr[31] = (0x08884008u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem) && ctx.pc == 0x08884008u) goto L_08884008;
    return;
L_08884008:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08884014u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem) && ctx.pc == 0x08884014u) goto L_08884014;
    return;
L_08884014:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08884028u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 371u, 0x08B09D30u>(ctx, &aot_mem) && ctx.pc == 0x08884028u) goto L_08884028;
    return;
L_08884028:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884074u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884074u) goto L_08884074;
    return;
L_08884074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4181), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884094:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088840C4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088840C4u) goto L_088840C4;
    return;
L_088840C4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2238u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(14864));
      if (branch_taken) {
          goto L_08884104;
      }
      goto L_088840EC;
    }
L_088840EC:
    ctx.gpr[4] = (50042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08884114;
      }
      goto L_08884104;
    }
L_08884104:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08884110u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem) && ctx.pc == 0x08884110u) goto L_08884110;
    return;
L_08884110:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08884114;
L_08884114:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08884144;
      }
      goto L_08884124;
    }
L_08884124:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888413Cu);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 270u, 0x089D1734u>(ctx, &aot_mem) && ctx.pc == 0x0888413Cu) goto L_0888413C;
    return;
L_0888413C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888415C;
      }
      goto L_08884144;
    }
L_08884144:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0888415Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 32u, 0x089D0284u>(ctx, &aot_mem) && ctx.pc == 0x0888415Cu) goto L_0888415C;
    return;
L_0888415C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888417C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888419Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888419Cu) goto L_0888419C;
    return;
L_0888419C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17612), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088841B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x088841DCu);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088841DCu) goto L_088841DC;
    return;
L_088841DC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_088841F0;
      }
      goto L_088841E8;
    }
L_088841E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088841F8;
      }
      goto L_088841F0;
    }
L_088841F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_088841F8;
L_088841F8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888420C;
      }
      goto L_08884200;
    }
L_08884200:
    ctx.gpr[31] = (0x08884208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08884208u) goto L_08884208;
    return;
L_08884208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0888420C;
L_0888420C:
    ctx.gpr[31] = (0x08884214u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem) && ctx.pc == 0x08884214u) goto L_08884214;
    return;
L_08884214:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08884234;
      }
      goto L_08884220;
    }
L_08884220:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888422Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 556u, 0x08AD3328u>(ctx, &aot_mem) && ctx.pc == 0x0888422Cu) goto L_0888422C;
    return;
L_0888422C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884240;
      }
      goto L_08884234;
    }
L_08884234:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08884240u);
    ctx.gpr[5] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 556u, 0x08AD3328u>(ctx, &aot_mem) && ctx.pc == 0x08884240u) goto L_08884240;
    return;
L_08884240:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884258:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884284u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884284u) goto L_08884284;
    return;
L_08884284:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_08884298;
      }
      goto L_08884290;
    }
L_08884290:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088842A0;
      }
      goto L_08884298;
    }
L_08884298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_088842A0;
L_088842A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088842B4;
      }
      goto L_088842A8;
    }
L_088842A8:
    ctx.gpr[31] = (0x088842B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088842B0u) goto L_088842B0;
    return;
L_088842B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_088842B4;
L_088842B4:
    ctx.gpr[31] = (0x088842BCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 681u, 0x0893EC8Cu>(ctx, &aot_mem) && ctx.pc == 0x088842BCu) goto L_088842BC;
    return;
L_088842BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088842CC;
      }
      goto L_088842C8;
    }
L_088842C8:
    ctx.gpr[17] = (0u | 1u);
    goto L_088842CC;
L_088842CC:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088842F8;
      }
      goto L_088842F0;
    }
L_088842F0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08884340;
      }
      goto L_088842F8;
    }
L_088842F8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884324;
      }
      goto L_08884318;
    }
L_08884318:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08884340;
      }
      goto L_08884324;
    }
L_08884324:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884340;
      }
      goto L_0888433C;
    }
L_0888433C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08884340;
L_08884340:
    ctx.gpr[2] = (0u | 0u);
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
L_0888435C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884378u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884378u) goto L_08884378;
    return;
L_08884378:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
      if (branch_taken) {
          goto L_0888438C;
      }
      goto L_08884384;
    }
L_08884384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08884394;
      }
      goto L_0888438C;
    }
L_0888438C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    goto L_08884394;
L_08884394:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088843A8;
      }
      goto L_0888439C;
    }
L_0888439C:
    ctx.gpr[31] = (0x088843A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088843A4u) goto L_088843A4;
    return;
L_088843A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_088843A8;
L_088843A8:
    ctx.gpr[31] = (0x088843B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem) && ctx.pc == 0x088843B0u) goto L_088843B0;
    return;
L_088843B0:
    ctx.gpr[31] = (0x088843B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 570u, 0x08AD3464u>(ctx, &aot_mem) && ctx.pc == 0x088843B8u) goto L_088843B8;
    return;
L_088843B8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088843CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088843ECu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088843ECu) goto L_088843EC;
    return;
L_088843EC:
    ctx.gpr[31] = (0x088843F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 702u, 0x0890EFDCu>(ctx, &aot_mem) && ctx.pc == 0x088843F4u) goto L_088843F4;
    return;
L_088843F4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884408:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884428u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884428u) goto L_08884428;
    return;
L_08884428:
    ctx.gpr[31] = (0x08884430u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 705u, 0x0890F004u>(ctx, &aot_mem) && ctx.pc == 0x08884430u) goto L_08884430;
    return;
L_08884430:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884478u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884478u) goto L_08884478;
    return;
L_08884478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08884484u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08884484u) goto L_08884484;
    return;
L_08884484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08884498;
      }
      goto L_08884490;
    }
L_08884490:
    ctx.gpr[31] = (0x08884498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08884498u) goto L_08884498;
    return;
L_08884498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x088844A8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem) && ctx.pc == 0x088844A8u) goto L_088844A8;
    return;
L_088844A8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088844B8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 631u, 0x08906E5Cu>(ctx, &aot_mem) && ctx.pc == 0x088844B8u) goto L_088844B8;
    return;
L_088844B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088845CC;
      }
      goto L_088844C0;
    }
L_088844C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_0888450C;
      }
      goto L_088844E8;
    }
L_088844E8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08884504u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08884504u) goto L_08884504;
    return;
L_08884504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0888452C;
      }
      goto L_0888450C;
    }
L_0888450C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08884528u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08884528u) goto L_08884528;
    return;
L_08884528:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0888452C;
L_0888452C:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_08884548;
    }
    goto L_08884534;
L_08884534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_08884548;
L_08884548:
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_0888457C;
      }
      goto L_08884574;
    }
L_08884574:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088845C4;
      }
      goto L_0888457C;
    }
L_0888457C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088845A8;
      }
      goto L_0888459C;
    }
L_0888459C:
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088845C4;
      }
      goto L_088845A8;
    }
L_088845A8:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088845C4;
      }
      goto L_088845C0;
    }
L_088845C0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_088845C4;
L_088845C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884630;
      }
      goto L_088845CC;
    }
L_088845CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088845E8;
      }
      goto L_088845E0;
    }
L_088845E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08884630;
      }
      goto L_088845E8;
    }
L_088845E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884614;
      }
      goto L_08884608;
    }
L_08884608:
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08884630;
      }
      goto L_08884614;
    }
L_08884614:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884630;
      }
      goto L_0888462C;
    }
L_0888462C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08884630;
L_08884630:
    ctx.gpr[2] = (0u | 0u);
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
L_08884650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884680u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884680u) goto L_08884680;
    return;
L_08884680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x0888468Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x0888468Cu) goto L_0888468C;
    return;
L_0888468C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(776)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088846A4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x088846A4u) goto L_088846A4;
    return;
L_088846A4:
    ctx.gpr[2] = (0u | 0u);
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
L_088846C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088846E8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088846E8u) goto L_088846E8;
    return;
L_088846E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
        goto L_08884704;
    }
    goto L_088846F4;
L_088846F4:
    ctx.gpr[31] = (0x088846FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088846FCu) goto L_088846FC;
    return;
L_088846FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    goto L_08884704;
L_08884704:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08884730;
      }
      goto L_08884724;
    }
L_08884724:
    ctx.gpr[31] = (0x0888472Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x0888472Cu) goto L_0888472C;
    return;
L_0888472C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08884730;
L_08884730:
    ctx.gpr[31] = (0x08884738u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem) && ctx.pc == 0x08884738u) goto L_08884738;
    return;
L_08884738:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08884754;
      }
      goto L_08884744;
    }
L_08884744:
    ctx.gpr[31] = (0x0888474Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 556u, 0x08AD3328u>(ctx, &aot_mem) && ctx.pc == 0x0888474Cu) goto L_0888474C;
    return;
L_0888474C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888475C;
      }
      goto L_08884754;
    }
L_08884754:
    ctx.gpr[31] = (0x0888475Cu);
    ctx.gpr[5] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 556u, 0x08AD3328u>(ctx, &aot_mem) && ctx.pc == 0x0888475Cu) goto L_0888475C;
    return;
L_0888475C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884774:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088847B0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088847B0u) goto L_088847B0;
    return;
L_088847B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
        goto L_088847CC;
    }
    goto L_088847BC;
L_088847BC:
    ctx.gpr[31] = (0x088847C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088847C4u) goto L_088847C4;
    return;
L_088847C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    goto L_088847CC;
L_088847CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_088847F8;
      }
      goto L_088847EC;
    }
L_088847EC:
    ctx.gpr[31] = (0x088847F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x088847F4u) goto L_088847F4;
    return;
L_088847F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_088847F8;
L_088847F8:
    ctx.gpr[31] = (0x08884800u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem) && ctx.pc == 0x08884800u) goto L_08884800;
    return;
L_08884800:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088848D4;
      }
      goto L_08884818;
    }
L_08884818:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (4u << 16u);
    goto L_08884820;
L_08884820:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08884838;
      }
      goto L_08884828;
    }
L_08884828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
        goto L_08884840;
    }
    goto L_08884838;
L_08884838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08884860;
      }
      goto L_08884840;
    }
L_08884840:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_0888485C;
    }
    goto L_08884854;
L_08884854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08884860;
      }
      goto L_0888485C;
    }
L_0888485C:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_08884860;
L_08884860:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088848C4;
      }
      goto L_08884868;
    }
L_08884868:
    ctx.gpr[31] = (0x08884870u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 271u, 0x0884D5D4u>(ctx, &aot_mem) && ctx.pc == 0x08884870u) goto L_08884870;
    return;
L_08884870:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088848C0;
      }
      goto L_0888487C;
    }
L_0888487C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088848A4;
      }
      goto L_08884884;
    }
L_08884884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088848A4;
      }
      goto L_0888489C;
    }
L_0888489C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088848A8;
      }
      goto L_088848A4;
    }
L_088848A4:
    ctx.gpr[4] = (0u | 0u);
    goto L_088848A8;
L_088848A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088848B8;
      }
      goto L_088848B0;
    }
L_088848B0:
    ctx.gpr[31] = (0x088848B8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 611u, 0x0888FE40u>(ctx, &aot_mem) && ctx.pc == 0x088848B8u) goto L_088848B8;
    return;
L_088848B8:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888487C;
      }
      goto L_088848C0;
    }
L_088848C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_088848C4;
L_088848C4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(3344));
      if (branch_taken) {
          goto L_08884820;
      }
      goto L_088848D4;
    }
L_088848D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088848F0;
      }
      goto L_088848E0;
    }
L_088848E0:
    ctx.gpr[31] = (0x088848E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 629u, 0x08AD3800u>(ctx, &aot_mem) && ctx.pc == 0x088848E8u) goto L_088848E8;
    return;
L_088848E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088848F8;
      }
      goto L_088848F0;
    }
L_088848F0:
    ctx.gpr[31] = (0x088848F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 632u, 0x08AD3830u>(ctx, &aot_mem) && ctx.pc == 0x088848F8u) goto L_088848F8;
    return;
L_088848F8:
    ctx.gpr[2] = (0u | 0u);
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
L_08884924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888494Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888494Cu) goto L_0888494C;
    return;
L_0888494C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
        goto L_08884968;
    }
    goto L_08884958;
L_08884958:
    ctx.gpr[31] = (0x08884960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08884960u) goto L_08884960;
    return;
L_08884960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    goto L_08884968;
L_08884968:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08884994;
      }
      goto L_08884988;
    }
L_08884988:
    ctx.gpr[31] = (0x08884990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08884990u) goto L_08884990;
    return;
L_08884990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08884994;
L_08884994:
    ctx.gpr[31] = (0x0888499Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem) && ctx.pc == 0x0888499Cu) goto L_0888499C;
    return;
L_0888499C:
    ctx.gpr[31] = (0x088849A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 609u, 0x08AD36B8u>(ctx, &aot_mem) && ctx.pc == 0x088849A4u) goto L_088849A4;
    return;
L_088849A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_088849C8;
      }
      goto L_088849C0;
    }
L_088849C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08884A10;
      }
      goto L_088849C8;
    }
L_088849C8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_088849F4;
      }
      goto L_088849E8;
    }
L_088849E8:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08884A10;
      }
      goto L_088849F4;
    }
L_088849F4:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884A10;
      }
      goto L_08884A0C;
    }
L_08884A0C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08884A10;
L_08884A10:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884A28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884A58u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884A58u) goto L_08884A58;
    return;
L_08884A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08884A64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08884A64u) goto L_08884A64;
    return;
L_08884A64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08884A74u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08884A74u) goto L_08884A74;
    return;
L_08884A74:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884AE4;
      }
      goto L_08884A84;
    }
L_08884A84:
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884A98;
      }
      goto L_08884A90;
    }
L_08884A90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08884B3C;
      }
      goto L_08884A98;
    }
L_08884A98:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884AC4;
      }
      goto L_08884AB8;
    }
L_08884AB8:
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08884B3C;
      }
      goto L_08884AC4;
    }
L_08884AC4:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884B3C;
      }
      goto L_08884ADC;
    }
L_08884ADC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08884B3C;
      }
      goto L_08884AE4;
    }
L_08884AE4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884AF4;
      }
      goto L_08884AEC;
    }
L_08884AEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08884B3C;
      }
      goto L_08884AF4;
    }
L_08884AF4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884B20;
      }
      goto L_08884B14;
    }
L_08884B14:
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08884B3C;
      }
      goto L_08884B20;
    }
L_08884B20:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884B3C;
      }
      goto L_08884B38;
    }
L_08884B38:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08884B3C;
L_08884B3C:
    ctx.gpr[2] = (0u | 0u);
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
L_08884B58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884B98u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884B98u) goto L_08884B98;
    return;
L_08884B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08884BA4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08884BA4u) goto L_08884BA4;
    return;
L_08884BA4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 121u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08884BD0;
      }
      goto L_08884BBC;
    }
L_08884BBC:
    ctx.gpr[4] = (0u | 120u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 90u);
      if (branch_taken) {
          goto L_08884BD0;
      }
      goto L_08884BC8;
    }
L_08884BC8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08884C68;
      }
      goto L_08884BD0;
    }
L_08884BD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08884BE8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08884BE8u) goto L_08884BE8;
    return;
L_08884BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884C18;
      }
      goto L_08884C10;
    }
L_08884C10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08884C60;
      }
      goto L_08884C18;
    }
L_08884C18:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884C44;
      }
      goto L_08884C38;
    }
L_08884C38:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08884C60;
      }
      goto L_08884C44;
    }
L_08884C44:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884C60;
      }
      goto L_08884C5C;
    }
L_08884C5C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08884C60;
L_08884C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884DCC;
      }
      goto L_08884C68;
    }
L_08884C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
        goto L_08884C80;
    }
    goto L_08884C74;
L_08884C74:
    ctx.gpr[31] = (0x08884C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem) && ctx.pc == 0x08884C7Cu) goto L_08884C7C;
    return;
L_08884C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08884C80;
L_08884C80:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08884C8Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 633u, 0x0893E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08884C8Cu) goto L_08884C8C;
    return;
L_08884C8C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08884C9Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 631u, 0x08906E5Cu>(ctx, &aot_mem) && ctx.pc == 0x08884C9Cu) goto L_08884C9C;
    return;
L_08884C9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884D68;
      }
      goto L_08884CA4;
    }
L_08884CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[21] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08884CD0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem) && ctx.pc == 0x08884CD0u) goto L_08884CD0;
    return;
L_08884CD0:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08884CE8;
      }
      goto L_08884CD8;
    }
L_08884CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08884CE8;
L_08884CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884D18;
      }
      goto L_08884D10;
    }
L_08884D10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08884D60;
      }
      goto L_08884D18;
    }
L_08884D18:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884D44;
      }
      goto L_08884D38;
    }
L_08884D38:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08884D60;
      }
      goto L_08884D44;
    }
L_08884D44:
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884D60;
      }
      goto L_08884D5C;
    }
L_08884D5C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08884D60;
L_08884D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884DCC;
      }
      goto L_08884D68;
    }
L_08884D68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884D84;
      }
      goto L_08884D7C;
    }
L_08884D7C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08884DCC;
      }
      goto L_08884D84;
    }
L_08884D84:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08884DB0;
      }
      goto L_08884DA4;
    }
L_08884DA4:
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08884DCC;
      }
      goto L_08884DB0;
    }
L_08884DB0:
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884DCC;
      }
      goto L_08884DC8;
    }
L_08884DC8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08884DCC;
L_08884DCC:
    ctx.gpr[2] = (0u | 0u);
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
L_08884DF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884E20u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884E20u) goto L_08884E20;
    return;
L_08884E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08884E2Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08884E2Cu) goto L_08884E2C;
    return;
L_08884E2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08884E40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem) && ctx.pc == 0x08884E40u) goto L_08884E40;
    return;
L_08884E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884E68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884E90u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884E90u) goto L_08884E90;
    return;
L_08884E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08884E9Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08884E9Cu) goto L_08884E9C;
    return;
L_08884E9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08884EF0;
      }
      goto L_08884EB0;
    }
L_08884EB0:
    ctx.gpr[5] = (4u << 16u);
    goto L_08884EB4;
L_08884EB4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[8] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884EE4;
      }
      goto L_08884ED0;
    }
L_08884ED0:
    ctx.gpr[6] = (ctx.gpr[6] | 4u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] | 8u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08884EE4;
L_08884EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08884EB4;
      }
      goto L_08884EF0;
    }
L_08884EF0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884F08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884F34u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884F34u) goto L_08884F34;
    return;
L_08884F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08884F40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08884F40u) goto L_08884F40;
    return;
L_08884F40:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08884F54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08884F54u) goto L_08884F54;
    return;
L_08884F54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884F78;
      }
      goto L_08884F60;
    }
L_08884F60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_08884F78;
L_08884F78:
    ctx.gpr[2] = (0u | 0u);
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
L_08884F94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884FD0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08884FD0u) goto L_08884FD0;
    return;
L_08884FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08884FDCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08884FDCu) goto L_08884FDC;
    return;
L_08884FDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (49024u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x08884FF4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x08884FF4u) goto L_08884FF4;
    return;
L_08884FF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885004;
      }
      goto L_08885000;
    }
L_08885000:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_08885004;
L_08885004:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0888501Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x0888501Cu) goto L_0888501C;
    return;
L_0888501C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885040:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888506Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888506Cu) goto L_0888506C;
    return;
L_0888506C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08885078u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08885078u) goto L_08885078;
    return;
L_08885078:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0888508Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem) && ctx.pc == 0x0888508Cu) goto L_0888508C;
    return;
L_0888508C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088850A0;
      }
      goto L_08885098;
    }
L_08885098:
    ctx.gpr[31] = (0x088850A0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem) && ctx.pc == 0x088850A0u) goto L_088850A0;
    return;
L_088850A0:
    ctx.gpr[2] = (0u | 0u);
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
L_088850BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885100;
      }
      goto L_088850CC;
    }
L_088850CC:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27644));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5892), 0u);
      if (branch_taken) {
          goto L_088850EC;
      }
      goto L_088850E0;
    }
L_088850E0:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_088850EC;
L_088850EC:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885100;
      }
      goto L_088850F8;
    }
L_088850F8:
    ctx.gpr[31] = (0x08885100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08885100u) goto L_08885100;
    return;
L_08885100:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888510C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885124u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 702u, 0x0886B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08885124u) goto L_08885124;
    return;
L_08885124:
    ctx.gpr[17] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-23616));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08885164;
      }
      goto L_0888513C;
    }
L_0888513C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08885148u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885148u) goto L_08885148;
    return;
L_08885148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08885154u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08885154u) goto L_08885154;
    return;
L_08885154:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0888513C;
      }
      goto L_08885164;
    }
L_08885164:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08885170u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26176));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08885170u) goto L_08885170;
    return;
L_08885170:
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08885184u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21288));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem) && ctx.pc == 0x08885184u) goto L_08885184;
    return;
L_08885184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08885190u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x08885190u) goto L_08885190;
    return;
L_08885190:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088851A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088851BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 712u, 0x0886B66Cu>(ctx, &aot_mem) && ctx.pc == 0x088851BCu) goto L_088851BC;
    return;
L_088851BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088851D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088851E4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 538u, 0x0889E534u>(ctx, &aot_mem) && ctx.pc == 0x088851E4u) goto L_088851E4;
    return;
L_088851E4:
    ctx.gpr[31] = (0x088851ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08885498;
L_088851EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088851F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888520Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 532u, 0x0889E4D4u>(ctx, &aot_mem) && ctx.pc == 0x0888520Cu) goto L_0888520C;
    return;
L_0888520C:
    ctx.gpr[31] = (0x08885214u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08885498;
L_08885214:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885220:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888524Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0888524Cu) goto L_0888524C;
    return;
L_0888524C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08885260u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem) && ctx.pc == 0x08885260u) goto L_08885260;
    return;
L_08885260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x0888526Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0888526Cu) goto L_0888526C;
    return;
L_0888526C:
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
L_08885284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088852A8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 234u, 0x0889D28Cu>(ctx, &aot_mem) && ctx.pc == 0x088852A8u) goto L_088852A8;
    return;
L_088852A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26164));
    ctx.gpr[31] = (0x088852B8u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088852B8u) goto L_088852B8;
    return;
L_088852B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088852C4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x088852C4u) goto L_088852C4;
    return;
L_088852C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088852D0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 486u, 0x08807414u>(ctx, &aot_mem) && ctx.pc == 0x088852D0u) goto L_088852D0;
    return;
L_088852D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088852E4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem) && ctx.pc == 0x088852E4u) goto L_088852E4;
    return;
L_088852E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x088852F0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x088852F0u) goto L_088852F0;
    return;
L_088852F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885304:
    ctx.gpr[5] = (2235u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27628));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885328:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088853F0;
      }
      goto L_0888535C;
    }
L_0888535C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26156));
      if (branch_taken) {
          goto L_08885370;
      }
      goto L_08885364;
    }
L_08885364:
    ctx.gpr[31] = (0x0888536Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x0888536Cu) goto L_0888536C;
    return;
L_0888536C:
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26156));
    goto L_08885370;
L_08885370:
    ctx.gpr[31] = (0x08885378u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08885378u) goto L_08885378;
    return;
L_08885378:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08885388u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x08885388u) goto L_08885388;
    return;
L_08885388:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08885394u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08885394u) goto L_08885394;
    return;
L_08885394:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088853ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 7u, 0x08B6804Cu>(ctx, &aot_mem) && ctx.pc == 0x088853ACu) goto L_088853AC;
    return;
L_088853AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088853BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 14u, 0x08B680F4u>(ctx, &aot_mem) && ctx.pc == 0x088853BCu) goto L_088853BC;
    return;
L_088853BC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[16];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_088853D4;
      }
      goto L_088853C8;
    }
L_088853C8:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088853D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x088853D4u) goto L_088853D4;
    return;
L_088853D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088853EC;
      }
      goto L_088853E0;
    }
L_088853E0:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x088853ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x088853ECu) goto L_088853EC;
    return;
L_088853EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_088853F0;
L_088853F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26152));
      if (branch_taken) {
          goto L_08885404;
      }
      goto L_088853F8;
    }
L_088853F8:
    ctx.gpr[31] = (0x08885400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08885400u) goto L_08885400;
    return;
L_08885400:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26152));
    goto L_08885404;
L_08885404:
    ctx.gpr[31] = (0x0888540Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x0888540Cu) goto L_0888540C;
    return;
L_0888540C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0888541Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem) && ctx.pc == 0x0888541Cu) goto L_0888541C;
    return;
L_0888541C:
    ctx.gpr[31] = (0x08885424u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem) && ctx.pc == 0x08885424u) goto L_08885424;
    return;
L_08885424:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888543Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 7u, 0x08B6804Cu>(ctx, &aot_mem) && ctx.pc == 0x0888543Cu) goto L_0888543C;
    return;
L_0888543C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    ctx.gpr[31] = (0x0888544Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 14u, 0x08B680F4u>(ctx, &aot_mem) && ctx.pc == 0x0888544Cu) goto L_0888544C;
    return;
L_0888544C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (2236u << 16u);
      if (branch_taken) {
          goto L_08885464;
      }
      goto L_08885458;
    }
L_08885458:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08885464u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x08885464u) goto L_08885464;
    return;
L_08885464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888547C;
      }
      goto L_08885470;
    }
L_08885470:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[31] = (0x0888547Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem) && ctx.pc == 0x0888547Cu) goto L_0888547C;
    return;
L_0888547C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885498:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08885514;
      }
      goto L_088854AC;
    }
L_088854AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_088854C8;
    }
    goto L_088854B8;
L_088854B8:
    ctx.gpr[31] = (0x088854C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x088854C0u) goto L_088854C0;
    return;
L_088854C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_088854C8;
L_088854C8:
    ctx.gpr[31] = (0x088854D0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem) && ctx.pc == 0x088854D0u) goto L_088854D0;
    return;
L_088854D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088854E4;
      }
      goto L_088854DC;
    }
L_088854DC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23568));
    goto L_088854E4;
L_088854E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088854F0u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26148));
    goto L_08885330;
L_088854F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0888550C;
    }
    goto L_088854FC;
L_088854FC:
    ctx.gpr[31] = (0x08885504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08885504u) goto L_08885504;
    return;
L_08885504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_0888550C;
L_0888550C:
    ctx.gpr[31] = (0x08885514u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08885514u) goto L_08885514;
    return;
L_08885514:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885528:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885548u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26136));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08885548u) goto L_08885548;
    return;
L_08885548:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885554u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x08885554u) goto L_08885554;
    return;
L_08885554:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885564u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x08885564u) goto L_08885564;
    return;
L_08885564:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885570u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 407u, 0x08806CC8u>(ctx, &aot_mem) && ctx.pc == 0x08885570u) goto L_08885570;
    return;
L_08885570:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088855E0;
      }
      goto L_08885578;
    }
L_08885578:
    ctx.gpr[31] = (0x08885580u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 298u, 0x088065D0u>(ctx, &aot_mem) && ctx.pc == 0x08885580u) goto L_08885580;
    return;
L_08885580:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885590u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08885590u) goto L_08885590;
    return;
L_08885590:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[6] = (2232u << 16u);
      if (branch_taken) {
          goto L_088855B4;
      }
      goto L_0888559C;
    }
L_0888559C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088855A8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 331u, 0x088068E0u>(ctx, &aot_mem) && ctx.pc == 0x088855A8u) goto L_088855A8;
    return;
L_088855A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088855C4;
      }
      goto L_088855B0;
    }
L_088855B0:
    ctx.gpr[6] = (2232u << 16u);
    goto L_088855B4;
L_088855B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088855C4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23544));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x088855C4u) goto L_088855C4;
    return;
L_088855C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088855D0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x088855D0u) goto L_088855D0;
    return;
L_088855D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088855E0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 295u, 0x08806564u>(ctx, &aot_mem) && ctx.pc == 0x088855E0u) goto L_088855E0;
    return;
L_088855E0:
    ctx.gpr[31] = (0x088855E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x088855E8u) goto L_088855E8;
    return;
L_088855E8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26128));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088855F8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088855F8u) goto L_088855F8;
    return;
L_088855F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885604u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08885604u) goto L_08885604;
    return;
L_08885604:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885610u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x08885610u) goto L_08885610;
    return;
L_08885610:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26120));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885620u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x08885620u) goto L_08885620;
    return;
L_08885620:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888562Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x0888562Cu) goto L_0888562C;
    return;
L_0888562C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885638u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x08885638u) goto L_08885638;
    return;
L_08885638:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26112));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885648u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x08885648u) goto L_08885648;
    return;
L_08885648:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885654u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x08885654u) goto L_08885654;
    return;
L_08885654:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885660u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 388u, 0x0889DB90u>(ctx, &aot_mem) && ctx.pc == 0x08885660u) goto L_08885660;
    return;
L_08885660:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08885674u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 370u, 0x0889DA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08885674u) goto L_08885674;
    return;
L_08885674:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885680u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08885680u) goto L_08885680;
    return;
L_08885680:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x08885690u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08885690u) goto L_08885690;
    return;
L_08885690:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888569Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0888569Cu) goto L_0888569C;
    return;
L_0888569C:
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
L_088856B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x088856D8u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26136));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x088856D8u) goto L_088856D8;
    return;
L_088856D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088856E4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x088856E4u) goto L_088856E4;
    return;
L_088856E4:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088856F4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x088856F4u) goto L_088856F4;
    return;
L_088856F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885700u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 407u, 0x08806CC8u>(ctx, &aot_mem) && ctx.pc == 0x08885700u) goto L_08885700;
    return;
L_08885700:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08885720;
      }
      goto L_0888570C;
    }
L_0888570C:
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08885720u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23520));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem) && ctx.pc == 0x08885720u) goto L_08885720;
    return;
L_08885720:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888572Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x0888572Cu) goto L_0888572C;
    return;
L_0888572C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26120));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888573Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888573Cu) goto L_0888573C;
    return;
L_0888573C:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26112));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888574Cu);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888574Cu) goto L_0888574C;
    return;
L_0888574C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885758u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x08885758u) goto L_08885758;
    return;
L_08885758:
    ctx.gpr[31] = (0x08885760u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x08885760u) goto L_08885760;
    return;
L_08885760:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08885764;
L_08885764:
    ctx.gpr[31] = (0x0888576Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 540u, 0x088078B0u>(ctx, &aot_mem) && ctx.pc == 0x0888576Cu) goto L_0888576C;
    return;
L_0888576C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088857F0;
      }
      goto L_08885774;
    }
L_08885774:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885780u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08885780u) goto L_08885780;
    return;
L_08885780:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888578Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x0888578Cu) goto L_0888578C;
    return;
L_0888578C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885798u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 407u, 0x08806CC8u>(ctx, &aot_mem) && ctx.pc == 0x08885798u) goto L_08885798;
    return;
L_08885798:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088857B4;
      }
      goto L_088857A0;
    }
L_088857A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088857ACu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x088857ACu) goto L_088857AC;
    return;
L_088857AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08885764;
      }
      goto L_088857B4;
    }
L_088857B4:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26104));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088857C4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088857C4u) goto L_088857C4;
    return;
L_088857C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088857D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x088857D0u) goto L_088857D0;
    return;
L_088857D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088857DCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088857DCu) goto L_088857DC;
    return;
L_088857DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088857E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x088857E8u) goto L_088857E8;
    return;
L_088857E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08885800;
      }
      goto L_088857F0;
    }
L_088857F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088857FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x088857FCu) goto L_088857FC;
    return;
L_088857FC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08885800;
L_08885800:
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
L_08885818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08885838;
      }
      goto L_08885830;
    }
L_08885830:
    ctx.gpr[31] = (0x08885838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem) && ctx.pc == 0x08885838u) goto L_08885838;
    return;
L_08885838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08885848u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x08885848u) goto L_08885848;
    return;
L_08885848:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885858u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x08885858u) goto L_08885858;
    return;
L_08885858:
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0888586Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21800));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem) && ctx.pc == 0x0888586Cu) goto L_0888586C;
    return;
L_0888586C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885878u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x08885878u) goto L_08885878;
    return;
L_08885878:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26088));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885888u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x08885888u) goto L_08885888;
    return;
L_08885888:
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0888589Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22200));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem) && ctx.pc == 0x0888589Cu) goto L_0888589C;
    return;
L_0888589C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088858A8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088858A8u) goto L_088858A8;
    return;
L_088858A8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26080));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088858B8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088858B8u) goto L_088858B8;
    return;
L_088858B8:
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088858CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22860));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem) && ctx.pc == 0x088858CCu) goto L_088858CC;
    return;
L_088858CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088858D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088858D8u) goto L_088858D8;
    return;
L_088858D8:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26112));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088858E8u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088858E8u) goto L_088858E8;
    return;
L_088858E8:
    ctx.gpr[31] = (0x088858F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem) && ctx.pc == 0x088858F0u) goto L_088858F0;
    return;
L_088858F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088858FCu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x088858FCu) goto L_088858FC;
    return;
L_088858FC:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26136));
    ctx.gpr[31] = (0x08885908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08885908u) goto L_08885908;
    return;
L_08885908:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885914u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x08885914u) goto L_08885914;
    return;
L_08885914:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885920u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x08885920u) goto L_08885920;
    return;
L_08885920:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885940u);
    // nop
    goto L_0888594C;
L_08885940:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888594C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885978u);
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26136));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem) && ctx.pc == 0x08885978u) goto L_08885978;
    return;
L_08885978:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885984u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x08885984u) goto L_08885984;
    return;
L_08885984:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885994u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem) && ctx.pc == 0x08885994u) goto L_08885994;
    return;
L_08885994:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088859A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x088859A0u) goto L_088859A0;
    return;
L_088859A0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26104));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088859B0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088859B0u) goto L_088859B0;
    return;
L_088859B0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26128));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088859C0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088859C0u) goto L_088859C0;
    return;
L_088859C0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26120));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088859D0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088859D0u) goto L_088859D0;
    return;
L_088859D0:
    ctx.gpr[5] = (ctx.gpr[28] + static_cast<std::uint32_t>(-26112));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088859E0u);
    ctx.gpr[6] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem) && ctx.pc == 0x088859E0u) goto L_088859E0;
    return;
L_088859E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088859ECu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x088859ECu) goto L_088859EC;
    return;
L_088859EC:
    ctx.gpr[31] = (0x088859F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x088859F4u) goto L_088859F4;
    return;
L_088859F4:
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088859FC;
L_088859FC:
    ctx.gpr[31] = (0x08885A04u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 540u, 0x088078B0u>(ctx, &aot_mem) && ctx.pc == 0x08885A04u) goto L_08885A04;
    return;
L_08885A04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885C28;
      }
      goto L_08885A0C;
    }
L_08885A0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885A18u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08885A18u) goto L_08885A18;
    return;
L_08885A18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885A24u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x08885A24u) goto L_08885A24;
    return;
L_08885A24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885A30u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08885A30u) goto L_08885A30;
    return;
L_08885A30:
    ctx.gpr[19] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885A40u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08885A40u) goto L_08885A40;
    return;
L_08885A40:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08885C14;
      }
      goto L_08885A48;
    }
L_08885A48:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08885A54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08885A54u) goto L_08885A54;
    return;
L_08885A54:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885A64u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08885A64u) goto L_08885A64;
    return;
L_08885A64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885A70u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x08885A70u) goto L_08885A70;
    return;
L_08885A70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885A7Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08885A7Cu) goto L_08885A7C;
    return;
L_08885A7C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08885A94;
      }
      goto L_08885A84;
    }
L_08885A84:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08885A94u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 508u, 0x08807644u>(ctx, &aot_mem) && ctx.pc == 0x08885A94u) goto L_08885A94;
    return;
L_08885A94:
    ctx.gpr[31] = (0x08885A9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08885A9Cu) goto L_08885A9C;
    return;
L_08885A9C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885AB8;
      }
      goto L_08885AA8;
    }
L_08885AA8:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08885AB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08885AB4u) goto L_08885AB4;
    return;
L_08885AB4:
    ctx.gpr[20] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08885AB8;
L_08885AB8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885C08;
      }
      goto L_08885AC0;
    }
L_08885AC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885ACCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08885ACCu) goto L_08885ACC;
    return;
L_08885ACC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885AD8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x08885AD8u) goto L_08885AD8;
    return;
L_08885AD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885AE4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 407u, 0x08806CC8u>(ctx, &aot_mem) && ctx.pc == 0x08885AE4u) goto L_08885AE4;
    return;
L_08885AE4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885AF4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08885AF4u) goto L_08885AF4;
    return;
L_08885AF4:
    ctx.gpr[31] = (0x08885AFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08885AFCu) goto L_08885AFC;
    return;
L_08885AFC:
    ctx.gpr[21] = (ctx.gpr[2] - ctx.gpr[19]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08885B24;
      }
      goto L_08885B0C;
    }
L_08885B0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08885B1Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 295u, 0x08806564u>(ctx, &aot_mem) && ctx.pc == 0x08885B1Cu) goto L_08885B1C;
    return;
L_08885B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08885B28;
      }
      goto L_08885B24;
    }
L_08885B24:
    ctx.gpr[21] = (0u | 0u);
    goto L_08885B28;
L_08885B28:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08885B34u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 592u, 0x08872734u>(ctx, &aot_mem) && ctx.pc == 0x08885B34u) goto L_08885B34;
    return;
L_08885B34:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08885BBC;
      }
      goto L_08885B40;
    }
L_08885B40:
    ctx.gpr[31] = (0x08885B48u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem) && ctx.pc == 0x08885B48u) goto L_08885B48;
    return;
L_08885B48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08885BBC;
      }
      goto L_08885B50;
    }
L_08885B50:
    ctx.gpr[31] = (0x08885B58u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08885B58u) goto L_08885B58;
    return;
L_08885B58:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08885B80;
      }
      goto L_08885B60;
    }
L_08885B60:
    ctx.gpr[31] = (0x08885B68u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08885B68u) goto L_08885B68;
    return;
L_08885B68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08885BBC;
      }
      goto L_08885B70;
    }
L_08885B70:
    ctx.gpr[31] = (0x08885B78u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08885B78u) goto L_08885B78;
    return;
L_08885B78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885BBC;
      }
      goto L_08885B80;
    }
L_08885B80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885B8Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08885B8Cu) goto L_08885B8C;
    return;
L_08885B8C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885B9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 295u, 0x08806564u>(ctx, &aot_mem) && ctx.pc == 0x08885B9Cu) goto L_08885B9C;
    return;
L_08885B9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885BA8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x08885BA8u) goto L_08885BA8;
    return;
L_08885BA8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08885BB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08885BB4u) goto L_08885BB4;
    return;
L_08885BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08885C08;
      }
      goto L_08885BBC;
    }
L_08885BBC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885BC8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08885BC8u) goto L_08885BC8;
    return;
L_08885BC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885BD4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem) && ctx.pc == 0x08885BD4u) goto L_08885BD4;
    return;
L_08885BD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885BE0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem) && ctx.pc == 0x08885BE0u) goto L_08885BE0;
    return;
L_08885BE0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885C08;
      }
      goto L_08885BE8;
    }
L_08885BE8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885BF8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 295u, 0x08806564u>(ctx, &aot_mem) && ctx.pc == 0x08885BF8u) goto L_08885BF8;
    return;
L_08885BF8:
    ctx.gpr[31] = (0x08885C00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 538u, 0x08807890u>(ctx, &aot_mem) && ctx.pc == 0x08885C00u) goto L_08885C00;
    return;
L_08885C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08885D20;
      }
      goto L_08885C08;
    }
L_08885C08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885C14u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08885C14u) goto L_08885C14;
    return;
L_08885C14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885C20u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08885C20u) goto L_08885C20;
    return;
L_08885C20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088859FC;
      }
      goto L_08885C28;
    }
L_08885C28:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    goto L_08885C30;
L_08885C30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08885C40u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem) && ctx.pc == 0x08885C40u) goto L_08885C40;
    return;
L_08885C40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885C4Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem) && ctx.pc == 0x08885C4Cu) goto L_08885C4C;
    return;
L_08885C4C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08885C78;
      }
      goto L_08885C54;
    }
L_08885C54:
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885C64u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 370u, 0x0889DA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08885C64u) goto L_08885C64;
    return;
L_08885C64:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08885CE8;
      }
      goto L_08885C70;
    }
L_08885C70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08885D10;
      }
      goto L_08885C78;
    }
L_08885C78:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885C88u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem) && ctx.pc == 0x08885C88u) goto L_08885C88;
    return;
L_08885C88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885C94u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem) && ctx.pc == 0x08885C94u) goto L_08885C94;
    return;
L_08885C94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885CA0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem) && ctx.pc == 0x08885CA0u) goto L_08885CA0;
    return;
L_08885CA0:
    ctx.gpr[20] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885CB0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08885CB0u) goto L_08885CB0;
    return;
L_08885CB0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08885CD4;
      }
      goto L_08885CB8;
    }
L_08885CB8:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885CCCu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08885CCCu) goto L_08885CCC;
    return;
L_08885CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08885CE0;
      }
      goto L_08885CD4;
    }
L_08885CD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885CE0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08885CE0u) goto L_08885CE0;
    return;
L_08885CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08885C30;
      }
      goto L_08885CE8;
    }
L_08885CE8:
    ctx.gpr[31] = (0x08885CF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem) && ctx.pc == 0x08885CF0u) goto L_08885CF0;
    return;
L_08885CF0:
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885D04u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem) && ctx.pc == 0x08885D04u) goto L_08885D04;
    return;
L_08885D04:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08885CE8;
      }
      goto L_08885D10;
    }
L_08885D10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08885D1Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem) && ctx.pc == 0x08885D1Cu) goto L_08885D1C;
    return;
L_08885D1C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08885D20;
L_08885D20:
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
L_08885D44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885D64u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08885D64u) goto L_08885D64;
    return;
L_08885D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8080)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8084)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[16])) && ctx.fpr[14] == ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8080), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08885DA0;
      }
      goto L_08885D98;
    }
L_08885D98:
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8080), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08885DA0;
L_08885DA0:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08885DB4;
      }
      goto L_08885DB0;
    }
L_08885DB0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8080), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08885DB4;
L_08885DB4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885DC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885DE8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08885DE8u) goto L_08885DE8;
    return;
L_08885DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8084), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885E0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885E2Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08885E2Cu) goto L_08885E2C;
    return;
L_08885E2C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8088)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08885E44;
    }
    goto L_08885E44;
L_08885E44:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8088), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885E5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885E7Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08885E7Cu) goto L_08885E7C;
    return;
L_08885E7C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8092)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08885E94;
    }
    goto L_08885E94;
L_08885E94:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8092), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885EAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885ECCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08885ECCu) goto L_08885ECC;
    return;
L_08885ECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8096)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885EE8;
      }
      goto L_08885EE0;
    }
L_08885EE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08885EE8;
      }
      goto L_08885EE8;
    }
L_08885EE8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8096), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885F20u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08885F20u) goto L_08885F20;
    return;
L_08885F20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8100)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885F3C;
      }
      goto L_08885F34;
    }
L_08885F34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08885F3C;
      }
      goto L_08885F3C;
    }
L_08885F3C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8100), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885F54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885F74u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08885F74u) goto L_08885F74;
    return;
L_08885F74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8104)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885F90;
      }
      goto L_08885F88;
    }
L_08885F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08885F90;
      }
      goto L_08885F90;
    }
L_08885F90:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8104), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8108)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8108), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885FBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885FDCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08885FDCu) goto L_08885FDC;
    return;
L_08885FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8112), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8116)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8116), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888600C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888602Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888602Cu) goto L_0888602C;
    return;
L_0888602C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8120)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8120), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8124)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8124), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886088u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886088u) goto L_08886088;
    return;
L_08886088:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
      if (branch_taken) {
          goto L_0888609C;
      }
      goto L_08886094;
    }
L_08886094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088860A4;
      }
      goto L_0888609C;
    }
L_0888609C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_088860A4;
L_088860A4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088860D8;
      }
      goto L_088860AC;
    }
L_088860AC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x088860B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem) && ctx.pc == 0x088860B8u) goto L_088860B8;
    return;
L_088860B8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088860D0;
      }
      goto L_088860C4;
    }
L_088860C4:
    ctx.gpr[31] = (0x088860CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem) && ctx.pc == 0x088860CCu) goto L_088860CC;
    return;
L_088860CC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_088860D0;
L_088860D0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088860D8;
L_088860D8:
    ctx.gpr[31] = (0x088860E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem) && ctx.pc == 0x088860E0u) goto L_088860E0;
    return;
L_088860E0:
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8128));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088860F0u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem) && ctx.pc == 0x088860F0u) goto L_088860F0;
    return;
L_088860F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8136)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08886100u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8136), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 232u, 0x089910C8u>(ctx, &aot_mem) && ctx.pc == 0x08886100u) goto L_08886100;
    return;
L_08886100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[31] = (0x0888610Cu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7976), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 525u, 0x089672CCu>(ctx, &aot_mem) && ctx.pc == 0x0888610Cu) goto L_0888610C;
    return;
L_0888610C:
    ctx.gpr[2] = (0u | 0u);
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
L_08886128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 161u, 0x08990BA4u>(ctx, &aot_mem) && ctx.pc == 0x08886138u) goto L_08886138;
    return;
L_08886138:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886148:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 162u, 0x08990BB4u>(ctx, &aot_mem) && ctx.pc == 0x08886158u) goto L_08886158;
    return;
L_08886158:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886188u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886188u) goto L_08886188;
    return;
L_08886188:
    ctx.gpr[31] = (0x08886190u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 166u, 0x08990BF0u>(ctx, &aot_mem) && ctx.pc == 0x08886190u) goto L_08886190;
    return;
L_08886190:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088861A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088861B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 163u, 0x08990BC4u>(ctx, &aot_mem) && ctx.pc == 0x088861B4u) goto L_088861B4;
    return;
L_088861B4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088861C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088861E0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088861E0u) goto L_088861E0;
    return;
L_088861E0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088861F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888622Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888622Cu) goto L_0888622C;
    return;
L_0888622C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08886238u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08886238u) goto L_08886238;
    return;
L_08886238:
    ctx.gpr[31] = (0x08886240u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x08886240u) goto L_08886240;
    return;
L_08886240:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(280)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(284)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(292)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(296)));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[31] = (0x08886284u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x08886284u) goto L_08886284;
    return;
L_08886284:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(276), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(284), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(292), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 0u);
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
L_088862C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088862E4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088862E4u) goto L_088862E4;
    return;
L_088862E4:
    ctx.gpr[31] = (0x088862ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 231u, 0x089910B0u>(ctx, &aot_mem) && ctx.pc == 0x088862ECu) goto L_088862EC;
    return;
L_088862EC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886300:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886320u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886320u) goto L_08886320;
    return;
L_08886320:
    ctx.gpr[31] = (0x08886328u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 164u, 0x08990BD4u>(ctx, &aot_mem) && ctx.pc == 0x08886328u) goto L_08886328;
    return;
L_08886328:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888633C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888636Cu);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888636Cu) goto L_0888636C;
    return;
L_0888636C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[31] = (0x08886378u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem) && ctx.pc == 0x08886378u) goto L_08886378;
    return;
L_08886378:
    ctx.gpr[31] = (0x08886380u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem) && ctx.pc == 0x08886380u) goto L_08886380;
    return;
L_08886380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3280)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3280), 0u);
    ctx.gpr[31] = (0x088863A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x088863A4u) goto L_088863A4;
    return;
L_088863A4:
    ctx.gpr[2] = (0u | 0u);
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
L_088863C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088863D4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 223u, 0x0899103Cu>(ctx, &aot_mem) && ctx.pc == 0x088863D4u) goto L_088863D4;
    return;
L_088863D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[0]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(29704), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088863F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem) && ctx.pc == 0x088863F8u) goto L_088863F8;
    return;
L_088863F8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888640C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8136)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08886424u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8136), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 232u, 0x089910C8u>(ctx, &aot_mem) && ctx.pc == 0x08886424u) goto L_08886424;
    return;
L_08886424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[31] = (0x08886430u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7976), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 525u, 0x089672CCu>(ctx, &aot_mem) && ctx.pc == 0x08886430u) goto L_08886430;
    return;
L_08886430:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886440:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886460u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886460u) goto L_08886460;
    return;
L_08886460:
    ctx.gpr[31] = (0x08886468u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 168u, 0x08990C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08886468u) goto L_08886468;
    return;
L_08886468:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888647C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888649Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888649Cu) goto L_0888649C;
    return;
L_0888649C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8108), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088864B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088864D4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088864D4u) goto L_088864D4;
    return;
L_088864D4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088864E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8140)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8140), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088864F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886518u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886518u) goto L_08886518;
    return;
L_08886518:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8144)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08886530;
    }
    goto L_08886530;
L_08886530:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886568u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886568u) goto L_08886568;
    return;
L_08886568:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8148), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888658C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088865ACu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088865ACu) goto L_088865AC;
    return;
L_088865AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8152), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088865C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088865E8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088865E8u) goto L_088865E8;
    return;
L_088865E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x088865F4u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 303u, 0x089914DCu>(ctx, &aot_mem) && ctx.pc == 0x088865F4u) goto L_088865F4;
    return;
L_088865F4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886608:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888663Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888663Cu) goto L_0888663C;
    return;
L_0888663C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08886658;
      }
      goto L_08886650;
    }
L_08886650:
    ctx.gpr[31] = (0x08886658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem) && ctx.pc == 0x08886658u) goto L_08886658;
    return;
L_08886658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08886674u);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 391u, 0x0880DA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08886674u) goto L_08886674;
    return;
L_08886674:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088866B8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088866B8u) goto L_088866B8;
    return;
L_088866B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8156), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088866D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088866F4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088866F4u) goto L_088866F4;
    return;
L_088866F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8158), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888672Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888672Cu) goto L_0888672C;
    return;
L_0888672C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888673C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886764u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886764u) goto L_08886764;
    return;
L_08886764:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[28] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8159), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888678C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8168)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8168), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088867A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088867C0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088867C0u) goto L_088867C0;
    return;
L_088867C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x088867CCu);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 307u, 0x08991514u>(ctx, &aot_mem) && ctx.pc == 0x088867CCu) goto L_088867CC;
    return;
L_088867CC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088867E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886808u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886808u) goto L_08886808;
    return;
L_08886808:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8172)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8176)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0888682C;
      }
      goto L_08886824;
    }
L_08886824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888682C;
      }
      goto L_0888682C;
    }
L_0888682C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8172), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08886844;
      }
      goto L_0888683C;
    }
L_0888683C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08886844;
      }
      goto L_08886844;
    }
L_08886844:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8180)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8180), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8184)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8184), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8188)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8188), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888689C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8192)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8192), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088868B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088868D0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088868D0u) goto L_088868D0;
    return;
L_088868D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8196)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088868EC;
      }
      goto L_088868E4;
    }
L_088868E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088868EC;
      }
      goto L_088868EC;
    }
L_088868EC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8196), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886924u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886924u) goto L_08886924;
    return;
L_08886924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8200)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886940;
      }
      goto L_08886938;
    }
L_08886938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886940;
      }
      goto L_08886940;
    }
L_08886940:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8200), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886978u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886978u) goto L_08886978;
    return;
L_08886978:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8204)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886994;
      }
      goto L_0888698C;
    }
L_0888698C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886994;
      }
      goto L_08886994;
    }
L_08886994:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8204), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088869AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088869CCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088869CCu) goto L_088869CC;
    return;
L_088869CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8208)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088869E8;
      }
      goto L_088869E0;
    }
L_088869E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088869E8;
      }
      goto L_088869E8;
    }
L_088869E8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8208), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886A20u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886A20u) goto L_08886A20;
    return;
L_08886A20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8212)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886A3C;
      }
      goto L_08886A34;
    }
L_08886A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886A3C;
      }
      goto L_08886A3C;
    }
L_08886A3C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8212), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886A54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886A74u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886A74u) goto L_08886A74;
    return;
L_08886A74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8216)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886A90;
      }
      goto L_08886A88;
    }
L_08886A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886A90;
      }
      goto L_08886A90;
    }
L_08886A90:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8216), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886AA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886AC8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886AC8u) goto L_08886AC8;
    return;
L_08886AC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8220)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886AE4;
      }
      goto L_08886ADC;
    }
L_08886ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886AE4;
      }
      goto L_08886AE4;
    }
L_08886AE4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8220), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886AFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886B1Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886B1Cu) goto L_08886B1C;
    return;
L_08886B1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8224)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886B38;
      }
      goto L_08886B30;
    }
L_08886B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886B38;
      }
      goto L_08886B38;
    }
L_08886B38:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8224), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886B50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886B70u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886B70u) goto L_08886B70;
    return;
L_08886B70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8228)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886B8C;
      }
      goto L_08886B84;
    }
L_08886B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886B8C;
      }
      goto L_08886B8C;
    }
L_08886B8C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8228), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886BA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886BC4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886BC4u) goto L_08886BC4;
    return;
L_08886BC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8232)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886BE0;
      }
      goto L_08886BD8;
    }
L_08886BD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886BE0;
      }
      goto L_08886BE0;
    }
L_08886BE0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8232), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886C18u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886C18u) goto L_08886C18;
    return;
L_08886C18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8236)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886C34;
      }
      goto L_08886C2C;
    }
L_08886C2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886C34;
      }
      goto L_08886C34;
    }
L_08886C34:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8236), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886C4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886C6Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886C6Cu) goto L_08886C6C;
    return;
L_08886C6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8240)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886C88;
      }
      goto L_08886C80;
    }
L_08886C80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886C88;
      }
      goto L_08886C88;
    }
L_08886C88:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8240), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886CA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886CC0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886CC0u) goto L_08886CC0;
    return;
L_08886CC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8244)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886CDC;
      }
      goto L_08886CD4;
    }
L_08886CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886CDC;
      }
      goto L_08886CDC;
    }
L_08886CDC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8244), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886D14u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886D14u) goto L_08886D14;
    return;
L_08886D14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8248)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886D30;
      }
      goto L_08886D28;
    }
L_08886D28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886D30;
      }
      goto L_08886D30;
    }
L_08886D30:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8248), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886D48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886D70u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886D70u) goto L_08886D70;
    return;
L_08886D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08886D7Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 281u, 0x0899136Cu>(ctx, &aot_mem) && ctx.pc == 0x08886D7Cu) goto L_08886D7C;
    return;
L_08886D7C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886D94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886DBCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886DBCu) goto L_08886DBC;
    return;
L_08886DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08886DC8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 276u, 0x08991328u>(ctx, &aot_mem) && ctx.pc == 0x08886DC8u) goto L_08886DC8;
    return;
L_08886DC8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886E08u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886E08u) goto L_08886E08;
    return;
L_08886E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08886E14u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 251u, 0x089911DCu>(ctx, &aot_mem) && ctx.pc == 0x08886E14u) goto L_08886E14;
    return;
L_08886E14:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886E2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886E54u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886E54u) goto L_08886E54;
    return;
L_08886E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08886E60u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 246u, 0x08991198u>(ctx, &aot_mem) && ctx.pc == 0x08886E60u) goto L_08886E60;
    return;
L_08886E60:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886E78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886EA0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886EA0u) goto L_08886EA0;
    return;
L_08886EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08886EACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 241u, 0x08991154u>(ctx, &aot_mem) && ctx.pc == 0x08886EACu) goto L_08886EAC;
    return;
L_08886EAC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886EC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886EECu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886EECu) goto L_08886EEC;
    return;
L_08886EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08886EF8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 236u, 0x08991110u>(ctx, &aot_mem) && ctx.pc == 0x08886EF8u) goto L_08886EF8;
    return;
L_08886EF8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886F10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886F38u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886F38u) goto L_08886F38;
    return;
L_08886F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08886F44u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 234u, 0x089910E8u>(ctx, &aot_mem) && ctx.pc == 0x08886F44u) goto L_08886F44;
    return;
L_08886F44:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886F5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886F7Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886F7Cu) goto L_08886F7C;
    return;
L_08886F7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8252)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F98;
      }
      goto L_08886F90;
    }
L_08886F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886F98;
      }
      goto L_08886F98;
    }
L_08886F98:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8252), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886FB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886FD0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08886FD0u) goto L_08886FD0;
    return;
L_08886FD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8256)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886FEC;
      }
      goto L_08886FE4;
    }
L_08886FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08886FEC;
      }
      goto L_08886FEC;
    }
L_08886FEC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8256), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887004:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887024u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08887024u) goto L_08887024;
    return;
L_08887024:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8260)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0888705C;
    }
    goto L_0888705C;
L_0888705C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887094u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08887094u) goto L_08887094;
    return;
L_08887094:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8264)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088870CC;
    }
    goto L_088870CC;
L_088870CC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8264), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088870E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888710Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888710Cu) goto L_0888710C;
    return;
L_0888710C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08887118u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 261u, 0x08991264u>(ctx, &aot_mem) && ctx.pc == 0x08887118u) goto L_08887118;
    return;
L_08887118:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887158u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08887158u) goto L_08887158;
    return;
L_08887158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08887164u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 256u, 0x08991220u>(ctx, &aot_mem) && ctx.pc == 0x08887164u) goto L_08887164;
    return;
L_08887164:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888717C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888719Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888719Cu) goto L_0888719C;
    return;
L_0888719C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8268)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088871D4;
    }
    goto L_088871D4;
L_088871D4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8268), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088871EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887214u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08887214u) goto L_08887214;
    return;
L_08887214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x08887220u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 271u, 0x089912E8u>(ctx, &aot_mem) && ctx.pc == 0x08887220u) goto L_08887220;
    return;
L_08887220:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887238:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887260u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08887260u) goto L_08887260;
    return;
L_08887260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[31] = (0x0888726Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 266u, 0x089912A8u>(ctx, &aot_mem) && ctx.pc == 0x0888726Cu) goto L_0888726C;
    return;
L_0888726C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088872A4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088872A4u) goto L_088872A4;
    return;
L_088872A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8272)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088872C0;
      }
      goto L_088872B8;
    }
L_088872B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088872C0;
      }
      goto L_088872C0;
    }
L_088872C0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8272), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088872D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088872F8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088872F8u) goto L_088872F8;
    return;
L_088872F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8276)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887314;
      }
      goto L_0888730C;
    }
L_0888730C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08887314;
      }
      goto L_08887314;
    }
L_08887314:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8276), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888732C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888734Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888734Cu) goto L_0888734C;
    return;
L_0888734C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8280)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887368;
      }
      goto L_08887360;
    }
L_08887360:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08887368;
      }
      goto L_08887368;
    }
L_08887368:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8280), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887380:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088873A0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088873A0u) goto L_088873A0;
    return;
L_088873A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (2240u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23472));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088873D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088873FCu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088873FCu) goto L_088873FC;
    return;
L_088873FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08887424;
      }
      goto L_0888740C;
    }
L_0888740C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088874BC;
      }
      goto L_08887414;
    }
L_08887414:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0888743C;
      }
      goto L_0888741C;
    }
L_0888741C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0888745C;
      }
      goto L_08887424;
    }
L_08887424:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888747C;
      }
      goto L_0888742C;
    }
L_0888742C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088874A0;
      }
      goto L_08887434;
    }
L_08887434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088874BC;
      }
      goto L_0888743C;
    }
L_0888743C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887450;
      }
      goto L_08887444;
    }
L_08887444:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8284), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08887454;
      }
      goto L_08887450;
    }
L_08887450:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8284), 0u);
    goto L_08887454;
L_08887454:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088874BC;
      }
      goto L_0888745C;
    }
L_0888745C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887470;
      }
      goto L_08887464;
    }
L_08887464:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8288), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08887474;
      }
      goto L_08887470;
    }
L_08887470:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8288), 0u);
    goto L_08887474;
L_08887474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088874BC;
      }
      goto L_0888747C;
    }
L_0888747C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887494;
      }
      goto L_08887488;
    }
L_08887488:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8292), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08887498;
      }
      goto L_08887494;
    }
L_08887494:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8292), 0u);
    goto L_08887498;
L_08887498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088874BC;
      }
      goto L_088874A0;
    }
L_088874A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088874B4;
      }
      goto L_088874AC;
    }
L_088874AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8084)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8080), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088874B4;
L_088874B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088874BC;
      }
      goto L_088874BC;
    }
L_088874BC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088874D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088874F4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088874F4u) goto L_088874F4;
    return;
L_088874F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8296)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8296), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887538u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x08887538u) goto L_08887538;
    return;
L_08887538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8300)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8300), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888755C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888757Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888757Cu) goto L_0888757C;
    return;
L_0888757C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8304)));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887598;
      }
      goto L_08887590;
    }
L_08887590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08887598;
      }
      goto L_08887598;
    }
L_08887598:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8304), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088875B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088875D0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x088875D0u) goto L_088875D0;
    return;
L_088875D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8308)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8308), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088875F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888761Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem) && ctx.pc == 0x0888761Cu) goto L_0888761C;
    return;
L_0888761C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8312), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8313), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8314), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8315), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2235u << 16u);
      if (branch_taken) {
          goto L_0888767C;
      }
      goto L_08887664;
    }
L_08887664:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27612));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0888767C;
      }
      goto L_08887674;
    }
L_08887674:
    ctx.gpr[31] = (0x0888767Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x0888767Cu) goto L_0888767C;
    return;
L_0888767C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887688:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21416));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_088876A0;
L_088876A0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088876A0;
      }
      goto L_088876B4;
    }
L_088876B4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088876BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088876FC;
      }
      goto L_088876CC;
    }
L_088876CC:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21416));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088876E8;
      }
      goto L_088876DC;
    }
L_088876DC:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27612));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_088876E8;
L_088876E8:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088876FC;
      }
      goto L_088876F4;
    }
L_088876F4:
    ctx.gpr[31] = (0x088876FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x088876FCu) goto L_088876FC;
    return;
L_088876FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08887770;
      }
      goto L_08887740;
    }
L_08887740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08887758u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08887758u) goto L_08887758;
    return;
L_08887758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887778;
      }
      goto L_08887770;
    }
L_08887770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088877D8;
      }
      goto L_08887778;
    }
L_08887778:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08887780;
L_08887780:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0888778Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08887A68;
L_0888778C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088877D0;
      }
      goto L_08887794;
    }
L_08887794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088877B8;
      }
      goto L_088877A0;
    }
L_088877A0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08887780;
      }
      goto L_088877B0;
    }
L_088877B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088877D8;
      }
      goto L_088877B8;
    }
L_088877B8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088877C8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08887A0C;
L_088877C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088877D8;
      }
      goto L_088877D0;
    }
L_088877D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088877D8;
      }
      goto L_088877D8;
    }
L_088877D8:
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
L_088877F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08887820;
      }
      goto L_08887818;
    }
L_08887818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0888785C;
      }
      goto L_08887820;
    }
L_08887820:
    ctx.gpr[18] = (0u | 0u);
    goto L_08887824;
L_08887824:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08887830u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08887A68;
L_08887830:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08887850;
      }
      goto L_08887838;
    }
L_08887838:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08887824;
      }
      goto L_08887848;
    }
L_08887848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08887858;
      }
      goto L_08887850;
    }
L_08887850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0888785C;
      }
      goto L_08887858;
    }
L_08887858:
    ctx.gpr[2] = (0u | 0u);
    goto L_0888785C;
L_0888785C:
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
L_08887874:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088878EC;
      }
      goto L_088878A4;
    }
L_088878A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088878C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088878C0u) goto L_088878C0;
    return;
L_088878C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088878DCu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088878DCu) goto L_088878DC;
    return;
L_088878DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088878F4;
      }
      goto L_088878E4;
    }
L_088878E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08887904;
      }
      goto L_088878EC;
    }
L_088878EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08887904;
      }
      goto L_088878F4;
    }
L_088878F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08887904u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08887A0C;
L_08887904:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887918:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    goto L_08887930;
L_08887930:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0888793Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08887A68;
L_0888793C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088879E0;
      }
      goto L_08887944;
    }
L_08887944:
    ctx.gpr[31] = (0x0888794Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08887A68;
L_0888794C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088879D0;
      }
      goto L_08887968;
    }
L_08887968:
    ctx.gpr[31] = (0x08887970u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08887A68;
L_08887970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08887988u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08887988u) goto L_08887988;
    return;
L_08887988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088879D0;
      }
      goto L_08887998;
    }
L_08887998:
    ctx.gpr[31] = (0x088879A0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08887A68;
L_088879A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(216));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088879B8u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088879B8u) goto L_088879B8;
    return;
L_088879B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088879E0;
      }
      goto L_088879D0;
    }
L_088879D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088879E0u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08887A0C;
L_088879E0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08887930;
      }
      goto L_088879F0;
    }
L_088879F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887A04:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887A0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 2u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08887A38;
      }
      goto L_08887A30;
    }
L_08887A30:
    ctx.gpr[31] = (0x08887A38u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem) && ctx.pc == 0x08887A38u) goto L_08887A38;
    return;
L_08887A38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08887A54;
      }
      goto L_08887A44;
    }
L_08887A44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887A54;
      }
      goto L_08887A4C;
    }
L_08887A4C:
    ctx.gpr[31] = (0x08887A54u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem) && ctx.pc == 0x08887A54u) goto L_08887A54;
    return;
L_08887A54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887A68:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887A7C:
    ctx.gpr[5] = (2234u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21472));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887A90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887AD0;
      }
      goto L_08887AA0;
    }
L_08887AA0:
    ctx.gpr[6] = (2234u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(21472));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08887ABC;
      }
      goto L_08887AB0;
    }
L_08887AB0:
    ctx.gpr[6] = (2235u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-27612));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08887ABC;
L_08887ABC:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887AD0;
      }
      goto L_08887AC8;
    }
L_08887AC8:
    ctx.gpr[31] = (0x08887AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08887AD0u) goto L_08887AD0;
    return;
L_08887AD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887ADC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887AE4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887AEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887AF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887AFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887B04:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887B28;
      }
      goto L_08887B10;
    }
L_08887B10:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08887B10;
      }
      goto L_08887B28;
    }
L_08887B28:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887B30:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08887B54;
      }
      goto L_08887B44;
    }
L_08887B44:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08887B44;
      }
      goto L_08887B54;
    }
L_08887B54:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887B74;
      }
      goto L_08887B5C;
    }
L_08887B5C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08887B5C;
      }
      goto L_08887B74;
    }
L_08887B74:
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887B80:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08887BA4;
      }
      goto L_08887B8C;
    }
L_08887B8C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08887B8C;
      }
      goto L_08887BA4;
    }
L_08887BA4:
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887BB0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08887C14;
      }
      goto L_08887BC0;
    }
L_08887BC0:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < 97 ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08887BF8;
      }
      goto L_08887BD0;
    }
L_08887BD0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887BF8;
      }
      goto L_08887BDC;
    }
L_08887BDC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08887C0C;
      }
      goto L_08887BF8;
    }
L_08887BF8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08887C0C;
L_08887C0C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08887BC0;
      }
      goto L_08887C14;
    }
L_08887C14:
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887C20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8320));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887C48u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17104));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem) && ctx.pc == 0x08887C48u) goto L_08887C48;
    return;
L_08887C48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887C54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[7] = (2223u << 16u);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(8320));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887C74u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17092));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08887C74u) goto L_08887C74;
    return;
L_08887C74:
    ctx.gpr[31] = (0x08887C7Cu);
    ctx.gpr[4] = (ctx.gpr[28] + static_cast<std::uint32_t>(-25976));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem) && ctx.pc == 0x08887C7Cu) goto L_08887C7C;
    return;
L_08887C7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887C88:
    ctx.gpr[4] = (2236u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32304));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08887CD0;
      }
      goto L_08887CB0;
    }
L_08887CB0:
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17036u << 16u);
      if (branch_taken) {
          goto L_08887CDC;
      }
      goto L_08887CC8;
    }
L_08887CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08887CF4;
      }
      goto L_08887CD0;
    }
L_08887CD0:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08887CF4;
      }
      goto L_08887CDC;
    }
L_08887CDC:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[15] - ctx.fpr[0];
    goto L_08887CF4;
L_08887CF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887CFC:
    ctx.gpr[7] = (0u | 113u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1524), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1528), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1532), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1399), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1400), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1536), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1540), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08887D4C;
L_08887D4C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08887D4C;
      }
      goto L_08887D60;
    }
L_08887D60:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1456), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1492), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1488), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1504), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1552), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1508), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1512), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1516), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1520), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1544), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1548), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887DC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08887E40;
      }
      goto L_08887DE0;
    }
L_08887DE0:
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(1524));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08887E30;
      }
      goto L_08887DEC;
    }
L_08887DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1524)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1528)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08887E0C;
      }
      goto L_08887E00;
    }
L_08887E00:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    goto L_08887E04;
L_08887E04:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08887E04;
      }
      goto L_08887E0C;
    }
L_08887E0C:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08887E30;
    }
    goto L_08887E14;
L_08887E14:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08887E30;
    }
    goto L_08887E1C;
L_08887E1C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08887E30;
    }
    goto L_08887E24;
L_08887E24:
    ctx.gpr[31] = (0x08887E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem) && ctx.pc == 0x08887E2Cu) goto L_08887E2C;
    return;
L_08887E2C:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08887E30;
L_08887E30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887E40;
      }
      goto L_08887E38;
    }
L_08887E38:
    ctx.gpr[31] = (0x08887E40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem) && ctx.pc == 0x08887E40u) goto L_08887E40;
    return;
L_08887E40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887E54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08887E88;
      }
      goto L_08887E6C;
    }
L_08887E6C:
    ctx.gpr[31] = (0x08887E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x08887E74u) goto L_08887E74;
    return;
L_08887E74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887E84;
      }
      goto L_08887E7C;
    }
L_08887E7C:
    ctx.gpr[31] = (0x08887E84u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x08887E84u) goto L_08887E84;
    return;
L_08887E84:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08887E88;
L_08887E88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887E98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887FF4;
      }
      goto L_08887EBC;
    }
L_08887EBC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08887EF4;
      }
      goto L_08887EC8;
    }
L_08887EC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08887FF4;
      }
      goto L_08887ED0;
    }
L_08887ED0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08887F10;
      }
      goto L_08887EDC;
    }
L_08887EDC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1399), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08887FF4;
      }
      goto L_08887EF4;
    }
L_08887EF4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08887F30;
      }
      goto L_08887EFC;
    }
L_08887EFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887FF4;
      }
      goto L_08887F04;
    }
L_08887F04:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1399), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08887FF4;
      }
      goto L_08887F10;
    }
L_08887F10:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1399), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08887F28;
      }
      goto L_08887F18;
    }
L_08887F18:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08887F28;
L_08887F28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08887FF4;
      }
      goto L_08887F30;
    }
L_08887F30:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08887F3Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1399), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x08887F3Cu) goto L_08887F3C;
    return;
L_08887F3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (0u | 113u);
      if (branch_taken) {
          goto L_08887F80;
      }
      goto L_08887F44;
    }
L_08887F44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08887F80;
      }
      goto L_08887F50;
    }
L_08887F50:
    ctx.gpr[31] = (0x08887F58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 531u, 0x08889CF0u>(ctx, &aot_mem) && ctx.pc == 0x08887F58u) goto L_08887F58;
    return;
L_08887F58:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1398)));
    ctx.gpr[5] = (2237u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23248));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_08887F80;
L_08887F80:
    ctx.gpr[31] = (0x08887F88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x08887F88u) goto L_08887F88;
    return;
L_08887F88:
    ctx.gpr[31] = (0x08887F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem) && ctx.pc == 0x08887F90u) goto L_08887F90;
    return;
L_08887F90:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1399)));
        goto L_08887FC0;
    }
    goto L_08887F98;
L_08887F98:
    ctx.gpr[31] = (0x08887FA0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem) && ctx.pc == 0x08887FA0u) goto L_08887FA0;
    return;
L_08887FA0:
    ctx.gpr[31] = (0x08887FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 751u, 0x08A07260u>(ctx, &aot_mem) && ctx.pc == 0x08887FA8u) goto L_08887FA8;
    return;
L_08887FA8:
    ctx.gpr[31] = (0x08887FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 206u, 0x08934DB0u>(ctx, &aot_mem) && ctx.pc == 0x08887FB0u) goto L_08887FB0;
    return;
L_08887FB0:
    ctx.gpr[31] = (0x08887FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 57u, 0x0893441Cu>(ctx, &aot_mem) && ctx.pc == 0x08887FB8u) goto L_08887FB8;
    return;
L_08887FB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08887F88;
      }
      goto L_08887FC0;
    }
L_08887FC0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1410), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1400), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1402), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1403), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1404), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1405), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 113u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1397), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-25948), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08887FF4;
      }
      goto L_08887FF4;
    }
L_08887FF4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08888000u; return;
}

void recomp_unit_0032(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0032_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_32(Runtime &runtime) {
    runtime.register_generated_unit(32u, 0x08884000u, 16384u, &recomp_unit_0032, &recomp_unit_0032_entry);
    runtime.register_function(0x08884000u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884008u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884014u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884028u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884054u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884074u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884094u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884104u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884110u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884114u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884124u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888413Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884144u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888415Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888417Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888419Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884200u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884208u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888420Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884214u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884220u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888422Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884234u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884240u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884258u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884284u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884290u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884298u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884318u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884324u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888433Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884340u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888435Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884378u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884384u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888438Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884394u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888439Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884408u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884428u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884430u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884444u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884478u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884484u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884490u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884498u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088844A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088844B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088844C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088844E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884504u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888450Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884528u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888452Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884534u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884548u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884574u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888457Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888459Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884608u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884614u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888462Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884630u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884650u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884680u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888468Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884704u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884724u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888472Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884730u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884738u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884744u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888474Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884754u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888475Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884774u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884800u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884818u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884820u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884828u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884838u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884840u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884854u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888485Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884860u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884868u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884870u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888487Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884884u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888489Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884924u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888494Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884958u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884960u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884968u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884988u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884990u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884994u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888499Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884ADCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CD8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884ED0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F08u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F78u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884FD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884FDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884FF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885000u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885004u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888501Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885040u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888506Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885078u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888508Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885098u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088850A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088850BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088850CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088850E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088850ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088850F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885100u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888510Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885124u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888513Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885148u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885154u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885164u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885170u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885184u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885190u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088851A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088851BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088851D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088851E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088851ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088851F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888520Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885214u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885220u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888524Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885260u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888526Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885284u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885304u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885328u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885330u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888535Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885364u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888536Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885370u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885378u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885388u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885394u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088853ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088853BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088853C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088853D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088853E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088853ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088853F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088853F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885400u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885404u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888540Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888541Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885424u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888543Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888544Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885458u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885464u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885470u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888547Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885498u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885504u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888550Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885514u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885528u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885548u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885554u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885564u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885570u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885578u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885580u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885590u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888559Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088855A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088855B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088855B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088855C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088855D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088855E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088855E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088855F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885604u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885610u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885620u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888562Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885638u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885648u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885654u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885660u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885674u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885680u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885690u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888569Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885700u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888570Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885720u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888572Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888573Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888574Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885758u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885760u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885764u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888576Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885774u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885780u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888578Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885798u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885800u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885818u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885830u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885838u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885848u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885858u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888586Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885878u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885888u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888589Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885908u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885914u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885920u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885930u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885940u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888594Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885978u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885984u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885994u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088859A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088859B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088859C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088859D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088859E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088859ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088859F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088859FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885ACCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AD8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B50u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B78u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885BA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885BB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885BBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885BC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885BD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885BE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885BE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885BF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C00u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C08u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C78u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885DA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885DB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885DB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885DC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885DE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885EACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885ECCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885EE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885EE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F00u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885FA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885FBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885FDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885FF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888600Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888602Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886050u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886064u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886088u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886094u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888609Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886100u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888610Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886128u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886138u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886148u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886158u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886168u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886188u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886190u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888622Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886238u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886240u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886284u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088862C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088862E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088862ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886300u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886320u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886328u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888633Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888636Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886378u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886380u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088863A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088863C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088863D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088863F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888640Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886424u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886430u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886440u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886460u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886468u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888647Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888649Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088864B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088864D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088864E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088864F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886518u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886530u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886548u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886568u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888658Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088865ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088865C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088865E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088865F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886608u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888663Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886650u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886658u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886674u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886698u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088866B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088866D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088866F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886710u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888672Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888673Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886764u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888678Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886808u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886824u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888682Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888683Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886844u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886860u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886874u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886888u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888689Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886904u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886924u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886938u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886940u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886958u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886978u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888698Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886994u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088869ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088869CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088869E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088869E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A00u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886AA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886AC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886ADCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886AE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886AFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B50u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BD8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E08u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E78u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887004u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887024u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888705Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887074u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887094u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888710Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887118u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887130u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887158u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887164u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888717Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888719Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887214u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887220u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887238u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887260u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888726Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887284u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888730Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887314u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888732Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888734Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887360u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887368u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887380u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888740Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887414u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888741Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887424u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888742Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887434u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888743Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887444u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887450u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887454u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888745Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887464u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887470u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887474u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888747Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887488u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887494u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887498u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887518u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887538u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888755Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888757Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887590u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887598u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888761Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887654u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887664u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887674u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888767Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887688u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887708u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887740u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887758u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887770u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887778u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887780u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888778Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887794u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887818u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887820u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887824u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887830u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887838u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887848u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887850u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887858u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888785Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887874u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887904u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887918u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887930u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888793Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887944u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888794Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887968u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887970u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887988u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887998u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088879A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088879B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088879D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088879E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088879F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887ABCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887ADCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887D4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887D60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E00u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887ED0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F50u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FF4u, &recomp_unit_0032, "recomp_unit_0032");
}
} // namespace psprecomp
